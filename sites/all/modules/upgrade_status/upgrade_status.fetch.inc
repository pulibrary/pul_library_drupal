<?php

/**
 * @file
 * Code required only when fetching information about available updates.
 */

module_load_include('inc', 'update', 'update.fetch');

/**
 * Page callback: Checks for updates and displays the update status report.
 *
 * Manually checks the update status without the use of cron.
 *
 * @see upgrade_status_menu()
 */
function upgrade_status_manual_status() {
  _upgrade_status_refresh();
  $batch = array(
    'operations' => array(
      array('upgrade_status_fetch_data_batch', array()),
    ),
    'finished' => 'update_fetch_data_finished',
    'title' => t('Checking available upgrade data'),
    'progress_message' => t('Trying to check available upgrade data ...'),
    'error_message' => t('Error checking available upgrade data.'),
    'file' => drupal_get_path('module', 'upgrade_status') . '/upgrade_status.fetch.inc',
  );
  batch_set($batch);
  batch_process('admin/reports/updates/upgrade');
}

/**
 * Batch callback: Processes a step in batch for fetching available update data.
 *
 * @param $context
 *   Reference to an array used for Batch API storage.
 */
function upgrade_status_fetch_data_batch(&$context) {
  $queue = DrupalQueue::get('upgrade_status_fetch_tasks');
  if (empty($context['sandbox']['max'])) {
    $context['finished'] = 0;
    $context['sandbox']['max'] = $queue->numberOfItems();
    $context['sandbox']['progress'] = 0;
    $context['message'] = t('Checking available upgrade data ...');
    $context['results']['updated'] = 0;
    $context['results']['failures'] = 0;
    $context['results']['processed'] = 0;
  }

  // Grab another item from the fetch queue.
  for ($i = 0; $i < 5; $i++) {
    if ($item = $queue->claimItem()) {
      if (_upgrade_status_process_fetch_task($item->data)) {
        $context['results']['updated']++;
        $context['message'] = t('Checked available upgrade data for %title.', array('%title' => $item->data['info']['name']));
      }
      else {
        $context['message'] = t('Failed to check available upgrade data for %title.', array('%title' => $item->data['info']['name']));
        $context['results']['failures']++;
      }
      $context['sandbox']['progress']++;
      $context['results']['processed']++;
      $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      $queue->deleteItem($item);
    }
    else {
      // If the queue is currently empty, we're done. It's possible that
      // another thread might have added new fetch tasks while we were
      // processing this batch. In that case, the usual 'finished' math could
      // get confused, since we'd end up processing more tasks that we thought
      // we had when we started and initialized 'max' with numberOfItems(). By
      // forcing 'finished' to be exactly 1 here, we ensure that batch
      // processing is terminated.
      $context['finished'] = 1;
      return;
    }
  }
}

/**
 * Attempts to drain the queue of tasks for release history data to fetch.
 */
function _upgrade_status_fetch_data() {
  $queue = DrupalQueue::get('upgrade_status_fetch_tasks');
  $end = time() + variable_get('update_max_fetch_time', UPDATE_MAX_FETCH_TIME);
  while (time() < $end && ($item = $queue->claimItem())) {
    _upgrade_status_process_fetch_task($item->data);
    $queue->deleteItem($item);
  }
}

/**
 * Processes a task to fetch available update data for a single project.
 *
 * Once the release history XML data is downloaded, it is parsed and saved into
 * the {cache_update} table in an entry just for that project.
 *
 * @param $project
 *   Associative array of information about the project to fetch data for.
 *
 * @return
 *   TRUE if we fetched parsable XML, otherwise FALSE.
 */
function _upgrade_status_process_fetch_task($project) {
  global $base_url;
  $fail = &drupal_static(__FUNCTION__, array());
  // This can be in the middle of a long-running batch, so REQUEST_TIME won't
  // necessarily be valid.
  $now = time();
  if (empty($fail)) {
    // If we have valid data about release history XML servers that we have
    // failed to fetch from on previous attempts, load that from the cache.
    if (($cache = _update_cache_get('upgrade_status_fetch_failures')) && ($cache->expire > $now)) {
      $fail = $cache->data;
    }
  }

  $max_fetch_attempts = variable_get('update_max_fetch_attempts', UPDATE_MAX_FETCH_ATTEMPTS);

  $success = FALSE;
  $available = array();
  // US: No site key to avoid hi-jacking module usage statistics.
#  $site_key = drupal_hmac_base64($base_url, drupal_get_private_key());
  // US: However, we want to check against a future core version.
  $version = variable_get('upgrade_status_core_version', UPGRADE_STATUS_CORE_VERSION);
  $url = _upgrade_status_build_fetch_url($project, $version);
  $fetch_url_base = _update_get_fetch_url_base($project);
  $project_name = $project['name'];

  if (empty($fail[$fetch_url_base]) || $fail[$fetch_url_base] < $max_fetch_attempts) {
    $xml = drupal_http_request($url);
    if (!isset($xml->error) && isset($xml->data)) {
      $data = $xml->data;
    }
  }

  if (!empty($data)) {
    $available = update_parse_xml($data);
    // @todo: Purge release data we don't need (http://drupal.org/node/238950).
    // Only if we fetched and parsed something sane (including empty lists from
    // projects with no upgrades) do we return success.
    $success = TRUE;
  }
  else {
    $available['project_status'] = 'not-fetched';
    if (empty($fail[$fetch_url_base])) {
      $fail[$fetch_url_base] = 1;
    }
    else {
      $fail[$fetch_url_base]++;
    }
  }

  $frequency = variable_get('update_check_frequency', 1);
  $cid = 'upgrade_status_available_releases::' . $project_name;
  _update_cache_set($cid, $available, $now + (60 * 60 * 24 * $frequency));

  // Stash the $fail data back in the DB for the next 5 minutes.
  _update_cache_set('upgrade_status_fetch_failures', $fail, $now + (60 * 5));

  // Whether this worked or not, we did just (try to) check for updates.
  variable_set('upgrade_status_last_check', $now);

  // Now that we processed the fetch task for this project, clear out the
  // record in {cache_update} for this task so we're willing to fetch again.
  _update_cache_clear('upgrade_status_fetch_task::' . $project_name);

  return $success;
}

/**
 * Clears out all the cached available update data and initiates re-fetching.
 */
function _upgrade_status_refresh() {
  module_load_include('inc', 'upgrade_status', 'upgrade_status.compare');

  // Since we're fetching new available update data, we want to clear
  // our cache of both the projects we care about, and the current update
  // status of the site. We do *not* want to clear the cache of available
  // releases just yet, since that data (even if it's stale) can be useful
  // during update_get_projects(); for example, to modules that implement
  // hook_system_info_alter() such as cvs_deploy.
  // @todo: File upstream issue: cvs_deploy is irrelevant. :P
  _update_cache_clear('upgrade_status_project_projects');
  _update_cache_clear('upgrade_status_project_data');

  $projects = update_get_projects();

  // US: Special handling for obsolete projects.
  // Add replacement modules to the list of projects to get XML data for.
  foreach ($projects as $key => $project) {
    if (upgrade_status_obsolete($projects, $key)) {
      // Add the project that makes this one obsolete to the list of those to
      // grab information about.
      foreach ($projects[$key]['replaced_by'] as $replacement) {
        $projects[$replacement['name']] = array(
          'name' => $replacement['name'],
        );
      }
    }
  }

  // Now that we have the list of projects, we should also clear our cache of
  // available release data, since even if we fail to fetch new data, we need
  // to clear out the stale data at this point.
  _update_cache_clear('upgrade_status_available_releases::', TRUE);

  foreach ($projects as $key => $project) {
    upgrade_status_create_fetch_task($project);
  }
}

/**
 * Adds a task to the queue for fetching release history data for a project.
 *
 * We only create a new fetch task if there's no task already in the queue for
 * this particular project (based on 'upgrade_status_fetch_task::' entries in the
 * {cache_update} table).
 *
 * @param $project
 *   Associative array of information about a project as created by
 *   update_get_projects(), including keys such as 'name' (short name), and the
 *   'info' array with data from a .info file for the project.
 *
 * @see update_get_projects()
 * @see update_get_available()
 * @see upgrade_status_refresh()
 * @see upgrade_status_fetch_data()
 * @see _upgrade_status_process_fetch_task()
 */
function _upgrade_status_create_fetch_task($project) {
  $fetch_tasks = &drupal_static(__FUNCTION__, array());
  if (empty($fetch_tasks)) {
    $fetch_tasks = _update_get_cache_multiple('upgrade_status_fetch_task');
  }
  $cid = 'upgrade_status_fetch_task::' . $project['name'];
  if (empty($fetch_tasks[$cid])) {
    $queue = DrupalQueue::get('upgrade_status_fetch_tasks');
    $queue->createItem($project);
    // Due to race conditions, it is possible that another process already
    // inserted a row into the {cache_update} table and the following query will
    // throw an exception.
    // @todo: Remove the need for the manual check by relying on a queue that
    // enforces unique items.
    try {
      db_insert('cache_update')
          ->fields(array(
            'cid' => $cid,
            'created' => REQUEST_TIME,
          ))
          ->execute();
    }
    catch (Exception $e) {
      // The exception can be ignored safely.
    }
    $fetch_tasks[$cid] = REQUEST_TIME;
  }
}

/**
 * Generates the URL to fetch information about project updates.
 *
 * This figures out the right URL to use, based on the project's .info file and
 * the global defaults. Appends optional query arguments when the site is
 * configured to report usage stats.
 *
 * @param $project
 *   The array of project information from update_get_projects().
 * // US: Replace $site_key with $version.
 * @param $version
 *   The target version of Drupal core you wish to query.
 *
 * @return
 *   The URL for fetching information about updates to the specified project.
 *
 * @see update_fetch_data()
 * @see _update_process_fetch_task()
 * @see update_get_projects()
 */
function _upgrade_status_build_fetch_url($project, $version) {
  $name = $project['name'];
  $url = _update_get_fetch_url_base($project);
  $url .= '/' . $name . '/' . $version;

  // US: Remove all handling around $site_key; we don't want to pollute project
  // usage statistics, so we don't use any of it.

  return $url;
}
