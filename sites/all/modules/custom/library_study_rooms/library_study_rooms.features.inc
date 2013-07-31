<?php
/**
 * @file
 * library_study_rooms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_study_rooms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_study_rooms_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_study_rooms_node_info() {
  $items = array(
    'study_room' => array(
      'name' => t('Study Room'),
      'base' => 'node_content',
      'description' => t('A study room in the library. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
