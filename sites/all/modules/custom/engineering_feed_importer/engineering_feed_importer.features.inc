<?php
/**
 * @file
 * engineering_feed_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function engineering_feed_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
