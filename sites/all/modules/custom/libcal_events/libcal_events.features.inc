<?php

/**
 * @file
 * libcal_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function libcal_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function libcal_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
