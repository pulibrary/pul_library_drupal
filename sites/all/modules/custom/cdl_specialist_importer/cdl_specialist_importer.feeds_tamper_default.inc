<?php

/**
 * @file
 * cdl_specialist_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cdl_specialist_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'cdl_specialist_import-netid-find_replace';
  $feeds_tamper->importer = 'cdl_specialist_import';
  $feeds_tamper->source = 'NetID';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'case_sensitive' => 0,
    'find' => '@princeton.edu',
    'func' => 'str_ireplace',
    'regex' => FALSE,
    'replace' => '',
    'whole' => 0,
    'word_boundaries' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['cdl_specialist_import-netid-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'cdl_specialist_import-profile_image-rewrite';
  $feeds_tamper->importer = 'cdl_specialist_import';
  $feeds_tamper->source = 'Profile Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://profilepics/[profile image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['cdl_specialist_import-profile_image-rewrite'] = $feeds_tamper;

  return $export;
}
