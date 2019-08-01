<?php

/**
 * @file
 * pul_library_users.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pul_library_users_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'pul_library_staff_importer-email-convert_email_downcase';
  $feeds_tamper->importer = 'pul_library_staff_importer';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert Email Field to All Lowercase';
  $export['pul_library_staff_importer-email-convert_email_downcase'] = $feeds_tamper;

  return $export;
}
