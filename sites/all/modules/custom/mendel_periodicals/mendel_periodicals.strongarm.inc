<?php

/**
 * @file
 * mendel_periodicals.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mendel_periodicals_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mendel_periodical';
  $strongarm->value = '0';
  $export['comment_anonymous_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mendel_periodical';
  $strongarm->value = 1;
  $export['comment_default_mode_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mendel_periodical';
  $strongarm->value = '50';
  $export['comment_default_per_page_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mendel_periodical';
  $strongarm->value = 1;
  $export['comment_form_location_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mendel_periodical';
  $strongarm->value = '1';
  $export['comment_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mendel_periodical';
  $strongarm->value = '1';
  $export['comment_preview_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mendel_periodical';
  $strongarm->value = 1;
  $export['comment_subject_field_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_mendel_periodical';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_mendel_periodical';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_mendel_periodical';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mendel_periodical';
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
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_node__mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mendel_periodical';
  $strongarm->value = array();
  $export['menu_options_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mendel_periodical';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mendel_periodical';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mendel_periodical';
  $strongarm->value = '1';
  $export['node_preview_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mendel_periodical';
  $strongarm->value = 0;
  $export['node_submitted_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_mendel_periodical_pattern';
  $strongarm->value = '';
  $export['pathauto_node_mendel_periodical_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mendel_periodical_location_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mendel_periodical_location_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_mendel_periodical';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_mendel_periodical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mendel_periodical_location';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mendel_periodical_location'] = $strongarm;

  return $export;
}
