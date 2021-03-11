<?php

/**
 * @file
 * ip_protected_resource_layouts_importer_roles.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ip_protected_resource_layouts_importer_roles_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pul_ip_protected_resource_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Imports username/password resources.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'direct' => FALSE,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'IP Protected Resource Importer',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => '421',
        'authorize' => 1,
        'bundle' => 'ip_protected_db_resource',
        'expire' => '-1',
        'input_format' => 'filtered_html',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'URL',
            'target' => 'field_ip_db_resource_url:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'username',
            'target' => 'field_ip_db_username',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'password',
            'target' => 'field_ip_db_password',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['pul_ip_protected_resource_importer'] = $feeds_importer;

  return $export;
}
