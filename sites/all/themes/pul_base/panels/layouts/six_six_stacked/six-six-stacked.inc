<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Six Six Stacked'),
  'icon' => 'six-six-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'six_six_stacked',
  'css' => '../../../assets/public/styles/pul-base.styles.min.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'second' => t('Second'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_six_six_stacked().
 */
function template_preprocess_six_six_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--six_six_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'six_six_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'six_six_stacked-region--' . drupal_clean_css_identifier($name);
  }
}
