<?php

/**
 * Implements hook_preprocess_page().
 */
function rbsc_preprocess_page(&$variables) {

  // Allow a region-specific template to override region--navigation.
  // if (strpos($variables['region'], 'navigation') === 0) {
  //   
  //   array_unshift($variables['theme_hook_suggestions'], 'region__navigation');
  // }

  // if (strpos($variables['region'], 'branding') === 0) {
  //   array_unshift($variables['theme_hook_suggestions'], 'region__branding');
  // }

  if (strpos($variables['region'], 'highlighted') === 0) {
    array_unshift($variables['theme_hook_suggestions'], 'region__highlighted');
  }

  // Use BEM syntax for the modifier class.
  $css_region_name = drupal_clean_css_identifier($variables['region']);
  $variables['classes_array'] = preg_replace('/^region-' . $css_region_name . '$/', 'l-region--' . $css_region_name, $variables['classes_array']);
  // Use the prefix "l-" on region class names as described in SMACSS.
  $variables['classes_array'] = preg_replace('/^region$/', 'l-region', $variables['classes_array']);
}
