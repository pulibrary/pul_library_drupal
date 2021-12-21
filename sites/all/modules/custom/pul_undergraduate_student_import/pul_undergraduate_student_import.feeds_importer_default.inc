<?php

/**
 * @file
 * pul_undergraduate_student_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pul_undergraduate_student_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pul_undergraduate_student';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Undergraduate Student Importer',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          'private' => 'private',
        ),
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'private://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'PUL Undergraduate Student',
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
        'bundle' => 'user',
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'netid',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'First Name',
            'target' => 'field_puluser_fname',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Last Name',
            'target' => 'field_puluser_lname',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'class',
            'target' => 'field_personal_lib_class_year',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Residential College - Description',
            'target' => 'field_pl_residential_college',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'PL',
            'target' => 'field_current_personal_lib:label',
            'unique' => FALSE,
          ),
        ),
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
          14 => '14',
          15 => 0,
          16 => 0,
          17 => 0,
          18 => 0,
          19 => 0,
          20 => 0,
          21 => 0,
          22 => 0,
          23 => 0,
          24 => 0,
          25 => 0,
          26 => 0,
          27 => 0,
          28 => 0,
          29 => '29',
          30 => 0,
          31 => 0,
        ),
        'skip_hash_check' => 1,
        'status' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsUserProcessor',
    ),
    'update' => 0,
  );
  $export['pul_undergraduate_student'] = $feeds_importer;

  return $export;
}
