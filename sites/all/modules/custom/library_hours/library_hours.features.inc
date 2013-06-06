<?php
/**
 * @file
 * library_hours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_hours_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
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
function library_hours_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_hours_node_info() {
  $items = array(
    'library_hours' => array(
      'name' => t('Library Hours'),
      'base' => 'node_content',
      'description' => t('Individual base hours for a library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
