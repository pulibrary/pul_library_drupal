<?php

/**
 * @file
 * marquand_sales_catalogs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function marquand_sales_catalogs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sales_catalogs';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Marquand',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Marquand Sales Catalogs',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => '650',
        'authorize' => 1,
        'bundle' => 'marquand_sales_catalog',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'Date',
            'target' => 'field_sc_date',
            'unique' => FALSE,
          ),
          2 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Auction House',
            'target' => 'field_sc_auction_house',
            'term_search' => '0',
          ),
          3 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'City',
            'target' => 'field_sc_city',
            'term_search' => '0',
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Sale #',
            'target' => 'field_sc_sale',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Name',
            'target' => 'field_sc_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Catalog',
            'target' => 'field_sc_notes',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['sales_catalogs'] = $feeds_importer;

  return $export;
}
