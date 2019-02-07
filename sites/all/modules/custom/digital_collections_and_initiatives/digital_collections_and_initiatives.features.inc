<?php

/**
 * @file
 * digital_collections_and_initiatives.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function digital_collections_and_initiatives_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
