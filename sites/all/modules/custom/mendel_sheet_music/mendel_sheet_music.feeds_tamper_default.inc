<?php
/**
 * @file
 * mendel_sheet_music.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mendel_sheet_music_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_sheet_music-arranger-explode';
  $feeds_tamper->importer = 'mendel_sheet_music';
  $feeds_tamper->source = 'Arranger';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_sheet_music-arranger-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_sheet_music-composer-explode';
  $feeds_tamper->importer = 'mendel_sheet_music';
  $feeds_tamper->source = 'Composer';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_sheet_music-composer-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_sheet_music-instrumentation-explode';
  $feeds_tamper->importer = 'mendel_sheet_music';
  $feeds_tamper->source = 'Instrumentation';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_sheet_music-instrumentation-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_sheet_music-lyrisist-explode';
  $feeds_tamper->importer = 'mendel_sheet_music';
  $feeds_tamper->source = 'Lyrisist';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_sheet_music-lyrisist-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mendel_sheet_music-publisher_city-explode';
  $feeds_tamper->importer = 'mendel_sheet_music';
  $feeds_tamper->source = 'Publisher City';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '&',
    'limit' => '',
    'real_separator' => '&',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['mendel_sheet_music-publisher_city-explode'] = $feeds_tamper;

  return $export;
}
