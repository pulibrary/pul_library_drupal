<?php

/**
 * @file
 * library_buildings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_buildings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_library_buildings';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_library_buildings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_library_buildings';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_library_buildings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_library_buildings';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_library_buildings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_library_buildings_pattern';
  $strongarm->value = 'building/[node:nid]';
  $export['pathauto_node_library_buildings_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_library_buildings';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_library_buildings'] = $strongarm;

  return $export;
}
