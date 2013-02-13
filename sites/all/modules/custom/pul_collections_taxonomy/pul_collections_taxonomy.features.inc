<?php
/**
 * @file
 * pul_collections_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_collections_taxonomy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
