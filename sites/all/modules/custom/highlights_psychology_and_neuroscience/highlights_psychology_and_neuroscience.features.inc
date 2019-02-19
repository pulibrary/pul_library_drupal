<?php

/**
 * @file
 * highlights_psychology_and_neuroscience.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function highlights_psychology_and_neuroscience_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
