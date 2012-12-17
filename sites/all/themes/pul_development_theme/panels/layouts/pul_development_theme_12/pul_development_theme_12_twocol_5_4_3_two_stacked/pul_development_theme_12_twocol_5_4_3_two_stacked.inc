<?php

/**
 * Implements hook_panels_layouts().
 */
function pul_development_theme_pul_development_theme_12_twocol_5_4_3_two_stacked_panels_layouts() {
  $items['pul_development_theme_12_twocol_5_4_3_two_stacked'] = array(
    'title' => t('Two column 5-4-3 Two Boxes - Stacked'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'pul_development_theme_12_twocol_5_4_3_two_stacked.png',
    'theme' => 'pul_development_theme_12_twocol_5_4_3_two_stacked',
    'admin css' => '../pul_development_theme_panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'left_top' => t('Left top'),
      'middle_top' => t('Middle top'),
      'right_top' => t('Right top'),
      'left_bottom' => t('Left bottom'),
      'middle_bottom' => t('Middle bottom'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
