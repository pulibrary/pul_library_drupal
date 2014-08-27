<?php

/**
 * @file
 * Contains a pre-process hook for 'block'.
 */

/**
 * Implements hook_preprocess_block().
 */
function pul_base_preprocess_block(&$variables) {
  if ($variables['block']->delta == "main-menu") {
    $variables['attributes_array']['class'][] = 'centered-navigation-menu';
  }

}