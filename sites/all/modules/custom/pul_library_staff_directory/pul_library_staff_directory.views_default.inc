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

  $view = new view();
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
  $handler->display->display_options['title'] = 'Subjects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: User: Active status */
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
  /* Filter criterion: User: Formal Name (field_puluser_formalname) */
  $handler->display->display_options['filters']['field_puluser_formalname_value']['id'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['field'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator_id'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['label'] = 'Formal Name (field_puluser_formalname)';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['identifier'] = 'field_puluser_formalname_value';

  /* Display: Subject Specialist Finder Page */
  $handler = $view->new_display('page', 'Subject Specialist Finder Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subject Specialists';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find Specialist';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'view_user' => 'view_user',
    'name' => 'name',
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'mail' => 'mail',
    'field_puluser_displaytitle' => 'field_puluser_displaytitle',
    'field_puluser_office' => 'field_puluser_office',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'field_puluser_sublibrarian' => 'field_puluser_sublibrarian',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_displaytitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_office' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_sublibrarian' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['summary'] = 'Library Subject Specialists';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['id'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['field'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['required'] = TRUE;
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<a href="/staff/[name]">[picture]
<span class="sr-only">Link to subject specialist profile</span></a>';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<a href="/staff/[name]"><img typeof="foaf:Image" src="/sites/all/themes/pul_base/assets/public/images/default-user.svg" width="70" height="100" alt="">
<span class="sr-only">Link to subject specialist profile</span></a>
';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo-small';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['fields']['name_1']['label'] = 'Subject';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_puluser_fname']['type'] = 'text_plain';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_puluser_lname']['type'] = 'text_plain';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Librarian';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['text'] = '[field_puluser_nick_name] [field_puluser_lname] ';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<i class="icon-email"></i> [mail]';
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<i class="icon-phone"></i> [field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
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
  $handler->display->display_options['path'] = 'about/staff/specialists';

  /* Display: Subject Specialist Finder Block */
  $handler = $view->new_display('block', 'Subject Specialist Finder Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'name';
  $handler->display->display_options['style_options']['text'] = 'View';
  $handler->display->display_options['style_options']['label'] = 'Librarians';
  $handler->display->display_options['style_options']['choose'] = '- Select Librarian -';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['id'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['field'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '/staff/[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Formal Name (field_puluser_formalname) */
  $handler->display->display_options['filters']['field_puluser_formalname_value']['id'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['field'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator_id'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['label'] = 'Formal Name (field_puluser_formalname)';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['identifier'] = 'field_puluser_formalname_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: PUL Library User Directory */
  $handler = $view->new_display('page', 'PUL Library User Directory', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Staff';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Start Over';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'view_user' => 'view_user',
    'name' => 'name',
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'mail' => 'mail',
    'field_puluser_displaytitle' => 'field_puluser_displaytitle',
    'field_puluser_office' => 'field_puluser_office',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'field_puluser_sublibrarian' => 'field_puluser_sublibrarian',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_displaytitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_office' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_sublibrarian' => array(
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
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Contact';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = 'Email [field_puluser_fname]';
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  /* Field: User: Short Title */
  $handler->display->display_options['fields']['field_puluser_short_title']['id'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['table'] = 'field_data_field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['field'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_short_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_short_title']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Formal Name (field_puluser_formalname) */
  $handler->display->display_options['filters']['field_puluser_formalname_value']['id'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['field'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_puluser_formalname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator_id'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['identifier'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Active status */
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
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'directory';

  /* Display: User Basic Content Pane */
  $handler = $view->new_display('panel_pane', 'User Basic Content Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Subjects Attached to Librarian */
  $handler = $view->new_display('panel_pane', 'Subjects Attached to Librarian', 'subject_librarian_database_subjects');
  $handler->display->display_options['display_description'] = 'Displays all database subjects assigned to the librarian. ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['id'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['field'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Display Title */
  $handler->display->display_options['fields']['field_puluser_displaytitle']['id'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['table'] = 'field_data_field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field'] = 'field_puluser_displaytitle';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_displaytitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_displaytitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Hide on Specialist Page (field_subs_hide_on_specialist) */
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['id'] = 'field_subs_hide_on_specialist_value';
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['table'] = 'field_data_field_subs_hide_on_specialist';
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['field'] = 'field_subs_hide_on_specialist_value';
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_subs_hide_on_specialist_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
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
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: A to Z User Directory */
  $handler = $view->new_display('page', 'A to Z User Directory', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Staff';
  $handler->display->display_options['display_description'] = 'Groups by Last Name First Letter';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Start Over';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_puluser_lname',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['field_api_classes'] = TRUE;
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Contact';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = 'Email [field_puluser_fname]';
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: PUL Subject Librarian */
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['id'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['table'] = 'field_data_field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field'] = 'field_puluser_sublibrarian';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_sublibrarian']['field_api_classes'] = TRUE;
  /* Field: User: Short Title */
  $handler->display->display_options['fields']['field_puluser_short_title']['id'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['table'] = 'field_data_field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['field'] = 'field_puluser_short_title';
  $handler->display->display_options['fields']['field_puluser_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_short_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_short_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_short_title']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
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
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'directory/a-z';

  /* Display: Departmental Contact List */
  $handler = $view->new_display('panel_pane', 'Departmental Contact List', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Link to user */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['path'] = 'staff/[name]/contact';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = 'Location';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Search Staff By Name */
  $handler = $view->new_display('entityreference', 'Search Staff By Name', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
    'view_user' => 0,
    'name' => 0,
    'field_puluser_formalname' => 0,
    'mail' => 0,
    'field_puluser_displaytitle' => 0,
    'field_puluser_office' => 0,
    'field_puluser_phone_number' => 0,
    'field_puluser_sublibrarian' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Formal Name (field_puluser_formalname) */
  $handler->display->display_options['filters']['field_puluser_formalname_value']['id'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['field'] = 'field_puluser_formalname_value';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator_id'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['label'] = 'Formal Name (field_puluser_formalname)';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['operator'] = 'field_puluser_formalname_value_op';
  $handler->display->display_options['filters']['field_puluser_formalname_value']['expose']['identifier'] = 'field_puluser_formalname_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Staff by Department */
  $handler = $view->new_display('panel_pane', 'Staff by Department', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff by Department';
  $handler->display->display_options['display_description'] = 'List out Staff By Deparment';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: PUL Department (field_puluser_department) */
  $handler->display->display_options['arguments']['field_puluser_department_tid']['id'] = 'field_puluser_department_tid';
  $handler->display->display_options['arguments']['field_puluser_department_tid']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['arguments']['field_puluser_department_tid']['field'] = 'field_puluser_department_tid';
  $handler->display->display_options['arguments']['field_puluser_department_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_puluser_department_tid']['summary']['format'] = 'default_summary';
  $export['specialist_finder'] = $view;

  return $export;
}
