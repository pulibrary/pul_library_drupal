<?php

/**
 * @file
 * library_spaces.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_spaces_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_library_meeting_space_locations';
  $strongarm->value = 0;
  $export['comment_anonymous_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_library_meeting_space_locations';
  $strongarm->value = 1;
  $export['comment_default_mode_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_library_meeting_space_locations';
  $strongarm->value = '50';
  $export['comment_default_per_page_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_library_meeting_space_locations';
  $strongarm->value = 1;
  $export['comment_form_location_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library_meeting_space_locations';
  $strongarm->value = '1';
  $export['comment_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_library_meeting_space_locations';
  $strongarm->value = '1';
  $export['comment_preview_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_library_meeting_space_locations';
  $strongarm->value = 1;
  $export['comment_subject_field_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_library_meeting_space_locations';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_library_meeting_space_locations';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_library_meeting_space_locations';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__library_meeting_space_locations';
  $strongarm->value = array(
    'view_modes' => array(
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
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_library_meeting_space_locations';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_library_meeting_space_locations';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library_meeting_space_locations';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_library_meeting_space_locations';
  $strongarm->value = '1';
  $export['node_preview_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_library_meeting_space_locations';
  $strongarm->value = 0;
  $export['node_submitted_library_meeting_space_locations'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_library_meeting_space_locations_pattern';
  $strongarm->value = 'spaces/[node:title]';
  $export['pathauto_node_library_meeting_space_locations_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_library_meeting_space_locations';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_library_meeting_space_locations'] = $strongarm;

  return $export;
}
