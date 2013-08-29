<?php
/**
 * @file
 * ip_protected_db_resources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ip_protected_db_resources_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ip_restricted_resource_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IP Restricted Resource Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IP Restricted Resource Admin List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_ip_db_username' => 'field_ip_db_username',
    'field_ip_db_password' => 'field_ip_db_password',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ip_db_username' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ip_db_password' => array(
      'sortable' => 0,
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add new IP protected resource';
  $handler->display->display_options['header']['area']['content'] = '<div id="edit-area-ip-resources" class="service-connect-btn">
<a target="_blank" href="/node/add/ip-protected-db-resource">Add New IP Protected Resource</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: DB Username */
  $handler->display->display_options['fields']['field_ip_db_username']['id'] = 'field_ip_db_username';
  $handler->display->display_options['fields']['field_ip_db_username']['table'] = 'field_data_field_ip_db_username';
  $handler->display->display_options['fields']['field_ip_db_username']['field'] = 'field_ip_db_username';
  $handler->display->display_options['fields']['field_ip_db_username']['label'] = 'Username';
  $handler->display->display_options['fields']['field_ip_db_username']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ip_db_username']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ip_db_username']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ip_db_username']['field_api_classes'] = TRUE;
  /* Field: Content: DB Password */
  $handler->display->display_options['fields']['field_ip_db_password']['id'] = 'field_ip_db_password';
  $handler->display->display_options['fields']['field_ip_db_password']['table'] = 'field_data_field_ip_db_password';
  $handler->display->display_options['fields']['field_ip_db_password']['field'] = 'field_ip_db_password';
  $handler->display->display_options['fields']['field_ip_db_password']['label'] = 'Password';
  $handler->display->display_options['fields']['field_ip_db_password']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ip_db_password']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ip_db_password']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ip_db_password']['field_api_classes'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ip_protected_db_resource' => 'ip_protected_db_resource',
  );

  /* Display: IP Restricted Resources */
  $handler = $view->new_display('page', 'IP Restricted Resources', 'page');
  $handler->display->display_options['path'] = 'resource/restricted/local/list';
  $export['ip_restricted_resource_lists'] = $view;

  return $export;
}
