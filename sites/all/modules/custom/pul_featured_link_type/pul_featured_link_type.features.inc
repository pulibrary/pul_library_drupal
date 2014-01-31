<?php
/**
 * @file
 * pul_featured_link_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_featured_link_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pul_featured_link_type_node_info() {
  $items = array(
    'featured_pul_link' => array(
      'name' => t('Featured Link'),
      'base' => 'node_content',
      'description' => t('Resources, services, and other items with a distinct URL and short description that can be displayed on a variety of topical, user, branch, and department landing pages. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
