<?php

/**
 * @file
 * user_profiles_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profiles_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_department']['field_api_classes'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    6 => '6',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: User Content Pane */
  $handler = $view->new_display('panel_pane', 'User Content Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['id'] = 'field_puluser_temp_staff_record_target_id';
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['table'] = 'field_data_field_puluser_temp_staff_record';
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['field'] = 'field_puluser_temp_staff_record_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'user--picture';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<div class="user--picture"><img typeof="foaf:Image" src="/sites/all/themes/pul_base/assets/public/images/default-user.svg" width="150" height="200" alt=""></div>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_class'] = 'user--title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['hide_empty'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['id'] = 'field_puluser_officialtitle_1';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['relationship'] = 'field_puluser_temp_staff_record_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['element_label_colon'] = FALSE;
  /* Field: User: Unit */
  $handler->display->display_options['fields']['field_puluser_unit']['id'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['table'] = 'field_data_field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['field'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_unit']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_unit']['element_class'] = 'user--unit';
  $handler->display->display_options['fields']['field_puluser_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['hide_empty'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_section']['element_class'] = 'user--section';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_division']['element_class'] = 'user--division';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_department']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_department']['element_class'] = 'user--dept';
  $handler->display->display_options['fields']['field_puluser_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_department']['delta_offset'] = '0';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<i class="icon-email"></i> [mail]';
  $handler->display->display_options['fields']['mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['mail']['element_class'] = 'user--email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<i class="icon-phone"></i> [field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_class'] = 'user--phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_empty'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['text'] = '<i class="icon-location"></i> [field_puluser_office]';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_office']['element_class'] = 'user--office';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  /* Field: User: Building Location */
  $handler->display->display_options['fields']['field_puluser_building_location']['id'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['table'] = 'field_data_field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['field'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['text'] = '<i class="icon-library"></i> [field_puluser_building_location]';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_class'] = 'user--building';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_building_location']['element_default_classes'] = FALSE;
  /* Field: User: Appointment Calendar */
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['id'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['table'] = 'field_data_field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['field'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_class'] = 'button--appointment';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['click_sort_column'] = 'url';
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
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'name_1' => 0,
    'field_puluser_fname' => 0,
    'mail' => 0,
    'field_puluser_displaytitle' => 0,
    'field_puluser_officialtitle' => 0,
    'field_puluser_lname' => 0,
    'field_puluser_phone_number' => 0,
    'field_puluser_office' => 0,
    'field_puluser_department' => 0,
    'field_puluser_section' => 0,
    'field_puluser_division' => 0,
    'field_puluser_library' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Edit User View */
  $handler = $view->new_display('panel_pane', 'Edit User View', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Edit User Information';
  $handler->display->display_options['display_description'] = 'Display if a user has rights to edit user profiles. ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-staff-profile-btn';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Profile';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: News Contact */
  $handler = $view->new_display('panel_pane', 'News Contact', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_news_library_contact_node']['id'] = 'reverse_field_news_library_contact_node';
  $handler->display->display_options['relationships']['reverse_field_news_library_contact_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_news_library_contact_node']['field'] = 'reverse_field_news_library_contact_node';
  $handler->display->display_options['relationships']['reverse_field_news_library_contact_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '[field_puluser_fname] [field_puluser_lname] ';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Appointment Calendar */
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['id'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['table'] = 'field_data_field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['field'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['field_api_classes'] = TRUE;
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['field_api_classes'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
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
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Branch Librarian */
  $handler = $view->new_display('panel_pane', 'Branch Librarian', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departmental Librarian';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'user--picture';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo';
  /* Field: User: PUL Netid */
  $handler->display->display_options['fields']['field_puluser_netid']['id'] = 'field_puluser_netid';
  $handler->display->display_options['fields']['field_puluser_netid']['table'] = 'field_data_field_puluser_netid';
  $handler->display->display_options['fields']['field_puluser_netid']['field'] = 'field_puluser_netid';
  $handler->display->display_options['fields']['field_puluser_netid']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_netid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_netid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '<a href="/staff/[field_puluser_netid]">[picture]
<h3 class="user--name">[field_puluser_fname] [field_puluser_lname]</h3></a>';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_class'] = 'user--title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['hide_empty'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<i class="icon-email"></i> [mail]';
  $handler->display->display_options['fields']['mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['mail']['element_class'] = 'user--email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<i class="icon-phone"></i> [field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_class'] = 'user--phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_empty'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['text'] = '<i class="icon-location"></i> [field_puluser_office]';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_office']['element_class'] = 'user--office';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  /* Field: User: Building Location */
  $handler->display->display_options['fields']['field_puluser_building_location']['id'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['table'] = 'field_data_field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['field'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_building_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['text'] = '<i class="icon-library"></i> [field_puluser_building_location]';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_class'] = 'user--building';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_building_location']['element_default_classes'] = FALSE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_division']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
  /* Field: User: Appointment Calendar */
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['id'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['table'] = 'field_data_field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['field'] = 'field_puluser_appt_calendar';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_wrapper_class'] = 'button--appointment';
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_appt_calendar']['click_sort_column'] = 'url';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Edit Personal Librarian View */
  $handler = $view->new_display('panel_pane', 'Edit Personal Librarian View', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Edit Personal Librarian Information';
  $handler->display->display_options['display_description'] = 'Display if a user has rights to edit user profiles. ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    28 => '28',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'View Current Student Roster';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'staff/pl-list/[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-staff-profile-btn';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Profile';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    28 => '28',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Expert Profile */
  $handler = $view->new_display('panel_pane', 'Expert Profile', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['id'] = 'field_puluser_temp_staff_record_target_id';
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['table'] = 'field_data_field_puluser_temp_staff_record';
  $handler->display->display_options['relationships']['field_puluser_temp_staff_record_target_id']['field'] = 'field_puluser_temp_staff_record_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Expert Bio */
  $handler->display->display_options['fields']['field_expert_bio']['id'] = 'field_expert_bio';
  $handler->display->display_options['fields']['field_expert_bio']['table'] = 'field_data_field_expert_bio';
  $handler->display->display_options['fields']['field_expert_bio']['field'] = 'field_expert_bio';
  $handler->display->display_options['fields']['field_expert_bio']['label'] = '';
  $handler->display->display_options['fields']['field_expert_bio']['element_label_colon'] = FALSE;
  /* Field: User: Expert Departments */
  $handler->display->display_options['fields']['field_expert_departments']['id'] = 'field_expert_departments';
  $handler->display->display_options['fields']['field_expert_departments']['table'] = 'field_data_field_expert_departments';
  $handler->display->display_options['fields']['field_expert_departments']['field'] = 'field_expert_departments';
  $handler->display->display_options['fields']['field_expert_departments']['label'] = 'Departments and Programs Served';
  $handler->display->display_options['fields']['field_expert_departments']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_expert_departments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_expert_departments']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_expert_departments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expert_departments']['multi_type'] = 'ul';
  /* Field: User: Expert Subject Areas */
  $handler->display->display_options['fields']['field_expert_subject_areas']['id'] = 'field_expert_subject_areas';
  $handler->display->display_options['fields']['field_expert_subject_areas']['table'] = 'field_data_field_expert_subject_areas';
  $handler->display->display_options['fields']['field_expert_subject_areas']['field'] = 'field_expert_subject_areas';
  $handler->display->display_options['fields']['field_expert_subject_areas']['label'] = 'Specialities';
  $handler->display->display_options['fields']['field_expert_subject_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expert_subject_areas']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
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
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $export['user_profile'] = $view;

  return $export;
}
