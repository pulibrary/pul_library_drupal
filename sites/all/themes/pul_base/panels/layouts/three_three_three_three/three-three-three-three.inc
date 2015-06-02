<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Three Three Three Three'),
  'icon' => 'three-three-three-three.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'three_three_three_three',
  'css' => '../../../css/pul-base.layouts.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'fourth' => t('Fourth'),
  ),
);

/**
 * Implements hook_preprocess_pul_base_nine_three().
 */
function template_preprocess_three_three_three_three(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--three_three_three_three';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'three_three_three_three-region';
    $variables['region_attributes_array'][$name]['class'][] = 'three_three_three_three-region--' . drupal_clean_css_identifier($name);
  }
}