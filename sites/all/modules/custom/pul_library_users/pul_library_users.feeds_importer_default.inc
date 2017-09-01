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
    'name' => 'PUL Library Staff Importer',
    'description' => 'Import library staff members based on CSV from Finance Office Database.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 1,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          3 => 0,
          8 => 0,
          7 => 0,
          4 => 0,
          6 => 0,
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
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'idStaff',
            'target' => 'field_puluser_librarystaffid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'PUID',
            'target' => 'field_puluser_princetonid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'LibraryTitle',
            'target' => 'field_puluser_displaytitle',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'office',
            'target' => 'field_puluser_office',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'specID',
            'target' => 'field_puluser_dmgimport_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Phone',
            'target' => 'field_puluser_phone_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Department',
            'target' => 'field_puluser_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Division',
            'target' => 'field_puluser_division',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Section',
            'target' => 'field_puluser_section',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'NetID',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'LongTitle',
            'target' => 'field_puluser_officialtitle',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'NetID',
            'target' => 'field_puluser_netid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'StartDate',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Title',
            'target' => 'field_puluser_short_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Name',
            'target' => 'field_puluser_formalname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'subjectSpec',
            'target' => 'field_puluser_sublibrarian',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'StaffSort',
            'target' => 'field_pul_user_staff_sort',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'UnitSort',
            'target' => 'field_puluser_unit_sort',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'DeptSort',
            'target' => 'field_puluser_department_sort',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Unit',
            'target' => 'field_puluser_unit',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          21 => array(
            'source' => 'DivSect',
            'target' => 'field_puluser_divsect',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'Office',
            'target' => 'field_puluser_office',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Building',
            'target' => 'field_puluser_building_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'lastName',
            'target' => 'field_puluser_lname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'firstName',
            'target' => 'field_puluser_fname',
            'unique' => FALSE,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'middleName',
            'target' => 'field_puluser_middle_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'nickName',
            'target' => 'field_puluser_nick_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'update_non_existent' => 'skip',
        'insert_new' => 1,
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
  $export['pul_library_staff_importer'] = $feeds_importer;

  return $export;
}
