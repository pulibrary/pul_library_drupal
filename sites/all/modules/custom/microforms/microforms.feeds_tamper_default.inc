<?php
/**
 * @file
 * microforms.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function microforms_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'newspapers_for_microforms-state-convert_case';
  $feeds_tamper->importer = 'newspapers_for_microforms';
  $feeds_tamper->source = 'state';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['newspapers_for_microforms-state-convert_case'] = $feeds_tamper;

  return $export;
}
