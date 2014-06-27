<?php
/**
 * @file
 * library_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
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
function library_faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_faq_node_info() {
  $items = array(
    'frequently_asked_question' => array(
      'name' => t('Frequently Asked Question'),
      'base' => 'node_content',
      'description' => t('Library Frequently Asked Question. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
