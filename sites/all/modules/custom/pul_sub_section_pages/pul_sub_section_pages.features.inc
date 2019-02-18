<?php

/**
 * @file
 * pul_sub_section_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_sub_section_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
