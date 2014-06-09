<?php
/**
 * @file
 * ip_protected_resource_layouts_importer_roles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ip_protected_resource_layouts_importer_roles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
