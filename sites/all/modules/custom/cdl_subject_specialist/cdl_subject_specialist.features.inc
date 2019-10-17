<?php

/**
 * @file
 * cdl_subject_specialist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cdl_subject_specialist_ctools_plugin_api($module = NULL, $api = NULL) {
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
function cdl_subject_specialist_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cdl_subject_specialist_node_info() {
  $items = array(
    'subject_specialists' => array(
      'name' => t('Subject Selector Profile'),
      'base' => 'node_content',
      'description' => t('Selectors, all departments'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
