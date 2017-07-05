<?php
/**
 * @file
 * library_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
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
function library_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function library_news_image_default_styles() {
  $styles = array();

  // Exported image style: story.
  $styles['story'] = array(
    'label' => 'Story',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'upscale' => 0,
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
function library_news_node_info() {
  $items = array(
    'library_news_item' => array(
      'name' => t('Library News & Event Item'),
      'base' => 'node_content',
      'description' => t('A Library news item. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
