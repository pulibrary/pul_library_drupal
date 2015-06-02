<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Nine Three'),
  'icon' => 'pul-base-nine-three.png',
  'category' => t('Pul Content content layouts'),
  'theme' => 'pul_base_nine_three',
  'css' => '../../../css/pul-base.layouts.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
  ),
);

/**
 * Implements hook_preprocess_pul_base_nine_three().
 */
function template_preprocess_pul_base_nine_three(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--pul_base_nine_three';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'pul_base_nine_three-region';
    $variables['region_attributes_array'][$name]['class'][] = 'pul_base_nine_three-region--' . drupal_clean_css_identifier($name);
  }
}