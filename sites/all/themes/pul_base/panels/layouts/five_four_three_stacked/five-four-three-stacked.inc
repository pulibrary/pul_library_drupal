<?php

/**
 * @file
 * Defines a 5-4-3 three column grid layout with top and bottom full
 * width regions.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Five Four Three Stacked'),
  'icon' => 'five-four-three-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'five_four_three_stacked',
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
 * Implements hook_preprocess_five_four_three_stacked().
 */
function template_preprocess_five_four_three_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--five_four_three_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'five_four_three_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'five_four_three_stacked-region--' . drupal_clean_css_identifier($name);
  }
}
