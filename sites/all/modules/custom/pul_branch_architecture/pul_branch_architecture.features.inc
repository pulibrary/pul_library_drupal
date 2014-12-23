<?php
/**
 * @file
 * pul_branch_architecture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_branch_architecture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
