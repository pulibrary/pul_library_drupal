<?php
/**
 * @file
 * all_search_best_bets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function all_search_best_bets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_search_best_bet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_all_search_best_bets';
  $view->human_name = 'All Search Best Bet';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Best Bet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Indexed Content: Database */
  $handler->display->display_options['relationships']['field_database']['id'] = 'field_database';
  $handler->display->display_options['relationships']['field_database']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['relationships']['field_database']['field'] = 'field_database';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Best Bet URL */
  $handler->display->display_options['fields']['field_best_bet_url']['id'] = 'field_best_bet_url';
  $handler->display->display_options['fields']['field_best_bet_url']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['fields']['field_best_bet_url']['field'] = 'field_best_bet_url';
  $handler->display->display_options['fields']['field_best_bet_url']['label'] = '';
  $handler->display->display_options['fields']['field_best_bet_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_best_bet_url']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_best_bet_url']['element_wrapper_class'] = 'best-bet';
  $handler->display->display_options['fields']['field_best_bet_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_best_bet_url']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Database */
  $handler->display->display_options['fields']['field_database']['id'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['fields']['field_database']['field'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['label'] = '';
  $handler->display->display_options['fields']['field_database']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_database']['display'] = 'view';
  $handler->display->display_options['fields']['field_database']['view_mode'] = 'database_description_only';
  $handler->display->display_options['fields']['field_database']['bypass_access'] = 0;
  /* Field: Indexed Content: Best Bet Description */
  $handler->display->display_options['fields']['field_best_bet_description']['id'] = 'field_best_bet_description';
  $handler->display->display_options['fields']['field_best_bet_description']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['fields']['field_best_bet_description']['field'] = 'field_best_bet_description';
  $handler->display->display_options['fields']['field_best_bet_description']['label'] = '';
  $handler->display->display_options['fields']['field_best_bet_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_best_bet_description']['type'] = 'text_plain';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_all_search_best_bets';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_search_terms' => 'field_search_terms',
    'title' => 'title',
  );

  /* Display: All Search Best Bet Results Pane */
  $handler = $view->new_display('panel_pane', 'All Search Best Bet Results Pane', 'panel_pane_1');
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
  $export['all_search_best_bet'] = $view;

  return $export;
}
