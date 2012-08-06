<?php
/**
 * @file
 * pul_library_staff_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_library_staff_directory_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'specialist_finder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'PUL User Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Specialist Finder';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_user']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_user']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_user']['hide_alter_empty'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_fname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_fname']['field_api_classes'] = 1;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_lname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_lname']['field_api_classes'] = 1;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = '[view_user]';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_formalname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = 1;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field_api_classes'] = 1;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_office']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = 1;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = 1;
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = 1;
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
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
  /* Filter criterion: User: PUL Subject Librarian (field_puluser_sublibrarian) */
  $handler->display->display_options['filters']['field_puluser_sublibrarian_value']['id'] = 'field_puluser_sublibrarian_value';
  $handler->display->display_options['filters']['field_puluser_sublibrarian_value']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['filters']['field_puluser_sublibrarian_value']['field'] = 'field_puluser_sublibrarian_value';
  $handler->display->display_options['filters']['field_puluser_sublibrarian_value']['value'] = array(
    1 => '1',
  );

  /* Display: Subject Specialist Finder Page */
  $handler = $view->new_display('page', 'Subject Specialist Finder Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'databases/find/specialists';

  /* Display: Subject Specialist Finder Block */
  $handler = $view->new_display('block', 'Subject Specialist Finder Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: PUL Library User Directory */
  $handler = $view->new_display('page', 'PUL Library User Directory', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Staff';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Last Name (field_puluser_lname:format) */
  $handler->display->display_options['arguments']['field_puluser_lname_format']['id'] = 'field_puluser_lname_format';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['field'] = 'field_puluser_lname_format';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_puluser_lname_format']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_puluser_lname_format']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_puluser_lname_format']['limit'] = '0';
  $handler->display->display_options['arguments']['field_puluser_lname_format']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_puluser_lname_format']['break_phrase'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'about/staff-list';
  $export['specialist_finder'] = $view;

  return $export;
}
