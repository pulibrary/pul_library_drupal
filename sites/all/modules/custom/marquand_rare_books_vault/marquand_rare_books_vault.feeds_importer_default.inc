<?php
/**
 * @file
 * marquand_rare_books_vault.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function marquand_rare_books_vault_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'marquand_rare_books';
  $feeds_importer->config = array(
    'name' => 'Marquand Rare Books',
    'description' => 'Import Rare Books from Marquand',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 1,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPathLines',
      'config' => array(
        'sources' => array(
          'rb_voyager_id' => array(
            'name' => 'Voyager ID',
            'value' => 'id',
            'debug' => 0,
            'weight' => '1',
          ),
          'rb_call_number_display' => array(
            'name' => 'Call Number Display',
            'value' => 'call_number_display',
            'debug' => 0,
            'weight' => '2',
          ),
          'rb_location_code_s' => array(
            'name' => 'Location Code',
            'value' => 'location_code_s',
            'debug' => 0,
            'weight' => '4',
          ),
          'rb_subject_facet' => array(
            'name' => 'Subject Display',
            'value' => 'subject_facet',
            'debug' => 0,
            'weight' => '6',
          ),
          'rb_pub_created_display' => array(
            'name' => 'Pub Created',
            'value' => 'pub_created_display',
            'debug' => 0,
            'weight' => '7',
          ),
          'rb_pub_date_start_sort' => array(
            'name' => 'Pub Date Start Sort',
            'value' => 'pub_date_start_sort',
            'debug' => 0,
            'weight' => '8',
          ),
          'rb_uniform_title_display' => array(
            'name' => 'Uniform Title',
            'value' => 'uniform_title_display',
            'debug' => 0,
            'weight' => '9',
          ),
          'rb_title_display' => array(
            'name' => 'Title Display',
            'value' => 'title_display',
            'debug' => 0,
            'weight' => '10',
          ),
          'rb_title_sort' => array(
            'name' => 'Title Sort',
            'value' => 'title_sort',
            'debug' => 0,
            'weight' => '11',
          ),
          'rb_description_display' => array(
            'name' => 'Description Display',
            'value' => 'description_display',
            'debug' => 0,
            'weight' => '12',
          ),
          'rb_call_number_s' => array(
            'name' => 'Call Number Sort',
            'value' => 'call_number_s',
            'debug' => 0,
            'weight' => '13',
          ),
          'rb_author_s' => array(
            'name' => 'Author Display',
            'value' => 'author_s',
            'debug' => 0,
            'weight' => '14',
          ),
          'format' => array(
            'name' => 'Format',
            'value' => 'format',
            'debug' => 0,
            'weight' => '15',
          ),
        ),
        'context' => array(
          'value' => '',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
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
            'source' => 'rb_voyager_id',
            'target' => 'field_rb_voyager_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'rb_call_number_display',
            'target' => 'field_rb_call_number_display',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'rb_description_display',
            'target' => 'field_rb_description_display',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'rb_location_code_s',
            'target' => 'field_rb_location_code_s',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'rb_pub_created_display',
            'target' => 'field_rb_pub_created_display',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'rb_pub_date_start_sort',
            'target' => 'field_rb_pub_date_start_sort',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'rb_subject_facet',
            'target' => 'field_rb_subject_facet',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'rb_title_display',
            'target' => 'field_rb_title_display',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'rb_title_sort',
            'target' => 'field_rb_title_sort',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'rb_uniform_title_display',
            'target' => 'field_rb_uniform_title_display',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'rb_voyager_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          11 => array(
            'source' => 'rb_location_code_s',
            'target' => 'field_rb_location_code_s',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'rb_call_number_s',
            'target' => 'field_rb_call_number_s',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'rb_author_s',
            'target' => 'field_rb_author_s',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'format',
            'target' => 'field_rb_format',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'marq_rare_book',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['marquand_rare_books'] = $feeds_importer;

  return $export;
}
