<?php

function pul_development_theme_alpha_preprocess_region(&$vars) {
  $theme = alpha_get_theme();

  if ($vars['elements']['#region'] == 'content') {
    $vars['breadcrumb'] = $theme->page['breadcrumb'];
  }
}