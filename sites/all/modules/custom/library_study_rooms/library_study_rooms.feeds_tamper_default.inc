<?php

/**
 * @file
 * library_study_rooms.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function library_study_rooms_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'study_room_importer-room_numbers-explode';
  $feeds_tamper->importer = 'study_room_importer';
  $feeds_tamper->source = 'Room Numbers';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'limit' => '',
    'real_separator' => ' // ',
    'separator' => '%s//%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['study_room_importer-room_numbers-explode'] = $feeds_tamper;

  return $export;
}
