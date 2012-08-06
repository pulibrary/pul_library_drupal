<?php
/**
 * @file
 * library_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_news_node_info() {
  $items = array(
    'library_news_item' => array(
      'name' => t('Library News Item'),
      'base' => 'node_content',
      'description' => t('A Library news item. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
