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
    'name' => 'pul_large_spotlight_graphic',
    'label' => 'pul_large_spotlight_graphic',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'pul_logo_file',
    'label' => 'pul_logo_file',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
  return $items;
}
