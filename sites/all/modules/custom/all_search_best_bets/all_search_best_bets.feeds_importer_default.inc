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
    'name' => 'All Search Best Bets',
    'description' => 'Curated list of search terms with suggested answer/best bet',
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
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '3557',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'best_bet_url',
            'target' => 'field_best_bet_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'best_bet_title',
            'target' => 'field_best_bet_url:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'best_bet_title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'search_terms',
            'target' => 'field_search_terms',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'db_ref_id',
            'target' => 'field_database:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'best_bet_desc',
            'target' => 'field_best_bet_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'all_search_best_bets',
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
  $export['all_search_best_bets'] = $feeds_importer;

  return $export;
}
