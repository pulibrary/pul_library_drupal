<?php

/**
 * @file
 * library_study_rooms.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function library_study_rooms_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'study_room_importer';
  $feeds_importer->config = array(
    'name' => 'Study Room Importer',
    'description' => 'Import study room information and staff contacts.',
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
            'source' => 'Access Rules',
            'target' => 'body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Dept. Title',
            'target' => 'field_study_room_department_url:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Dept. URL',
            'target' => 'field_study_room_department_url:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Room Numbers',
            'target' => 'field_study_room_numbers',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Building',
            'target' => 'field_study_room_library',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'study_room',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['study_room_importer'] = $feeds_importer;

  return $export;
}
