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
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
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
            'source' => 'Job Title',
            'target' => 'field_job_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Last Name, First Name',
            'target' => 'field_last_name_first_name',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Subject Area',
            'target' => 'field_subject_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Subject Specialities',
            'target' => 'field_subject_specialities',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Office Location',
            'target' => 'field_office_location',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Library',
            'target' => 'field_library',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Profile Image',
            'target' => 'field_profile_image',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'subject_specialists',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['cdl_specialist_import'] = $feeds_importer;

  return $export;
}
