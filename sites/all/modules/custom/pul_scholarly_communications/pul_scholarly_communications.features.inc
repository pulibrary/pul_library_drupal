<?php
/**
 * @file
 * pul_scholarly_communications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_scholarly_communications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
