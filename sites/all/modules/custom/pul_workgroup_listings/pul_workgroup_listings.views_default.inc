<?php

/**
 * @file
 * pul_workgroup_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_workgroup_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'workgroup';
  $view->description = 'Provides two view panes for viewing a workgroup, either list or table form.';
  $view->tag = 'Staff';
  $view->base_table = 'node';
  $view->human_name = 'Workgroup ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workgroup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_workgroup_members_target_id']['id'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['relationships']['field_workgroup_members_target_id']['table'] = 'field_data_field_workgroup_members';
  $handler->display->display_options['relationships']['field_workgroup_members_target_id']['field'] = 'field_workgroup_members_target_id';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo-small';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'work_group' => 'work_group',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Staff Listing for Group */
  $handler = $view->new_display('panel_pane', 'Staff Listing for Group', 'panel_pane_1');
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
    'nid' => array(
      'type' => 'user',
      'context' => 'token.entity:id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID to reference',
    ),
  );

  /* Display: Staff Listing for Group - Table Style */
  $handler = $view->new_display('panel_pane', 'Staff Listing for Group - Table Style', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'mail' => 'mail',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
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
    'field_puluser_officialtitle' => array(
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
    'field_puluser_phone_number' => array(
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo-small';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['text'] = '[picture] <br/>
[field_puluser_formalname] ';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 'user';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<strong>[field_puluser_formalname]</strong><br/>
[field_puluser_officialtitle] <br/>
[mail]<br/>
[field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
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
    'nid' => array(
      'type' => 'user',
      'context' => 'token.entity:id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID to reference',
    ),
  );

  /* Display: Full Table Listing */
  $handler = $view->new_display('panel_pane', 'Full Table Listing', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'mail' => 'mail',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
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
    'field_puluser_officialtitle' => array(
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
    'field_puluser_phone_number' => array(
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo-small';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['text'] = '[picture] <br/>
[field_puluser_formalname] ';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_workgroup_members_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<strong>[field_puluser_formalname]</strong><br/>
[field_puluser_officialtitle] <br/>
[mail]<br/>
[field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
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
    'nid' => array(
      'type' => 'user',
      'context' => 'token.entity:id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node ID to reference',
    ),
  );
  $export['workgroup'] = $view;

  return $export;
}
