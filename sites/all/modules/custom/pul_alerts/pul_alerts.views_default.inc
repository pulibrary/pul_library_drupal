<?php
/**
 * @file
 * pul_alerts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_alerts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'emergency_alert_content_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emergency Alert Content Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emergency Alert Content Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'homepage_alert' => 'homepage_alert',
  );

  /* Display: Alert Lists */
  $handler = $view->new_display('page', 'Alert Lists', 'page');
  $handler->display->display_options['path'] = 'alerts';

  /* Display: Alert Feeds */
  $handler = $view->new_display('feed', 'Alert Feeds', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'emergency-alert-content-block.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Homepage Alert Block */
  $handler = $view->new_display('block', 'Homepage Alert Block', 'emergency_alert_block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<i class="icon-alert"> </i>[title]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'alert-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Alert Blurb */
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['id'] = 'field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['table'] = 'field_data_field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['field'] = 'field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_default_classes'] = FALSE;
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
    'homepage_alert' => 'homepage_alert',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Emergency Alert Dates -  start date (field_emergency_alert_dates) */
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['id'] = 'field_emergency_alert_dates_value';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['table'] = 'field_data_field_emergency_alert_dates';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['field'] = 'field_emergency_alert_dates_value';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_emergency_alert_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Emergency Alert Dates - end date (field_emergency_alert_dates:value2) */
  $handler->display->display_options['filters']['field_emergency_alert_dates_value2']['id'] = 'field_emergency_alert_dates_value2';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value2']['table'] = 'field_data_field_emergency_alert_dates';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value2']['field'] = 'field_emergency_alert_dates_value2';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_emergency_alert_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Emergency Alert Overlay';

  /* Display: Marquand Alert Pane */
  $handler = $view->new_display('panel_pane', 'Marquand Alert Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Alerts view for Marquand branch library';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Emergency Alert Level */
  $handler->display->display_options['fields']['field_emergency_alert_level']['id'] = 'field_emergency_alert_level';
  $handler->display->display_options['fields']['field_emergency_alert_level']['table'] = 'field_data_field_emergency_alert_level';
  $handler->display->display_options['fields']['field_emergency_alert_level']['field'] = 'field_emergency_alert_level';
  $handler->display->display_options['fields']['field_emergency_alert_level']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_alert_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergency_alert_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_alert_level']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<i class="icon-alert"></i>[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Homepage Alert Blurb */
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['id'] = 'field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['table'] = 'field_data_field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['field'] = 'field_emergency_alert_blurb';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_emergency_alert_blurb']['element_default_classes'] = FALSE;
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
    'homepage_alert' => 'homepage_alert',
  );
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  $export['emergency_alert_content_block'] = $view;

  return $export;
}
