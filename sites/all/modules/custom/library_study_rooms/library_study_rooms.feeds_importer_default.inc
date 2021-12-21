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
    'content_type' => '',
    'description' => 'Import study room information and staff contacts.',
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
    'name' => 'Study Room Importer',
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
        'bundle' => 'study_room',
        'expire' => '-1',
        'input_format' => 'plain_text',
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
        'skip_hash_check' => 0,
        'update_existing' => '2',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['study_room_importer'] = $feeds_importer;

  return $export;
}
