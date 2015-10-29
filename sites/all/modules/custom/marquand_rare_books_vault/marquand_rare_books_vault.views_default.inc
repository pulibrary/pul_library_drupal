<?php
/**
 * @file
 * marquand_rare_books_vault.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marquand_rare_books_vault_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'marquand_rare_books_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_marquand_rare_books';
  $view->human_name = 'Marquand Rare Books Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marquand Rare Books Vault';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No Results Found</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Call Number Sort */
  $handler->display->display_options['fields']['field_rb_call_number_s']['id'] = 'field_rb_call_number_s';
  $handler->display->display_options['fields']['field_rb_call_number_s']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_call_number_s']['field'] = 'field_rb_call_number_s';
  $handler->display->display_options['fields']['field_rb_call_number_s']['exclude'] = TRUE;
  /* Field: Indexed Content: Title Display */
  $handler->display->display_options['fields']['field_rb_title_display']['id'] = 'field_rb_title_display';
  $handler->display->display_options['fields']['field_rb_title_display']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_title_display']['field'] = 'field_rb_title_display';
  $handler->display->display_options['fields']['field_rb_title_display']['label'] = '';
  $handler->display->display_options['fields']['field_rb_title_display']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_rb_title_display']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Uniform Title */
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['id'] = 'field_rb_uniform_title_display';
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['field'] = 'field_rb_uniform_title_display';
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['label'] = '';
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rb_uniform_title_display']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Author Display */
  $handler->display->display_options['fields']['field_rb_author_s']['id'] = 'field_rb_author_s';
  $handler->display->display_options['fields']['field_rb_author_s']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_author_s']['field'] = 'field_rb_author_s';
  $handler->display->display_options['fields']['field_rb_author_s']['label'] = '';
  $handler->display->display_options['fields']['field_rb_author_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rb_author_s']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_rb_author_s']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_rb_author_s']['bypass_access'] = 0;
  /* Field: Indexed Content: Pub Created */
  $handler->display->display_options['fields']['field_rb_pub_created_display']['id'] = 'field_rb_pub_created_display';
  $handler->display->display_options['fields']['field_rb_pub_created_display']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_pub_created_display']['field'] = 'field_rb_pub_created_display';
  $handler->display->display_options['fields']['field_rb_pub_created_display']['label'] = 'Publication Date';
  $handler->display->display_options['fields']['field_rb_pub_created_display']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Call Number Display */
  $handler->display->display_options['fields']['field_rb_call_number_display']['id'] = 'field_rb_call_number_display';
  $handler->display->display_options['fields']['field_rb_call_number_display']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_call_number_display']['field'] = 'field_rb_call_number_display';
  $handler->display->display_options['fields']['field_rb_call_number_display']['label'] = '';
  $handler->display->display_options['fields']['field_rb_call_number_display']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Description Display */
  $handler->display->display_options['fields']['field_rb_description_display']['id'] = 'field_rb_description_display';
  $handler->display->display_options['fields']['field_rb_description_display']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_description_display']['field'] = 'field_rb_description_display';
  $handler->display->display_options['fields']['field_rb_description_display']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Pub Date Start Sort */
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['id'] = 'field_rb_pub_date_start_sort';
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['field'] = 'field_rb_pub_date_start_sort';
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['label'] = 'Pub Date';
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rb_pub_date_start_sort']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Voyager ID */
  $handler->display->display_options['fields']['field_rb_voyager_id']['id'] = 'field_rb_voyager_id';
  $handler->display->display_options['fields']['field_rb_voyager_id']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['fields']['field_rb_voyager_id']['field'] = 'field_rb_voyager_id';
  $handler->display->display_options['fields']['field_rb_voyager_id']['label'] = '';
  $handler->display->display_options['fields']['field_rb_voyager_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rb_voyager_id']['alter']['text'] = 'View in Catalog';
  $handler->display->display_options['fields']['field_rb_voyager_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_rb_voyager_id']['alter']['path'] = 'http://catalog.princeton.edu/cgi-bin/Pwebrecon.cgi?BBID=[field_rb_voyager_id]';
  $handler->display->display_options['fields']['field_rb_voyager_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rb_voyager_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Record';
  /* Sort criterion: Indexed Content: Pub Date Start Sort */
  $handler->display->display_options['sorts']['field_rb_pub_date_start_sort']['id'] = 'field_rb_pub_date_start_sort';
  $handler->display->display_options['sorts']['field_rb_pub_date_start_sort']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['sorts']['field_rb_pub_date_start_sort']['field'] = 'field_rb_pub_date_start_sort';
  $handler->display->display_options['sorts']['field_rb_pub_date_start_sort']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rb_pub_date_start_sort']['expose']['label'] = 'Date';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_marquand_rare_books';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_rb_author_s:name' => 'field_rb_author_s:name',
    'field_rb_call_number_display' => 'field_rb_call_number_display',
    'field_rb_description_display' => 'field_rb_description_display',
    'field_rb_location_code_s' => 'field_rb_location_code_s',
    'field_rb_subject_facet:name' => 'field_rb_subject_facet:name',
    'field_rb_title_display' => 'field_rb_title_display',
    'field_rb_uniform_title_display' => 'field_rb_uniform_title_display',
  );

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'page');
  $handler->display->display_options['path'] = 'marquand-rare-books-search';

  /* Display: Search Results  */
  $handler = $view->new_display('panel_pane', 'Search Results ', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['marquand_rare_books_search'] = $view;

  return $export;
}
