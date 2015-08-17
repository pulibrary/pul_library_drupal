<?php
/**
 * @file
 * pul_library_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_library_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pul_library_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pul_library_events_node_info() {
  $items = array(
    'pul_event' => array(
      'name' => t('Library Event'),
      'base' => 'node_content',
      'description' => t('Events at the Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
