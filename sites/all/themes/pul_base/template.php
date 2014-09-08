<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * pul_base theme.
 */


/**
 * Implements hook_form_alter.
 *
 */

function pul_base_form_alter(&$form, &$form_state, $form_id) {
  // Remove elements from the page.
  if($form_id == 'allsearch_block_form') {
    #print_r($form_state);
    if(drupal_is_front_page()) {
      $suffix = '<div class="homepage-tab-form-message"><a onclick="_gaq.push([\'_trackEvent\', \'Tab Link\', \'Main Catalog\', \'All Tab\']);" title="Go to the Main Catalog" href="http://catalog.princeton.edu/">Main Catalog</a></div>';
      $form['#suffix'] = $suffix; 
    }
  }
}