<?php

/**
 * @file
 * pul_alerts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pul_alerts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_homepage_alert';
  $strongarm->value = '0';
  $export['comment_anonymous_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_homepage_alert';
  $strongarm->value = 1;
  $export['comment_default_mode_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_homepage_alert';
  $strongarm->value = '50';
  $export['comment_default_per_page_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_homepage_alert';
  $strongarm->value = 1;
  $export['comment_form_location_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_homepage_alert';
  $strongarm->value = '1';
  $export['comment_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_homepage_alert';
  $strongarm->value = '1';
  $export['comment_preview_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_homepage_alert';
  $strongarm->value = 1;
  $export['comment_subject_field_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_homepage_alert';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_homepage_alert';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_homepage_alert';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__homepage_alert';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
    ),
    'view_modes' => array(
      'brief_faq_display' => array(
        'custom_settings' => TRUE,
      ),
      'content_body_mode' => array(
        'custom_settings' => TRUE,
      ),
      'database_description_only' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'overridden_title_in_lists' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_homepage_alert';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_homepage_alert';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_homepage_alert';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_homepage_alert';
  $strongarm->value = '1';
  $export['node_preview_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_homepage_alert';
  $strongarm->value = 0;
  $export['node_submitted_homepage_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_homepage_alert_pattern';
  $strongarm->value = 'alerts/[node:workbench-access-sections]/[node:field-emergency-alert-dates:value]/[node:title]';
  $export['pathauto_node_homepage_alert_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_homepage_alert';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_homepage_alert'] = $strongarm;

  return $export;
}
