<?php
/**
 * @file
 * library_hours.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_hours_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_library_hours';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_library_hours';
  $strongarm->value = '[node:field-hrs-lib-calendar:name] - [node:field-pul-hours-term] - [node:field-hours-library-status] - [node:field-pul-hours-label]';
  $export['auto_entitylabel_pattern_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_library_hours';
  $strongarm->value = '';
  $export['auto_entitylabel_php_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_library_hours';
  $strongarm->value = '0';
  $export['comment_anonymous_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_library_hours';
  $strongarm->value = 1;
  $export['comment_default_mode_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_library_hours';
  $strongarm->value = '50';
  $export['comment_default_per_page_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_library_hours';
  $strongarm->value = 1;
  $export['comment_form_location_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library_hours';
  $strongarm->value = '1';
  $export['comment_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_library_hours';
  $strongarm->value = '1';
  $export['comment_preview_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_library_hours';
  $strongarm->value = 1;
  $export['comment_subject_field_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_library_hours';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_library_hours';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_library_hours';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__library_hours';
  $strongarm->value = array(
    'view_modes' => array(
      'brief_faq_display' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'database_description_only' => array(
        'custom_settings' => FALSE,
      ),
      'overridden_title_in_lists' => array(
        'custom_settings' => FALSE,
      ),
      'content_body_mode' => array(
        'custom_settings' => FALSE,
      ),
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'workbench_access' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_library_hours';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_library_hours';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library_hours';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_library_hours';
  $strongarm->value = '1';
  $export['node_preview_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_library_hours';
  $strongarm->value = 0;
  $export['node_submitted_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_library_hours_pattern';
  $strongarm->value = 'hours/[node:field-hrs-lib-calendar:name]/[node:nid]';
  $export['pathauto_node_library_hours_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_library_hours_calendars_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_library_hours_calendars_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_library_hours';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_library_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_library_hours_calendars';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.3',
  );
  $export['xmlsitemap_settings_taxonomy_term_library_hours_calendars'] = $strongarm;

  return $export;
}
