<?php

/**
 * @file
 * econ_library_data_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function econ_library_data_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'econ_lib_central_bank_holdings';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Econ Library Central Bank Holdings',
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
    'name' => 'Econ Library Central Bank Holdings',
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
        'author' => '413',
        'authorize' => 1,
        'bundle' => 'econ_lib_central_bank_holdings',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'autocreate' => 1,
            'source' => 'Region',
            'target' => 'field_econlib_cbh_region',
            'term_search' => '0',
          ),
          1 => array(
            'autocreate' => 1,
            'source' => 'Bank Name',
            'target' => 'field_econlib_cbh_bank_name',
            'term_search' => '0',
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Call Number',
            'target' => 'field_econlib_cbh_call_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Last Bound',
            'target' => 'field_econlib_cbh_last_bound',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Current Issues in PF',
            'target' => 'field_econlib_cbh_current_issues',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Bank Website',
            'target' => 'field_econlib_cbh_bank_website:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'PO Number',
            'target' => 'field_econlib_cbh_po_number',
            'unique' => FALSE,
          ),
          8 => array(
            'autocreate' => 1,
            'source' => 'Color',
            'target' => 'field_econlib_cbh_color',
            'term_search' => '0',
          ),
          9 => array(
            'autocreate' => 1,
            'source' => 'Binding Frequency',
            'target' => 'field_econlib_cbh_binding_freq',
            'term_search' => '0',
          ),
          10 => array(
            'source' => 'Notes',
            'target' => 'field_econlib_cbh_notes',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['econ_lib_central_bank_holdings'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'econ_library_company_directories';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Econ Library Company Directories',
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
    'name' => 'Econ Library Company Directories',
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
        'author' => '413',
        'authorize' => 1,
        'bundle' => 'econ_library_company_directories',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'autocreate' => 1,
            'source' => 'Covers',
            'target' => 'field_econ_lib_cd_covers',
            'term_search' => '0',
          ),
          2 => array(
            'source' => 'Print',
            'target' => 'field_econ_lib_cd_print',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Call Number',
            'target' => 'field_econ_lib_cd_call_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Electronic',
            'target' => 'field_econ_lib_cd_electronic',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['econ_library_company_directories'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'econ_library_stock_exchange_holdings';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Econ Library Stock Exchange Holdings',
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
    'name' => 'Econ Library Stock Exchange Holdings',
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
        'author' => '413',
        'authorize' => 1,
        'bundle' => 'econ_library_stock_exchange_hold',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'autocreate' => 1,
            'source' => 'Country',
            'target' => 'field_econ_lib_se_country',
            'term_search' => '0',
          ),
          1 => array(
            'autocreate' => 1,
            'source' => 'Exchange',
            'target' => 'field_econ_lib_se_exchange',
            'term_search' => '0',
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Call Number',
            'target' => 'field_econ_lib_se_call_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Last Bound',
            'target' => 'field_econ_lib_se_last_bound',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Current Issues in PF',
            'target' => 'field_econ_lecon_lib_se_current',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Web Site',
            'target' => 'field_econ_lib_se_web_site:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Notes',
            'target' => 'field_econ_lib_se_notes',
            'unique' => FALSE,
          ),
          8 => array(
            'autocreate' => 1,
            'source' => 'Binding Color',
            'target' => 'field_econ_lib_se_binding_color',
            'term_search' => '0',
          ),
          9 => array(
            'autocreate' => 1,
            'source' => 'Binding Frequency',
            'target' => 'field_econ_lib_se_binding_freq',
            'term_search' => '0',
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['econ_library_stock_exchange_holdings'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'econ_working_papers';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Econlib Working Papers',
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
    'name' => 'Econ Working Papers',
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
        'author' => '413',
        'authorize' => 1,
        'bundle' => 'econ_working_papers',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'autocreate' => 1,
            'source' => 'Publisher',
            'target' => 'field_econ_lib_wp_publisher',
            'term_search' => '0',
          ),
          2 => array(
            'source' => 'Continues',
            'target' => 'field_econ_lib_wp_continues',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Call Number',
            'target' => 'field_econ_lib_wp_call_number',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Bound Holdings',
            'target' => 'field_econ_lib_wp_bound_holdings',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Unbound',
            'target' => 'field_econ_lib_wp_unbound:url',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['econ_working_papers'] = $feeds_importer;

  return $export;
}
