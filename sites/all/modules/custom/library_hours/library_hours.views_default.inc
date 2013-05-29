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
  $view->name = 'calendar_date';
  $view->description = 'Individual Library Hours Date View';
  $view->tag = 'Hours';
  $view->base_table = 'node';
  $view->human_name = 'Calendar Date';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['id'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['table'] = 'field_data_field_library_hrs';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['field'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['label'] = 'Library';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_building_target_id']['id'] = 'field_building_target_id';
  $handler->display->display_options['relationships']['field_building_target_id']['table'] = 'field_data_field_building';
  $handler->display->display_options['relationships']['field_building_target_id']['field'] = 'field_building_target_id';
  $handler->display->display_options['relationships']['field_building_target_id']['relationship'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_building_target_id']['label'] = 'Building';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Taxonomy term: Service URL */
  $handler->display->display_options['fields']['field_service_url']['id'] = 'field_service_url';
  $handler->display->display_options['fields']['field_service_url']['table'] = 'field_data_field_service_url';
  $handler->display->display_options['fields']['field_service_url']['field'] = 'field_service_url';
  $handler->display->display_options['fields']['field_service_url']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['field_service_url']['label'] = '';
  $handler->display->display_options['fields']['field_service_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_service_url']['click_sort_column'] = 'url';
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['relationship'] = 'field_library_hrs_target_id';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_library_hrs_target_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['relationship'] = 'field_library_hrs_target_id';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID',
    ),
  );
  $export['calendar_date'] = $view;

  $view = new view();
  $view->name = 'calendar_details';
  $view->description = 'Various views of the hours calendars.';
  $view->tag = 'Hours';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Calendar Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['id'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['table'] = 'field_data_field_hrs_library';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['field'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['label'] = 'Library Associated';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Service URL */
  $handler->display->display_options['fields']['field_service_url']['id'] = 'field_service_url';
  $handler->display->display_options['fields']['field_service_url']['table'] = 'field_data_field_service_url';
  $handler->display->display_options['fields']['field_service_url']['field'] = 'field_service_url';
  $handler->display->display_options['fields']['field_service_url']['label'] = '';
  $handler->display->display_options['fields']['field_service_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_service_url']['click_sort_column'] = 'url';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'library_hours_calendars' => 'library_hours_calendars',
  );

  /* Display: Calendar Detail */
  $handler = $view->new_display('panel_pane', 'Calendar Detail', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['id'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['table'] = 'field_data_field_library_hrs';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['field'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['label'] = 'Library';
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Term ID (Calendar or Library)',
    ),
  );

  /* Display: Calendar List */
  $handler = $view->new_display('panel_pane', 'Calendar List', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['choose'] = '- Select Calendar -';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '/taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Date Detail */
  $handler = $view->new_display('panel_pane', 'Date Detail', 'panel_pane_3');
  $handler->display->display_options['enabled'] = FALSE;
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Term ID (Calendar or Library)',
    ),
  );

  /* Display: Academic Year Hour Summaries */
  $handler = $view->new_display('panel_pane', 'Academic Year Hour Summaries', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academic Year Hours';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Academic Year Hours */
  $handler->display->display_options['fields']['field_cal_academic_hours']['id'] = 'field_cal_academic_hours';
  $handler->display->display_options['fields']['field_cal_academic_hours']['table'] = 'field_data_field_cal_academic_hours';
  $handler->display->display_options['fields']['field_cal_academic_hours']['field'] = 'field_cal_academic_hours';
  $handler->display->display_options['fields']['field_cal_academic_hours']['label'] = '';
  $handler->display->display_options['fields']['field_cal_academic_hours']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cal_academic_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cal_academic_hours']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cal_academic_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cal_academic_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_cal_academic_hours']['settings'] = array(
    'showclosed' => 'all',
    'daysformat' => 'short',
    'hoursformat' => '1',
    'compress' => 0,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'hide',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_cal_academic_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cal_academic_hours']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Calendar',
    ),
  );

  /* Display: Summer Year Hour Summaries */
  $handler = $view->new_display('panel_pane', 'Summer Year Hour Summaries', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summer Hours';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Summer Hours */
  $handler->display->display_options['fields']['field_cal_summer_hours']['id'] = 'field_cal_summer_hours';
  $handler->display->display_options['fields']['field_cal_summer_hours']['table'] = 'field_data_field_cal_summer_hours';
  $handler->display->display_options['fields']['field_cal_summer_hours']['field'] = 'field_cal_summer_hours';
  $handler->display->display_options['fields']['field_cal_summer_hours']['label'] = '';
  $handler->display->display_options['fields']['field_cal_summer_hours']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cal_summer_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cal_summer_hours']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cal_summer_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cal_summer_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_cal_summer_hours']['settings'] = array(
    'showclosed' => 'all',
    'daysformat' => 'short',
    'hoursformat' => '1',
    'compress' => 0,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'hide',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_cal_summer_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cal_summer_hours']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Calendar',
    ),
  );
  $export['calendar_details'] = $view;

  $view = new view();
  $view->name = 'library_hours';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Library Hours';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'library-hours';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Calendar';
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['sorts']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['sorts']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['sorts']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  /* Sort criterion: Content: Hours -  start date (field_open_hours) */
  $handler->display->display_options['sorts']['field_open_hours_value']['id'] = 'field_open_hours_value';
  $handler->display->display_options['sorts']['field_open_hours_value']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['sorts']['field_open_hours_value']['field'] = 'field_open_hours_value';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Pane - Month View */
  $handler = $view->new_display('panel_pane', 'Pane - Month View', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['display_description'] = 'Shows the standard Month View';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Calendar';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_hours_library_status]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '60%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '60%';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['empty'] = 'TBA';
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-1:+1';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Pane - Week View */
  $handler = $view->new_display('panel_pane', 'Pane - Week View', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['display_description'] = 'Horizontal Week View';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['groupby_times'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Calendar';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Pane - Week Mini Vertical */
  $handler = $view->new_display('panel_pane', 'Pane - Week Mini Vertical', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'library-hours mini-vertical';
  $handler->display->display_options['display_description'] = 'Horizontal Week Tabular Vertical Thin, column view';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_open_hours_1' => 'field_open_hours_1',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_hours_library_status',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours_1']['id'] = 'field_open_hours_1';
  $handler->display->display_options['fields']['field_open_hours_1']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['settings'] = array(
    'format_type' => 'day_of_week_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['delta_offset'] = '0';
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_wrapper_class'] = 'library-hours-status';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Today's Hours */
  $handler = $view->new_display('panel_pane', 'Today\'s Hours', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'The Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['id'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['table'] = 'field_data_field_hours_calendar';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['field'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['label'] = 'Library';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-1:+1';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Today's Hours Page */
  $handler = $view->new_display('page', 'Today\'s Hours Page', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'Location';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  /* Sort criterion: Content: Hours -  start date (field_open_hours) */
  $handler->display->display_options['sorts']['field_open_hours_value']['id'] = 'field_open_hours_value';
  $handler->display->display_options['sorts']['field_open_hours_value']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['sorts']['field_open_hours_value']['field'] = 'field_open_hours_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'hours/today';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Today's Hours - Block */
  $handler = $view->new_display('block', 'Today\'s Hours - Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Today&apos;s Hours';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'More Hours Link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div><a href="/hours"  class="views-more-link">More Hours</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'The Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['id'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['table'] = 'field_data_field_library_hrs';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['field'] = 'field_library_hrs_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_library_hrs_target_id']['label'] = 'Library';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_hrs_library_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_library_hrs_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '<span class="hours-[field_hours_library_status]">[field_open_hours]</span><span class="hours-status-[field_hours_library_status]">[field_hours_library_status]</span>';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_hrs_library_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-1:+1';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: List On Homepage (field_list_on_homepage) */
  $handler->display->display_options['filters']['field_list_on_homepage_value']['id'] = 'field_list_on_homepage_value';
  $handler->display->display_options['filters']['field_list_on_homepage_value']['table'] = 'field_data_field_list_on_homepage';
  $handler->display->display_options['filters']['field_list_on_homepage_value']['field'] = 'field_list_on_homepage_value';
  $handler->display->display_options['filters']['field_list_on_homepage_value']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['filters']['field_list_on_homepage_value']['value'] = array(
    1 => '1',
  );

  /* Display: Today's Hours - Block - Individual */
  $handler = $view->new_display('block', 'Today\'s Hours - Block - Individual', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Today&apos;s Hours';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'More Hours Link';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div><a href="/hours"  class="views-more-link">More Hours</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'The Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['id'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['table'] = 'field_data_field_hours_calendar';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['field'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['label'] = 'Cal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_open_hours']['alter']['text'] = '<span class="hours-[field_hours_library_status]">[field_open_hours]</span><span class="hours-status-[field_hours_library_status]">[field_hours_library_status]</span>';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_hrs_library_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-1:+1';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );

  /* Display: All Hours */
  $handler = $view->new_display('panel_pane', 'All Hours', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['display_description'] = 'Shows all hours for a specific library';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'The Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['id'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['table'] = 'field_data_field_hrs_library';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['field'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['label'] = 'The Library';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-1:+1';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['path'] = 'calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['groupby_times'] = 'custom';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '00:00:00';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['path'] = 'calendar/week';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
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
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['path'] = 'calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_open_hours.field_open_hours_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['path'] = 'calendar/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
  );

  /* Display: Pane - Week Vertical */
  $handler = $view->new_display('panel_pane', 'Pane - Week Vertical', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Hours';
  $handler->display->display_options['display_description'] = 'Horizontal Week Tabular Vertical View';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hrs_lib_calendar' => 'field_hrs_lib_calendar',
    'field_hours_library_status' => 'field_hours_library_status',
    'field_open_hours' => 'field_open_hours',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hrs_lib_calendar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_library_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours_1']['id'] = 'field_open_hours_1';
  $handler->display->display_options['fields']['field_open_hours_1']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['settings'] = array(
    'format_type' => 'day_of_week_and_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['delta_offset'] = '0';
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['use_fromto'] = 'no';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
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
      'label' => 'Content: Calendar',
    ),
    'date_argument' => array(
      'type' => 'none',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Date: Date (node)',
    ),
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_hrs_lib_calendar',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = 'calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = 'status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours_1']['id'] = 'field_open_hours_1';
  $handler->display->display_options['fields']['field_open_hours_1']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_1']['label'] = 'dow';
  $handler->display->display_options['fields']['field_open_hours_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['settings'] = array(
    'format_type' => 'dow_int',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_1']['delta_offset'] = '0';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = 'open';
  $handler->display->display_options['fields']['field_open_hours']['element_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'hour_no_punctuation',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_limit'] = '7';
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours_2']['id'] = 'field_open_hours_2';
  $handler->display->display_options['fields']['field_open_hours_2']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_2']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours_2']['label'] = 'close';
  $handler->display->display_options['fields']['field_open_hours_2']['settings'] = array(
    'format_type' => 'hour_no_punctuation',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours_2']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'hours';

  /* Display: Custom RSS for Library Hours */
  $handler = $view->new_display('feed', 'Custom RSS for Library Hours', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'name';
  $handler->display->display_options['row_options']['link_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_open_hours';
  $handler->display->display_options['row_options']['creator_field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['row_options']['date_field'] = 'field_open_hours';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'field_hrs_lib_calendar',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['id'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['field'] = 'field_hrs_lib_calendar';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_class'] = 'library-hours-library';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['type'] = 'token_formatters_entity_reference';
  $handler->display->display_options['fields']['field_hrs_lib_calendar']['settings'] = array(
    'text' => '[entity:label]',
    'link' => '0',
    'check_access' => 1,
  );
  /* Field: Content: Library Status */
  $handler->display->display_options['fields']['field_hours_library_status']['id'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['table'] = 'field_data_field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['field'] = 'field_hours_library_status';
  $handler->display->display_options['fields']['field_hours_library_status']['label'] = '';
  $handler->display->display_options['fields']['field_hours_library_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours_library_status']['element_class'] = 'library-hours-status';
  $handler->display->display_options['fields']['field_hours_library_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_library_status']['element_default_classes'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_open_hours']['id'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['table'] = 'field_data_field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['field'] = 'field_open_hours';
  $handler->display->display_options['fields']['field_open_hours']['label'] = '';
  $handler->display->display_options['fields']['field_open_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_open_hours']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_open_hours']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hrs_library_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Calendar (field_hrs_lib_calendar) */
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hrs_lib_calendar_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_open_hours.field_open_hours_value' => 'field_data_field_open_hours.field_open_hours_value',
  );
  $handler->display->display_options['path'] = 'cal/%';
  $export['library_hours'] = $view;

  $view = new view();
  $view->name = 'library_hours_calendar';
  $view->description = 'Full Calendar Version';
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
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['colorbox']['colorbox'] = TRUE;
  $handler->display->display_options['style_options']['colorbox']['colorboxClass'] = '#region-content';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['left'] = 'prev';
  $handler->display->display_options['style_options']['center'] = 'title today';
  $handler->display->display_options['style_options']['right'] = 'next';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mm tt{ - h:mm tt}';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['titleformatWeek'] = 'MMMM d[ yyyy]{ - [ MMMM] d, yyyy}';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_calendar_display_title';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['dayClickView'] = 'basicDay';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Library Hours Calendar';
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['colorbox']['colorbox'] = TRUE;
  $handler->display->display_options['style_options']['colorbox']['colorboxClass'] = '#region-content';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['weekMode'] = 'variable';
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
  $handler->display->display_options['style_options']['fullcalendar_options']['disableDragging'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['disableResizing'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['dayClickView'] = 'basicDay';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
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

  /* Display: Single Day Hours */
  $handler = $view->new_display('panel_pane', 'Single Day Hours', 'panel_pane_3');
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
  $handler = $view->new_display('panel_pane', 'Calendar List', 'panel_pane_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Single Day Hours- New */
  $handler = $view->new_display('panel_pane', 'Single Day Hours- New', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
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
  $export['library_hours_calendar'] = $view;

  $view = new view();
  $view->name = 'library_hours_editors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library Hours Editors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Hours Editors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['id'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['table'] = 'field_data_field_hrs_lib_calendar';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['field'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_lib_calendar_target_id']['label'] = 'Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['id'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['table'] = 'field_data_field_hrs_library';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['field'] = 'field_hrs_library_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['relationships']['field_hrs_library_target_id']['label'] = 'Library';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'Calendar';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Hours';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_hrs_lib_calendar_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff/hours/edit';
  $export['library_hours_editors'] = $view;

  return $export;
}
