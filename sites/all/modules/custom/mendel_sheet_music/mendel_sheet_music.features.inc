<?php
/**
 * @file
 * mendel_sheet_music.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mendel_sheet_music_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mendel_sheet_music_node_info() {
  $items = array(
    'mendel_sheet_music' => array(
      'name' => t('Mendel Sheet Music'),
      'base' => 'node_content',
      'description' => t('Sheet music from special collections at Mendel Music Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
