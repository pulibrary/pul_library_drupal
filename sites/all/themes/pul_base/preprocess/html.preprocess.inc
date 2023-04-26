<?php

/**
 * Implements hook_preprocess_html().
 */
function pul_base_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  drupal_add_js(
    'https://v2.libanswers.com/load_chat.php?hash=0e8593aa5106c85b64bb91506c53806e', array('type' => 'external')
  );
  drupal_add_js(
    'https://v2.libanswers.com/load_chat.php?hash=b6a26755ec95a6ed065331dfb1298676', array('type' => 'external')
  );
  drupal_add_css(
    'https://use.typekit.net/gwb8hdb.css', array('type' => 'external')
  );
}
