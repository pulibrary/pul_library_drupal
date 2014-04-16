<?php

/**
 * Implements hook_panels_layouts().
 */
function pul_development_theme_pul_development_theme_12_twocol_9_3_stacked_panels_layouts() {
  $items['pul_development_theme_12_twocol_9_3_stacked'] = array(
    'title' => t('Two Column 9-3 stacked'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'pul_development_theme_12_twocol_9_3_stacked.png',
    'theme' => 'pul_development_theme_12_twocol_9_3_stacked',
    'admin css' => '../pul_development_theme_panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
