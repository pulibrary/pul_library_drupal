<?php
/**
 * @file
 * all_search_page_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function all_search_page_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
