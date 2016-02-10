<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Three Six Three'),
  'icon' => 'three-six-three.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'three_six_three',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'first' => t('First'),
    'middle' => t('Middle'),
    'second' => t('Second'),
  ),
);

/**
 * Implements hook_preprocess_three_nine().
 */
function template_preprocess_three_six_three(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--three_six_three';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'three_six_three-region';
    $variables['region_attributes_array'][$name]['class'][] = 'three_six_three-region--' . drupal_clean_css_identifier($name);
  }
}
