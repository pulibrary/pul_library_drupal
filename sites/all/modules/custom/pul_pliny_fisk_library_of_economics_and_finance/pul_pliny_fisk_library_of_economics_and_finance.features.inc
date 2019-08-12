<?php

/**
 * @file
 * pul_pliny_fisk_library_of_economics_and_finance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_pliny_fisk_library_of_economics_and_finance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
