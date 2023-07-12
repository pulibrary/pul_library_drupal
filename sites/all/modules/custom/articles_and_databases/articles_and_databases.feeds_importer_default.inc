<?php

/**
 * @file
 * articles_and_databases.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function articles_and_databases_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'db_title_override_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import Overridden titles',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'DB Title Override Importer',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => FALSE,
    'processor' => array(
      'config' => array(
        'author' => '1',
        'content_type' => 'alternative_database_title',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'field_dboverride_title_import_id',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'dbID',
            'target' => 'field_dboverride_dbmport_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['db_title_override_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'libguides_database_asset_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Keep databases in search in sync with Libguides',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'accept_invalid_cert' => FALSE,
        'auto_detect_feeds' => FALSE,
        'auto_scheme' => 'http',
        'cache_http_result' => TRUE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'use_pubsubhubbub' => FALSE,
      ),
      'plugin_key' => 'FeedsHTTPFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '3600',
    'name' => 'Libguides Database Asset Importer',
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
        'author' => '13183',
        'authorize' => 1,
        'bundle' => 'database',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'format' => 'pul_editor_html',
            'source' => 'description',
            'target' => 'body',
          ),
          2 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'alt_names',
            'target' => 'field_db_keywords',
            'term_search' => '0',
          ),
          3 => array(
            'language' => 'und',
            'source' => 'friendly_url',
            'target' => 'field_db_access_url:url',
            'unique' => FALSE,
          ),
          4 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'subjects',
            'target' => 'field_db_keywords',
            'term_search' => '0',
          ),
          5 => array(
            'language' => 'und',
            'source' => 'id',
            'target' => 'field_db_libguides_asset_id',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['libguides_database_asset_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'resource_list_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import DMG Resources',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'DMG Resource List Importer',
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
        'bundle' => 'database',
        'expire' => '-1',
        'input_format' => 'full_html',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_db_access_url:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'coverDates',
            'target' => 'field_db_date_coverage',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'locationAccess',
            'target' => 'field_db_location_access_note',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'moreInformation',
            'target' => 'field_db_alternative_urls:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'notes',
            'target' => 'field_db_access_note',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'longDescription',
            'target' => 'field_db_short_description',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'libwebcomp',
            'target' => 'field_db_access_onsite',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'active',
            'target' => 'field_db_display_active',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'noProxy',
            'target' => 'field_db_use_proxy',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'dbID',
            'target' => 'field_db_importid',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'titleID',
            'target' => 'field_db_title_import_id',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'keywords',
            'target' => 'field_db_keywords',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['resource_list_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'resource_type_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import Resource Type Categories',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Resource Type Importer',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => FALSE,
    'processor' => array(
      'config' => array(
        'force_update' => 1,
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'typeName',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'typeID',
            'target' => 'field_rsrc_import_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'vocabulary' => 'resource_types',
      ),
      'plugin_key' => 'FeedsTermProcessor',
    ),
    'update' => 0,
  );
  $export['resource_type_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'subject_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import Database Subjects',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Database Subject Importer',
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
        'bundle' => 'database_subjects',
        'force_update' => 1,
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'subjectName',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'subjectID',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'subjectID',
            'target' => 'field_subs_import_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'dbs',
            'target' => 'field_subs_browse_hide',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
      ),
      'plugin_key' => 'FeedsTermProcessor',
    ),
    'update' => 0,
  );
  $export['subject_importer'] = $feeds_importer;

  return $export;
}
