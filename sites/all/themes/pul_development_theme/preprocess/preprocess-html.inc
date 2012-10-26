<?php
function pul_development_theme_alpha_preprocess_html(&$variables) {
  // Add information about the number of sidebars.
 

  // This isn't contextual node_view and term_view are global settings, need to find a toggle point for the variants of those 
  $nine_three_panels = array(
    "page-databases_landing_page",
    //"node_view",
    //"term_view",
  );

  $page_manager_data = page_manager_get_current_page();
  if (!empty($page_manager_data)) {
    if(in_array($page_manager_data['name'],$nine_three_panels)) {
      $variables['attributes_array']['class'][] = 'one-sidebar sidebar-second';
    }
  } elseif (!empty($variables['page']['content']['content']['sidebar_first']) && !empty($variables['page']['content']['content']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'two-sidebars sidebar-first sidebar-second';
  }
  elseif (!empty($variables['page']['content']['content']['sidebar_first'])) {
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-first';
  }
  elseif (!empty($variables['page']['content']['content']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-second';
  }
  else {
    $variables['attributes_array']['class'][] = 'no-sidebars';
  }
  

}
