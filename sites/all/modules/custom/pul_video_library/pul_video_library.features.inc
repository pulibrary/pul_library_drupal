<?php
/**
 * @file
 * pul_video_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pul_video_library_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pul_video_library_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_paragraphs_info().
 */
function pul_video_library_paragraphs_info() {
  $items = array(
    'media_object' => array(
      'name' => 'Media Object',
      'bundle' => 'media_object',
      'locked' => '1',
    ),
  );
  return $items;
}
