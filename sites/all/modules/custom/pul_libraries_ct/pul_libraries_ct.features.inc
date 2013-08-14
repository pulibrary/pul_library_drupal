<?php
/**
 * @file
 * pul_libraries_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_libraries_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pul_libraries_ct_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pul_libraries_ct_node_info() {
  $items = array(
    'libraries' => array(
      'name' => t('Libraries'),
      'base' => 'node_content',
      'description' => t('University Libraries'),
      'has_title' => '1',
      'title_label' => t('Library Name'),
      'help' => '',
    ),
  );
  return $items;
}
