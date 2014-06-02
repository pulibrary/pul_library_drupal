<?php
/**
 * @file
 * cdl_acqusition_highlights.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cdl_acqusition_highlights_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acquisitions_highlights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Acquisitions Highlights';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Acquisitions Highlights';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_new_item' => 'field_image_new_item',
    'title' => 'title',
    'field_cdl_acq_type' => 'field_cdl_acq_type',
    'field_specialist' => 'field_specialist',
    'field_description' => 'field_description',
    'field_access' => 'field_access',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_new_item' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cdl_acq_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_specialist' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Sample Graphic */
  $handler->display->display_options['fields']['field_image_new_item']['id'] = 'field_image_new_item';
  $handler->display->display_options['fields']['field_image_new_item']['table'] = 'field_data_field_image_new_item';
  $handler->display->display_options['fields']['field_image_new_item']['field'] = 'field_image_new_item';
  $handler->display->display_options['fields']['field_image_new_item']['label'] = '';
  $handler->display->display_options['fields']['field_image_new_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_new_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_new_item']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Bibliographic Record */
  $handler->display->display_options['fields']['field_bibliographic_record']['id'] = 'field_bibliographic_record';
  $handler->display->display_options['fields']['field_bibliographic_record']['table'] = 'field_data_field_bibliographic_record';
  $handler->display->display_options['fields']['field_bibliographic_record']['field'] = 'field_bibliographic_record';
  $handler->display->display_options['fields']['field_bibliographic_record']['label'] = 'Link to Material';
  $handler->display->display_options['fields']['field_bibliographic_record']['click_sort_column'] = 'url';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Acquisition Type */
  $handler->display->display_options['fields']['field_cdl_acq_type']['id'] = 'field_cdl_acq_type';
  $handler->display->display_options['fields']['field_cdl_acq_type']['table'] = 'field_data_field_cdl_acq_type';
  $handler->display->display_options['fields']['field_cdl_acq_type']['field'] = 'field_cdl_acq_type';
  $handler->display->display_options['fields']['field_cdl_acq_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_cdl_acq_type']['delta_offset'] = '0';
  /* Field: Content: Access */
  $handler->display->display_options['fields']['field_access']['id'] = 'field_access';
  $handler->display->display_options['fields']['field_access']['table'] = 'field_data_field_access';
  $handler->display->display_options['fields']['field_access']['field'] = 'field_access';
  $handler->display->display_options['fields']['field_access']['exclude'] = TRUE;
  /* Field: Content: Contact for Further Information */
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['id'] = 'field_cdl_specialist_profile';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['table'] = 'field_data_field_cdl_specialist_profile';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['field'] = 'field_cdl_specialist_profile';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['label'] = 'Specialist';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cdl_specialist_profile']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Access (field_access) */
  $handler->display->display_options['sorts']['field_access_value']['id'] = 'field_access_value';
  $handler->display->display_options['sorts']['field_access_value']['table'] = 'field_data_field_access';
  $handler->display->display_options['sorts']['field_access_value']['field'] = 'field_access_value';
  $handler->display->display_options['sorts']['field_access_value']['expose']['label'] = 'Access';
  /* Sort criterion: Content: Acquisition Type (field_cdl_acq_type) */
  $handler->display->display_options['sorts']['field_cdl_acq_type_value']['id'] = 'field_cdl_acq_type_value';
  $handler->display->display_options['sorts']['field_cdl_acq_type_value']['table'] = 'field_data_field_cdl_acq_type';
  $handler->display->display_options['sorts']['field_cdl_acq_type_value']['field'] = 'field_cdl_acq_type_value';
  $handler->display->display_options['sorts']['field_cdl_acq_type_value']['expose']['label'] = 'Acquisition Type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'acquisitions_highlights' => 'acquisitions_highlights',
  );
  /* Filter criterion: Content: Acquisition Type (field_cdl_acq_type) */
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['id'] = 'field_cdl_acq_type_value';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['table'] = 'field_data_field_cdl_acq_type';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['field'] = 'field_cdl_acq_type_value';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['expose']['operator_id'] = 'field_cdl_acq_type_value_op';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['expose']['operator'] = 'field_cdl_acq_type_value_op';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['expose']['identifier'] = 'field_cdl_acq_type_value';
  $handler->display->display_options['filters']['field_cdl_acq_type_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collections/acquisitions-highlights';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Acqusitions Highlights Table */
  $handler = $view->new_display('panel_pane', 'Acqusitions Highlights Table', 'panel_pane_1');
  $export['acquisitions_highlights'] = $view;

  return $export;
}
