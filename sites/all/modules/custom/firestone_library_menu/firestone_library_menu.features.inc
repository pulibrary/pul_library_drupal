<?php
/**
 * @file
 * firestone_library_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function firestone_library_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
