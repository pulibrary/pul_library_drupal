<?php

/**
 * @file
 * pul_personal_librarian.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_personal_librarian_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pul_personal_librarian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Personal Librarian';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    28 => '28',
  );

  /* Display: Personal Librarian Lookup */
  $handler = $view->new_display('entityreference', 'Personal Librarian Lookup', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Personal Librarian';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Personal Librarian Gallery */
  $handler = $view->new_display('panel_pane', 'Personal Librarian Gallery', 'panel_pane_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'librarian';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<div class="user--no-picture"><img typeof="foaf:Image" src="/sites/all/themes/pul_base/assets/public/images/default-user.svg" width="150" height="200" alt=""></div>';
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '[field_puluser_nick_name] [field_puluser_lname]';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';

  /* Display: Personal Librarian by Student */
  $handler = $view->new_display('panel_pane', 'Personal Librarian by Student', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Personal Librarian:';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    28 => '28',
    29 => '29',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
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
  /* Field: User: Personal Librarian */
  $handler->display->display_options['fields']['field_current_personal_lib']['id'] = 'field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['field'] = 'field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['label'] = '';
  $handler->display->display_options['fields']['field_current_personal_lib']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_personal_lib']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_personal_lib']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '[field_puluser_nick_name] [field_puluser_lname]';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<div class="user--picture"><img typeof="foaf:Image" src="/sites/all/themes/pul_base/assets/public/images/default-user.svg" width="150" height="200" alt=""></div>';
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo';
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  /* Field: User: Fun Fact About Me */
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['id'] = 'field__personal_lib_fun_fact';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['table'] = 'field_data_field__personal_lib_fun_fact';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['field'] = 'field__personal_lib_fun_fact';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['label'] = 'Fun fact about me';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['alter']['text'] = '<b>Fun Fact About Me</b>: [field__personal_lib_fun_fact]';
  $handler->display->display_options['fields']['field__personal_lib_fun_fact']['hide_empty'] = TRUE;
  /* Field: User: Specialization */
  $handler->display->display_options['fields']['field_personal_lib_spec']['id'] = 'field_personal_lib_spec';
  $handler->display->display_options['fields']['field_personal_lib_spec']['table'] = 'field_data_field_personal_lib_spec';
  $handler->display->display_options['fields']['field_personal_lib_spec']['field'] = 'field_personal_lib_spec';
  $handler->display->display_options['fields']['field_personal_lib_spec']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_personal_lib_spec']['label'] = 'My areas of specialization';
  $handler->display->display_options['fields']['field_personal_lib_spec']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personal_lib_spec']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_personal_lib_spec']['alter']['text'] = '<b>My areas of specialization:</b> [field_personal_lib_spec]';
  $handler->display->display_options['fields']['field_personal_lib_spec']['hide_empty'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<div class="personal-librarian--contact">
  <div class="user--picture">[picture]</div> 
  <div class="user--name"><h3>[field_puluser_lname]</h3></div>
  <div class="user--email"><i class="icon-email"></i> [mail]</div>
  <div class="user--building"><i class="icon-location"></i> [field_puluser_office]</div>
  <div class="user--phone"><i class="icon-phone"></i> [field_puluser_phone_number]</div>
  <div class="user--special">[field_personal_lib_spec]</div>
  <div class="user--fun_fact">[field__personal_lib_fun_fact]</div>
</div>';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  /* Field: User: Statement */
  $handler->display->display_options['fields']['field_personal_lib_statement']['id'] = 'field_personal_lib_statement';
  $handler->display->display_options['fields']['field_personal_lib_statement']['table'] = 'field_data_field_personal_lib_statement';
  $handler->display->display_options['fields']['field_personal_lib_statement']['field'] = 'field_personal_lib_statement';
  $handler->display->display_options['fields']['field_personal_lib_statement']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_personal_lib_statement']['label'] = 'Greetings, students! ';
  $handler->display->display_options['fields']['field_personal_lib_statement']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_personal_lib_statement']['element_label_colon'] = FALSE;
  /* Field: User: Throughout the academic year, I will */
  $handler->display->display_options['fields']['field_personal_lib_duties']['id'] = 'field_personal_lib_duties';
  $handler->display->display_options['fields']['field_personal_lib_duties']['table'] = 'field_data_field_personal_lib_duties';
  $handler->display->display_options['fields']['field_personal_lib_duties']['field'] = 'field_personal_lib_duties';
  $handler->display->display_options['fields']['field_personal_lib_duties']['relationship'] = 'field_current_personal_lib_target_id';
  /* Field: User: If you contact me, I will: */
  $handler->display->display_options['fields']['field_personal_lib_contacts']['id'] = 'field_personal_lib_contacts';
  $handler->display->display_options['fields']['field_personal_lib_contacts']['table'] = 'field_data_field_personal_lib_contacts';
  $handler->display->display_options['fields']['field_personal_lib_contacts']['field'] = 'field_personal_lib_contacts';
  $handler->display->display_options['fields']['field_personal_lib_contacts']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['field_personal_lib_contacts']['label'] = 'If you contact me, I will';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '
  <div class="user--appointment"><a href=\'/staff/[name_1]#contact\' title=\'Contact Your Personal Librarian via Email\'>Contact Me</a></div>';
  $handler->display->display_options['fields']['name_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
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
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    28 => '28',
    29 => '29',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Personal Librarian Assignments */
  $handler = $view->new_display('page', 'Personal Librarian Assignments', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
    'field_current_personal_lib' => 'field_current_personal_lib',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
    'field_current_personal_lib' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  /* Field: User: Personal Librarian */
  $handler->display->display_options['fields']['field_current_personal_lib']['id'] = 'field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['field'] = 'field_current_personal_lib';
  $handler->display->display_options['fields']['field_current_personal_lib']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_personal_lib']['alter']['text'] = '[field_current_personal_lib]';
  $handler->display->display_options['fields']['field_current_personal_lib']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_current_personal_lib']['alter']['path'] = 'admin/personal-librarians/[field_current_personal_lib]';
  $handler->display->display_options['fields']['field_current_personal_lib']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: User: Class Year */
  $handler->display->display_options['fields']['field_personal_lib_class_year']['id'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['table'] = 'field_data_field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['field'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Update PL';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'user::field_current_personal_lib' => 'user::field_current_personal_lib',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: User: Personal Librarian (field_current_personal_lib) */
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
  $handler->display->display_options['filters']['rid']['operator'] = 'and';
  $handler->display->display_options['filters']['rid']['value'] = array(
    29 => '29',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
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
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: User: Class Year (field_personal_lib_class_year) */
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['id'] = 'field_personal_lib_class_year_value';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['table'] = 'field_data_field_personal_lib_class_year';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['field'] = 'field_personal_lib_class_year_value';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['operator_id'] = 'field_personal_lib_class_year_value_op';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['label'] = 'Class Year (field_personal_lib_class_year)';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['operator'] = 'field_personal_lib_class_year_value_op';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['identifier'] = 'field_personal_lib_class_year_value';
  $handler->display->display_options['filters']['field_personal_lib_class_year_value']['expose']['remember_roles'] = array(
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
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    27 => 0,
  );
  $handler->display->display_options['path'] = 'admin/personal-librarians';

  /* Display: Personal Librarian Assignments by PL */
  $handler = $view->new_display('page', 'Personal Librarian Assignments by PL', 'page_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    28 => '28',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_puluser_fname' => 'field_puluser_fname',
    'field_puluser_lname' => 'field_puluser_lname',
    'mail' => 'mail',
    'field_personal_lib_class_year' => 'field_personal_lib_class_year',
  );
  $handler->display->display_options['style_options']['default'] = 'field_puluser_lname';
  $handler->display->display_options['style_options']['info'] = array(
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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personal_lib_class_year' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
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
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = 'Name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Class Year */
  $handler->display->display_options['fields']['field_personal_lib_class_year']['id'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['table'] = 'field_data_field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['field'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['label'] = 'Class';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: User: Personal Librarian (field_current_personal_lib) */
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['sorts']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
  $handler->display->display_options['filters']['rid']['operator'] = 'and';
  $handler->display->display_options['filters']['rid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'staff/pl-list/%';

  /* Display: CSV by PL */
  $handler = $view->new_display('views_data_export', 'CSV by PL', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    28 => '28',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['id'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['table'] = 'field_data_field_current_personal_lib';
  $handler->display->display_options['relationships']['field_current_personal_lib_target_id']['field'] = 'field_current_personal_lib_target_id';
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
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Class Year */
  $handler->display->display_options['fields']['field_personal_lib_class_year']['id'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['table'] = 'field_data_field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['field'] = 'field_personal_lib_class_year';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['label'] = 'Class';
  $handler->display->display_options['fields']['field_personal_lib_class_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = 'Name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_current_personal_lib_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    29 => '29',
  );
  $handler->display->display_options['path'] = 'staff/pl-list/data/%';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'page_1' => 0,
  );
  $export['pul_personal_librarian'] = $view;

  return $export;
}
