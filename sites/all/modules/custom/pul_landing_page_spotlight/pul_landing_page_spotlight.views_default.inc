<?php
/**
 * @file
 * pul_landing_page_spotlight.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_landing_page_spotlight_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotlight_dispalsys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotlight Displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Spotlight';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<em>Spotlight</em>: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Sample Graphic */
  $handler->display->display_options['fields']['field_spotlight_graphic']['id'] = 'field_spotlight_graphic';
  $handler->display->display_options['fields']['field_spotlight_graphic']['table'] = 'field_data_field_spotlight_graphic';
  $handler->display->display_options['fields']['field_spotlight_graphic']['field'] = 'field_spotlight_graphic';
  $handler->display->display_options['fields']['field_spotlight_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_spotlight_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_spotlight_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_graphic']['settings'] = array(
    'image_style' => 'homepage_callout',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_spotlight_graphic']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pul_spotlight' => 'pul_spotlight',
  );

  /* Display: Landing Page Callout */
  $handler = $view->new_display('block', 'Landing Page Callout', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $export['spotlight_dispalsys'] = $view;

  return $export;
}
