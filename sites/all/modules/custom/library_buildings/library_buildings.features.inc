<?php
/**
 * @file
 * library_buildings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_buildings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_buildings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_buildings_node_info() {
  $items = array(
    'library_buildings' => array(
      'name' => t('Library Buildings'),
      'base' => 'node_content',
      'description' => t('Physical Library Buildings, can be added to Libraries, Collections etc.'),
      'has_title' => '1',
      'title_label' => t('Building Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
