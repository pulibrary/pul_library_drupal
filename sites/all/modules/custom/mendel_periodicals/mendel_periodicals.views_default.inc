<?php

/**
 * @file
 * mendel_periodicals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mendel_periodicals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mus_mendel_periodicals_view';
  $view->description = 'Mendel Periodicals - Reading Room, Stacks and ReCAP';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mendel Periodicals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mendel Periodicals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* Field: Content: Catalog Link */
  $handler->display->display_options['fields']['field_musper_catalog_url']['id'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['table'] = 'field_data_field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['field'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_musper_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_musper_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_musper_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_musper_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
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
    'mendel_periodical' => 'mendel_periodical',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '25900',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mendel_periodical_location';

  /* Display: All locations */
  $handler = $view->new_display('page', 'All locations', 'page');
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
    'mendel_periodical' => 'mendel_periodical',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'music/mendel-periodicals';

  /* Display: Reading Room */
  $handler = $view->new_display('page', 'Reading Room', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Periodicals available in Mendel Reading Room';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catalog Link */
  $handler->display->display_options['fields']['field_musper_catalog_url']['id'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['table'] = 'field_data_field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['field'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_musper_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_musper_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_musper_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_musper_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'mendel_periodical' => 'mendel_periodical',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '25898',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'mendel_periodical_location';
  $handler->display->display_options['path'] = 'music/periodicals/readingroom';

  /* Display: Filter Page */
  $handler = $view->new_display('page', 'Filter Page', 'page_2');
  $handler->display->display_options['display_description'] = 'Patron can choose location.  Use for MUSPE AND RCPPK?';
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
    'mendel_periodical' => 'mendel_periodical',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Periodical Location (field_mus_periodical_location) */
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['id'] = 'field_mus_periodical_location_tid';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['table'] = 'field_data_field_mus_periodical_location';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['field'] = 'field_mus_periodical_location_tid';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['expose']['operator_id'] = 'field_mus_periodical_location_tid_op';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['expose']['label'] = 'Periodical Location (field_mus_periodical_location)';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['expose']['operator'] = 'field_mus_periodical_location_tid_op';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['expose']['identifier'] = 'field_mus_periodical_location_tid';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group_info']['label'] = 'Choose Location';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group_info']['identifier'] = 'field_mus_periodical_location_tid';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group_info']['default_group'] = '4';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Periodicals in Reading Room',
      'operator' => 'or',
      'value' => array(
        25898 => '25898',
      ),
    ),
    2 => array(
      'title' => 'Periodicals in Mendel Stacks (MUSPE)',
      'operator' => 'or',
      'value' => array(
        25899 => '25899',
      ),
    ),
    3 => array(
      'title' => 'Mendel periodicals in ReCAP',
      'operator' => 'or',
      'value' => array(
        25900 => '25900',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mus_periodical_location_tid']['vocabulary'] = 'mendel_periodical_location';
  $handler->display->display_options['path'] = 'music/muspe_periodicals';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_musper_catalog_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Catalog Link */
  $handler->display->display_options['fields']['field_musper_catalog_url']['id'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['table'] = 'field_data_field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['field'] = 'field_musper_catalog_url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_musper_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_musper_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_musper_catalog_url']['type'] = 'link_absolute';
  /* Field: Content: Periodical Location */
  $handler->display->display_options['fields']['field_mus_periodical_location']['id'] = 'field_mus_periodical_location';
  $handler->display->display_options['fields']['field_mus_periodical_location']['table'] = 'field_data_field_mus_periodical_location';
  $handler->display->display_options['fields']['field_mus_periodical_location']['field'] = 'field_mus_periodical_location';
  $handler->display->display_options['fields']['field_mus_periodical_location']['label'] = '';
  $handler->display->display_options['fields']['field_mus_periodical_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mus_periodical_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_mus_periodical_location']['delta_offset'] = '0';
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
    'mendel_periodical' => 'mendel_periodical',
  );
  $handler->display->display_options['path'] = 'mendel-periodicals.csv';
  $export['mus_mendel_periodicals_view'] = $view;

  return $export;
}
