<?php

/**
 * @file
 * cdl_specialist_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cdl_specialist_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cdl_specialist_import';
  $feeds_importer->config = array(
    'name' => 'Specialist Import',
    'description' => 'Import Subject Specialists',
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
        'author' => '568',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Bio',
            'target' => 'field_bio',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Policies Title',
            'target' => 'field_collecting_policies_spec:title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Policy URL',
            'target' => 'field_collecting_policies_spec:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Collections Assistants',
            'target' => 'field_collections_assistants',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Department',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'E-mail',
            'target' => 'field_e_mail',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Last Name, First Name',
            'target' => 'field_last_name_first_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Subject Area',
            'target' => 'field_subject_area',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Subject Specialities',
            'target' => 'field_subject_specialities',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Office Location',
            'target' => 'field_office_location',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Library',
            'target' => 'field_library',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'First Name',
            'target' => 'field_sel_first_name',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Last Name',
            'target' => 'field_sel_last_name',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Title',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Office Directions',
            'target' => 'field_sel_office_directions',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'SUBJECT SPECIALTY 01',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          18 => array(
            'source' => 'SUBJECT SPECIALTY 02',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          19 => array(
            'source' => 'SUBJECT SPECIALTY 03',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          20 => array(
            'source' => 'SUBJECT SPECIALTY 04',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          21 => array(
            'source' => 'Departments & Programs Served 01',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          22 => array(
            'source' => 'Departments & Programs Served 02',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          23 => array(
            'source' => 'Departments & Programs Served 03',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          24 => array(
            'source' => 'Departments & Programs Served 04',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          25 => array(
            'source' => 'Display Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'NetID',
            'target' => 'field_library_directory_profile:label',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Url',
            'target' => 'field_research_guides_websites:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'subject_specialists',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cdl_specialist_import'] = $feeds_importer;

  return $export;
}
