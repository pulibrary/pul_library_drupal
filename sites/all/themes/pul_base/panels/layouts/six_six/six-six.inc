<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Six Six'),
  'icon' => 'six-six.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'six_six',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
  ),
);

/**
 * Implements hook_preprocess_six_six().
 */
function template_preprocess_six_six(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--six_six';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'six_six-region';
    $variables['region_attributes_array'][$name]['class'][] = 'six_six-region--' . drupal_clean_css_identifier($name);
  }
}
