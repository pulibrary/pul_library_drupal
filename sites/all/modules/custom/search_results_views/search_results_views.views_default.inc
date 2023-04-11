<?php

/**
 * @file
 * search_results_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function search_results_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'databases_keyword_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_database_keyword_index';
  $view->human_name = 'Databases Full Text Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Databases ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Databases';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No database titles found. Try browsing by <a href="/research/databases">Title</a> or <a href="/research/databases/subjects">Subject</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['breadcrumb'] = 'Database %title';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Content: Suppress This Title */
  $handler->display->display_options['filters']['field_db_suppressed']['id'] = 'field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['filters']['field_db_suppressed']['field'] = 'field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed']['operator'] = '<>';
  $handler->display->display_options['filters']['field_db_suppressed']['value'] = array(
    1 => '1',
  );

  /* Display: Database Keywords Search Page */
  $handler = $view->new_display('page', 'Database Keywords Search Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'search/databases';

  /* Display: Database Keyword Search Results Block */
  $handler = $view->new_display('block', 'Database Keyword Search Results Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Databases';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No Databases Matching !1</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;

  /* Display: Database Keywords Search Form */
  $handler = $view->new_display('page', 'Database Keywords Search Form', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'find/databases/search';

  /* Display: Database Keywords Results Pane */
  $handler = $view->new_display('panel_pane', 'Database Keywords Results Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Access URL: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_db_access_url_url']['id'] = 'field_db_access_url_url';
  $handler->display->display_options['fields']['field_db_access_url_url']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_access_url_url']['field'] = 'field_db_access_url_url';
  $handler->display->display_options['fields']['field_db_access_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url_url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class="database-title" href="/node/[nid]"><span data-ezproxy-access="[field_db_use_proxy]" data-access-url="[field_db_access_url_url]">[title]</span></a>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Date Coverage */
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['id'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['field'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['type'] = 'text_plain';
  /* Field: Indexed Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['type'] = 'text_plain';
  /* Field: Indexed Content: Also Known As */
  $handler->display->display_options['fields']['field_dboverride_database']['id'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_dboverride_database']['field'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_database']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dboverride_database']['view_mode'] = 'full';
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Databases Results Short Content Pane */
  $handler = $view->new_display('panel_pane', 'Databases Results Short Content Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="icon-databases"></i>Databases';
  $handler->display->display_options['display_description'] = 'For the /find/all page. ';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Databases results';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'https://libguides.princeton.edu/az.php?p=1&q=!1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<span data-hit-count="@total" data-search-service="databases_keyword_search-panel_pane_2"></span>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'database_subject_search:panel_pane_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No databases found. Try browsing by <a href="/research/databases">Title</a> or <a href="/research/databases/subjects">Subject</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Content: Also Known As */
  $handler->display->display_options['relationships']['field_dboverride_database']['id'] = 'field_dboverride_database';
  $handler->display->display_options['relationships']['field_dboverride_database']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['relationships']['field_dboverride_database']['field'] = 'field_dboverride_database';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Access URL: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_db_access_url_url']['id'] = 'field_db_access_url_url';
  $handler->display->display_options['fields']['field_db_access_url_url']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_access_url_url']['field'] = 'field_db_access_url_url';
  $handler->display->display_options['fields']['field_db_access_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url_url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class="database-title" href="[field_db_access_url_url]">[title]</span></a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'resource/[nid]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage_1']['id'] = 'field_db_date_coverage_1';
  $handler->display->display_options['fields']['field_db_date_coverage_1']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_db_date_coverage_1']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage_1']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage_1']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Date Coverage */
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['id'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['field'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Also Known As */
  $handler->display->display_options['fields']['field_dboverride_database']['id'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['field_dboverride_database']['field'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_database']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dboverride_database']['view_mode'] = 'full';
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Indexed Content: Suppress This Title */
  $handler->display->display_options['filters']['field_db_suppressed']['id'] = 'field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed']['table'] = 'search_api_index_database_keyword_index';
  $handler->display->display_options['filters']['field_db_suppressed']['field'] = 'field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed']['operator'] = '<>';
  $handler->display->display_options['filters']['field_db_suppressed']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $export['databases_keyword_search'] = $view;

  $view = new view();
  $view->name = 'general_site_keyword_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'General Site Keyword Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Website';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Library Website Content';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="no-results">No library website results found. Try <a href="/find/website">searching</a> for another topic.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'general-site-keyword-search';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Keyword Search Results ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';

  /* Display: General Site Search Results */
  $handler = $view->new_display('panel_pane', 'General Site Search Results', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="icon-windows"></i>Library Website';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Library Website results';
  $handler->display->display_options['link_url'] = 'find/website/!1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<span data-hit-count="@total" data-search-service="general_site_keyword_search-panel_pane_1"></span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Long View Search Results */
  $handler = $view->new_display('panel_pane', 'Long View Search Results', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more library website content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total
<br><br>';
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $export['general_site_keyword_search'] = $view;

  $view = new view();
  $view->name = 'general_site_user_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_staff_users';
  $view->human_name = 'General Site User Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="icon-phone-book"></i>Library Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No User Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Staff Match !1';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname_1']['id'] = 'field_puluser_formalname_1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alt'] = 'View Staff Member Details';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['link_class'] = 'user-link';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: Indexed User: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['operator'] = '<>';
  $handler->display->display_options['filters']['status']['value'] = array(
    0 => '0',
  );

  /* Display: Top Level Staff Directory */
  $handler = $view->new_display('page', 'Top Level Staff Directory', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Start Over';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'uid' => 'uid',
    'field_puluser_formalname_1' => 'field_puluser_formalname_1',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'mail' => 'mail',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'field_puluser_department' => 'field_puluser_department',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'field_puluser_formalname_1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_officialtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_phone_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'search_api_relevance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'staff_list_browse:attachment_1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No User Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  /* Field: Indexed User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname_1']['id'] = 'field_puluser_formalname_1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['text'] = '[field_puluser_lname], [field_puluser_fname]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alt'] = 'View Staff Member Details';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['link_class'] = 'user-link';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  /* Field: Indexed User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = 'Department';
  $handler->display->display_options['fields']['field_puluser_department']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_puluser_department']['view_mode'] = 'full';
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['separator'] = '';
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = '=';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by Name, Email, Department';
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
  );
  /* Filter criterion: Indexed User: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['operator'] = '<>';
  $handler->display->display_options['filters']['status']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'staff/searchview';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';

  /* Display: Staff User Results */
  $handler = $view->new_display('panel_pane', 'Staff User Results', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Accepts Filter to Search User Directory';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all Library Staff results';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'staff/find/directory/!1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span data-hit-count="@total" data-search-service="general_site_user_search-panel_pane_1"></span>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="no-result">No library staff results found. Try browsing the <a href="/staff/directory">staff directory</a>.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname_1']['id'] = 'field_puluser_formalname_1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['text'] = '[field_puluser_lname], [field_puluser_fname]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alt'] = 'View Staff Member Details';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['link_class'] = 'user-link';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<span class="icon-email"></span><a href="mailto:[mail]">[mail]</a>';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<span class="icon-phone"></span><a href="tel:[field_puluser_phone_number]">[field_puluser_phone_number]</a>';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['text'] = '<span class="icon-location"></span>[field_puluser_office]';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  /* Field: Indexed User: Building Location */
  $handler->display->display_options['fields']['field_puluser_building_location']['id'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_building_location']['field'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['text'] = '<span class="icon-library"></span>[field_puluser_building_location]';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_building_location']['hide_empty'] = TRUE;
  /* Field: Indexed User: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['status']['format_name'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_puluser_lname',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname_1']['id'] = 'field_puluser_formalname_1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alt'] = 'View Staff Member Details';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['link_class'] = 'user-link';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Filter - Top Level Staff Directory */
  $handler = $view->new_display('page', 'Filter - Top Level Staff Directory', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="icon-user icon-large"></i>&nbsp;Library Staff related to <em>!1</em>';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Start Over';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'uid' => 'uid',
    'field_puluser_formalname_1' => 'field_puluser_formalname_1',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'mail' => 'mail',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'field_puluser_department' => 'field_puluser_department',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_officialtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_phone_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_department' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No User Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Staff Members Found. Try <a href="/staff/directory">browsing</a> our staff list.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname_1']['id'] = 'field_puluser_formalname_1';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['alt'] = 'View Staff Member Details';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['alter']['link_class'] = 'user-link';
  $handler->display->display_options['fields']['field_puluser_formalname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  /* Field: Indexed User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = 'Department';
  $handler->display->display_options['fields']['field_puluser_department']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_puluser_department']['view_mode'] = 'full';
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['separator'] = '';
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: Indexed User: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_staff_users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['operator'] = '<>';
  $handler->display->display_options['filters']['status']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'staff/find/directory/%';
  $export['general_site_user_search'] = $view;

  return $export;
}
