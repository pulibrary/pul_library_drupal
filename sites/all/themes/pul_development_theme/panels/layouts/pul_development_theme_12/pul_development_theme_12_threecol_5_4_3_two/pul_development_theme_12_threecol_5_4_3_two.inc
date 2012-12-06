<?php

/**
 * Implements hook_panels_layouts().
 */
function pul_development_theme_pul_development_theme_12_threecol_5_4_3_two_panels_layouts() {
  $items['pul_development_theme_12_threecol_5_4_3_two'] = array(
    'title' => t('Three column 5-4-3 Two Boxes'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'pul_development_theme_12_threecol_5_4_3_two.png',
    'theme' => 'pul_development_theme_12_threecol_5_4_3_two',
    'admin css' => '../pul_development_theme_panels_admin_12.css',
    'regions' => array(
      'left_top' => t('Left top'),
      'middle_top' => t('Middle top'),
      'right_top' => t('Right top'),
      'left_bottom' => t('Left bottom'),
      'middle_bottom' => t('Middle bottom'),
      'right_bottom' => t('Right bottom'),
    ),
  );

  return $items;
}
