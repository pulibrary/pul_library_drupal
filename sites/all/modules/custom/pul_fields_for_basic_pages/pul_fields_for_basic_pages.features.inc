<?php

/**
 * @file
 * pul_fields_for_basic_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_fields_for_basic_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
