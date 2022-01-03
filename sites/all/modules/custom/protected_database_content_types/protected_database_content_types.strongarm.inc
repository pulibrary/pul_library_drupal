<?php

/**
 * @file
 * protected_database_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function protected_database_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cas_protected_db_resource';
  $strongarm->value = '0';
  $export['comment_anonymous_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ip_protected_db_resource';
  $strongarm->value = '0';
  $export['comment_anonymous_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cas_protected_db_resource';
  $strongarm->value = '1';
  $export['comment_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cas_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_default_mode_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ip_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_default_mode_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cas_protected_db_resource';
  $strongarm->value = '50';
  $export['comment_default_per_page_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ip_protected_db_resource';
  $strongarm->value = '50';
  $export['comment_default_per_page_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cas_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_form_location_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ip_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_form_location_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ip_protected_db_resource';
  $strongarm->value = '1';
  $export['comment_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cas_protected_db_resource';
  $strongarm->value = '1';
  $export['comment_preview_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ip_protected_db_resource';
  $strongarm->value = '1';
  $export['comment_preview_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cas_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_subject_field_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ip_protected_db_resource';
  $strongarm->value = 1;
  $export['comment_subject_field_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_cas_protected_db_resource';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ip_protected_db_resource';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_cas_protected_db_resource';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_ip_protected_db_resource';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_cas_protected_db_resource';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_ip_protected_db_resource';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cas_protected_db_resource';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
    ),
    'view_modes' => array(
      'brief_faq_display' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'content_body_mode' => array(
        'custom_settings' => FALSE,
      ),
      'database_description_only' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'overridden_title_in_lists' => array(
        'custom_settings' => TRUE,
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
  $export['field_bundle_settings_node__cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ip_protected_db_resource';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
    ),
    'view_modes' => array(
      'brief_faq_display' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'content_body_mode' => array(
        'custom_settings' => TRUE,
      ),
      'database_description_only' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'overridden_title_in_lists' => array(
        'custom_settings' => TRUE,
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
  $export['field_bundle_settings_node__ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cas_protected_db_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ip_protected_db_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cas_protected_db_resource';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ip_protected_db_resource';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cas_protected_db_resource';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ip_protected_db_resource';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cas_protected_db_resource';
  $strongarm->value = '1';
  $export['node_preview_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ip_protected_db_resource';
  $strongarm->value = '1';
  $export['node_preview_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cas_protected_db_resource';
  $strongarm->value = 0;
  $export['node_submitted_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ip_protected_db_resource';
  $strongarm->value = 0;
  $export['node_submitted_ip_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_cas_protected_db_resource_pattern';
  $strongarm->value = 'resource/[node:nid]';
  $export['pathauto_node_cas_protected_db_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ip_protected_db_resource_pattern';
  $strongarm->value = 'resource/restricted/[node:nid]';
  $export['pathauto_node_ip_protected_db_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_cas_protected_db_resource';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_cas_protected_db_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_ip_protected_db_resource';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_ip_protected_db_resource'] = $strongarm;

  return $export;
}
