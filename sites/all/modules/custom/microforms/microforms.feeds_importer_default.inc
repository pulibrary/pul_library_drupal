<?php

/**
 * @file
 * microforms.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function microforms_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'newspapers_for_microforms';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Imports Newspaper Microforms Content',
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
    'name' => 'Newspapers for microforms',
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
        'author' => '394',
        'authorize' => 1,
        'bundle' => 'microforms_newspapers',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'autocreate' => 1,
            'source' => 'city',
            'target' => 'field_microforms_city',
            'term_search' => '0',
          ),
          2 => array(
            'source' => 'coverage',
            'target' => 'field_microforms_holdings_date',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'call',
            'target' => 'field_microforms_call_number',
            'unique' => FALSE,
          ),
          4 => array(
            'autocreate' => 1,
            'source' => 'country',
            'target' => 'field_microforms_country',
            'term_search' => '0',
          ),
          5 => array(
            'autocreate' => 1,
            'source' => 'state',
            'target' => 'field_microforms_us_states',
            'term_search' => '0',
          ),
          6 => array(
            'source' => 'digital_url',
            'target' => 'field_microforms_digital_edition:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'digital_title',
            'target' => 'field_microforms_digital_edition:title',
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
  $export['newspapers_for_microforms'] = $feeds_importer;

  return $export;
}
