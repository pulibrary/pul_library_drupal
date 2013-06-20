<?php
/**
 * @file
 * microforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function microforms_ctools_plugin_api() {
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
function microforms_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function microforms_node_info() {
  $items = array(
    'microforms_newspapers' => array(
      'name' => t('Microforms Newspapers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Newspaper'),
      'help' => '',
    ),
  );
  return $items;
}
