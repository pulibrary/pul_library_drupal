<?php
/**
 * @file
 * linked_data_4_production.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linked_data_4_production_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
