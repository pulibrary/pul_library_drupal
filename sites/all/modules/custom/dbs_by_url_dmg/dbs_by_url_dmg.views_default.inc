<?php
/**
 * @file
 * dbs_by_url_dmg.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dbs_by_url_dmg_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'databases_by_url';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Databases by URL DMG';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Databases by URL';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_db_access_url' => 'field_db_access_url',
    'changed' => 'changed',
    'title_1' => 'title_1',
    'field_db_use_proxy' => 'field_db_use_proxy',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_access_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_use_proxy' => array(
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
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_db_grp_member_of_target_id']['id'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['relationships']['field_db_grp_member_of_target_id']['table'] = 'field_data_field_db_grp_member_of';
  $handler->display->display_options['relationships']['field_db_grp_member_of_target_id']['field'] = 'field_db_grp_member_of_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['empty'] = 'No URL Provided';
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_url';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Belongs To';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
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
    'database' => 'database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Access URL (field_db_access_url:url) */
  $handler->display->display_options['filters']['field_db_access_url_url']['id'] = 'field_db_access_url_url';
  $handler->display->display_options['filters']['field_db_access_url_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['filters']['field_db_access_url_url']['field'] = 'field_db_access_url_url';
  $handler->display->display_options['filters']['field_db_access_url_url']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_db_access_url_url']['group'] = 1;
  $handler->display->display_options['filters']['field_db_access_url_url']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['operator_id'] = 'field_db_access_url_url_op';
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['label'] = 'URL';
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['operator'] = 'field_db_access_url_url_op';
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['identifier'] = 'field_db_access_url_url';
  $handler->display->display_options['filters']['field_db_access_url_url']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Use EZproxy (field_db_use_proxy) */
  $handler->display->display_options['filters']['field_db_use_proxy_value']['id'] = 'field_db_use_proxy_value';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['field'] = 'field_db_use_proxy_value';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['group'] = 1;
  $handler->display->display_options['filters']['field_db_use_proxy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_db_use_proxy_value']['expose']['operator_id'] = 'field_db_use_proxy_value_op';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['expose']['label'] = 'EZproxy';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['expose']['operator'] = 'field_db_use_proxy_value_op';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['expose']['identifier'] = 'field_db_use_proxy_value';
  $handler->display->display_options['filters']['field_db_use_proxy_value']['expose']['remember_roles'] = array(
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

  /* Display: Admin Browse Page of Databases */
  $handler = $view->new_display('page', 'Admin Browse Page of Databases', 'page');
  $handler->display->display_options['path'] = 'research/databases/browse';

  /* Display: Admin Listings of Databases */
  $handler = $view->new_display('panel_pane', 'Admin Listings of Databases', 'panel_pane_1');
  $export['databases_by_url'] = $view;

  return $export;
}
