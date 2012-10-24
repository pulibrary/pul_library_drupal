<?php

/**
 * Implements hook_panels_layouts().
 */
function pul_development_theme_pul_development_theme_12_threecol_3_6_3_stacked_panels_layouts() {
  $items['pul_development_theme_12_threecol_3_6_3_stacked'] = array(
    'title' => t('Three column 3-6-3 stacked'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'pul_development_theme_12_threecol_3_6_3_stacked.png',
    'theme' => 'pul_development_theme_12_threecol_3_6_3_stacked',
    'admin css' => '../pul_development_theme_panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
