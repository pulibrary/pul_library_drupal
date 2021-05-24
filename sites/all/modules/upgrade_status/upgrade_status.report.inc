<?php

/**
 * @file
 * Code required only when rendering the available updates report.
 */

module_load_include('inc', 'update', 'update.report');

/**
 * Page callback: Generates a page about the update status of projects.
 *
 * @see upgrade_status_menu()
 */
function upgrade_status_status() {
  // US: Don't pass TRUE to check cache only.
  if ($available = upgrade_status_get_available()) {
    module_load_include('inc', 'upgrade_status', 'upgrade_status.compare');
    $data = upgrade_status_calculate_project_data($available);
    return theme('upgrade_status_report', array('data' => $data));
  }
  else {
    // US: Inlined _update_no_data().
    // @todo: File an upstream patch for that.
    $destination = drupal_get_destination();
    $data = t('No upgrade information available. <a href="@run_cron">Run cron</a> or <a href="@check_manually">check manually</a>.', array(
      '@run_cron' => url('admin/reports/status/run-cron', array('query' => $destination)),
      '@check_manually' => url('admin/reports/updates/upgrade/check', array('query' => $destination)),
    ));
    return theme('upgrade_status_report', array('data' => $data));
  }
}

/**
 * Returns HTML for the project status report.
 *
 * @param array $variables
 *   An associative array containing:
 *   - data: An array of data about each project's status.
 *
 * @ingroup themeable
 */
function theme_upgrade_status_report($variables) {
  $data = $variables['data'];

  $last = variable_get('upgrade_status_last_check', 0);
  $output = theme('upgrade_status_last_check', array('last' => $last));

  // US: Load Update module's data as a fallback in case there is no release info
  // for a project (so we can link to the project).
  $current_data = update_get_available(TRUE);

  // US: Add the core version selector form.
  $form = drupal_get_form('upgrade_status_core_version_form');
  $output .= drupal_render($form);

  if (!is_array($data)) {
    $output .= '<p>' . $data . '</p>';
    return $output;
  }

  $header = array();
  $rows = array();

  // US: We don't do anything with notifications in this module.
#  $notification_level = variable_get('update_notification_threshold', 'all');

  // Create an array of status values keyed by module or theme name, since
  // we'll need this while generating the report if we have to cross reference
  // anything (e.g. subthemes which have base themes missing an update).
  foreach ($data as $project) {
    if (empty($project['includes'])){
      $project['includes'] = array();
    }
    foreach ($project['includes'] as $key => $name) {
      $status[$key] = $project['status'];
    }
  }

  foreach ($data as $project) {
    // Skip future version replacements and this module, which would cause
    // confusion if it showed up.
    if ((isset($project['api_version']) && (strtok($project['api_version'], ".") > strtok(VERSION, "."))) ||
       ($project['name'] == 'upgrade_status')) {
      continue;
    }

    switch ($project['status']) {
      // US: Stable releases and projects moved into core are also good news.
      case UPDATE_CURRENT:
      case UPGRADE_STATUS_STABLE:
      case UPGRADE_STATUS_CORE:
      // @todo: Colour obsolete modules according to their replacement project
      // info in $data.
      case UPGRADE_STATUS_OBSOLETE:
        $class = 'ok';
        $icon = theme('image', array('path' => 'misc/watchdog-ok.png', 'width' => 18, 'height' => 18, 'alt' => t('ok'), 'title' => t('ok')));
        break;
      case UPDATE_UNKNOWN:
      case UPDATE_FETCH_PENDING:
      case UPDATE_NOT_FETCHED:
        $class = 'unknown';
        // US: Unknown means not ported; thus, use an error icon.
#        $icon = theme('image', array('path' => 'misc/watchdog-warning.png', 'width' => 18, 'height' => 18, 'alt' => t('warning'), 'title' => t('warning')));
        $icon = theme('image', array('path' => 'misc/watchdog-error.png', 'width' => 18, 'height' => 18, 'alt' => t('error'), 'title' => t('error')));
        break;
      // US: Not used/not possible here.
      case UPDATE_NOT_SECURE:
      case UPDATE_REVOKED:
      case UPDATE_NOT_SUPPORTED:
        $class = 'error';
        $icon = theme('image', array('path' => 'misc/watchdog-error.png', 'width' => 18, 'height' => 18, 'alt' => t('error'), 'title' => t('error')));
        break;
      // US: It doesn't make sense to output a whole page of warning symbols,
      // so we just colorize as a warning without the icon. This allows us to
      // warn about projects moved into core and other important info.
      case UPGRADE_STATUS_DEVELOPMENT:
        $class = 'warning';
        $icon = '';
        break;
      case UPGRADE_STATUS_OBSOLETE:
        $row .= '<span class="current">'. t('Made obsolete') .'</span>';
        break;

      case UPDATE_NOT_CHECKED:
      case UPDATE_NOT_CURRENT:
      default:
        $class = 'warning';
        $icon = theme('image', array('path' => 'misc/watchdog-warning.png', 'width' => 18, 'height' => 18, 'alt' => t('warning'), 'title' => t('warning')));
        break;
    }
    // US: Special handling for project moved into core.
    if (empty($project['in_core_complete'])) {
      $icon = theme('image', array('path' => 'misc/watchdog-warning.png', 'width' => 18, 'height' => 18, 'alt' => t('warning'), 'title' => t('warning')));
    }

    $row = '<div class="version-status">';
    $status_label = theme('upgrade_status_status_label', array('status' => $project['status'], 'project' => $project));
    $row .= !empty($status_label) ? $status_label : check_plain($project['reason']);
    $row .= '<span class="icon">' . $icon . '</span>';
    $row .= "</div>\n";

    $row .= '<div class="project">';
    if (isset($project['title'])) {
      if (isset($project['link'])) {
        $row .= l($project['title'], $project['link']);
      }
      else {
        $row .= check_plain($project['title']);
      }
    }
    // US: Couldn't find this project's data for the next version of Drupal core.
    // Let's try the current one instead.
    elseif (isset($current_data[$project['name']]) && isset($current_data[$project['name']]['title'])) {
      if (isset($current_data[$project['name']]['link'])) {
        $row .= l($current_data[$project['name']]['title'], $current_data[$project['name']]['link']);
      }
      else {
        $row .= check_plain($current_data[$project['name']]['title']);
      }
    }
    // Otherwise, just print the name.
    else {
      $row .= check_plain($project['name']);
    }
    $row .= ' ' . check_plain($project['existing_version']);
    if ($project['install_type'] == 'dev' && !empty($project['datestamp'])) {
      $row .= ' <span class="version-date">(' . format_date($project['datestamp'], 'custom', 'Y-M-d') . ')</span>';
    }
    $row .= "</div>\n";

    // US: Special handling for projects moved into core.
    if (!empty($project['in_core_note'])) {
      $row .= "<div class=\"core-notice\">\n";
      $row .= '<p>'. t('In Drupal core since @version', array('@version' => $project['in_core_since'])) .'</p>';
      $row .= '<p>'. $project['in_core_note'] .'</p>';
      $row .= '</div>';
    }

    $versions_inner = '';
    $security_class = array();
    $version_class = array();
    if (isset($project['recommended']) && (empty($project['in_core_complete']))) {
      if ($project['status'] != UPDATE_CURRENT || $project['existing_version'] !== $project['recommended']) {

        // First, figure out what to recommend.
        // If there's only 1 security update and it has the same version we're
        // recommending, give it the same CSS class as if it was recommended,
        // but don't print out a separate "Recommended" line for this project.
        if (!empty($project['security updates']) && count($project['security updates']) == 1 && $project['security updates'][0]['version'] === $project['recommended']) {
          $security_class[] = 'version-recommended';
          $security_class[] = 'version-recommended-strong';
        }
        else {
          $version_class[] = 'version-recommended';
          // Apply an extra class if we're displaying both a recommended
          // version and anything else for an extra visual hint.
          if ($project['recommended'] !== $project['latest_version']
              || !empty($project['also'])
              || ($project['install_type'] == 'dev'
                  && isset($project['dev_version'])
                  && $project['latest_version'] !== $project['dev_version']
                  && $project['recommended'] !== $project['dev_version'])
              || (isset($project['security updates'][0])
                  && $project['recommended'] !== $project['security updates'][0])
          ) {
            $version_class[] = 'version-recommended-strong';
          }
          $versions_inner .= theme('update_version', array('version' => $project['releases'][$project['recommended']], 'tag' => t('Recommended version:'), 'class' => $version_class));
        }

        // Now, print any security updates.
        if (!empty($project['security updates'])) {
          $security_class[] = 'version-security';
          foreach ($project['security updates'] as $security_update) {
            $versions_inner .= theme('update_version', array('version' => $security_update, 'tag' => t('Security update:'), 'class' => $security_class));
          }
        }
      }

      if ($project['recommended'] !== $project['latest_version']) {
        $versions_inner .= theme('update_version', array('version' => $project['releases'][$project['latest_version']], 'tag' => t('Latest version:'), 'class' => array('version-latest')));
      }
      if ($project['install_type'] == 'dev'
          && $project['status'] != UPDATE_CURRENT
          && isset($project['dev_version'])
          && $project['recommended'] !== $project['dev_version']) {
        $versions_inner .= theme('update_version', array('version' => $project['releases'][$project['dev_version']], 'tag' => t('Development version:'), 'class' => array('version-latest')));
      }
    }

    if (isset($project['also'])) {
      foreach ($project['also'] as $also) {
        $versions_inner .= theme('update_version', array('version' => $project['releases'][$also], 'tag' => t('Also available:'), 'class' => array('version-also-available')));
      }
    }

    if (!empty($versions_inner)) {
      $row .= "<div class=\"versions\">\n" . $versions_inner . "</div>\n";
    }
    $row .= "<div class=\"info\">\n";
    if (!empty($project['extra'])) {
      $row .= '<div class="extra">' . "\n";
      foreach ($project['extra'] as $key => $value) {
        $row .= '<div class="' . implode(' ', $value['class']) . '">';
        $row .= check_plain($value['label']) . ': ';
        $row .= drupal_placeholder($value['data']);
        $row .= "</div>\n";
      }
      $row .= "</div>\n";  // extra div.
    }

    if (isset($project['replaced_by'])) {
      $row .= '<div class="includes">';
      $replacements = array();
      foreach ($project['replaced_by'] as $replacement) {
        $replacements[] = t('!name @version', array('!name' => l($data[$replacement['name']]['title'], $data[$replacement['name']]['link']), '@version' => $data[$replacement['name']]['recommended']));
      }
      $replaced = implode(', ', $replacements);
      $row .= t('Replaced by: !replaced', array('!replaced' => $replaced));
      $row .= "</div>\n";
    }

    if (!empty($project['disabled'])) {
      sort($project['disabled']);
      // Make sure we start with a clean slate for each project in the report.
      $includes_items = array();
      $row .= t('Includes:');
      $includes_items[] = t('Enabled: %includes', array('%includes' => implode(', ', $project['includes'])));
      $includes_items[] = t('Disabled: %disabled', array('%disabled' => implode(', ', $project['disabled'])));
      $row .= theme('item_list', array('items' => $includes_items));
    }
    else {
      $row .= '<div class="includes">';
      sort($project['includes']);
      $row .= t('Includes: %includes', array('%includes' => implode(', ', $project['includes'])));
    }
    $row .= "</div>\n";

    if (!empty($project['base_themes'])) {
      $row .= '<div class="basethemes">';
      asort($project['base_themes']);
      $base_themes = array();
      foreach ($project['base_themes'] as $base_key => $base_theme) {
        switch ($status[$base_key]) {
          case UPDATE_NOT_SECURE:
          case UPDATE_REVOKED:
          case UPDATE_NOT_SUPPORTED:
            $base_themes[] = t('%base_theme (!base_label)', array('%base_theme' => $base_theme, '!base_label' => theme('upgrade_status_status_label', array('status' => $status[$base_key]))));
            break;

          default:
            $base_themes[] = drupal_placeholder($base_theme);
        }
      }
      $row .= t('Depends on: !basethemes', array('!basethemes' => implode(', ', $base_themes)));
      $row .= "</div>\n";
    }

    if (!empty($project['sub_themes'])) {
      $row .= '<div class="subthemes">';
      sort($project['sub_themes']);
      $row .= t('Required by: %subthemes', array('%subthemes' => implode(', ', $project['sub_themes'])));
      $row .= "</div>\n";
    }

    $row .= "</div>\n"; // info div.

    if (!isset($rows[$project['project_type']])) {
      $rows[$project['project_type']] = array();
    }
    $row_key = isset($project['title']) ? drupal_strtolower($project['title']) : drupal_strtolower($project['name']);
    $rows[$project['project_type']][$row_key] = array(
      'class' => array($class),
      'data' => array($row),
    );
  }

  $project_types = array(
    'core' => t('Drupal core'),
    'module' => t('Modules'),
    'theme' => t('Themes'),
    'module-disabled' => t('Disabled modules'),
    'theme-disabled' => t('Disabled themes'),
  );
  foreach ($project_types as $type_name => $type_label) {
    if (!empty($rows[$type_name])) {
      ksort($rows[$type_name]);
      $output .= "\n<h3>" . $type_label . "</h3>\n";
      $output .= theme('table', array('header' => $header, 'rows' => $rows[$type_name], 'attributes' => array('class' => array('update'))));
    }
  }
  drupal_add_css(drupal_get_path('module', 'update') . '/update.css');
  return $output;
}

/**
 * Returns HTML for a label to display for a project's update status.
 *
 * @param array $variables
 *   An associative array containing:
 *   - status: The integer code for a project's current update status.
 *   // US: Add project data as well so we can determine type of release.
 *   // @todo File upstream patch?
 *   - project: Project data.
 *
 * @see update_calculate_project_data()
 * @ingroup themeable
 */
function theme_upgrade_status_status_label($variables) {
  $project = $variables['project'];

  switch ($variables['status']) {
    // US: Not applicable.
#    case UPDATE_NOT_SECURE:
#      return '<span class="security-error">' . t('Security update required!') . '</span>';

    // US: Not applicable.
#    case UPDATE_REVOKED:
#      return '<span class="revoked">' . t('Revoked!') . '</span>';

    // Although unsupported releases should actually be unsupported, we treat
    // them like development releases, since many maintainers merely use this
    // additional flag to hide the release from novice Drupal users.
    case UPGRADE_STATUS_DEVELOPMENT:
    case UPDATE_NOT_SUPPORTED:
#      return '<span class="not-supported">' . t('Not supported!') . '</span>';
      // US: Additionally output the "development stage" of a project; alpha,
      // beta, and RC are all treated as in development.
      $type = $project['releases'][$project['recommended']]['version'];
      return '<span class="not-current">'. t('In development: %type', array('%type' => $type)) .'</span>';

    // US: Not applicable.
#    case UPDATE_NOT_CURRENT:
#      return '<span class="not-current">' . t('Update available') . '</span>';

    // US: Good news for us means that a stable release is available...
#    case UPDATE_CURRENT:
#      return '<span class="current">' . t('Up to date') . '</span>';
    case UPGRADE_STATUS_STABLE:
      return '<span class="current">'. t('Available') .'</span>';

    // US: ...or that a module's been moved into core.
    case UPGRADE_STATUS_CORE:
      return '<span class="current">'. t('In core') .'</span>';
  }
}
