<?php

/**
 * @file
 * feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'node';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import nodes from CSV file.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Node import',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'processor' => array(
      'config' => array(
        'author' => 0,
        'bundle' => 'article',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
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
        ),
        'update_existing' => 1,
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import users from CSV file.',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'direct' => FALSE,
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'User import',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'processor' => array(
      'config' => array(
        'bundle' => 'user',
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'roles' => array(),
        'status' => 1,
        'update_existing' => 0,
      ),
      'plugin_key' => 'FeedsUserProcessor',
    ),
    'update' => 0,
  );
  $export['user'] = $feeds_importer;

  return $export;
}
