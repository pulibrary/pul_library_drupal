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
drupal_add_library('system', 'ui.dialog');


function pul_development_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode($breadcrumb) . '</div>';
    return $output;
  }
}

function pul_development_theme_preprocess_region(&$vars) {
  $theme = alpha_get_theme();

  if ($vars['elements']['#region'] == 'content') {
    $vars['breadcrumb'] = $theme->page['breadcrumb'];
  }
}



// hacky way to rewrite menu html
/*
function pul_development_theme_link(&$variables) {
  if(($variables['path'] == 'hours') && isset($variables['options']['attributes']['class'][0])) { //only for menu items with class
    
    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-time"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'node/1907')) {

    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-user"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'node/3483')) {

    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-comment"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'node/1913')) {

    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-time"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'node/1912')) {

    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-envelope"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'node/1934')) {

    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-phone"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } elseif(($variables['path'] == 'http://libguides.princeton.edu') && ($variables['options']['menu_views']['mlid'] == 630)) {
    
    return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '><i class="icon-list-alt"></i>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  } else {
 
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . 
    drupal_attributes($variables['options']['attributes']) . '>' . 
    ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
  }
}
*/
