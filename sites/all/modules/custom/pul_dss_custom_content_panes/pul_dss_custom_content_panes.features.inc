<?php

/**
 * @file
 * pul_dss_custom_content_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_dss_custom_content_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}
