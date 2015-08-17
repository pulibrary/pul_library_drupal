<?php
/**
 * @file
 * pul_library_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_library_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'upcoming_pul_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming Library Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Library Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'pul_event' => 'pul_event',
  );
  /* Filter criterion: Content: Event Dates -  start date (field_pul_event_dates) */
  $handler->display->display_options['filters']['field_pul_event_dates_value']['id'] = 'field_pul_event_dates_value';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['table'] = 'field_data_field_pul_event_dates';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['field'] = 'field_pul_event_dates_value';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pul_event_dates_value']['expose']['operator_id'] = 'field_pul_event_dates_value_op';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['expose']['operator'] = 'field_pul_event_dates_value_op';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['expose']['identifier'] = 'field_pul_event_dates_value';
  $handler->display->display_options['filters']['field_pul_event_dates_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pul_event_dates_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Dates - end date (field_pul_event_dates:value2) */
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['id'] = 'field_pul_event_dates_value2';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['table'] = 'field_data_field_pul_event_dates';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['field'] = 'field_pul_event_dates_value2';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['expose']['operator_id'] = 'field_pul_event_dates_value2_op';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['expose']['operator'] = 'field_pul_event_dates_value2_op';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['expose']['identifier'] = 'field_pul_event_dates_value2';
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pul_event_dates_value2']['form_type'] = 'date_popup';

  /* Display: Administrative Full Page Listing */
  $handler = $view->new_display('page', 'Administrative Full Page Listing', 'page');
  $handler->display->display_options['path'] = 'upcoming-library-events';

  /* Display: Public Event Pane */
  $handler = $view->new_display('panel_pane', 'Public Event Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_pul_event_sample_image']['id'] = 'field_pul_event_sample_image';
  $handler->display->display_options['fields']['field_pul_event_sample_image']['table'] = 'field_data_field_pul_event_sample_image';
  $handler->display->display_options['fields']['field_pul_event_sample_image']['field'] = 'field_pul_event_sample_image';
  $handler->display->display_options['fields']['field_pul_event_sample_image']['label'] = '';
  $handler->display->display_options['fields']['field_pul_event_sample_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pul_event_sample_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pul_event_sample_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pul_event_sample_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Brief Description */
  $handler->display->display_options['fields']['field_pul_event_blurb']['id'] = 'field_pul_event_blurb';
  $handler->display->display_options['fields']['field_pul_event_blurb']['table'] = 'field_data_field_pul_event_blurb';
  $handler->display->display_options['fields']['field_pul_event_blurb']['field'] = 'field_pul_event_blurb';
  $handler->display->display_options['fields']['field_pul_event_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_pul_event_blurb']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_pul_event_location']['id'] = 'field_pul_event_location';
  $handler->display->display_options['fields']['field_pul_event_location']['table'] = 'field_data_field_pul_event_location';
  $handler->display->display_options['fields']['field_pul_event_location']['field'] = 'field_pul_event_location';
  $handler->display->display_options['fields']['field_pul_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_pul_event_location']['element_label_colon'] = FALSE;
  /* Field: Content: Event Dates */
  $handler->display->display_options['fields']['field_pul_event_dates']['id'] = 'field_pul_event_dates';
  $handler->display->display_options['fields']['field_pul_event_dates']['table'] = 'field_data_field_pul_event_dates';
  $handler->display->display_options['fields']['field_pul_event_dates']['field'] = 'field_pul_event_dates';
  $handler->display->display_options['fields']['field_pul_event_dates']['label'] = '';
  $handler->display->display_options['fields']['field_pul_event_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pul_event_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['upcoming_pul_events'] = $view;

  return $export;
}
