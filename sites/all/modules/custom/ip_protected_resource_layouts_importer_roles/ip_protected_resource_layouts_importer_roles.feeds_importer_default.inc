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
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pul_ip_protected_resource_importer';
  $feeds_importer->config = array(
    'name' => 'IP Protected Resource Importer',
    'description' => 'Imports username/password resources.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '421',
        'authorize' => 1,
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
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'ip_protected_db_resource',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pul_ip_protected_resource_importer'] = $feeds_importer;

  return $export;
}
