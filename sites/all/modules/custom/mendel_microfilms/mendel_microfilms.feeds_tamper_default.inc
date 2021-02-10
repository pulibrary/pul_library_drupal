<?php

/**
 * @file
 * mendel_microfilms.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mendel_microfilms_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_microfilm_sbma-bc-explode';
  $feeds_tamper->importer = 'mendel_microfilm_sbma';
  $feeds_tamper->source = 'BC';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_microfilm_sbma-bc-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_microfilm_sbma-reel_name-explode';
  $feeds_tamper->importer = 'mendel_microfilm_sbma';
  $feeds_tamper->source = 'Reel Name';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => '/',
    'separator' => '/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_microfilm_sbma-reel_name-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_microfilm_sbma-shelfmark-explode';
  $feeds_tamper->importer = 'mendel_microfilm_sbma';
  $feeds_tamper->source = 'Shelfmark';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => '/',
    'separator' => '/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_microfilm_sbma-shelfmark-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_microfilm_sbmpa-shelfmark-explode';
  $feeds_tamper->importer = 'mendel_microfilm_sbmpa';
  $feeds_tamper->source = 'Shelfmark';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_microfilm_sbmpa-shelfmark-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_microfilm_walker_nielsen-composer-explode';
  $feeds_tamper->importer = 'mendel_microfilm_walker_nielsen';
  $feeds_tamper->source = 'Composer';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ';',
    'separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_microfilm_walker_nielsen-composer-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_uncat_microfilm-barcode_s_-explode';
  $feeds_tamper->importer = 'mendel_uncat_microfilm';
  $feeds_tamper->source = 'Barcode(s)';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_uncat_microfilm-barcode_s_-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_uncat_microfilm-composer___author___library-explode';
  $feeds_tamper->importer = 'mendel_uncat_microfilm';
  $feeds_tamper->source = 'Composer / Author / Library';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ' / ',
    'separator' => ' / ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_uncat_microfilm-composer___author___library-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mus_microfilm_levychant-calendar-explode';
  $feeds_tamper->importer = 'mus_microfilm_levychant';
  $feeds_tamper->source = 'Calendar';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mus_microfilm_levychant-calendar-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mus_microfilm_levychant-century-explode';
  $feeds_tamper->importer = 'mus_microfilm_levychant';
  $feeds_tamper->source = 'Century';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mus_microfilm_levychant-century-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mus_microfilm_levychant-reel__-explode';
  $feeds_tamper->importer = 'mus_microfilm_levychant';
  $feeds_tamper->source = 'Reel #';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ',',
    'separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mus_microfilm_levychant-reel__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mus_microfilm_misc_handel-year-explode';
  $feeds_tamper->importer = 'mus_microfilm_misc_handel';
  $feeds_tamper->source = 'Year';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ';',
    'separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mus_microfilm_misc_handel-year-explode'] = $feeds_tamper;

  return $export;
}
