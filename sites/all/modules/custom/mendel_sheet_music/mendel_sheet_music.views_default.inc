<?php
/**
 * @file
 * mendel_sheet_music.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mendel_sheet_music_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mendel_valva_sheet_music_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_mendel_valva_sheet_music';
  $view->human_name = 'Mendel Valva Sheet Music Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Valva Sheet Music Collection';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '100, 300, 500, 750, 1000';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'More information can be found about a piece by clicking on the Title. This will show complete information such as instrumentation, lyricist, notes, etc.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No Results Found</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Subtitle */
  $handler->display->display_options['fields']['field_mus_subtitle']['id'] = 'field_mus_subtitle';
  $handler->display->display_options['fields']['field_mus_subtitle']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_subtitle']['field'] = 'field_mus_subtitle';
  $handler->display->display_options['fields']['field_mus_subtitle']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Composer */
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['id'] = 'field_mus_sheetmusic_composer';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['field'] = 'field_mus_sheetmusic_composer';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['bypass_access'] = 0;
  /* Field: Indexed Content: Arranger */
  $handler->display->display_options['fields']['field_mus_arranger']['id'] = 'field_mus_arranger';
  $handler->display->display_options['fields']['field_mus_arranger']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_arranger']['field'] = 'field_mus_arranger';
  $handler->display->display_options['fields']['field_mus_arranger']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_arranger']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_arranger']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_arranger']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_arranger']['bypass_access'] = 0;
  /* Field: Indexed Content: Lyricist */
  $handler->display->display_options['fields']['field_mus_lyricist']['id'] = 'field_mus_lyricist';
  $handler->display->display_options['fields']['field_mus_lyricist']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_lyricist']['field'] = 'field_mus_lyricist';
  $handler->display->display_options['fields']['field_mus_lyricist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_lyricist']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_lyricist']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_mus_lyricist']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_lyricist']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher */
  $handler->display->display_options['fields']['field_mus_publisher']['id'] = 'field_mus_publisher';
  $handler->display->display_options['fields']['field_mus_publisher']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publisher']['field'] = 'field_mus_publisher';
  $handler->display->display_options['fields']['field_mus_publisher']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_publisher']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_publisher']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_publisher']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher City &amp; State */
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['id'] = 'field_mus_publisher_citystate';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['field'] = 'field_mus_publisher_citystate';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['label'] = 'Publisher City & State';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Publication Date */
  $handler->display->display_options['fields']['field_mus_publication_date']['id'] = 'field_mus_publication_date';
  $handler->display->display_options['fields']['field_mus_publication_date']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publication_date']['field'] = 'field_mus_publication_date';
  $handler->display->display_options['fields']['field_mus_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_publication_date']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_publication_date']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_publication_date']['bypass_access'] = 0;
  /* Field: Indexed Content: Plate Number */
  $handler->display->display_options['fields']['field_mus_plate_number']['id'] = 'field_mus_plate_number';
  $handler->display->display_options['fields']['field_mus_plate_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_plate_number']['field'] = 'field_mus_plate_number';
  $handler->display->display_options['fields']['field_mus_plate_number']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Scene Type */
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['id'] = 'field_mus_valva_scene_type';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['field'] = 'field_mus_valva_scene_type';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Instrumentation */
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['id'] = 'field_mus_sh_instrumentation';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['field'] = 'field_mus_sh_instrumentation';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['bypass_access'] = 0;
  /* Field: Indexed Content: Notes */
  $handler->display->display_options['fields']['field_mus_longnote']['id'] = 'field_mus_longnote';
  $handler->display->display_options['fields']['field_mus_longnote']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_longnote']['field'] = 'field_mus_longnote';
  $handler->display->display_options['fields']['field_mus_longnote']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Box Number */
  $handler->display->display_options['fields']['field_mus_box_number']['id'] = 'field_mus_box_number';
  $handler->display->display_options['fields']['field_mus_box_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_box_number']['field'] = 'field_mus_box_number';
  $handler->display->display_options['fields']['field_mus_box_number']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_box_number']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_box_number']['bypass_access'] = 0;
  /* Field: Indexed Content: Folder Number */
  $handler->display->display_options['fields']['field_mus_folder_number']['id'] = 'field_mus_folder_number';
  $handler->display->display_options['fields']['field_mus_folder_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_folder_number']['field'] = 'field_mus_folder_number';
  $handler->display->display_options['fields']['field_mus_folder_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Indexed Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'General Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '2';
  /* Filter criterion: Composer: Name (indexed) */
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['id'] = 'field_mus_sheetmusic_composer_name';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['field'] = 'field_mus_sheetmusic_composer_name';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['group'] = 1;
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['expose']['operator_id'] = 'field_mus_sheetmusic_composer_name_op';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['expose']['label'] = 'Composer';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['expose']['operator'] = 'field_mus_sheetmusic_composer_name_op';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['expose']['identifier'] = 'field_mus_sheetmusic_composer_name';
  $handler->display->display_options['filters']['field_mus_sheetmusic_composer_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  /* Filter criterion: Arranger: Name (indexed) */
  $handler->display->display_options['filters']['field_mus_arranger_name']['id'] = 'field_mus_arranger_name';
  $handler->display->display_options['filters']['field_mus_arranger_name']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['filters']['field_mus_arranger_name']['field'] = 'field_mus_arranger_name';
  $handler->display->display_options['filters']['field_mus_arranger_name']['group'] = 1;
  $handler->display->display_options['filters']['field_mus_arranger_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mus_arranger_name']['expose']['operator_id'] = 'field_mus_arranger_name_op';
  $handler->display->display_options['filters']['field_mus_arranger_name']['expose']['label'] = 'Arranger';
  $handler->display->display_options['filters']['field_mus_arranger_name']['expose']['operator'] = 'field_mus_arranger_name_op';
  $handler->display->display_options['filters']['field_mus_arranger_name']['expose']['identifier'] = 'field_mus_arranger_name';
  $handler->display->display_options['filters']['field_mus_arranger_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  /* Filter criterion: Lyricist: Name (indexed) */
  $handler->display->display_options['filters']['field_mus_lyricist_name']['id'] = 'field_mus_lyricist_name';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['field'] = 'field_mus_lyricist_name';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['group'] = 1;
  $handler->display->display_options['filters']['field_mus_lyricist_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mus_lyricist_name']['expose']['operator_id'] = 'field_mus_lyricist_name_op';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['expose']['label'] = 'Lyricist';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['expose']['operator'] = 'field_mus_lyricist_name_op';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['expose']['identifier'] = 'field_mus_lyricist_name';
  $handler->display->display_options['filters']['field_mus_lyricist_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  /* Filter criterion: Publisher: Name (indexed) */
  $handler->display->display_options['filters']['field_mus_publisher_name']['id'] = 'field_mus_publisher_name';
  $handler->display->display_options['filters']['field_mus_publisher_name']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['filters']['field_mus_publisher_name']['field'] = 'field_mus_publisher_name';
  $handler->display->display_options['filters']['field_mus_publisher_name']['group'] = 1;
  $handler->display->display_options['filters']['field_mus_publisher_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mus_publisher_name']['expose']['operator_id'] = 'field_mus_publisher_name_op';
  $handler->display->display_options['filters']['field_mus_publisher_name']['expose']['label'] = 'Publisher Name';
  $handler->display->display_options['filters']['field_mus_publisher_name']['expose']['operator'] = 'field_mus_publisher_name_op';
  $handler->display->display_options['filters']['field_mus_publisher_name']['expose']['identifier'] = 'field_mus_publisher_name';
  $handler->display->display_options['filters']['field_mus_publisher_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'valva_admin';

  /* Display: Valva Search Results */
  $handler = $view->new_display('panel_pane', 'Valva Search Results', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_mus_subtitle' => 'field_mus_subtitle',
    'field_mus_sheetmusic_composer' => 'field_mus_sheetmusic_composer',
    'field_mus_arranger' => 'field_mus_arranger',
    'field_mus_lyricist' => 'field_mus_lyricist',
    'field_mus_publisher' => 'field_mus_publisher',
    'field_mus_publisher_citystate' => 'field_mus_publisher_citystate',
    'field_mus_publication_date' => 'field_mus_publication_date',
    'field_mus_plate_number' => 'field_mus_plate_number',
    'field_mus_valva_scene_type' => 'field_mus_valva_scene_type',
    'field_mus_sh_instrumentation' => 'field_mus_sh_instrumentation',
    'field_mus_longnote' => 'field_mus_longnote',
    'field_mus_box_number' => 'field_mus_box_number',
    'field_mus_folder_number' => 'field_mus_box_number',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_subtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_sheetmusic_composer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_arranger' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_lyricist' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_publisher_citystate' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_publication_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_plate_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_valva_scene_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_sh_instrumentation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_longnote' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mus_box_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'field_mus_folder_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="search--description">Click on the title of a piece for a complete description, including instrumentation, lyricists, additional notes, and the archival box location within the collection. The search box searches across all of the texted fields (including two or more terms in any order from the same or different columns). To search by date, use the date facet in the left sidebar for a single year or resort the entire list by the date column.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Subtitle */
  $handler->display->display_options['fields']['field_mus_subtitle']['id'] = 'field_mus_subtitle';
  $handler->display->display_options['fields']['field_mus_subtitle']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_subtitle']['field'] = 'field_mus_subtitle';
  $handler->display->display_options['fields']['field_mus_subtitle']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Composer */
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['id'] = 'field_mus_sheetmusic_composer';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['field'] = 'field_mus_sheetmusic_composer';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_sheetmusic_composer']['bypass_access'] = 0;
  /* Field: Indexed Content: Arranger */
  $handler->display->display_options['fields']['field_mus_arranger']['id'] = 'field_mus_arranger';
  $handler->display->display_options['fields']['field_mus_arranger']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_arranger']['field'] = 'field_mus_arranger';
  $handler->display->display_options['fields']['field_mus_arranger']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_arranger']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_arranger']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_arranger']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_arranger']['bypass_access'] = 0;
  /* Field: Indexed Content: Lyricist */
  $handler->display->display_options['fields']['field_mus_lyricist']['id'] = 'field_mus_lyricist';
  $handler->display->display_options['fields']['field_mus_lyricist']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_lyricist']['field'] = 'field_mus_lyricist';
  $handler->display->display_options['fields']['field_mus_lyricist']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_lyricist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_lyricist']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_lyricist']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_mus_lyricist']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_lyricist']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher */
  $handler->display->display_options['fields']['field_mus_publisher']['id'] = 'field_mus_publisher';
  $handler->display->display_options['fields']['field_mus_publisher']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publisher']['field'] = 'field_mus_publisher';
  $handler->display->display_options['fields']['field_mus_publisher']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_publisher']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_publisher']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_publisher']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher City &amp; State */
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['id'] = 'field_mus_publisher_citystate';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['field'] = 'field_mus_publisher_citystate';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['label'] = 'Publisher City & State';
  $handler->display->display_options['fields']['field_mus_publisher_citystate']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Publication Date */
  $handler->display->display_options['fields']['field_mus_publication_date']['id'] = 'field_mus_publication_date';
  $handler->display->display_options['fields']['field_mus_publication_date']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_publication_date']['field'] = 'field_mus_publication_date';
  $handler->display->display_options['fields']['field_mus_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_publication_date']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_publication_date']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_publication_date']['bypass_access'] = 0;
  /* Field: Indexed Content: Plate Number */
  $handler->display->display_options['fields']['field_mus_plate_number']['id'] = 'field_mus_plate_number';
  $handler->display->display_options['fields']['field_mus_plate_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_plate_number']['field'] = 'field_mus_plate_number';
  $handler->display->display_options['fields']['field_mus_plate_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_plate_number']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Scene Type */
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['id'] = 'field_mus_valva_scene_type';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['field'] = 'field_mus_valva_scene_type';
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_valva_scene_type']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Instrumentation */
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['id'] = 'field_mus_sh_instrumentation';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['field'] = 'field_mus_sh_instrumentation';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['list']['separator'] = '; ';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_sh_instrumentation']['bypass_access'] = 0;
  /* Field: Indexed Content: Notes */
  $handler->display->display_options['fields']['field_mus_longnote']['id'] = 'field_mus_longnote';
  $handler->display->display_options['fields']['field_mus_longnote']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_longnote']['field'] = 'field_mus_longnote';
  $handler->display->display_options['fields']['field_mus_longnote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_longnote']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Box Number */
  $handler->display->display_options['fields']['field_mus_box_number']['id'] = 'field_mus_box_number';
  $handler->display->display_options['fields']['field_mus_box_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_box_number']['field'] = 'field_mus_box_number';
  $handler->display->display_options['fields']['field_mus_box_number']['label'] = 'Box Number / Folder Number';
  $handler->display->display_options['fields']['field_mus_box_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_box_number']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mus_box_number']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mus_box_number']['bypass_access'] = 0;
  /* Field: Indexed Content: Folder Number */
  $handler->display->display_options['fields']['field_mus_folder_number']['id'] = 'field_mus_folder_number';
  $handler->display->display_options['fields']['field_mus_folder_number']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['fields']['field_mus_folder_number']['field'] = 'field_mus_folder_number';
  $handler->display->display_options['fields']['field_mus_folder_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mus_folder_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_mendel_valva_sheet_music';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['mendel_valva_sheet_music_collection'] = $view;

  return $export;
}
