<?php
/**
 * @file
 * mendel_microfilms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mendel_microfilms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mendel_microfilms_node_info() {
  $items = array(
    'mus_mendel_microfilm' => array(
      'name' => t('Mendel Microfilm'),
      'base' => 'node_content',
      'description' => t('Special collections of microfilm located in the Mendel Music Library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
