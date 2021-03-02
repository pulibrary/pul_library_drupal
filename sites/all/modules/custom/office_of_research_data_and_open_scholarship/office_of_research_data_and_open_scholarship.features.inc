<?php

/**
 * @file
 * office_of_research_data_and_open_scholarship.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function office_of_research_data_and_open_scholarship_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
