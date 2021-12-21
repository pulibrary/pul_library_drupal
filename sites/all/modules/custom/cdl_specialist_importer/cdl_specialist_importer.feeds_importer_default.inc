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
    'content_type' => '',
    'description' => 'Import Subject Specialists',
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
    'name' => 'Specialist Import',
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
        'author' => '568',
        'authorize' => 1,
        'bundle' => 'subject_specialists',
        'expire' => '-1',
        'input_format' => 'plain_text',
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
            'autocreate' => 1,
            'source' => 'SUBJECT SPECIALTY 01',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
          ),
          18 => array(
            'autocreate' => 1,
            'source' => 'SUBJECT SPECIALTY 02',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
          ),
          19 => array(
            'autocreate' => 1,
            'source' => 'SUBJECT SPECIALTY 03',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
          ),
          20 => array(
            'autocreate' => 1,
            'source' => 'SUBJECT SPECIALTY 04',
            'target' => 'field_selector_subject_areas',
            'term_search' => '0',
          ),
          21 => array(
            'autocreate' => 1,
            'source' => 'Departments & Programs Served 01',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
          ),
          22 => array(
            'autocreate' => 1,
            'source' => 'Departments & Programs Served 02',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
          ),
          23 => array(
            'autocreate' => 1,
            'source' => 'Departments & Programs Served 03',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
          ),
          24 => array(
            'autocreate' => 1,
            'source' => 'Departments & Programs Served 04',
            'target' => 'field_sel_library_department',
            'term_search' => '0',
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
        'skip_hash_check' => 0,
        'update_existing' => '2',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['cdl_specialist_import'] = $feeds_importer;

  return $export;
}
