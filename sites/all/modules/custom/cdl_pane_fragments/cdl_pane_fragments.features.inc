<?php

/**
 * @file
 * cdl_pane_fragments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cdl_pane_fragments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}
