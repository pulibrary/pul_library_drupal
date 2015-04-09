<?php

/**
 * Implements hook_preprocess_html().
 */
function pul_base_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  $pul_base_link_settings = array(
                          'resolvePrefix' => 'http://library.princeton.edu/resolve/lookup?url='
                           );

  drupal_add_js(array("pul_base_theme" => $pul_base_link_settings), 'setting');

}