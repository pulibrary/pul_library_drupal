<?php
/**
 * @file
 * pul_plasma_physics_feed_view_panes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_plasma_physics_feed_view_panes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'plasma_physics_feeds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'aggregator_item';
  $view->human_name = 'Plasma Physics Feeds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Aggregator: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Aggregator: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Nuclear Fusion Feed';

  /* Display: Plasma Physics - Nuclear Fusion Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Nuclear Fusion Feed', 'panel_pane_1');

  /* Display: Plasma Physics - Applied Physics Letters Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Applied Physics Letters Feed', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Applied Physics Letters Feed';

  /* Display: Plasma Physics - New Books Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - New Books Feed', 'panel_pane_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - New Books Feed';

  /* Display: Plasma Physics - Physical Review Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Physical Review Feed', 'panel_pane_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Physical Review Feed';

  /* Display: Plasma Physics - Physics of Plasma Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Physics of Plasma Feed', 'panel_pane_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Physics of Plasma Feed';

  /* Display: Plasma Physics - Physics of Today */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Physics of Today', 'panel_pane_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Physics of Today';

  /* Display: Plasma Physics - Plasma Physics and Controlled Fusion Feed */
  $handler = $view->new_display('panel_pane', 'Plasma Physics - Plasma Physics and Controlled Fusion Feed', 'panel_pane_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Aggregator feed: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Plasma Physics - Plasma Physics and Controlled Fusion Feed';
  $export['plasma_physics_feeds'] = $view;

  return $export;
}
