<?php

/**
 * @file
 * microforms.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function microforms_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-selected-collections-and-ti.
  $menus['menu-selected-collections-and-ti'] = array(
    'menu_name' => 'menu-selected-collections-and-ti',
    'title' => 'Selected Microforms Collections',
    'description' => 'Microforms second menu',
  );
  // Exported menu: menu-selected-research-guides.
  $menus['menu-selected-research-guides'] = array(
    'menu_name' => 'menu-selected-research-guides',
    'title' => 'Selected Research Guides',
    'description' => 'Microforms Third Menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Microforms Third Menu');
  t('Microforms second menu');
  t('Selected Microforms Collections');
  t('Selected Research Guides');

  return $menus;
}
