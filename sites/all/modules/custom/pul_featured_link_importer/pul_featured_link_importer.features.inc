<?php
/**
 * @file
 * pul_featured_link_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_featured_link_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
