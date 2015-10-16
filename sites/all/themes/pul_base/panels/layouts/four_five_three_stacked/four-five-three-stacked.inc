<?php

/**
 * @file
 * Defines a 4-5-3 three column grid layout with top and bottom full
 * width regions.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Four Five Three Stacked'),
  'icon' => 'four-five-three-stacked.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'four_five_three_stacked',
  'css' => '../../../css/pul-base.layouts.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'bottom' => t('Bottom'),
  ),
);

/**
 * Implements hook_preprocess_four_five_three_stacked().
 */
function template_preprocess_four_five_three_stacked(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--four_five_three_stacked';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'four_five_three_stacked-region';
    $variables['region_attributes_array'][$name]['class'][] = 'four_five_three_stacked-region--' . drupal_clean_css_identifier($name);
  }
}