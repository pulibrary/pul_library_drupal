<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Three Six Three Stacked'),
  'icon' => 'three-six-three-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'three_six_three_stacked',
  'css' => '../../../assets/public/styles/pul-base.styles.min.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'middle' => t('Middle'),
    'second' => t('Second'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_three_six_three_stacked().
 */
function template_preprocess_three_six_three_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--three_six_three_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'three_six_three_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'three_six_three_stacked-region--' . drupal_clean_css_identifier($name);
  }
}
