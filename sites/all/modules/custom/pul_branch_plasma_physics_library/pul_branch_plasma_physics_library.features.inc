<?php

/**
 * @file
 * pul_branch_plasma_physics_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_branch_plasma_physics_library_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
