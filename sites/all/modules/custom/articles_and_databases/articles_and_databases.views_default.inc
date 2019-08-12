<?php

/**
 * @file
 * articles_and_databases.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function articles_and_databases_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_glossary';
  $view->description = 'Database Listings A to Z';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Database A to Z List';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Databases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Display on A to Z (field_db_display_active) */
  $handler->display->display_options['filters']['field_db_display_active_value']['id'] = 'field_db_display_active_value';
  $handler->display->display_options['filters']['field_db_display_active_value']['table'] = 'field_data_field_db_display_active';
  $handler->display->display_options['filters']['field_db_display_active_value']['field'] = 'field_db_display_active_value';
  $handler->display->display_options['filters']['field_db_display_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_db_display_active_value']['group'] = 1;

  /* Display: Databases A to Z List */
  $handler = $view->new_display('page', 'Databases A to Z List', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Databases: %1';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_db_access_url' => 'field_db_access_url',
    'nid' => 'nid',
    'field_db_use_proxy' => 'field_db_use_proxy',
    'field_db_restricted_access' => 'field_db_restricted_access',
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_db_access_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_use_proxy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_restricted_access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['id'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['table'] = 'field_data_field_dboverride_database';
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['field'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy_1']['id'] = 'field_db_use_proxy_1';
  $handler->display->display_options['fields']['field_db_use_proxy_1']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy_1']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy_1']['relationship'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['fields']['field_db_use_proxy_1']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy_1']['element_label_colon'] = FALSE;
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url_1']['id'] = 'field_db_access_url_1';
  $handler->display->display_options['fields']['field_db_access_url_1']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url_1']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url_1']['relationship'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['fields']['field_db_access_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url_1']['type'] = 'link_plain';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url']['alter']['text'] = '[field_db_access_url]';
  $handler->display->display_options['fields']['field_db_access_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_access_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['alter']['text'] = '[field_db_use_proxy-value]';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['type'] = 'list_key';
  /* Field: Content: Restricted Access */
  $handler->display->display_options['fields']['field_db_restricted_access']['id'] = 'field_db_restricted_access';
  $handler->display->display_options['fields']['field_db_restricted_access']['table'] = 'field_data_field_db_restricted_access';
  $handler->display->display_options['fields']['field_db_restricted_access']['field'] = 'field_db_restricted_access';
  $handler->display->display_options['fields']['field_db_restricted_access']['label'] = '';
  $handler->display->display_options['fields']['field_db_restricted_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_restricted_access']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_restricted_access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_restricted_access']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_restricted_access']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_restricted_access']['field_api_classes'] = TRUE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['type'] = 'text_plain';
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['id'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['table'] = 'field_data_field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['field'] = 'field_dboverride_date_coverage';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_date_coverage']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-override-access-url="[field_db_access_url_1]" data-access-url="[field_db_access_url]" data-ezproxy-access="[field_db_use_proxy]" data-override-proxy-access="[field_db_use_proxy_1]">[title]</span><span class="db-date-coverage">[field_db_date_coverage]</span>';
  $handler->display->display_options['fields']['title']['element_class'] = 'resource-title';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Also Known As */
  $handler->display->display_options['fields']['field_dboverride_database']['id'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['table'] = 'field_data_field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['field'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['label'] = '';
  $handler->display->display_options['fields']['field_dboverride_database']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_database']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dboverride_database']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_database']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dboverride_database']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_database']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dboverride_database']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_dboverride_database']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div>
<div id="open[nid]" data-desc-id="[nid]" class="find-databases-show-desc"><i class="icon-plus-sign-alt"></i>Show Description</div>
<div class="database-description" id="desc[nid]">[body]</div>
</div>';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_class'] = 'databases-find-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'alternative_database_title' => 'alternative_database_title',
    'database' => 'database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Trial (field_db_is_trial) */
  $handler->display->display_options['filters']['field_db_is_trial_value']['id'] = 'field_db_is_trial_value';
  $handler->display->display_options['filters']['field_db_is_trial_value']['table'] = 'field_data_field_db_is_trial';
  $handler->display->display_options['filters']['field_db_is_trial_value']['field'] = 'field_db_is_trial_value';
  $handler->display->display_options['filters']['field_db_is_trial_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_is_trial_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Display on A to Z (field_db_display_active) */
  $handler->display->display_options['filters']['field_db_display_active_value']['id'] = 'field_db_display_active_value';
  $handler->display->display_options['filters']['field_db_display_active_value']['table'] = 'field_data_field_db_display_active';
  $handler->display->display_options['filters']['field_db_display_active_value']['field'] = 'field_db_display_active_value';
  $handler->display->display_options['filters']['field_db_display_active_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_display_active_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Suppress Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_suppressed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'find-databases/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'research/databases/!1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['base_path'] = 'research/databases';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'panel_pane_1' => 'panel_pane_1',
    'block_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Trial Database Listings */
  $handler = $view->new_display('panel_pane', 'Trial Database Listings', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trial Databases';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Trial Start Date */
  $handler->display->display_options['fields']['field_db_trial_start_date']['id'] = 'field_db_trial_start_date';
  $handler->display->display_options['fields']['field_db_trial_start_date']['table'] = 'field_data_field_db_trial_start_date';
  $handler->display->display_options['fields']['field_db_trial_start_date']['field'] = 'field_db_trial_start_date';
  $handler->display->display_options['fields']['field_db_trial_start_date']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_db_trial_start_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_db_trial_start_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_db_trial_start_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_db_trial_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_trial_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Trial (field_db_is_trial) */
  $handler->display->display_options['filters']['field_db_is_trial_value']['id'] = 'field_db_is_trial_value';
  $handler->display->display_options['filters']['field_db_is_trial_value']['table'] = 'field_data_field_db_is_trial';
  $handler->display->display_options['filters']['field_db_is_trial_value']['field'] = 'field_db_is_trial_value';
  $handler->display->display_options['filters']['field_db_is_trial_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_db_is_trial_value']['group'] = 1;
  /* Filter criterion: Content: Trial Start Date - end date (field_db_trial_start_date:value2) */
  $handler->display->display_options['filters']['field_db_trial_start_date_value2']['id'] = 'field_db_trial_start_date_value2';
  $handler->display->display_options['filters']['field_db_trial_start_date_value2']['table'] = 'field_data_field_db_trial_start_date';
  $handler->display->display_options['filters']['field_db_trial_start_date_value2']['field'] = 'field_db_trial_start_date_value2';
  $handler->display->display_options['filters']['field_db_trial_start_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_db_trial_start_date_value2']['default_date'] = 'now';

  /* Display: New Databases */
  $handler = $view->new_display('panel_pane', 'New Databases', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'list--item links--decorate';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Content pane 4 */
  $handler = $view->new_display('panel_pane', 'Content pane 4', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Databases by Title';
  $export['clone_of_glossary'] = $view;

  $view = new view();
  $view->name = 'database_issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Database Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Known Technical Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Issues Block';
  $handler->display->display_options['empty']['area']['content'] = 'No known issues with our resources. <a href=\'/help/resource\'>Report a problem</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_affected_databases_node']['id'] = 'reverse_field_affected_databases_node';
  $handler->display->display_options['relationships']['reverse_field_affected_databases_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_affected_databases_node']['field'] = 'reverse_field_affected_databases_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Issue Status */
  $handler->display->display_options['fields']['field_db_issue_open_closed']['id'] = 'field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['table'] = 'field_data_field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['field'] = 'field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_wrapper_class'] = 'known-issue-status-field';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
    'database_issue' => 'database_issue',
  );

  /* Display: General Database Issues List */
  $handler = $view->new_display('page', 'General Database Issues List', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Known Issues with Databases';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_db_issue_open_closed' => 'field_db_issue_open_closed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_db_issue_open_closed' => array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Brief Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Issue Status */
  $handler->display->display_options['fields']['field_db_issue_open_closed']['id'] = 'field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['table'] = 'field_data_field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['field'] = 'field_db_issue_open_closed';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_issue_open_closed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_issue_open_closed']['field_api_classes'] = TRUE;
  /* Field: Content: Affected Databases */
  $handler->display->display_options['fields']['field_affected_databases']['id'] = 'field_affected_databases';
  $handler->display->display_options['fields']['field_affected_databases']['table'] = 'field_data_field_affected_databases';
  $handler->display->display_options['fields']['field_affected_databases']['field'] = 'field_affected_databases';
  $handler->display->display_options['fields']['field_affected_databases']['label'] = 'Impacted Databases';
  $handler->display->display_options['fields']['field_affected_databases']['element_type'] = '0';
  $handler->display->display_options['fields']['field_affected_databases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_affected_databases']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_affected_databases']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_affected_databases']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_affected_databases']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_affected_databases']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'database_issue' => 'database_issue',
  );
  $handler->display->display_options['path'] = 'help/databases/issues';

  /* Display: Issues Attached to Database Block */
  $handler = $view->new_display('block', 'Issues Attached to Database Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Issues with Resource';
  $handler->display->display_options['display_description'] = 'Shows a list of database issues in context. ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Database Issues Block';

  /* Display: Individual Database Issue Listing */
  $handler = $view->new_display('panel_pane', 'Individual Database Issue Listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-affected-databases',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['database_issues'] = $view;

  return $export;
}
