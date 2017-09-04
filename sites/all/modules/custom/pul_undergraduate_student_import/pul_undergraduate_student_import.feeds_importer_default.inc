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
    'name' => 'PUL Undergraduate Student',
    'description' => 'Undergraduate Student Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 1,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'private' => 'private',
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          14 => '14',
          29 => '29',
          3 => 0,
          8 => 0,
          7 => 0,
          5 => 0,
          4 => 0,
          6 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
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
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'pl_id',
            'target' => 'field_current_personal_lib:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'netid',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'First Name',
            'target' => 'field_puluser_fname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Last Name',
            'target' => 'field_puluser_lname',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['pul_undergraduate_student'] = $feeds_importer;

  return $export;
}
