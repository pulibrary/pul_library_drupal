<?php
/**
 * @file
 * mendel_periodicals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mendel_periodicals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mendel_periodicals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mendel_periodicals_node_info() {
  $items = array(
    'mendel_periodical' => array(
      'name' => t('Mendel Periodical'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
