<?php
/**
 * @file
 * cdl_subject_specialist.features.inc
 */

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
      'name' => t('Subject_Specialists'),
      'base' => 'node_content',
      'description' => t('Selectors, all departments'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
