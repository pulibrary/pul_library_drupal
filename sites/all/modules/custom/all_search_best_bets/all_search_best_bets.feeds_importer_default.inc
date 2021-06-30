<?php

/**
 * @file
 * all_search_best_bets.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function all_search_best_bets_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'all_search_best_bets';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Curated list of search terms with suggested answer/best bet',
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
    'name' => 'All Search Best Bets',
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
        'author' => '12485',
        'authorize' => 1,
        'bundle' => 'all_search_best_bets',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'best_bet_url',
            'target' => 'field_best_bet_url:url',
            'unique' => FALSE,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'best_bet_title',
            'target' => 'field_best_bet_url:title',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'best_bet_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'search_terms',
            'target' => 'field_search_terms',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'db_ref_id',
            'target' => 'field_database:etid',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'best_bet_desc',
            'target' => 'field_best_bet_description',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['all_search_best_bets'] = $feeds_importer;

  return $export;
}
