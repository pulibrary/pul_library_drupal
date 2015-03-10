<?php
/**
 * @file
 * econ_library_data_table_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function econ_library_data_table_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'econ_lib_data_tables';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Econ Lib Data Tables';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_econ_lib_cd_covers' => 'field_econ_lib_cd_covers',
    'field_econ_lib_cd_print' => 'field_econ_lib_cd_print',
    'field_econ_lib_cd_call_number' => 'field_econ_lib_cd_call_number',
    'field_econ_lib_cd_electronic' => 'field_econ_lib_cd_electronic',
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
    'field_econ_lib_cd_covers' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_print' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_electronic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add new Stock Exchange Holdings resource';
  $handler->display->display_options['header']['area']['content'] = '<div id="edit-area-ip-resources" class="service-connect-btn">
<a target="_blank" href="/node/add/econ-library-stock-exchange-hold">Add New Stock Exchange Holdings Resource</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_econ_lib_se_country']['id'] = 'field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['table'] = 'field_data_field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['field'] = 'field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_country']['element_default_classes'] = FALSE;
  /* Field: Content: Exchange */
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['id'] = 'field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['table'] = 'field_data_field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['field'] = 'field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['id'] = 'field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['table'] = 'field_data_field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['field'] = 'field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Last Bound */
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['id'] = 'field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['table'] = 'field_data_field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['field'] = 'field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['element_default_classes'] = FALSE;
  /* Field: Content: Current Issues in PF */
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['id'] = 'field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['table'] = 'field_data_field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['field'] = 'field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['element_default_classes'] = FALSE;
  /* Field: Content: Web Site */
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['id'] = 'field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['table'] = 'field_data_field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['field'] = 'field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['type'] = 'link_short';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['id'] = 'field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['table'] = 'field_data_field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['field'] = 'field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Color */
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['id'] = 'field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['table'] = 'field_data_field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['field'] = 'field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Frequency */
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['id'] = 'field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['table'] = 'field_data_field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['field'] = 'field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'econ_library_stock_exchange_hold' => 'econ_library_stock_exchange_hold',
  );

  /* Display: Stock Exchange Holdings */
  $handler = $view->new_display('panel_pane', 'Stock Exchange Holdings', 'panel_pane_1');

  /* Display: Admin - Stock Exchange Holdings Page */
  $handler = $view->new_display('page', 'Admin - Stock Exchange Holdings Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stock Exchange Holdings';
  $handler->display->display_options['path'] = 'econlib/stock-exchange-holdings-edit';

  /* Display: Company Directories */
  $handler = $view->new_display('panel_pane', 'Company Directories', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Covers */
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['id'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['table'] = 'field_data_field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['field'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['element_default_classes'] = FALSE;
  /* Field: Content: Print */
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['id'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['table'] = 'field_data_field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['field'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['element_default_classes'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['id'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['table'] = 'field_data_field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['field'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Electronic */
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['id'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['table'] = 'field_data_field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['field'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_library_company_directories' => 'econ_library_company_directories',
  );

  /* Display: Company Directories Page */
  $handler = $view->new_display('page', 'Company Directories Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Company Directories';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_econ_lib_cd_covers' => 'field_econ_lib_cd_covers',
    'field_econ_lib_cd_print' => 'field_econ_lib_cd_print',
    'field_econ_lib_cd_call_number' => 'field_econ_lib_cd_call_number',
    'field_econ_lib_cd_electronic' => 'field_econ_lib_cd_electronic',
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
    'field_econ_lib_cd_covers' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_print' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_electronic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/econlib">&larr; Go Back</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Covers */
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['id'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['table'] = 'field_data_field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['field'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['element_default_classes'] = FALSE;
  /* Field: Content: Print */
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['id'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['table'] = 'field_data_field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['field'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['element_default_classes'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['id'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['table'] = 'field_data_field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['field'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Electronic */
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['id'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['table'] = 'field_data_field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['field'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_library_company_directories' => 'econ_library_company_directories',
  );
  $handler->display->display_options['path'] = 'econlib/company-directories';

  /* Display: Stock Exchange Holdings Page */
  $handler = $view->new_display('page', 'Stock Exchange Holdings Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stock Exchange Holdings';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/econlib">&larr; Go Back</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_econ_lib_se_country']['id'] = 'field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['table'] = 'field_data_field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['field'] = 'field_econ_lib_se_country';
  $handler->display->display_options['fields']['field_econ_lib_se_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_country']['element_default_classes'] = FALSE;
  /* Field: Content: Exchange */
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['id'] = 'field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['table'] = 'field_data_field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['field'] = 'field_econ_lib_se_exchange';
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_exchange']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['id'] = 'field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['table'] = 'field_data_field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['field'] = 'field_econ_lib_se_call_number';
  $handler->display->display_options['fields']['field_econ_lib_se_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Last Bound */
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['id'] = 'field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['table'] = 'field_data_field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['field'] = 'field_econ_lib_se_last_bound';
  $handler->display->display_options['fields']['field_econ_lib_se_last_bound']['element_default_classes'] = FALSE;
  /* Field: Content: Current Issues in PF */
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['id'] = 'field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['table'] = 'field_data_field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['field'] = 'field_econ_lecon_lib_se_current';
  $handler->display->display_options['fields']['field_econ_lecon_lib_se_current']['element_default_classes'] = FALSE;
  /* Field: Content: Web Site */
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['id'] = 'field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['table'] = 'field_data_field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['field'] = 'field_econ_lib_se_web_site';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econ_lib_se_web_site']['type'] = 'link_short';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['id'] = 'field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['table'] = 'field_data_field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['field'] = 'field_econ_lib_se_notes';
  $handler->display->display_options['fields']['field_econ_lib_se_notes']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Color */
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['id'] = 'field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['table'] = 'field_data_field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['field'] = 'field_econ_lib_se_binding_color';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_color']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Frequency */
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['id'] = 'field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['table'] = 'field_data_field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['field'] = 'field_econ_lib_se_binding_freq';
  $handler->display->display_options['fields']['field_econ_lib_se_binding_freq']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'econlib/stock-exchange-holdings';

  /* Display: Admin - Company Directories Page */
  $handler = $view->new_display('page', 'Admin - Company Directories Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Company Directories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_econ_lib_cd_covers' => 'field_econ_lib_cd_covers',
    'field_econ_lib_cd_print' => 'field_econ_lib_cd_print',
    'field_econ_lib_cd_call_number' => 'field_econ_lib_cd_call_number',
    'field_econ_lib_cd_electronic' => 'field_econ_lib_cd_electronic',
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
    'field_econ_lib_cd_covers' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_print' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econ_lib_cd_electronic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add new Company Directory resource';
  $handler->display->display_options['header']['area']['content'] = '<div id="edit-area-ip-resources" class="service-connect-btn">
<a target="_blank" href="/node/add/econ-library-company-directories">Add New Company Directory Resource</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Covers */
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['id'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['table'] = 'field_data_field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['field'] = 'field_econ_lib_cd_covers';
  $handler->display->display_options['fields']['field_econ_lib_cd_covers']['element_default_classes'] = FALSE;
  /* Field: Content: Print */
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['id'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['table'] = 'field_data_field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['field'] = 'field_econ_lib_cd_print';
  $handler->display->display_options['fields']['field_econ_lib_cd_print']['element_default_classes'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['id'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['table'] = 'field_data_field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['field'] = 'field_econ_lib_cd_call_number';
  $handler->display->display_options['fields']['field_econ_lib_cd_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Electronic */
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['id'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['table'] = 'field_data_field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['field'] = 'field_econ_lib_cd_electronic';
  $handler->display->display_options['fields']['field_econ_lib_cd_electronic']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_library_company_directories' => 'econ_library_company_directories',
  );
  $handler->display->display_options['path'] = 'econlib/company-directories-edit';

  /* Display: Admin - Central Bank Holdings Page */
  $handler = $view->new_display('page', 'Admin - Central Bank Holdings Page', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Central Bank Holdings';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_econlib_cbh_region' => 'field_econlib_cbh_region',
    'field_econlib_cbh_bank_name' => 'field_econlib_cbh_bank_name',
    'title' => 'title',
    'field_econlib_cbh_call_number' => 'field_econlib_cbh_call_number',
    'field_econlib_cbh_last_bound' => 'field_econlib_cbh_last_bound',
    'field_econlib_cbh_current_issues' => 'field_econlib_cbh_current_issues',
    'field_econlib_cbh_bank_website' => 'field_econlib_cbh_bank_website',
    'field_econlib_cbh_po_number' => 'field_econlib_cbh_po_number',
    'field_econlib_cbh_color' => 'field_econlib_cbh_color',
    'field_econlib_cbh_binding_freq' => 'field_econlib_cbh_binding_freq',
    'field_econlib_cbh_notes' => 'field_econlib_cbh_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_econlib_cbh_region';
  $handler->display->display_options['style_options']['info'] = array(
    'field_econlib_cbh_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_name' => array(
      'sortable' => 1,
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
    'field_econlib_cbh_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_last_bound' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_current_issues' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_po_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_binding_freq' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_notes' => array(
      'sortable' => 0,
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add new Central Bank Holdings resource';
  $handler->display->display_options['header']['area']['content'] = '<div id="edit-area-ip-resources" class="service-connect-btn">
<a target="_blank" href="/node/add/econ-library-central-bank-holdings">Add New Central Bank Holdings Resource</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_econlib_cbh_region']['id'] = 'field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['table'] = 'field_data_field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['field'] = 'field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['element_default_classes'] = FALSE;
  /* Field: Content: Bank Name */
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['id'] = 'field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['table'] = 'field_data_field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['field'] = 'field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['id'] = 'field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['table'] = 'field_data_field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['field'] = 'field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Last Bound */
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['id'] = 'field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['table'] = 'field_data_field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['field'] = 'field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['element_default_classes'] = FALSE;
  /* Field: Content: Current Issues in PF */
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['id'] = 'field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['table'] = 'field_data_field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['field'] = 'field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['element_default_classes'] = FALSE;
  /* Field: Content: Bank Website */
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['id'] = 'field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['table'] = 'field_data_field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['field'] = 'field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['type'] = 'link_short';
  /* Field: Content: PO Number */
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['id'] = 'field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['table'] = 'field_data_field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['field'] = 'field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['element_default_classes'] = FALSE;
  /* Field: Content: Color */
  $handler->display->display_options['fields']['field_econlib_cbh_color']['id'] = 'field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['table'] = 'field_data_field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['field'] = 'field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Frequency */
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['id'] = 'field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['table'] = 'field_data_field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['field'] = 'field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['element_default_classes'] = FALSE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['id'] = 'field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['table'] = 'field_data_field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['field'] = 'field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_lib_central_bank_holdings' => 'econ_lib_central_bank_holdings',
  );
  $handler->display->display_options['path'] = 'econlib/central-bank-holdings-edit';

  /* Display: Central Bank Holdings Page */
  $handler = $view->new_display('page', 'Central Bank Holdings Page', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Central Bank Holdings';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_econlib_cbh_region' => 'field_econlib_cbh_region',
    'field_econlib_cbh_bank_name' => 'field_econlib_cbh_bank_name',
    'title' => 'title',
    'field_econlib_cbh_call_number' => 'field_econlib_cbh_call_number',
    'field_econlib_cbh_last_bound' => 'field_econlib_cbh_last_bound',
    'field_econlib_cbh_current_issues' => 'field_econlib_cbh_current_issues',
    'field_econlib_cbh_bank_website' => 'field_econlib_cbh_bank_website',
    'field_econlib_cbh_po_number' => 'field_econlib_cbh_po_number',
    'field_econlib_cbh_color' => 'field_econlib_cbh_color',
    'field_econlib_cbh_binding_freq' => 'field_econlib_cbh_binding_freq',
    'field_econlib_cbh_notes' => 'field_econlib_cbh_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_econlib_cbh_region';
  $handler->display->display_options['style_options']['info'] = array(
    'field_econlib_cbh_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_name' => array(
      'sortable' => 1,
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
    'field_econlib_cbh_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_last_bound' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_current_issues' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_po_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_binding_freq' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_notes' => array(
      'sortable' => 0,
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/econlib">&larr; Go Back</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_econlib_cbh_region']['id'] = 'field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['table'] = 'field_data_field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['field'] = 'field_econlib_cbh_region';
  $handler->display->display_options['fields']['field_econlib_cbh_region']['element_default_classes'] = FALSE;
  /* Field: Content: Bank Name */
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['id'] = 'field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['table'] = 'field_data_field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['field'] = 'field_econlib_cbh_bank_name';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_name']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['id'] = 'field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['table'] = 'field_data_field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['field'] = 'field_econlib_cbh_call_number';
  $handler->display->display_options['fields']['field_econlib_cbh_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Last Bound */
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['id'] = 'field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['table'] = 'field_data_field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['field'] = 'field_econlib_cbh_last_bound';
  $handler->display->display_options['fields']['field_econlib_cbh_last_bound']['element_default_classes'] = FALSE;
  /* Field: Content: Current Issues in PF */
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['id'] = 'field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['table'] = 'field_data_field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['field'] = 'field_econlib_cbh_current_issues';
  $handler->display->display_options['fields']['field_econlib_cbh_current_issues']['element_default_classes'] = FALSE;
  /* Field: Content: Bank Website */
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['id'] = 'field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['table'] = 'field_data_field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['field'] = 'field_econlib_cbh_bank_website';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econlib_cbh_bank_website']['type'] = 'link_short';
  /* Field: Content: PO Number */
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['id'] = 'field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['table'] = 'field_data_field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['field'] = 'field_econlib_cbh_po_number';
  $handler->display->display_options['fields']['field_econlib_cbh_po_number']['element_default_classes'] = FALSE;
  /* Field: Content: Color */
  $handler->display->display_options['fields']['field_econlib_cbh_color']['id'] = 'field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['table'] = 'field_data_field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['field'] = 'field_econlib_cbh_color';
  $handler->display->display_options['fields']['field_econlib_cbh_color']['element_default_classes'] = FALSE;
  /* Field: Content: Binding Frequency */
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['id'] = 'field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['table'] = 'field_data_field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['field'] = 'field_econlib_cbh_binding_freq';
  $handler->display->display_options['fields']['field_econlib_cbh_binding_freq']['element_default_classes'] = FALSE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['id'] = 'field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['table'] = 'field_data_field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['field'] = 'field_econlib_cbh_notes';
  $handler->display->display_options['fields']['field_econlib_cbh_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_lib_central_bank_holdings' => 'econ_lib_central_bank_holdings',
  );
  $handler->display->display_options['path'] = 'econlib/central-bank-holdings';

  /* Display: Admin - Working Papers Page */
  $handler = $view->new_display('page', 'Admin - Working Papers Page', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Papers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_econlib_cbh_region' => 'field_econlib_cbh_region',
    'field_econlib_cbh_bank_name' => 'field_econlib_cbh_bank_name',
    'title' => 'title',
    'field_econlib_cbh_call_number' => 'field_econlib_cbh_call_number',
    'field_econlib_cbh_last_bound' => 'field_econlib_cbh_last_bound',
    'field_econlib_cbh_current_issues' => 'field_econlib_cbh_current_issues',
    'field_econlib_cbh_bank_website' => 'field_econlib_cbh_bank_website',
    'field_econlib_cbh_po_number' => 'field_econlib_cbh_po_number',
    'field_econlib_cbh_color' => 'field_econlib_cbh_color',
    'field_econlib_cbh_binding_freq' => 'field_econlib_cbh_binding_freq',
    'field_econlib_cbh_notes' => 'field_econlib_cbh_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_econlib_cbh_region';
  $handler->display->display_options['style_options']['info'] = array(
    'field_econlib_cbh_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_name' => array(
      'sortable' => 1,
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
    'field_econlib_cbh_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_last_bound' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_current_issues' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_po_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_binding_freq' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_notes' => array(
      'sortable' => 0,
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add new Working Papers resource';
  $handler->display->display_options['header']['area']['content'] = '<div id="edit-area-ip-resources" class="service-connect-btn">
<a target="_blank" href="/node/add/econ-working-papers">Add New Working Papers Resource</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['id'] = 'field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['table'] = 'field_data_field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['field'] = 'field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Continues */
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['id'] = 'field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['table'] = 'field_data_field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['field'] = 'field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['element_default_classes'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['id'] = 'field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['table'] = 'field_data_field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['field'] = 'field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Bound Holdings */
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['id'] = 'field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['table'] = 'field_data_field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['field'] = 'field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['element_default_classes'] = FALSE;
  /* Field: Content: Unbound Holdings */
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['id'] = 'field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['table'] = 'field_data_field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['field'] = 'field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['type'] = 'link_short';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_working_papers' => 'econ_working_papers',
  );
  $handler->display->display_options['path'] = 'econlib/working-papers-edit';

  /* Display: Working Papers Page */
  $handler = $view->new_display('page', 'Working Papers Page', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Papers';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_econlib_cbh_region' => 'field_econlib_cbh_region',
    'field_econlib_cbh_bank_name' => 'field_econlib_cbh_bank_name',
    'title' => 'title',
    'field_econlib_cbh_call_number' => 'field_econlib_cbh_call_number',
    'field_econlib_cbh_last_bound' => 'field_econlib_cbh_last_bound',
    'field_econlib_cbh_current_issues' => 'field_econlib_cbh_current_issues',
    'field_econlib_cbh_bank_website' => 'field_econlib_cbh_bank_website',
    'field_econlib_cbh_po_number' => 'field_econlib_cbh_po_number',
    'field_econlib_cbh_color' => 'field_econlib_cbh_color',
    'field_econlib_cbh_binding_freq' => 'field_econlib_cbh_binding_freq',
    'field_econlib_cbh_notes' => 'field_econlib_cbh_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_econlib_cbh_region';
  $handler->display->display_options['style_options']['info'] = array(
    'field_econlib_cbh_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_name' => array(
      'sortable' => 1,
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
    'field_econlib_cbh_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_last_bound' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_current_issues' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_bank_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_po_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_binding_freq' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_econlib_cbh_notes' => array(
      'sortable' => 0,
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/econlib">&larr; Go Back</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['id'] = 'field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['table'] = 'field_data_field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['field'] = 'field_econ_lib_wp_publisher';
  $handler->display->display_options['fields']['field_econ_lib_wp_publisher']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Continues */
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['id'] = 'field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['table'] = 'field_data_field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['field'] = 'field_econ_lib_wp_continues';
  $handler->display->display_options['fields']['field_econ_lib_wp_continues']['element_default_classes'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['id'] = 'field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['table'] = 'field_data_field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['field'] = 'field_econ_lib_wp_call_number';
  $handler->display->display_options['fields']['field_econ_lib_wp_call_number']['element_default_classes'] = FALSE;
  /* Field: Content: Bound Holdings */
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['id'] = 'field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['table'] = 'field_data_field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['field'] = 'field_econ_lib_wp_bound_holdings';
  $handler->display->display_options['fields']['field_econ_lib_wp_bound_holdings']['element_default_classes'] = FALSE;
  /* Field: Content: Unbound Holdings */
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['id'] = 'field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['table'] = 'field_data_field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['field'] = 'field_econ_lib_wp_unbound';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_econ_lib_wp_unbound']['type'] = 'link_short';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'econ_working_papers' => 'econ_working_papers',
  );
  $handler->display->display_options['path'] = 'econlib/working-papers';
  $export['econ_lib_data_tables'] = $view;

  return $export;
}
