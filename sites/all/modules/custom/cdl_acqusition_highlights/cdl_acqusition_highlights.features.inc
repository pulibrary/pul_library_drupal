<?php
/**
 * @file
 * cdl_acqusition_highlights.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cdl_acqusition_highlights_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cdl_acqusition_highlights_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cdl_acqusition_highlights_node_info() {
  $items = array(
    'acquisitions_highlights' => array(
      'name' => t('Acquisitions Highlights'),
      'base' => 'node_content',
      'description' => t('New and noteworthy acquisitions from the previous fiscal year. Collection Development managers select.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
