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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_study_room_staff_contact_target_id']['id'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['relationships']['field_study_room_staff_contact_target_id']['table'] = 'field_data_field_study_room_staff_contact';
  $handler->display->display_options['relationships']['field_study_room_staff_contact_target_id']['field'] = 'field_study_room_staff_contact_target_id';
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
  $handler->display->display_options['fields']['field_study_room_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_study_room_library']['element_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_library']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_study_room_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_study_room_library']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_study_room_library']['field_api_classes'] = TRUE;
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['type'] = 'text_plain';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['type'] = 'text_plain';
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_study_room_staff_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Contact';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div>[field_puluser_nick_name] [field_puluser_lname]</div>
[mail]
[field_puluser_phone_number]
[field_puluser_office]
[body] 
';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'study_room' => 'study_room',
  );

  /* Display: Firestone Study Rooms */
  $handler = $view->new_display('panel_pane', 'Firestone Study Rooms', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rooms Available for Use by Graduate Students';
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
    'study_room' => 'study_room',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['study_room_lists'] = $view;

  return $export;
}
