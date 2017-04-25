<?php
/**
 * @file
 * staff_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_announcements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function staff_announcements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function staff_announcements_node_info() {
  $items = array(
    'staff_announcement' => array(
      'name' => t('Staff Announcement'),
      'base' => 'node_content',
      'description' => t('Protected Content for PUL Library Staff'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
