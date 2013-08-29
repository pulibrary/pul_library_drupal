<?php
/**
 * @file
 * protected_database_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function protected_database_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function protected_database_content_types_node_info() {
  $items = array(
    'cas_protected_db_resource' => array(
      'name' => t('CAS Protected Database Resource'),
      'base' => 'node_content',
      'description' => t('Contains access username and password or an embedded form used to access a library resource. Can be used "Access URLs" for general database resources. Use this for pages that require "CAS" single sign-on protection. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ip_protected_db_resource' => array(
      'name' => t('IP Protected Database Resource'),
      'base' => 'node_content',
      'description' => t('Contains username/password combination or access form for a protected resource. Use for resources that require IP authentication. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
