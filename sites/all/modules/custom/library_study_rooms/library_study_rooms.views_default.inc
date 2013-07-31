<?php
/**
 * @file
 * library_study_rooms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_study_rooms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'study_room_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Study Room Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Study Rooms at Firestone';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_study_room_numbers' => 'field_study_room_numbers',
    'field_study_room_library' => 'field_study_room_library',
    'field_study_room_staff_contact' => 'field_study_room_staff_contact',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_study_room_numbers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_study_room_library' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_study_room_staff_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Content: Departmental URL */
  $handler->display->display_options['fields']['field_study_room_department_url']['id'] = 'field_study_room_department_url';
  $handler->display->display_options['fields']['field_study_room_department_url']['table'] = 'field_data_field_study_room_department_url';
  $handler->display->display_options['fields']['field_study_room_department_url']['field'] = 'field_study_room_department_url';
  $handler->display->display_options['fields']['field_study_room_department_url']['label'] = '';
  $handler->display->display_options['fields']['field_study_room_department_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_study_room_department_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_department_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_department_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_department_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_department_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_study_room_department_url']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Room Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_study_room_department_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Room Numbers */
  $handler->display->display_options['fields']['field_study_room_numbers']['id'] = 'field_study_room_numbers';
  $handler->display->display_options['fields']['field_study_room_numbers']['table'] = 'field_data_field_study_room_numbers';
  $handler->display->display_options['fields']['field_study_room_numbers']['field'] = 'field_study_room_numbers';
  $handler->display->display_options['fields']['field_study_room_numbers']['label'] = 'Number';
  $handler->display->display_options['fields']['field_study_room_numbers']['element_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_numbers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_numbers']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_numbers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_numbers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_study_room_numbers']['field_api_classes'] = TRUE;
  /* Field: Content: Library Building */
  $handler->display->display_options['fields']['field_study_room_library']['id'] = 'field_study_room_library';
  $handler->display->display_options['fields']['field_study_room_library']['table'] = 'field_data_field_study_room_library';
  $handler->display->display_options['fields']['field_study_room_library']['field'] = 'field_study_room_library';
  $handler->display->display_options['fields']['field_study_room_library']['label'] = '';
  $handler->display->display_options['fields']['field_study_room_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_library']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_library']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_study_room_library']['field_api_classes'] = TRUE;
  /* Field: Content: Staff Contact */
  $handler->display->display_options['fields']['field_study_room_staff_contact']['id'] = 'field_study_room_staff_contact';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['table'] = 'field_data_field_study_room_staff_contact';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['field'] = 'field_study_room_staff_contact';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['element_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_staff_contact']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_staff_contact']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_study_room_staff_contact']['settings'] = array(
    'view_mode' => 'basic_staff_contact_information',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_study_room_staff_contact']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
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
    'study_room' => 'study_room',
  );

  /* Display: Firestone Study Rooms */
  $handler = $view->new_display('panel_pane', 'Firestone Study Rooms', 'panel_pane_1');
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
    'study_room' => 'study_room',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['study_room_lists'] = $view;

  return $export;
}
