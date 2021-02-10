<?php

/**
 * @file
 * mendel_sheet_music.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mendel_sheet_music_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_mendel_sheet_music';
  $strongarm->value = '';
  $export['auto_entitylabel_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_mendel_sheet_music';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_mendel_sheet_music';
  $strongarm->value = '';
  $export['auto_entitylabel_php_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mendel_sheet_music';
  $strongarm->value = '0';
  $export['comment_anonymous_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mendel_sheet_music';
  $strongarm->value = 1;
  $export['comment_default_mode_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mendel_sheet_music';
  $strongarm->value = '50';
  $export['comment_default_per_page_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mendel_sheet_music';
  $strongarm->value = 1;
  $export['comment_form_location_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mendel_sheet_music';
  $strongarm->value = '1';
  $export['comment_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mendel_sheet_music';
  $strongarm->value = '1';
  $export['comment_preview_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mendel_sheet_music';
  $strongarm->value = 1;
  $export['comment_subject_field_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_mendel_sheet_music';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_mendel_sheet_music';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_mendel_sheet_music';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mendel_sheet_music';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
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
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured_link_url' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
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
  $export['field_bundle_settings_node__mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mendel_sheet_music';
  $strongarm->value = array();
  $export['menu_options_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mendel_sheet_music';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mendel_sheet_music';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mendel_sheet_music';
  $strongarm->value = '1';
  $export['node_preview_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mendel_sheet_music';
  $strongarm->value = 0;
  $export['node_submitted_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_mendel_sheet_music';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_boxnumber';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_boxnumber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_composers';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_composers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_instrumentation';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_instrumentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_arranger';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_arranger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_date';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_lyricists';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_lyricists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_publisher';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_publisher'] = $strongarm;

  return $export;
}
