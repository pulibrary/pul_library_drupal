<?php

/**
 * @file
 * remove_old_users.features.inc
 */

/**
 * Implements hook_views_api().
 */
function remove_old_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
