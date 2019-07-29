<?php

/**
 * @file
 * pul_custom_user_page_variants.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_custom_user_page_variants_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
