<?php

/**
 * @file
 * preservation_office.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function preservation_office_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
