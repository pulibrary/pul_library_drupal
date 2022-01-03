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
    'content_type' => '',
    'description' => 'Import Featured Links',
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
    'name' => 'Featured Link Importer',
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
        'author' => '650',
        'authorize' => 1,
        'bundle' => 'featured_pul_link',
        'expire' => '-1',
        'input_format' => 'plain_text',
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
        'skip_hash_check' => 0,
        'update_existing' => '1',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['pul_featured_link_importer'] = $feeds_importer;

  return $export;
}
