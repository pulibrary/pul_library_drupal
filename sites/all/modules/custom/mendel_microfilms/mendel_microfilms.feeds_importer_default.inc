<?php

/**
 * @file
 * mendel_microfilms.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mendel_microfilms_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_sbma';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Scheide Bach Manuscript Archive Microfilm - Reel 1466',
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
    'name' => 'Mendel Microfilm Scheide Bach MA',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'BWV',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Occasion',
            'target' => 'field_mus_scheide_occasion',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'BC',
            'target' => 'field_mus_secondary_catalog_no',
            'unique' => FALSE,
          ),
          7 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Shelfmark',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Reel Name',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_microfilm_sbma'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_sbmpa';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Scheide Bach Manuscript Photographic Archive Microfilm',
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
    'name' => 'Mendel Microfilm Scheide Bach MPA',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'BWV',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'BC',
            'target' => 'field_mus_secondary_catalog_no',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Occasion',
            'target' => 'field_mus_scheide_occasion',
            'unique' => FALSE,
          ),
          6 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Reel Name',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'Shelfmark',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_microfilm_sbmpa'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_contarini';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Walker - Contarini Microfilm',
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
    'name' => 'Mendel Microfilm Walker Contarini',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          3 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Biblioteca Marciana Catalog Number',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Date',
            'target' => 'field_mus_year',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_microfilm_walker_contarini'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_nielsen';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Walker - Nielson Microfilm',
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
    'name' => 'Mendel Microfilm Walker Nielsen',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Order',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Fog and Schousboe Number',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
          ),
          7 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_microfilm_walker_nielsen'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_opera_seria';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Opera Seria Microfilm',
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
    'name' => 'Mendel Microfilm Walker Opera Seria',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          3 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Date',
            'target' => 'field_mus_year',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_microfilm_walker_opera_seria'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_uncat_microfilm';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For microfilm that has not been cataloged yet',
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
    'name' => 'Mendel Microfilm Uncatalogued',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Uncat Title',
            'target' => 'field_mus_uncat_title',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Description',
            'target' => 'field_mus_description',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Barcode(s)',
            'target' => 'field_mus_barcode',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Composer / Author / Library',
            'target' => 'field_mus_uncat_composer',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mendel_uncat_microfilm'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mus_microfilm_levychant';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For Kenneth Levy Chant collection microfilm - Reel 1474',
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
    'name' => 'Mendel Microfilm Levy Chant',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Manuscript Type',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Century',
            'target' => 'field_mus_levy_century',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Country',
            'target' => 'field_mus_levy_country',
            'unique' => FALSE,
          ),
          5 => array(
            'language' => 'und',
            'source' => 'City/Region',
            'target' => 'field_mus_levy_cityregion',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Holding Library',
            'target' => 'field_mus_holding_library',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'Calendar',
            'target' => 'field_mus_levy_calendar',
            'unique' => FALSE,
          ),
          10 => array(
            'language' => 'und',
            'source' => 'Folio',
            'target' => 'field_mus_levy_folio',
            'unique' => FALSE,
          ),
          11 => array(
            'language' => 'und',
            'source' => 'Shelf #',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mus_microfilm_levychant'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mus_microfilm_misc_handel';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'For misc. Handel Microfilm',
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
    'name' => 'Mendel Microfilm Misc Handel',
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
        'bundle' => 'mus_mendel_microfilm',
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
            'autocreate' => 0,
            'language' => 'und',
            'source' => 'Collection',
            'target' => 'field_mus_collection',
            'term_search' => '0',
          ),
          2 => array(
            'language' => 'und',
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
          ),
          3 => array(
            'language' => 'und',
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
          4 => array(
            'language' => 'und',
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'autocreate' => 1,
            'language' => 'und',
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
          ),
          6 => array(
            'language' => 'und',
            'source' => 'Description',
            'target' => 'field_mus_description',
            'unique' => FALSE,
          ),
          7 => array(
            'language' => 'und',
            'source' => 'Year',
            'target' => 'field_mus_year',
            'unique' => FALSE,
          ),
          8 => array(
            'language' => 'und',
            'source' => 'Holding Library',
            'target' => 'field_mus_holding_library',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '1',
        'update_non_existent' => 'delete',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['mus_microfilm_misc_handel'] = $feeds_importer;

  return $export;
}
