<?php
/**
 * @file
 * articles_and_databases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function articles_and_databases_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function articles_and_databases_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function articles_and_databases_node_info() {
  $items = array(
    'alternative_database_title' => array(
      'name' => t('Alternative Database Title'),
      'base' => 'node_content',
      'description' => t('Override a Database Title.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'database' => array(
      'name' => t('Database'),
      'base' => 'node_content',
      'description' => t('An electronic resource for the Library\'s A to Z list. '),
      'has_title' => '1',
      'title_label' => t('Primary Database Title'),
      'help' => t('Make sure that proper access policies for this resource have been defined. '),
    ),
    'database_description' => array(
      'name' => t('Database Description'),
      'base' => 'node_content',
      'description' => t('Standalone description for a database. When present for a specific subject it overrides the basic description attached at the database level. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'database_issue' => array(
      'name' => t('Database Issue'),
      'base' => 'node_content',
      'description' => t('This type is used to write-up an access issue that needs to be displayed and attached to a particular database or package of databases. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'database_package' => array(
      'name' => t('Database Package'),
      'base' => 'node_content',
      'description' => t('Grouping of Electronic Resources that share a basic EZproxy configuration. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
