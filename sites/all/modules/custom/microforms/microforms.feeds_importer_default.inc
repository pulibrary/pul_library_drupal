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
    'name' => 'Newspapers for microforms',
    'description' => 'Imports Newspaper Microforms Content',
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
        'author' => '394',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'city',
            'target' => 'field_microforms_city',
            'term_search' => '0',
            'autocreate' => 1,
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
            'source' => 'country',
            'target' => 'field_microforms_country',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'state',
            'target' => 'field_microforms_us_states',
            'term_search' => '0',
            'autocreate' => 1,
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
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'microforms_newspapers',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['newspapers_for_microforms'] = $feeds_importer;

  return $export;
}
