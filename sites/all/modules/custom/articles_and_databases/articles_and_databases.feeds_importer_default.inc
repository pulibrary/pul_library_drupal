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
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'db_title_override_importer';
  $feeds_importer->config = array(
    'name' => 'DB Title Override Importer',
    'description' => 'Import Overridden titles',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'alternative_database_title',
        'update_existing' => '1',
        'expire' => '-1',
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
        'input_format' => 'plain_text',
        'author' => '1',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['db_title_override_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'resource_list_importer';
  $feeds_importer->config = array(
    'name' => 'DMG Resource List Importer',
    'description' => 'Import DMG Resources',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'update_existing' => '1',
        'expire' => '-1',
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
        'input_format' => 'full_html',
        'author' => '650',
        'bundle' => 'database',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['resource_list_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'resource_type_importer';
  $feeds_importer->config = array(
    'name' => 'Resource Type Importer',
    'description' => 'Import Resource Type Categories',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'resource_types',
        'force_update' => 1,
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
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['resource_type_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'subject_importer';
  $feeds_importer->config = array(
    'name' => 'Database Subject Importer',
    'description' => 'Import Database Subjects',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'force_update' => 1,
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
        'input_format' => 'plain_text',
        'bundle' => 'database_subjects',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['subject_importer'] = $feeds_importer;

  return $export;
}
