<?php

/**
 * @file
 * pul_featured_link_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pul_featured_link_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pul_featured_link_importer';
  $feeds_importer->config = array(
    'name' => 'Featured Link Importer',
    'description' => 'Import Featured Links',
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
        'author' => '650',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Source',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'URL',
            'target' => 'field_featured_pul_link:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'featured_pul_link',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['pul_featured_link_importer'] = $feeds_importer;

  return $export;
}
