<?php
/**
 * @file
 * pul_library_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_library_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
