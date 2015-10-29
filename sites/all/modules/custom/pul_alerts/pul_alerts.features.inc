<?php
/**
 * @file
 * pul_alerts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_alerts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pul_alerts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pul_alerts_node_info() {
  $items = array(
    'homepage_alert' => array(
      'name' => t('Alert'),
      'base' => 'node_content',
      'description' => t('Emergency alert messages to be posted on the main or branch library landing pages. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
