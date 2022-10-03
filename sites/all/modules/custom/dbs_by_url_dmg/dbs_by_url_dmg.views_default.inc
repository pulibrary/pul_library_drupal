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
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    25 => '25',
    4 => '4',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_db_access_url' => 'field_db_access_url',
    'changed' => 'changed',
    'title_1' => 'title_1',
    'field_db_use_proxy' => 'field_db_use_proxy',
    'field_db_ezproxy_special' => 'field_db_ezproxy_special',
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
    'field_db_ezproxy_special' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Resource ID';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Platform ID';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Databases by URL';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Resource ID';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['empty'] = 'No URL Provided';
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Platform';
  $handler->display->display_options['fields']['title_1']['empty'] = 'N/A';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Platform ID';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'database::field_db_copyright_information' => 'database::field_db_copyright_information',
        ),
      ),
    ),
  );
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
  $handler->display->display_options['path'] = 'research/databases/browse';

  /* Display: Admin Listings of Databases */
  $handler = $view->new_display('panel_pane', 'Admin Listings of Databases', 'panel_pane_1');

  /* Display: All DBs by CSV */
  $handler = $view->new_display('views_data_export', 'All DBs by CSV', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Administrative CSV with Proxy/Platform Metadata for DB';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Resource ID';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['empty'] = 'No URL Provided';
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_plain';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Platform ID';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'research/databases/dbs.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Libguides CSV Export */
  $handler = $view->new_display('views_data_export', 'Libguides CSV Export', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Libguides DB Export';
  $handler->display->display_options['display_description'] = 'Export Using Format Libguides Recommends';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_tier_one_resources_taxonomy_term']['id'] = 'reverse_field_subs_tier_one_resources_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_tier_one_resources_taxonomy_term']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subs_tier_one_resources_taxonomy_term']['field'] = 'reverse_field_subs_tier_one_resources_taxonomy_term';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_tier_two_resources_taxonomy_term']['id'] = 'reverse_field_subs_tier_two_resources_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_tier_two_resources_taxonomy_term']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subs_tier_two_resources_taxonomy_term']['field'] = 'reverse_field_subs_tier_two_resources_taxonomy_term';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_dboverride_database_node']['id'] = 'reverse_field_dboverride_database_node';
  $handler->display->display_options['relationships']['reverse_field_dboverride_database_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_dboverride_database_node']['field'] = 'reverse_field_dboverride_database_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Drupal ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] 
[field_db_date_coverage]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '475';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: General Access Note */
  $handler->display->display_options['fields']['field_db_access_note']['id'] = 'field_db_access_note';
  $handler->display->display_options['fields']['field_db_access_note']['table'] = 'field_data_field_db_access_note';
  $handler->display->display_options['fields']['field_db_access_note']['field'] = 'field_db_access_note';
  $handler->display->display_options['fields']['field_db_access_note']['label'] = 'more_info';
  $handler->display->display_options['fields']['field_db_access_note']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_note']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_db_access_note']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_access_note']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_access_note']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_note']['field_api_classes'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'LAST UPDATED';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'search_api_facetapi_DAY';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_subs_tier_one_resources_taxonomy_term';
  $handler->display->display_options['fields']['name']['label'] = 'best_bets';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_subs_tier_two_resources_taxonomy_term';
  $handler->display->display_options['fields']['name_1']['label'] = 'subjects';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_dboverride_database_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'keywords';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'slug';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'enable_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['type'] = 'list_key';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_db_access_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  $handler->display->display_options['path'] = 'research/databases/libguides-dbs.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Excel Export */
  $handler = $view->new_display('views_data_export', 'Excel Export', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Resource ID';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Platform ID';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'research/databaes/urls.xls';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Single Platform */
  $handler = $view->new_display('panel_pane', 'Single Platform', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attached Databases';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Resource ID';
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
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Single Database EZproxy Setttings */
  $handler = $view->new_display('panel_pane', 'Single Database EZproxy Setttings', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource Status';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title_1']['label'] = 'Platform';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_db_grp_member_of_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Platform ID';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = 'EZproxy Active';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['field_api_classes'] = TRUE;
  /* Field: Content: Requires Special EZproxy Configuration */
  $handler->display->display_options['fields']['field_db_ezproxy_special']['id'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['table'] = 'field_data_field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field'] = 'field_db_ezproxy_special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['label'] = 'EZProxy Special';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_ezproxy_special']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_ezproxy_special']['field_api_classes'] = TRUE;
  /* Field: Content: Special Proxy Configuration Rule */
  $handler->display->display_options['fields']['field_db_proxy_configuration']['id'] = 'field_db_proxy_configuration';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['table'] = 'field_data_field_db_proxy_configuration';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['field'] = 'field_db_proxy_configuration';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['label'] = 'Special Configuration';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_db_proxy_configuration']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_proxy_configuration']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_proxy_configuration']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_proxy_configuration']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['databases_by_url'] = $view;

  return $export;
}
