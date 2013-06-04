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
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          3 => 0,
          8 => 0,
          7 => 0,
          4 => 0,
          6 => 0,
        ),
        'update_existing' => 1,
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'idStaff',
            'target' => 'field_puluser_librarystaffid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'PUID',
            'target' => 'field_puluser_princetonid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'LibraryTitle',
            'target' => 'field_puluser_displaytitle',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'fname',
            'target' => 'field_puluser_fname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'lname',
            'target' => 'field_puluser_lname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'office',
            'target' => 'field_puluser_office',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'specID',
            'target' => 'field_puluser_dmgimport_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Phone',
            'target' => 'field_puluser_phone_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Department',
            'target' => 'field_puluser_department',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Division',
            'target' => 'field_puluser_division',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Section',
            'target' => 'field_puluser_section',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'NetID',
            'target' => 'name',
            'unique' => 1,
          ),
          12 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          13 => array(
            'source' => 'LongTitle',
            'target' => 'field_puluser_officialtitle',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'NetID',
            'target' => 'field_puluser_netid',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'StartDate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Title',
            'target' => 'field_puluser_short_title',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Name',
            'target' => 'field_puluser_formalname',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'subjectSpec',
            'target' => 'field_puluser_sublibrarian',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'StaffSort',
            'target' => 'field_pul_user_staff_sort',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'UnitSort',
            'target' => 'field_puluser_unit_sort',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'DeptSort',
            'target' => 'field_puluser_department_sort',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Unit',
            'target' => 'field_puluser_unit',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'DivSect',
            'target' => 'field_puluser_divsect',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['pul_library_staff_importer'] = $feeds_importer;

  return $export;
}
