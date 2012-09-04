<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

// Call Some Basic Drupal Styles
// drupal_add_library calls do not seem to work
// in Omega's ./preocess/preprocess-html.inc file

drupal_add_library('system', 'ui.accordion');
drupal_add_library('system', 'ui.button');
drupal_add_library('system', 'ui.progressbar');


// hacky way to rewrite menu html
function pul_development_theme_link(&$variables) {
  if(($variables['path'] == 'hours') && isset($variables['options']['attributes']['class'][0])) { //only for menu items with class
    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-time"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } else {
 
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  }
}
