<?php
/**
 * @file
 * microforms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function microforms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_microforms_newspapers';
  $strongarm->value = '0';
  $export['comment_anonymous_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_microforms_newspapers';
  $strongarm->value = 1;
  $export['comment_default_mode_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_microforms_newspapers';
  $strongarm->value = '50';
  $export['comment_default_per_page_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_microforms_newspapers';
  $strongarm->value = 1;
  $export['comment_form_location_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_microforms_newspapers';
  $strongarm->value = '1';
  $export['comment_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_microforms_newspapers';
  $strongarm->value = '1';
  $export['comment_preview_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_microforms_newspapers';
  $strongarm->value = 1;
  $export['comment_subject_field_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__microforms_newspapers';
  $strongarm->value = array(
    'view_modes' => array(
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
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_microforms_newspapers';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_microforms_newspapers';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_microforms_newspapers';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_microforms_newspapers';
  $strongarm->value = '1';
  $export['node_preview_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_microforms_newspapers';
  $strongarm->value = 0;
  $export['node_submitted_microforms_newspapers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_microforms_newspapers_pattern';
  $strongarm->value = 'collections/microforms/newspapers/[node:title]';
  $export['pathauto_node_microforms_newspapers_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_newspaper_cities_pattern';
  $strongarm->value = 'collections/microforms/newspapers/cities/[term:name]';
  $export['pathauto_taxonomy_term_newspaper_cities_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_newspaper_countries_pattern';
  $strongarm->value = 'collections/microforms/newspapers/countries/[term:name]';
  $export['pathauto_taxonomy_term_newspaper_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_newspaper_us_states_pattern';
  $strongarm->value = 'collections/microforms/newspapers/states/[term:name]';
  $export['pathauto_taxonomy_term_newspaper_us_states_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-selected-collections-and-ti';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-selected-collections-and-ti'] = $strongarm;

  return $export;
}
