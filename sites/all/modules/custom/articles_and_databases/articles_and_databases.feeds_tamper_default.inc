<?php
/**
 * @file
 * articles_and_databases.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function articles_and_databases_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'db_title_override_importer-title-trim';
  $feeds_tamper->importer = 'db_title_override_importer';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['db_title_override_importer-title-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-active-convert_to_active_az_boolean';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'active';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '-1',
    'false_value' => '0',
    'match_case' => 0,
    'no_match' => 'true',
    'other_text' => '',
    'no_match_value' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['resource_list_importer-active-convert_to_active_az_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-body-find_replace_null_body';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'body';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['resource_list_importer-body-find_replace_null_body'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-coverdates-find_replace_null';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'coverDates';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace Null';
  $export['resource_list_importer-coverdates-find_replace_null'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-keywords-explode_database_keywords';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'keywords';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode Database Keywords';
  $export['resource_list_importer-keywords-explode_database_keywords'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-libwebcomp-convert_to_boolean';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'libwebcomp';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '-1',
    'false_value' => '',
    'match_case' => 0,
    'no_match' => 'null',
    'other_text' => '',
    'no_match_value' => NULL,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['resource_list_importer-libwebcomp-convert_to_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-locationaccess-find_replace_loc_access';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'locationAccess';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['resource_list_importer-locationaccess-find_replace_loc_access'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-longdescription-find_replace_null_longdesc';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'longDescription';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['resource_list_importer-longdescription-find_replace_null_longdesc'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-moreinformation-find_replace_null_moreinfo';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'moreInformation';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['resource_list_importer-moreinformation-find_replace_null_moreinfo'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-noproxy-convert_to_boolean';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'noProxy';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => '0',
    'false_value' => '-1',
    'match_case' => 0,
    'no_match' => 'true',
    'other_text' => '',
    'no_match_value' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['resource_list_importer-noproxy-convert_to_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-notes-find_replace_null_notes';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'notes';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'NULL',
    'replace' => '',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^NULL$/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['resource_list_importer-notes-find_replace_null_notes'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-url-html_entity_encode';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'html_entity_encode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity encode';
  $export['resource_list_importer-url-html_entity_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'resource_list_importer-url-trim';
  $feeds_tamper->importer = 'resource_list_importer';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['resource_list_importer-url-trim'] = $feeds_tamper;

  return $export;
}
