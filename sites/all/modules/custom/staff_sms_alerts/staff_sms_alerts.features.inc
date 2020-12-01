<?php

/**
 * @file
 * staff_sms_alerts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_sms_alerts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
