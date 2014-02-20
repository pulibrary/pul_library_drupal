<?php
/**
 * @file
 * cdl_acqusition_highlights.features.inc
 */

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
      'description' => t('New and noteworthy acquisitions from the previous fiscal year. Patty G. B. Selects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
