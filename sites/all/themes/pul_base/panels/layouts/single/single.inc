<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Single Stacked'),
  'icon' => 'single.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'single',
  'css' => '../../../assets/public/styles/pul-base.styles.min.css',
  'regions' => array(
    'top' => t('top'),
    'middle' => t('middle'),
    'bottom' => t('bottom'),
  ),
);

/**
 * Implements hook_preprocess_single().
 */
function template_preprocess_single(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--single';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'single-region';
    $variables['region_attributes_array'][$name]['class'][] = 'single-region--' . drupal_clean_css_identifier($name);
  }
}
