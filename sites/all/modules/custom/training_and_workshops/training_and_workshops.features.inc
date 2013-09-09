<?php
/**
 * @file
 * training_and_workshops.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function training_and_workshops_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function training_and_workshops_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function training_and_workshops_node_info() {
  $items = array(
    'training_series' => array(
      'name' => t('Training Series'),
      'base' => 'node_content',
      'description' => t('Creates a training series or course - defines the title and description only.  Individual Training Sessions can be created, separately and the series would then be added to the session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_session' => array(
      'name' => t('Training Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
