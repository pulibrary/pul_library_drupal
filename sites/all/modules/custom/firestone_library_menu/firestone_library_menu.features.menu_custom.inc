<?php
/**
 * @file
 * firestone_library_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function firestone_library_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-branch---firestone.
  $menus['menu-branch---firestone'] = array(
    'menu_name' => 'menu-branch---firestone',
    'title' => 'Branch - Firestone',
    'description' => 'Firestone Library Menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Branch - Firestone');
  t('Firestone Library Menu');

  return $menus;
}
