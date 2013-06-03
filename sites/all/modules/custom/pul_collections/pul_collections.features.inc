<?php
/**
 * @file
 * pul_collections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_collections_ctools_plugin_api() {
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
function pul_collections_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pul_collections_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => t('University Library Collection'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
