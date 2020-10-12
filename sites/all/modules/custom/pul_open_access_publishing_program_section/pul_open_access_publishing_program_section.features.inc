<?php

/**
 * @file
 * pul_open_access_publishing_program_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_open_access_publishing_program_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
