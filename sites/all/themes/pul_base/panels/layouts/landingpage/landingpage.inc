<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Landing Page'),
  'icon' => 'landingpage.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'landingpage',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'fourth' => t('Fourth'),
  ),
);

/**
 * Implements hook_preprocess_landingpage().
 */
function template_preprocess_landingpage(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--landingpage';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'landingpage-region';
    $variables['region_attributes_array'][$name]['class'][] = 'landingpage-region--' . drupal_clean_css_identifier($name);
  }
}
