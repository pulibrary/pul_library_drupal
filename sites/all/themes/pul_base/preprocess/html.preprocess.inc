<?php

/**
 * Implements hook_preprocess_html().
 */
function pul_base_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  $pul_base_link_settings = array(
                          'resolvePrefix' => 'https://library.princeton.edu/resolve/lookup?url='
                           );

  drupal_add_js(array("pul_base_theme" => $pul_base_link_settings), 'setting');
  drupal_add_js(
    'https://v2.libanswers.com/load_chat.php?hash=e875b9ce5206b1a7eca9952d52a20543', array('type' => 'external')
  );
  drupal_add_css(
    'https://use.typekit.net/gwb8hdb.css', array('type' => 'external')
  );
}
