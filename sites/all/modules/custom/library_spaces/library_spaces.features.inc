<?php
/**
 * @file
 * library_spaces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_spaces_ctools_plugin_api($module = NULL, $api = NULL) {
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
function library_spaces_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_spaces_node_info() {
  $items = array(
    'library_meeting_space_locations' => array(
      'name' => t('Library Meeting Space Locations'),
      'base' => 'node_content',
      'description' => t('Rooms and spaces for meetings, exhibitions and more.'),
      'has_title' => '1',
      'title_label' => t('Location Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
