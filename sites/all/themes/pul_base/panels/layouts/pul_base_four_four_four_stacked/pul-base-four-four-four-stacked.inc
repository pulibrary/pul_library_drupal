<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Four Four Four Stacked'),
  'icon' => 'pul-base-four-four-four-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'pul_base_four_four_four_stacked',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_pul_base_nine_three().
 */
function template_preprocess_pul_base_four_four_four_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--pul_base_four_four_four_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'pul_base_four_four_four_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'pul_base_four_four_four_stacked-region--' . drupal_clean_css_identifier($name);
  }
}
