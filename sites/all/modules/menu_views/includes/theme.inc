<?php

/**
 * @file
 * Theming hooks for the menu_views module.
 */

/**
 * Override theme_link().
 * Render a view inside a link (only menu items will have them, though).
 */
function menu_views_link($variables) {
  $menu_views = menu_views($variables);
  if ($menu_views->name && $menu_views->display) {
    $link = '';
    if ($variables['path'] != '<view>') {
      $link = '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
    }
    // Process the view
    $view_output = '';
    $view = views_get_view($menu_views->name);
    if ($view && $view->access($menu_views->display)) {
      $arguments = explode('/', $menu_views->tokenize_arguments());
      $view_output = $view->preview($menu_views->display, $arguments);
    }
    if (!empty($view)) {
      return $link . $view_output;
    }
  }
  // Call the original theme function for link.
  return theme('menu_views_link_default', $variables);
}
