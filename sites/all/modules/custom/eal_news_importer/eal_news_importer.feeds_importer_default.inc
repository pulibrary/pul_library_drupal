<?php
/**
 * @file
 * eal_news_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function eal_news_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'eal_feed_importer';
  $feeds_importer->config = array(
    'name' => 'EAL_Feed_importer',
    'description' => 'EAL Feeds',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'use_tidy' => FALSE,
        'sources' => array(
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'pubdate' => array(
            'name' => 'pubDate',
            'value' => 'pubDate',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'category' => array(
            'name' => 'category',
            'value' => 'category',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'content_encoded' => array(
            'name' => 'content:encoded',
            'value' => 'content:encoded',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'guid' => array(
            'name' => 'guid',
            'value' => 'guid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
        ),
        'context' => array(
          'value' => '/rss/channel/item',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '707',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'content_encoded',
            'target' => 'body',
            'format' => 'filtered_html',
          ),
          2 => array(
            'source' => 'pubdate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'library_news_item',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['eal_feed_importer'] = $feeds_importer;

  return $export;
}
