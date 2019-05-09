<?php

/**
 * @file
 * pul_landing_page_spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_landing_page_spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pul_landing_page_spotlight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pul_landing_page_spotlight_node_info() {
  $items = array(
    'pul_spotlight' => array(
      'name' => t('Spotlight'),
      'base' => 'node_content',
      'description' => t('A spotlight feature item for use on the homepage or a landing page of a site section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Reviewed by library news and events team'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
