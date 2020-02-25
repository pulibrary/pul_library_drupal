<?php

/**
 * @file
 * libcal_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function libcal_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'libcal_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LibCal Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events & Workshops';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'day_of_week_and_date',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_date_end']['id'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['fields']['field_date_end']['field'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['label'] = '';
  $handler->display->display_options['fields']['field_date_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_end']['alter']['text'] = '[field_schemaorg_date_1] - [field_date_end]';
  $handler->display->display_options['fields']['field_date_end']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_label';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply Filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All Filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_schemaorg_date',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'events-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'events-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'l, M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_date_end']['id'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['table'] = 'field_data_field_date_end';
  $handler->display->display_options['fields']['field_date_end']['field'] = 'field_date_end';
  $handler->display->display_options['fields']['field_date_end']['label'] = '';
  $handler->display->display_options['fields']['field_date_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_end']['alter']['text'] = '<i class="icon-clock" aria-hidden="true"></i> [field_schemaorg_date_1] - [field_date_end]';
  $handler->display->display_options['fields']['field_date_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_end']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_date_end']['element_wrapper_class'] = 'events-time';
  $handler->display->display_options['fields']['field_date_end']['element_default_classes'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<i class="icon-location" aria-hidden="true"></i> [field_location]';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'events-location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_class'] = 'events-description';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Description (field_schemaorg_description) */
  $handler->display->display_options['filters']['field_schemaorg_description_value']['id'] = 'field_schemaorg_description_value';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['field'] = 'field_schemaorg_description_value';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schemaorg_description_value']['expose']['operator_id'] = 'field_schemaorg_description_value_op';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['expose']['label'] = 'Filter by Keyword';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['expose']['operator'] = 'field_schemaorg_description_value_op';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['expose']['identifier'] = 'field_schemaorg_description_value';
  $handler->display->display_options['filters']['field_schemaorg_description_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Location (field_location) */
  $handler->display->display_options['filters']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_value']['expose']['operator_id'] = 'field_location_value_op';
  $handler->display->display_options['filters']['field_location_value']['expose']['label'] = 'Location (field_location)';
  $handler->display->display_options['filters']['field_location_value']['expose']['operator'] = 'field_location_value_op';
  $handler->display->display_options['filters']['field_location_value']['expose']['identifier'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_location_value']['group_info']['label'] = 'Library';
  $handler->display->display_options['filters']['field_location_value']['group_info']['identifier'] = 'field_location_value';
  $handler->display->display_options['filters']['field_location_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Architecture Library',
      'operator' => 'contains',
      'value' => 'architecture',
    ),
    2 => array(
      'title' => 'Center for Digital Humanities',
      'operator' => 'contains',
      'value' => 'center for digital humanities',
    ),
    3 => array(
      'title' => 'East Asian Library',
      'operator' => 'contains',
      'value' => 'east asian',
    ),
    4 => array(
      'title' => 'Engineering Library',
      'operator' => 'contains',
      'value' => 'engineering',
    ),
    5 => array(
      'title' => 'Firestone Library',
      'operator' => 'contains',
      'value' => 'firestone',
    ),
    6 => array(
      'title' => 'Lewis Library',
      'operator' => 'contains',
      'value' => 'lewis',
    ),
    7 => array(
      'title' => 'Marquand Art Library',
      'operator' => 'contains',
      'value' => 'marquand',
    ),
    8 => array(
      'title' => 'Mendel Music Library',
      'operator' => 'contains',
      'value' => 'mendel',
    ),
    9 => array(
      'title' => 'Milberg Gallery',
      'operator' => 'contains',
      'value' => 'milberg',
    ),
    10 => array(
      'title' => 'Mudd Manuscript Library',
      'operator' => 'contains',
      'value' => 'mudd',
    ),
    11 => array(
      'title' => 'Stokes Library',
      'operator' => 'contains',
      'value' => 'stokes',
    ),
    12 => array(
      'title' => 'Virtual',
      'operator' => 'contains',
      'value' => 'virtual',
    ),
  );
  $handler->display->display_options['path'] = 'events';

  /* Display: Upcoming Events on Homepage */
  $handler = $view->new_display('panel_pane', 'Upcoming Events on Homepage', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events and Workshops';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item--homepage';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div><a class="views-more-link" href="https://libcal.princeton.edu/calendar">More Events</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'pul_editor_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'library-news',
    'image_link' => '',
  );
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'events-title--homepage';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_type']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_class'] = 'events-date--homepage';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'l, F j, Y',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_2']['id'] = 'field_schemaorg_date_2';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['element_wrapper_class'] = 'events-time--homepage';
  $handler->display->display_options['fields']['field_schemaorg_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_2']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'events-location--homepage';
  $handler->display->display_options['fields']['field_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_label_class'] = 'events-location--homepage';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    0 => '1753',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'lib_event_types';

  /* Display: Exhibitions on Homepage */
  $handler = $view->new_display('panel_pane', 'Exhibitions on Homepage', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-item--homepage';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div><a class="views-more-link" href="/exhibitions">More Exhibitions</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'pul_editor_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_class'] = 'events-image--homepage';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'library-news',
    'image_link' => '',
  );
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'events-title--homepage';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_date']['alter']['text'] = 'Open through [field_schemaorg_date]';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_class'] = 'events-date--homepage';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'F j, Y',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_wrapper_class'] = 'events-time--homepage';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'events-location--homepage';
  $handler->display->display_options['fields']['field_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_label_class'] = 'events-location--homepage';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Homepage Spotlight (field_homepage_spotlight) */
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['id'] = 'field_homepage_spotlight_value';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['field'] = 'field_homepage_spotlight_value';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  /* Sort criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    0 => '1753',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'lib_event_types';
  /* Filter criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['default_date'] = 'now';

  /* Display: Exhibitions Index - Current List */
  $handler = $view->new_display('panel_pane', 'Exhibitions Index - Current List', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title clear-fix';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['alter']['text'] = 'Open through [field_schemaorg_date]';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location URL */
  $handler->display->display_options['fields']['field_location_url']['id'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['table'] = 'field_data_field_location_url';
  $handler->display->display_options['fields']['field_location_url']['field'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['label'] = '';
  $handler->display->display_options['fields']['field_location_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_location_url']['type'] = 'link_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<a href="[field_location_url]">[field_location]</a>';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  /* Sort criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    0 => '1753',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'lib_event_types';
  /* Filter criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';

  /* Display: Exhibitions Index - Upcoming List */
  $handler = $view->new_display('panel_pane', 'Exhibitions Index - Upcoming List', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title clear-fix';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['alter']['text'] = 'Open through [field_schemaorg_date]';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location URL */
  $handler->display->display_options['fields']['field_location_url']['id'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['table'] = 'field_data_field_location_url';
  $handler->display->display_options['fields']['field_location_url']['field'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['label'] = '';
  $handler->display->display_options['fields']['field_location_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_location_url']['type'] = 'link_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<a href="[field_location_url]">[field_location]</a>';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  /* Sort criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    0 => '1753',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'lib_event_types';
  /* Filter criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';

  /* Display: Exhibitions Index - Past List */
  $handler = $view->new_display('panel_pane', 'Exhibitions Index - Past List', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event URL */
  $handler->display->display_options['fields']['field_event_url']['id'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['table'] = 'field_data_field_event_url';
  $handler->display->display_options['fields']['field_event_url']['field'] = 'field_event_url';
  $handler->display->display_options['fields']['field_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_url']['type'] = 'link_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_event_url]" rel="nofollow">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title clear-fix';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date']['id'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date']['alter']['text'] = 'Open through [field_schemaorg_date]';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_schemaorg_date_1']['id'] = 'field_schemaorg_date_1';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['field'] = 'field_schemaorg_date';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location URL */
  $handler->display->display_options['fields']['field_location_url']['id'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['table'] = 'field_data_field_location_url';
  $handler->display->display_options['fields']['field_location_url']['field'] = 'field_location_url';
  $handler->display->display_options['fields']['field_location_url']['label'] = '';
  $handler->display->display_options['fields']['field_location_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_location_url']['type'] = 'link_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<a href="[field_location_url]">[field_location]</a>';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_schemaorg_description']['id'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['table'] = 'field_data_field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['field'] = 'field_schemaorg_description';
  $handler->display->display_options['fields']['field_schemaorg_description']['label'] = '';
  $handler->display->display_options['fields']['field_schemaorg_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemaorg_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_schemaorg_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['sorts']['field_schemaorg_date_value2']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['sorts']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
    'schemaorg_event' => 'schemaorg_event',
  );
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    0 => '1753',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'lib_event_types';
  /* Filter criterion: Content: Date - end date (field_schemaorg_date:value2) */
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['id'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['field'] = 'field_schemaorg_date_value2';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_schemaorg_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Date -  start date (field_schemaorg_date) */
  $handler->display->display_options['filters']['field_schemaorg_date_value']['id'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['table'] = 'field_data_field_schemaorg_date';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['field'] = 'field_schemaorg_date_value';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_schemaorg_date_value']['default_date'] = 'now';
  $export['libcal_events'] = $view;

  return $export;
}
