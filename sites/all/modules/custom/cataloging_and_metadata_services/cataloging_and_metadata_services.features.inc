<?php
/**
 * @file
 * cataloging_and_metadata_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cataloging_and_metadata_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
