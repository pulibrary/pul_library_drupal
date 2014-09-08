<?php

/**
 * Implements hook_preprocess_html().
 */
function pul_base_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  // Add $grddl_profile as link-tag.
  drupal_add_html_head_link(array(
    'rel' => 'old',
    'href' => "http://library.princeton.edu/old",
  ));

  $example_link_settings = array(
                          'myExampleLinkPath' => "/dogs",
                          'myExampleLinkTitle' => "dogs",
                          'resolvePrefix' => 'http://libwebprod.princeton.edu/resolve/lookup?url='
                           );

  drupal_add_js(array("pul_base_theme" => $example_link_settings), 'setting');

}