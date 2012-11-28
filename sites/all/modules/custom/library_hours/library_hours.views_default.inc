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

  $view = new view();
  $view->name = 'library_hours_calendar';
  $view->description = '';
  $view->tag = 'Hours';
  $view->base_table = 'node';
  $view->human_name = 'Library Hours';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_calendar_display_title] - [field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'Closed';
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
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

  /* Display: Hours Pane */
  $handler = $view->new_display('panel_pane', 'Hours Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['colorbox']['colorbox'] = TRUE;
  $handler->display->display_options['style_options']['colorbox']['colorboxClass'] = '#region-content';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['left'] = 'prev';
  $handler->display->display_options['style_options']['center'] = 'basicWeek title month';
  $handler->display->display_options['style_options']['right'] = 'next';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mm tt{ - h:mm tt}';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['timeformatMonth'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['timeformatWeek'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['titleformatWeek'] = 'MMMM d[ yyyy]{ - [ MMMM] d, yyyy}';
  $handler->display->display_options['style_options']['timeformatDay'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_hours_library_status';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['dayClickView'] = 'basicDay';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Term Description';
  $handler->display->display_options['header']['area']['content'] = '[description]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Library Hours Calendar';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_calendar_display_title] - [field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'Closed';
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_hrs_lib_calendar_target_id' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Calendar to Display',
    ),
  );

  /* Display: Calendar List */
  $handler = $view->new_display('panel_pane', 'Calendar List', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'List of links to Library Hours calendars';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Single Day Hours */
  $handler = $view->new_display('panel_pane', 'Single Day Hours', 'panel_pane_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['colorbox']['colorbox'] = TRUE;
  $handler->display->display_options['style_options']['colorbox']['colorboxClass'] = '#region-content';
  $handler->display->display_options['style_options']['defaultView'] = 'basicDay';
  $handler->display->display_options['style_options']['left'] = '';
  $handler->display->display_options['style_options']['center'] = '';
  $handler->display->display_options['style_options']['right'] = '';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mm tt{ - h:mm tt}';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['timeformatMonth'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['timeformatWeek'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['titleformatWeek'] = 'MMMM d[ yyyy]{ - [ MMMM] d, yyyy}';
  $handler->display->display_options['style_options']['timeformatDay'] = 'h:mmtt{ - h:mmtt}';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_hours_library_status';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['dayClickView'] = 'basicDay';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Library Hours Calendar';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '[field_calendar_display_title] - [field_open_hours]';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'Closed';
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_hrs_lib_calendar_target_id' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Calendar to Display',
    ),
  );
  $export['library_hours_calendar'] = $view;

  return $export;
}
