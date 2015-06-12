<?php
/**
 * @file
 * marquand_sales_catalogs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marquand_sales_catalogs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'marquand_sales_catalogs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marquand Sales Catalogs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marquand Sales Catalogs';
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
    'field_sc_date' => 'field_sc_date',
    'field_sc_auction_house' => 'field_sc_auction_house',
    'field_sc_city' => 'field_sc_city',
    'field_sc_sale' => 'field_sc_sale',
    'field_sc_name' => 'field_sc_name',
    'field_sc_notes' => 'field_sc_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sc_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sc_auction_house' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sc_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sc_sale' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sc_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sc_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_sc_date']['id'] = 'field_sc_date';
  $handler->display->display_options['fields']['field_sc_date']['table'] = 'field_data_field_sc_date';
  $handler->display->display_options['fields']['field_sc_date']['field'] = 'field_sc_date';
  /* Field: Content: Auction House */
  $handler->display->display_options['fields']['field_sc_auction_house']['id'] = 'field_sc_auction_house';
  $handler->display->display_options['fields']['field_sc_auction_house']['table'] = 'field_data_field_sc_auction_house';
  $handler->display->display_options['fields']['field_sc_auction_house']['field'] = 'field_sc_auction_house';
  /* Field: Content: City  */
  $handler->display->display_options['fields']['field_sc_city']['id'] = 'field_sc_city';
  $handler->display->display_options['fields']['field_sc_city']['table'] = 'field_data_field_sc_city';
  $handler->display->display_options['fields']['field_sc_city']['field'] = 'field_sc_city';
  /* Field: Content: Sale */
  $handler->display->display_options['fields']['field_sc_sale']['id'] = 'field_sc_sale';
  $handler->display->display_options['fields']['field_sc_sale']['table'] = 'field_data_field_sc_sale';
  $handler->display->display_options['fields']['field_sc_sale']['field'] = 'field_sc_sale';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_sc_name']['id'] = 'field_sc_name';
  $handler->display->display_options['fields']['field_sc_name']['table'] = 'field_data_field_sc_name';
  $handler->display->display_options['fields']['field_sc_name']['field'] = 'field_sc_name';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_sc_notes']['id'] = 'field_sc_notes';
  $handler->display->display_options['fields']['field_sc_notes']['table'] = 'field_data_field_sc_notes';
  $handler->display->display_options['fields']['field_sc_notes']['field'] = 'field_sc_notes';
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
    'marquand_sales_catalog' => 'marquand_sales_catalog',
  );
  /* Filter criterion: Content: Auction House (field_sc_auction_house) */
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['id'] = 'field_sc_auction_house_tid';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['table'] = 'field_data_field_sc_auction_house';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['field'] = 'field_sc_auction_house_tid';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['value'] = '';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['expose']['operator_id'] = 'field_sc_auction_house_tid_op';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['expose']['label'] = 'Auction House';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['expose']['operator'] = 'field_sc_auction_house_tid_op';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['expose']['identifier'] = 'field_sc_auction_house_tid';
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_sc_auction_house_tid']['vocabulary'] = 'sales_catalog_auction_house';
  /* Filter criterion: Content: City  (field_sc_city) */
  $handler->display->display_options['filters']['field_sc_city_tid']['id'] = 'field_sc_city_tid';
  $handler->display->display_options['filters']['field_sc_city_tid']['table'] = 'field_data_field_sc_city';
  $handler->display->display_options['filters']['field_sc_city_tid']['field'] = 'field_sc_city_tid';
  $handler->display->display_options['filters']['field_sc_city_tid']['value'] = '';
  $handler->display->display_options['filters']['field_sc_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sc_city_tid']['expose']['operator_id'] = 'field_sc_city_tid_op';
  $handler->display->display_options['filters']['field_sc_city_tid']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_sc_city_tid']['expose']['operator'] = 'field_sc_city_tid_op';
  $handler->display->display_options['filters']['field_sc_city_tid']['expose']['identifier'] = 'field_sc_city_tid';
  $handler->display->display_options['filters']['field_sc_city_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_sc_city_tid']['vocabulary'] = 'sales_catalog_city';
  /* Filter criterion: Content: Name (field_sc_name) */
  $handler->display->display_options['filters']['field_sc_name_value']['id'] = 'field_sc_name_value';
  $handler->display->display_options['filters']['field_sc_name_value']['table'] = 'field_data_field_sc_name';
  $handler->display->display_options['filters']['field_sc_name_value']['field'] = 'field_sc_name_value';
  $handler->display->display_options['filters']['field_sc_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sc_name_value']['expose']['operator_id'] = 'field_sc_name_value_op';
  $handler->display->display_options['filters']['field_sc_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_sc_name_value']['expose']['operator'] = 'field_sc_name_value_op';
  $handler->display->display_options['filters']['field_sc_name_value']['expose']['identifier'] = 'field_sc_name_value';
  $handler->display->display_options['filters']['field_sc_name_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'page');
  $handler->display->display_options['path'] = 'marquand-sales-catalogs';

  /* Display: Public Display Pane */
  $handler = $view->new_display('panel_pane', 'Public Display Pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['marquand_sales_catalogs'] = $view;

  return $export;
}
