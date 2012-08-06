<?php
/**
 * @file
 * library_hours.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_hours_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'library_hours_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library Hours';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['right'] = '';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mm tt{ - h:mm tt}';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_calendar_display_title';
  $handler->display->display_options['style_options']['fields']['url_field'] = 'field_calendar_url';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fields']['url'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['dayClickView'] = 'basicDay';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Calendar Display Title */
  $handler->display->display_options['fields']['field_calendar_display_title']['id'] = 'field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['table'] = 'field_data_field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['field'] = 'field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_display_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_display_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['field_api_classes'] = 0;
  /* Field: Content: Open Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_calendar_display_title] - [field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'Closed';
  $handler->display->display_options['fields']['field_open_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['field_api_classes'] = 0;
  /* Field: Content: Calendar URL */
  $handler->display->display_options['fields']['field_calendar_url']['id'] = 'field_calendar_url';
  $handler->display->display_options['fields']['field_calendar_url']['table'] = 'field_data_field_calendar_url';
  $handler->display->display_options['fields']['field_calendar_url']['field'] = 'field_calendar_url';
  $handler->display->display_options['fields']['field_calendar_url']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_url']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_calendar_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_calendar_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_calendar_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_calendar_url']['field_api_classes'] = 0;
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
    'library_hours' => 'library_hours',
  );
  /* Filter criterion: Content: Calendar Display Title (field_calendar_display_title) */
  $handler->display->display_options['filters']['field_calendar_display_title_value']['id'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['table'] = 'field_data_field_calendar_display_title';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['field'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['value'] = array(
    'all' => 'all',
    'Architecture Library' => 'Architecture Library',
    'East Asian Library' => 'East Asian Library',
    'Engineering Library' => 'Engineering Library',
    'Firestone Library' => 'Firestone Library',
    'Firestone Library - Access Office Hours' => 'Firestone Library - Access Office Hours',
    'Firestone Library - Administration' => 'Firestone Library - Administration',
    'Firestone Library - Cotsen Children\'s Library - Gallery' => 'Firestone Library - Cotsen Children\'s Library - Gallery',
    'Firestone Library - Cotsen Children\'s Library - Research Collection' => 'Firestone Library - Cotsen Children\'s Library - Research Collection',
    'Firestone Library - Data & Statistical Services ' => 'Firestone Library - Data & Statistical Services ',
    'Firestone Library - Exhibition Galleries' => 'Firestone Library - Exhibition Galleries',
    'Firestone Library - Information Center' => 'Firestone Library - Information Center',
    'Firestone Library - Interlibrary Services' => 'Firestone Library - Interlibrary Services',
    'Firestone Library - Microforms Service' => 'Firestone Library - Microforms Service',
    'Firestone Library - Reference Assistance and Depository Access' => 'Firestone Library - Reference Assistance and Depository Access',
    'Firestone Library - Reference Assistance via IM' => 'Firestone Library - Reference Assistance via IM',
    'Firestone Library - Scribner Room' => 'Firestone Library - Scribner Room',
    'Humanities Resource Center' => 'Humanities Resource Center',
    'Lewis Science Library' => 'Lewis Science Library',
    'Marquand Library' => 'Marquand Library',
    'Mendel Music Library' => 'Mendel Music Library',
    'Mudd Manuscript Library' => 'Mudd Manuscript Library',
    'Plasma Physics Library' => 'Plasma Physics Library',
    'Rare Books and Special Collections' => 'Rare Books and Special Collections',
    'Stokes Library' => 'Stokes Library',
  );
  $handler->display->display_options['filters']['field_calendar_display_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['operator_id'] = 'field_calendar_display_title_value_op';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['label'] = 'Calendar';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['operator'] = 'field_calendar_display_title_value_op';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['identifier'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['reduce'] = 0;

  /* Display: Library Calendar View */
  $handler = $view->new_display('page', 'Library Calendar View', 'page');
  $handler->display->display_options['display_description'] = 'Shows either the month or week view of one or all calendars.';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_hours' => 'library_hours',
  );
  $handler->display->display_options['path'] = 'hours/libraries/%';

  /* Display: Today's Hours */
  $handler = $view->new_display('page', 'Today\'s Hours', 'page_1');
  $handler->display->display_options['display_description'] = 'Show only today\'s hours.  One or all Libraries';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['defaultView'] = 'basicDay';
  $handler->display->display_options['style_options']['left'] = '';
  $handler->display->display_options['style_options']['center'] = '';
  $handler->display->display_options['style_options']['right'] = '';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Open Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_hours' => 'library_hours',
  );
  $handler->display->display_options['path'] = 'hours/libraries/%/today';

  /* Display: Calendar View */
  $handler = $view->new_display('page', 'Calendar View', 'page_2');
  $handler->display->display_options['display_description'] = 'Shows either the month or week view of one or all calendars.';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_hours' => 'library_hours',
  );
  /* Filter criterion: Content: Calendar Display Title (field_calendar_display_title) */
  $handler->display->display_options['filters']['field_calendar_display_title_value']['id'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['table'] = 'field_data_field_calendar_display_title';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['field'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['value'] = array(
    'Architecture Library' => 'Architecture Library',
    'East Asian Library' => 'East Asian Library',
    'Engineering Library' => 'Engineering Library',
    'Firestone Library' => 'Firestone Library',
    'Firestone Library - Access Office Hours' => 'Firestone Library - Access Office Hours',
    'Firestone Library - Administration' => 'Firestone Library - Administration',
    'Firestone Library - Cotsen Children\'s Library - Gallery' => 'Firestone Library - Cotsen Children\'s Library - Gallery',
    'Firestone Library - Cotsen Children\'s Library - Research Collection' => 'Firestone Library - Cotsen Children\'s Library - Research Collection',
    'Firestone Library - Data & Statistical Services ' => 'Firestone Library - Data & Statistical Services ',
    'Firestone Library - Exhibition Galleries' => 'Firestone Library - Exhibition Galleries',
    'Firestone Library - Information Center' => 'Firestone Library - Information Center',
    'Firestone Library - Interlibrary Services' => 'Firestone Library - Interlibrary Services',
    'Firestone Library - Microforms Service' => 'Firestone Library - Microforms Service',
    'Firestone Library - Reference Assistance and Depository Access' => 'Firestone Library - Reference Assistance and Depository Access',
    'Firestone Library - Reference Assistance via IM' => 'Firestone Library - Reference Assistance via IM',
    'Firestone Library - Scribner Room' => 'Firestone Library - Scribner Room',
    'Humanities Resource Center' => 'Humanities Resource Center',
    'Lewis Science Library' => 'Lewis Science Library',
    'Marquand Library' => 'Marquand Library',
    'Mendel Music Library' => 'Mendel Music Library',
    'Mudd Manuscript Library' => 'Mudd Manuscript Library',
    'Plasma Physics Library' => 'Plasma Physics Library',
    'Rare Books and Special Collections' => 'Rare Books and Special Collections',
    'Stokes Library' => 'Stokes Library',
  );
  $handler->display->display_options['filters']['field_calendar_display_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['operator_id'] = 'field_calendar_display_title_value_op';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['label'] = 'Calendar';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['operator'] = 'field_calendar_display_title_value_op';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['identifier'] = 'field_calendar_display_title_value';
  $handler->display->display_options['filters']['field_calendar_display_title_value']['expose']['reduce'] = 1;
  $handler->display->display_options['path'] = 'hours';

  /* Display: Embedded Calendar View */
  $handler = $view->new_display('page', 'Embedded Calendar View', 'page_3');
  $handler->display->display_options['display_description'] = 'Shows a single calendar view of library hours, best suited for landing pages.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Calendar Display Title */
  $handler->display->display_options['fields']['field_calendar_display_title']['id'] = 'field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['table'] = 'field_data_field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['field'] = 'field_calendar_display_title';
  $handler->display->display_options['fields']['field_calendar_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_display_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_display_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_calendar_display_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_calendar_display_title']['field_api_classes'] = 0;
  /* Field: Content: Open Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_calendar_display_title] - [field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'Closed';
  $handler->display->display_options['fields']['field_open_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_hours' => 'library_hours',
  );
  $handler->display->display_options['path'] = 'hours/libraries/%/embedded';

  /* Display: Today's Hours - Embedded */
  $handler = $view->new_display('page', 'Today\'s Hours - Embedded', 'page_4');
  $handler->display->display_options['display_description'] = 'Show only today\'s hours.  One or all Libraries';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['defaultView'] = 'basicDay';
  $handler->display->display_options['style_options']['left'] = '';
  $handler->display->display_options['style_options']['center'] = '';
  $handler->display->display_options['style_options']['right'] = '';
  $handler->display->display_options['style_options']['fullcalendar_options']['slotMinutes'] = 15;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Open Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_open_hours']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_hours' => 'library_hours',
  );
  $handler->display->display_options['path'] = 'hours/libraries/%/today/embedded';
  $export['library_hours_calendar'] = $view;

  return $export;
}
