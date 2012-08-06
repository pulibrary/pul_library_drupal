<?php
/**
 * @file
 * pul_libraries_and_collections_landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_libraries_and_collections_landing_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
