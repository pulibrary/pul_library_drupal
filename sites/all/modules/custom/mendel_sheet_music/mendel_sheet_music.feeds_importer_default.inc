<?php
/**
 * @file
 * mendel_sheet_music.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mendel_sheet_music_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_sheet_music';
  $feeds_importer->config = array(
    'name' => 'Mendel Sheet Music',
    'description' => 'For Valva Collection',
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
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '4516',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Unique ID',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Subtitle',
            'target' => 'field_mus_subtitle',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Scene Type',
            'target' => 'field_mus_valva_scene_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Composer',
            'target' => 'field_mus_sheetmusic_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Lyrisist',
            'target' => 'field_mus_lyricist',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Arranger',
            'target' => 'field_mus_arranger',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Publisher',
            'target' => 'field_mus_publisher',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Publisher City',
            'target' => 'field_mus_publisher_citystate',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Publication Date',
            'target' => 'field_mus_publication_date',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Plate Number',
            'target' => 'field_mus_plate_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Instrumentation',
            'target' => 'field_mus_sh_instrumentation',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Box',
            'target' => 'field_mus_box_number',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Folder',
            'target' => 'field_mus_folder_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Notes',
            'target' => 'field_mus_longnote',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mendel_sheet_music',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mendel_sheet_music'] = $feeds_importer;

  return $export;
}
