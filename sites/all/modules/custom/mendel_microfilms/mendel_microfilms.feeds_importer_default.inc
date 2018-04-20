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
    'name' => 'Mendel Microfilm Scheide Bach MA',
    'description' => 'For Scheide Bach Manuscript Archive Microfilm - Reel 1466',
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
            'source' => 'BWV',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Occasion',
            'target' => 'field_mus_scheide_occasion',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'BC',
            'target' => 'field_mus_secondary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Shelfmark',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Reel Name',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_microfilm_sbma'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_sbmpa';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Scheide Bach MPA',
    'description' => 'For Scheide Bach Manuscript Photographic Archive Microfilm',
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
            'source' => 'BWV',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'BC',
            'target' => 'field_mus_secondary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Occasion',
            'target' => 'field_mus_scheide_occasion',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Reel Name',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Shelfmark',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_microfilm_sbmpa'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_contarini';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Walker Contarini',
    'description' => 'For Walker - Contarini Microfilm',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Biblioteca Marciana Catalog Number',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Date',
            'target' => 'field_mus_year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_microfilm_walker_contarini'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_nielsen';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Walker Nielsen',
    'description' => 'For Walker - Nielson Microfilm',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Order',
            'target' => 'field_mus_reel_name_enumeration',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Fog and Schousboe Number',
            'target' => 'field_mus_primary_catalog_no',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_microfilm_walker_nielsen'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_microfilm_walker_opera_seria';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Walker Opera Seria',
    'description' => 'For Opera Seria Microfilm',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Date',
            'target' => 'field_mus_year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_microfilm_walker_opera_seria'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mendel_uncat_microfilm';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Uncatalogued',
    'description' => 'For microfilm that has not been cataloged yet',
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
            'source' => 'Uncat Title',
            'target' => 'field_mus_uncat_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Description',
            'target' => 'field_mus_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Barcode(s)',
            'target' => 'field_mus_barcode',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Composer / Author / Library',
            'target' => 'field_mus_uncat_composer',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mendel_uncat_microfilm'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mus_microfilm_levychant';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Levy Chant',
    'description' => 'For Kenneth Levy Chant collection microfilm - Reel 1474',
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
            'source' => 'Manuscript Type',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Century',
            'target' => 'field_mus_levy_century',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Country',
            'target' => 'field_mus_levy_country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'City/Region',
            'target' => 'field_mus_levy_cityregion',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Holding Library',
            'target' => 'field_mus_holding_library',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Calendar',
            'target' => 'field_mus_levy_calendar',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Folio',
            'target' => 'field_mus_levy_folio',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Shelf #',
            'target' => 'field_mus_micro_snm',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mus_microfilm_levychant'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mus_microfilm_misc_handel';
  $feeds_importer->config = array(
    'name' => 'Mendel Microfilm Misc Handel',
    'description' => 'For misc. Handel Microfilm',
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
            'source' => 'Microfilm #',
            'target' => 'field_mus_microfilm_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Reel #',
            'target' => 'field_mus_reel_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Music Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Composer',
            'target' => 'field_mus_microfilm_composer',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Description',
            'target' => 'field_mus_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Year',
            'target' => 'field_mus_year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Holding Library',
            'target' => 'field_mus_holding_library',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Notes',
            'target' => 'field_mus_notes',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mus_mendel_microfilm',
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
  $export['mus_microfilm_misc_handel'] = $feeds_importer;

  return $export;
}
