<?php

/**
 * Implements hook_panels_layouts().
 */
function pul_development_theme_pul_development_theme_12_onecol_12_stacked_panels_layouts() {
  $items['pul_development_theme_12_onecol_12_stacked'] = array(
    'title' => t('One Column stacked'),
    'category' => t('Omega: 12 Column Grid'),
    'icon' => 'pul_development_theme_12_onecol_12_stacked.png',
    'theme' => 'pul_development_theme_12_onecol_12_stacked',
    'admin css' => '../pul_development_theme_panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
