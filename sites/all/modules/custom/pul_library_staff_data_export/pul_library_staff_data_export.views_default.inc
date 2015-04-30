<?php
/**
 * @file
 * pul_library_staff_data_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_library_staff_data_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pul_library_staff_users_export';
  $view->description = 'Data Views of Library Staff Users';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Library Staff Users Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff Export By Department';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: PUL Department (field_puluser_department) */
  $handler->display->display_options['relationships']['field_puluser_department_tid']['id'] = 'field_puluser_department_tid';
  $handler->display->display_options['relationships']['field_puluser_department_tid']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['relationships']['field_puluser_department_tid']['field'] = 'field_puluser_department_tid';
  $handler->display->display_options['relationships']['field_puluser_department_tid']['required'] = TRUE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Net ID';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['delta_offset'] = '0';
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  /* Field: User: Unit */
  $handler->display->display_options['fields']['field_puluser_unit']['id'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['table'] = 'field_data_field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['field'] = 'field_puluser_unit';
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_puluser_department_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
  );

  /* Display: Department By CSV */
  $handler = $view->new_display('views_data_export', 'Department By CSV', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'URL - /department/[tid]/data.csv';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'department/%/data.csv';
  $export['pul_library_staff_users_export'] = $view;

  return $export;
}
