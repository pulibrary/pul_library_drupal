<?php

/**
 * @file
 * spotlight_content_types_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spotlight_content_types_and_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spotlight_content_types_and_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function spotlight_content_types_and_views_image_default_styles() {
  $styles = array();

  // Exported image style: pul_large_spotlight_graphic.
  $styles['pul_large_spotlight_graphic'] = array(
    'label' => 'pul_large_spotlight_graphic',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'height' => 294,
          'width' => 936,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pul_logo_file.
  $styles['pul_logo_file'] = array(
    'label' => 'pul_logo_file',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 551,
          'height' => '',
          'upscale' => 1,
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
function spotlight_content_types_and_views_node_info() {
  $items = array(
    'pul_landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('Landing Page for a Department or Unit in the Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pul_spotlight_graphic' => array(
      'name' => t('Spotlight Graphic'),
      'base' => 'node_content',
      'description' => t('Spotlight Graphics for a Homepage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
