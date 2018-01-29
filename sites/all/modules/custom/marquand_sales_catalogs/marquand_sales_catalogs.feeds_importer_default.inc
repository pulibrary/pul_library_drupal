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
    'name' => 'Marquand Sales Catalogs',
    'description' => 'For Marquand',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
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
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Date',
            'target' => 'field_sc_date',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Auction House',
            'target' => 'field_sc_auction_house',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'City',
            'target' => 'field_sc_city',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Sale #',
            'target' => 'field_sc_sale',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Name',
            'target' => 'field_sc_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Catalog',
            'target' => 'field_sc_notes',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'marquand_sales_catalog',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sales_catalogs'] = $feeds_importer;

  return $export;
}
