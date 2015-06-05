<?php
/**
 * @file
 * pul_collections.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_collections_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collections';
  $view->description = 'Views for Collections Content Type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Collection URL */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url] ';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
    'collection' => 'collection',
  );

  /* Display: Descriptive List */
  $handler = $view->new_display('panel_pane', 'Descriptive List', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Collection URL */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url] ';
  $handler->display->display_options['fields']['field_collection_url']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['click_sort_column'] = 'url';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Collection';
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_coll_long_description']['id'] = 'field_coll_long_description';
  $handler->display->display_options['fields']['field_coll_long_description']['table'] = 'field_data_field_coll_long_description';
  $handler->display->display_options['fields']['field_coll_long_description']['field'] = 'field_coll_long_description';
  $handler->display->display_options['fields']['field_coll_long_description']['label'] = '';
  $handler->display->display_options['fields']['field_coll_long_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_coll_long_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coll_long_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_coll_long_description']['element_default_classes'] = FALSE;

  /* Display: Collection Contact */
  $handler = $view->new_display('panel_pane', 'Collection Contact', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collection Contact';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_col_contact_target_id']['id'] = 'field_col_contact_target_id';
  $handler->display->display_options['relationships']['field_col_contact_target_id']['table'] = 'field_data_field_col_contact';
  $handler->display->display_options['relationships']['field_col_contact_target_id']['field'] = 'field_col_contact_target_id';
  $handler->display->display_options['relationships']['field_col_contact_target_id']['label'] = 'Collection Contact ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '[field_puluser_fname] [field_puluser_lname]';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  /* Field: User: Building Location */
  $handler->display->display_options['fields']['field_puluser_building_location']['id'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['table'] = 'field_data_field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['field'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_label_colon'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '<i class=\'icon-large icon-envelope-alt\'> </i> [view_user]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'E-Mail';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_col_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<i class="icon-large icon-phone"> </i>[field_puluser_phone_number] ';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Collections List */
  $handler = $view->new_display('panel_pane', 'Collections List', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Collection URL */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url] ';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['click_sort_column'] = 'url';
  $export['collections'] = $view;

  return $export;
}
