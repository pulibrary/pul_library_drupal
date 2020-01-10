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
    'name' => 'LibCal Events - Workshops',
    'description' => 'Imports ICS feed from LibCal\'s Open Workshops calendar',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'cache_http_result' => TRUE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '3557',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_schemaorg_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'DTSTART',
            'target' => 'field_schemaorg_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'DTEND',
            'target' => 'field_schemaorg_date:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'LOCATION',
            'target' => 'field_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'URL',
            'target' => 'field_event_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'CATEGORIES',
            'target' => 'field_event_type',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'schemaorg_event',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['libcal_events_workshops'] = $feeds_importer;

  return $export;
}
