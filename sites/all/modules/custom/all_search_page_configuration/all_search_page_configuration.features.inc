<?php
/**
 * @file
 * all_search_page_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function all_search_page_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
