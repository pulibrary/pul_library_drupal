<?php

/**
 * @file
 * engineering_feed_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function engineering_feed_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'engineering_blog_importer';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Import engineering blog',
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
    'import_on_create' => TRUE,
    'import_period' => 1800,
    'name' => 'Engineering Blog Importer',
    'parser' => array(
      'config' => array(
        'context' => array(
          'value' => '/rss/channel/item',
        ),
        'debug_mode' => 0,
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'sources' => array(
          'category' => array(
            'debug' => 0,
            'inner' => 0,
            'name' => 'category',
            'raw' => 0,
            'value' => 'category',
            'weight' => '6',
          ),
          'content_encoded' => array(
            'debug' => 0,
            'inner' => 0,
            'name' => 'content:encoded',
            'raw' => 0,
            'value' => 'content:encoded',
            'weight' => '4',
          ),
          'guid' => array(
            'debug' => 0,
            'inner' => 0,
            'name' => 'guid',
            'raw' => 0,
            'value' => 'guid',
            'weight' => '5',
          ),
          'pubdate' => array(
            'debug' => 0,
            'inner' => 0,
            'name' => 'pubDate',
            'raw' => 0,
            'value' => 'pubDate',
            'weight' => '2',
          ),
          'title' => array(
            'debug' => 0,
            'inner' => 0,
            'name' => 'title',
            'raw' => 0,
            'value' => 'title',
            'weight' => '1',
          ),
        ),
        'use_tidy' => 1,
      ),
      'plugin_key' => 'FeedsExXml',
    ),
    'process_in_background' => FALSE,
    'processor' => array(
      'config' => array(
        'author' => '471',
        'authorize' => 1,
        'bundle' => 'library_news_item',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'format' => 'filtered_html',
            'language' => 'und',
            'source' => 'content_encoded',
            'target' => 'body',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'pubdate',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'category',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['engineering_blog_importer'] = $feeds_importer;

  return $export;
}
