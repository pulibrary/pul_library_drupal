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
    'content_type' => '',
    'description' => 'For Valva Collection',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Mendel Valva Sheet Music',
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
        'author' => '4516',
        'authorize' => 1,
        'bundle' => 'mendel_sheet_music',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'Unique ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Subtitle',
            'target' => 'field_mus_subtitle',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Scene Type',
            'target' => 'field_mus_valva_scene_type',
            'unique' => FALSE,
          ),
          4 => array(
            'autocreate' => 1,
            'source' => 'Composer',
            'target' => 'field_mus_sheetmusic_composer',
            'term_search' => '0',
          ),
          5 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Lyrisist',
            'target' => 'field_mus_lyricist',
            'term_search' => '0',
          ),
          6 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Arranger',
            'target' => 'field_mus_arranger',
            'term_search' => '0',
          ),
          7 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Publisher',
            'target' => 'field_mus_publisher',
            'term_search' => '0',
          ),
          8 => array(
            'language' => 'und',
            'source' => 'City',
            'target' => 'field_mus_publisher_citystate',
            'unique' => FALSE,
          ),
          9 => array(
            'autocreate' => 1,
            'source' => 'Publication Date',
            'target' => 'field_mus_publication_date',
            'term_search' => '0',
          ),
          10 => array(
            'language' => 'und',
            'source' => 'Plate Number',
            'target' => 'field_mus_plate_number',
            'unique' => FALSE,
          ),
          11 => array(
            'autocreate' => 1,
            'source' => 'Instrumentation',
            'target' => 'field_mus_sh_instrumentation',
            'term_search' => '0',
          ),
          12 => array(
            'language' => 'und',
            'source' => 'Notes',
            'target' => 'field_mus_longnote',
            'unique' => FALSE,
          ),
          13 => array(
            'autocreate' => 1,
            'source' => 'Box',
            'target' => 'field_mus_box_number',
            'term_search' => '0',
          ),
          14 => array(
            'language' => 'und',
            'source' => 'Folder',
            'target' => 'field_mus_folder_number',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_sheet_music'] = $feeds_importer;

  return $export;
}
