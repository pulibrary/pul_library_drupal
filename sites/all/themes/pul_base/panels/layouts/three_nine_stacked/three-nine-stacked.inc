<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Three Nine Stacked'),
  'icon' => 'three-nine-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'three_nine_stacked',
  'css' => '../../../css/pul-base.layouts.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'second' => t('Second'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_three_nine().
 */
function template_preprocess_three_nine_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--three_nine_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'three_nine_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'three_nine_stacked-region--' . drupal_clean_css_identifier($name);
  }
}