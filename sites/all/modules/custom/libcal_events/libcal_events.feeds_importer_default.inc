<?php

/**
 * @file
 * libcal_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function libcal_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'libcal_events_workshops';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Imports ICS feed from LibCal\'s Open Workshops calendar',
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
    'name' => 'LibCal Events - Workshops',
    'parser' => array(
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'skip_days' => NULL,
        'until_not_utc' => FALSE,
      ),
      'plugin_key' => 'DateiCalFeedsParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => '3557',
        'authorize' => 1,
        'bundle' => 'schemaorg_event',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'DESCRIPTION',
            'target' => 'field_schemaorg_description',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'DTSTART',
            'target' => 'field_schemaorg_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'DTEND',
            'target' => 'field_schemaorg_date:end',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'LOCATION',
            'target' => 'field_location',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'URL',
            'target' => 'field_event_url:url',
            'unique' => FALSE,
          ),
          7 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'CATEGORIES',
            'target' => 'field_event_type',
            'term_search' => '0',
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'unpublish',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['libcal_events_workshops'] = $feeds_importer;

  return $export;
}
