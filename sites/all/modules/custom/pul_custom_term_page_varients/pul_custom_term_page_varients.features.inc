<?php
/**
 * @file
 * pul_custom_term_page_varients.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_custom_term_page_varients_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
