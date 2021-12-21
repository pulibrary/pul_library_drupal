<?php

/**
 * @file
 * pul_library_users.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pul_library_users_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pul_library_staff_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import library staff members based on CSV from Finance Office Database.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => 0,
        'direct' => 1,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '43200',
    'name' => 'PUL Library Staff Importer',
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
        'insert_new' => 1,
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'idStaff',
            'target' => 'field_puluser_librarystaffid',
            'unique' => FALSE,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'PUID',
            'target' => 'field_puluser_princetonid',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'LibraryTitle',
            'target' => 'field_puluser_displaytitle',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'office',
            'target' => 'field_puluser_office',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'specID',
            'target' => 'field_puluser_dmgimport_id',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Phone',
            'target' => 'field_puluser_phone_number',
            'unique' => FALSE,
          ),
          6 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Department',
            'target' => 'field_puluser_department',
            'term_search' => '0',
          ),
          7 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Division',
            'target' => 'field_puluser_division',
            'term_search' => '0',
          ),
          8 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Section',
            'target' => 'field_puluser_section',
            'term_search' => '0',
          ),
          9 => array(
            'language' => 'und',
            'source' => 'NetID',
            'target' => 'name',
            'unique' => 1,
          ),
          10 => array(
            'language' => 'und',
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          11 => array(
            'language' => 'und',
            'source' => 'LongTitle',
            'target' => 'field_puluser_officialtitle',
            'unique' => FALSE,
          ),
          12 => array(
            'language' => 'und',
            'source' => 'NetID',
            'target' => 'field_puluser_netid',
            'unique' => FALSE,
          ),
          13 => array(
            'language' => 'und',
            'source' => 'StartDate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          14 => array(
            'language' => 'und',
            'source' => 'Title',
            'target' => 'field_puluser_short_title',
            'unique' => FALSE,
          ),
          15 => array(
            'language' => 'und',
            'source' => 'Name',
            'target' => 'field_puluser_formalname',
            'unique' => FALSE,
          ),
          16 => array(
            'language' => 'und',
            'source' => 'StaffSort',
            'target' => 'field_pul_user_staff_sort',
            'unique' => FALSE,
          ),
          17 => array(
            'language' => 'und',
            'source' => 'UnitSort',
            'target' => 'field_puluser_unit_sort',
            'unique' => FALSE,
          ),
          18 => array(
            'language' => 'und',
            'source' => 'DeptSort',
            'target' => 'field_puluser_department_sort',
            'unique' => FALSE,
          ),
          19 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Unit',
            'target' => 'field_puluser_unit',
            'term_search' => '0',
          ),
          20 => array(
            'language' => 'und',
            'source' => 'DivSect',
            'target' => 'field_puluser_divsect',
            'unique' => FALSE,
          ),
          21 => array(
            'language' => 'und',
            'source' => 'Office',
            'target' => 'field_puluser_office',
            'unique' => FALSE,
          ),
          22 => array(
            'language' => 'und',
            'source' => 'Building',
            'target' => 'field_puluser_building_location',
            'unique' => FALSE,
          ),
          23 => array(
            'language' => 'und',
            'source' => 'lastName',
            'target' => 'field_puluser_lname',
            'unique' => FALSE,
          ),
          24 => array(
            'language' => 'und',
            'source' => 'firstName',
            'target' => 'field_puluser_fname',
            'unique' => FALSE,
          ),
          25 => array(
            'language' => 'und',
            'source' => 'middleName',
            'target' => 'field_puluser_middle_name',
            'unique' => FALSE,
          ),
          26 => array(
            'language' => 'und',
            'source' => 'nickName',
            'target' => 'field_puluser_nick_name',
            'unique' => FALSE,
          ),
        ),
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => '5',
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
          14 => 0,
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
        ),
        'skip_hash_check' => 0,
        'status' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsUserProcessor',
    ),
    'update' => 0,
  );
  $export['pul_library_staff_importer'] = $feeds_importer;

  return $export;
}
