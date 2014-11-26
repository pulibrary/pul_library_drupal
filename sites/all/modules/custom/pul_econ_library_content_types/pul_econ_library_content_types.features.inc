<?php
/**
 * @file
 * pul_econ_library_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_econ_library_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pul_econ_library_content_types_node_info() {
  $items = array(
    'econ_library_company_directories' => array(
      'name' => t('Econ Library Company Directories'),
      'base' => 'node_content',
      'description' => t('Econlib Company Directories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'econ_library_stock_exchange_hold' => array(
      'name' => t('Econ Library Stock Exchange Holdings'),
      'base' => 'node_content',
      'description' => t('Econlib Stock Exchange Holdings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'econ_working_papers' => array(
      'name' => t('Econ Working Papers'),
      'base' => 'node_content',
      'description' => t('For the econlib Site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
