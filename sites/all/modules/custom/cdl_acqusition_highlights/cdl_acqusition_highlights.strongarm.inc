<?php
/**
 * @file
 * cdl_acqusition_highlights.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cdl_acqusition_highlights_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_acquisitions_highlights';
  $strongarm->value = '1';
  $export['comment_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_acquisitions_highlights';
  $strongarm->value = '0';
  $export['comment_anonymous_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_acquisitions_highlights';
  $strongarm->value = 1;
  $export['comment_default_mode_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_acquisitions_highlights';
  $strongarm->value = '50';
  $export['comment_default_per_page_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_acquisitions_highlights';
  $strongarm->value = 1;
  $export['comment_form_location_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_acquisitions_highlights';
  $strongarm->value = '1';
  $export['comment_preview_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_acquisitions_highlights';
  $strongarm->value = 1;
  $export['comment_subject_field_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_acquisitions_highlights';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_acquisitions_highlights';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_acquisitions_highlights';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_acquisitions_highlights';
  $strongarm->value = '1';
  $export['node_preview_acquisitions_highlights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_acquisitions_highlights';
  $strongarm->value = 0;
  $export['node_submitted_acquisitions_highlights'] = $strongarm;

  return $export;
}
