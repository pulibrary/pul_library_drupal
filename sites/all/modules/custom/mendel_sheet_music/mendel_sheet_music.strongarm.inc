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
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'brief_faq_display' => array(
        'custom_settings' => TRUE,
      ),
      'database_description_only' => array(
        'custom_settings' => TRUE,
      ),
      'overridden_title_in_lists' => array(
        'custom_settings' => TRUE,
      ),
      'content_body_mode' => array(
        'custom_settings' => TRUE,
      ),
      'featured_link_url' => array(
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
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
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
    'entity' => 'node',
    'bundle' => 'mendel_sheet_music',
    'info' => array(
      'label' => 'Mendel Sheet Music',
      'admin' => array(
        'path' => 'admin/structure/types/manage/%node_type',
        'real path' => 'admin/structure/types/manage/mendel-sheet-music',
        'bundle argument' => 4,
        'access arguments' => array(
          0 => 'administer content types',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'sioc:Item',
          1 => 'foaf:Document',
        ),
        'title' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'created' => array(
          'predicates' => array(
            0 => 'dc:date',
            1 => 'dc:created',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'changed' => array(
          'predicates' => array(
            0 => 'dc:modified',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'body' => array(
          'predicates' => array(
            0 => 'content:encoded',
          ),
        ),
        'uid' => array(
          'predicates' => array(
            0 => 'sioc:has_creator',
          ),
          'type' => 'rel',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'foaf:name',
          ),
        ),
        'comment_count' => array(
          'predicates' => array(
            0 => 'sioc:num_replies',
          ),
          'datatype' => 'xsd:integer',
        ),
        'last_activity' => array(
          'predicates' => array(
            0 => 'sioc:last_activity_date',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'field_mus_sheet_music_title' => array(
          'predicates' => array(),
        ),
        'field_mus_subtitle' => array(
          'predicates' => array(),
        ),
        'field_mus_sheetmusic_composer' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_box_number' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_folder_number' => array(
          'predicates' => array(),
        ),
        'field_mus_lyricist' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_arranger' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_publisher' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_publisher_citystate' => array(
          'predicates' => array(),
        ),
        'field_mus_publication_date' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_plate_number' => array(
          'predicates' => array(),
        ),
        'field_mus_sh_instrumentation' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_collection' => array(
          'predicates' => array(),
          'type' => 'rel',
        ),
        'field_mus_valva_scene_type' => array(
          'predicates' => array(),
        ),
        'field_mus_notes' => array(
          'predicates' => array(),
        ),
        'field_id_number' => array(
          'predicates' => array(),
        ),
        'field_mus_unique_id' => array(
          'predicates' => array(),
        ),
        'field_mus_longnote' => array(
          'predicates' => array(),
        ),
      ),
      'xmlsitemap' => array(
        'entity' => 'node',
        'bundle' => 'mendel_sheet_music',
        'status' => '0',
        'priority' => '0.5',
      ),
    ),
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_mendel_sheet_music'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_boxnumber';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_boxnumber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_composers';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_composers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheetmusic_instrumentation';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheetmusic_instrumentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_arranger';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_arranger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_date';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_lyricists';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_lyricists'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_mus_sheet_music_publisher';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_mus_sheet_music_publisher'] = $strongarm;

  return $export;
}
