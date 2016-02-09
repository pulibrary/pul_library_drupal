<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Three Nine'),
  'icon' => 'three-nine.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'three_nine',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
  ),
);

/**
 * Implements hook_preprocess_three_nine().
 */
function template_preprocess_three_nine(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--three_nine';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'three_nine-region';
    $variables['region_attributes_array'][$name]['class'][] = 'three_nine-region--' . drupal_clean_css_identifier($name);
  }
}
