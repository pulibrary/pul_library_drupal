<?php

/**
 * @file
 * library_hours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_hours_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_hours_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function library_hours_image_default_styles() {
  $styles = array();

  // Exported image style: hours-thumbnail.
  $styles['hours-thumbnail'] = array(
    'label' => 'hours-thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 95,
          'height' => 55,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function library_hours_node_info() {
  $items = array(
    'library_hours' => array(
      'name' => t('Library Hours'),
      'base' => 'node_content',
      'description' => t('Individual base hours for a library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
