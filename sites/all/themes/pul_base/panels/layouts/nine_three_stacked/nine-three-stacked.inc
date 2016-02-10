<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Nine Three Stacked'),
  'icon' => 'nine-three-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'nine_three_stacked',
  'css' => '../../../assets/public/styles/pul-base.styles.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'second' => t('Second'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_pul_base_nine_three().
 */
function template_preprocess_nine_three_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--nine_three_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'nine_three_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'nine_three_stacked-region--' . drupal_clean_css_identifier($name);
  }
}
