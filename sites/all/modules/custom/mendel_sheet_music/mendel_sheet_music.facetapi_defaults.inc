<?php

/**
 * @file
 * mendel_sheet_music.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function mendel_sheet_music_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music::field_mus_publication_date';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = '';
  $facet->facet = 'field_mus_publication_date';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => '1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@mendel_valva_sheet_music::field_mus_publication_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music::field_mus_sh_instrumentation';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = '';
  $facet->facet = 'field_mus_sh_instrumentation';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => '1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@mendel_valva_sheet_music::field_mus_sh_instrumentation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music::field_mus_sheetmusic_composer';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = '';
  $facet->facet = 'field_mus_sheetmusic_composer';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '1',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '-1',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@mendel_valva_sheet_music::field_mus_sheetmusic_composer'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_arranger';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_arranger';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Arranger',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_arranger'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_arranger:name';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_arranger:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Arranger » Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_arranger:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_box_number';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_box_number';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Box Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_box_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_folder_number';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_folder_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Folder Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_folder_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_longnote';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_longnote';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Notes',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_longnote'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_lyricist';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_lyricist';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Lyricist',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_lyricist'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_lyricist:name';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_lyricist:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Lyricist » Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_lyricist:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_plate_number';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_plate_number';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Plate Number',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_plate_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_publication_date';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_publication_date';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'auto-submit-delay' => '1500',
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'name' => '',
    'nofollow' => 1,
    'prefix' => '',
    'range_advanced' => '',
    'range_simple' => 10,
    'show_expanded' => 0,
    'soft_limit' => '10',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '3',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-48',
      'display' => '-49',
      'indexed' => '-47',
    ),
    'suffix' => '',
    'title' => 'Publication Date',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_publication_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_publisher';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_publisher';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Publisher',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_publisher'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_publisher_citystate';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_publisher_citystate';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Publisher City &amp; State',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_publisher_citystate'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_sh_instrumentation';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_sh_instrumentation';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'auto-submit-delay' => '1500',
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'name' => '',
    'nofollow' => 1,
    'prefix' => '',
    'range_advanced' => '',
    'range_simple' => 10,
    'show_expanded' => 0,
    'soft_limit' => '10',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'suffix' => '',
    'title' => 'Instrumentation',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_sh_instrumentation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_sh_instrumentation:name';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_sh_instrumentation:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Instrumentation » Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_sh_instrumentation:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_sheetmusic_composer';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_sheetmusic_composer';
  $facet->enabled = TRUE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 0,
      'count' => 0,
      'display' => 'display',
      'indexed' => 0,
    ),
    'auto-submit-delay' => '1500',
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'name' => '',
    'nofollow' => 1,
    'prefix' => '',
    'range_advanced' => '',
    'range_simple' => 10,
    'show_expanded' => 0,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'suffix' => '',
    'title' => 'Composer',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_sheetmusic_composer'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_sheetmusic_composer:name';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_sheetmusic_composer:name';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Composer » Name',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_sheetmusic_composer:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_subtitle';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_subtitle';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Subtitle',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_subtitle'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:field_mus_valva_scene_type';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'field_mus_valva_scene_type';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Scene Type',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:field_mus_valva_scene_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:search_api_language';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Item language',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:search_api_url';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'search_api_url';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'URI',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:search_api_url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:title';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'Title',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@mendel_valva_sheet_music:block:url';
  $facet->searcher = 'search_api@mendel_valva_sheet_music';
  $facet->realm = 'block';
  $facet->facet = 'url';
  $facet->enabled = FALSE;
  $facet->hash = '0';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'display_count' => TRUE,
    'empty_behavior' => 'none',
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => 1,
    'show_expanded' => 0,
    'soft_limit' => 20,
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'title' => 'URL',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_links',
  );
  $export['search_api@mendel_valva_sheet_music:block:url'] = $facet;

  return $export;
}
