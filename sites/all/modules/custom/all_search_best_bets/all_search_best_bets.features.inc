<?php
/**
 * @file
 * all_search_best_bets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function all_search_best_bets_ctools_plugin_api($module = NULL, $api = NULL) {
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
function all_search_best_bets_node_info() {
  $items = array(
    'all_search_best_bets' => array(
      'name' => t('All Search Best Bets'),
      'base' => 'node_content',
      'description' => t('Curated list of search terms with suggested answer/best bet'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
