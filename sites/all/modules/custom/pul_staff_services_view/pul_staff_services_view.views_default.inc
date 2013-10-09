<?php
/**
 * @file
 * pul_staff_services_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_staff_services_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'library_staff_service';
  $view->description = 'Creates a service for displaying a user which can be ingested by external app';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Library Staff Service';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'netid';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname_1']['id'] = 'field_puluser_fname_1';
  $handler->display->display_options['fields']['field_puluser_fname_1']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname_1']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname_1']['label'] = 'firstName';
  $handler->display->display_options['fields']['field_puluser_fname_1']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname_1']['id'] = 'field_puluser_lname_1';
  $handler->display->display_options['fields']['field_puluser_lname_1']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname_1']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname_1']['label'] = 'lastName';
  $handler->display->display_options['fields']['field_puluser_lname_1']['element_label_colon'] = FALSE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'formalName';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: Short Title */
  $handler->display->display_options['fields']['field_puluser_short_title']['id'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['table'] = 'field_data_field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['field'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['label'] = 'shortTitle';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_short_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'officialTitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'displayTitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = FALSE;
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department_1']['id'] = 'field_puluser_department_1';
  $handler->display->display_options['fields']['field_puluser_department_1']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department_1']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department_1']['label'] = 'department';
  $handler->display->display_options['fields']['field_puluser_department_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_department_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_department_1']['separator'] = ' ';
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = 'division';
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_division']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = 'section';
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_section']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  /* Field: User: Unit */
  $handler->display->display_options['fields']['field_puluser_unit']['id'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['table'] = 'field_data_field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['field'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['label'] = 'unit';
  $handler->display->display_options['fields']['field_puluser_unit']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'phoneNumber';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['type'] = 'text_plain';
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'office';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['type'] = 'text_plain';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = 'picture';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: CAS user name */
  $handler->display->display_options['filters']['cas_name']['id'] = 'cas_name';
  $handler->display->display_options['filters']['cas_name']['table'] = 'cas_user';
  $handler->display->display_options['filters']['cas_name']['field'] = 'cas_name';
  $handler->display->display_options['filters']['cas_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cas_name']['expose']['operator_id'] = 'cas_name_op';
  $handler->display->display_options['filters']['cas_name']['expose']['label'] = 'netid';
  $handler->display->display_options['filters']['cas_name']['expose']['operator'] = 'cas_name_op';
  $handler->display->display_options['filters']['cas_name']['expose']['identifier'] = 'cas_name';
  $handler->display->display_options['filters']['cas_name']['expose']['remember_roles'] = array(
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
  );

  /* Display: Individual User Service */
  $handler = $view->new_display('services', 'Individual User Service', 'services_1');
  $handler->display->display_options['path'] = 'library-user';

  /* Display: User Service */
  $handler = $view->new_display('services', 'User Service', 'services_2');
  $handler->display->display_options['enabled'] = FALSE;
  $export['library_staff_service'] = $view;

  return $export;
}
