<?php

/**
 * @file
 * pul_mendel_music_library_branch_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_mendel_music_library_branch_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
