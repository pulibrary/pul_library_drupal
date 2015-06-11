<?php
/**
 * @file
 * marquand_sales_catalogs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function marquand_sales_catalogs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
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
function marquand_sales_catalogs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function marquand_sales_catalogs_node_info() {
  $items = array(
    'marquand_sales_catalog' => array(
      'name' => t('Marquand Sales Catalog'),
      'base' => 'node_content',
      'description' => t('Marquand sales catalog listings. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
