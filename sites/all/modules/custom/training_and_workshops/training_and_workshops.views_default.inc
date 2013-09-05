<?php
/**
 * @file
 * training_and_workshops.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_and_workshops_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'training_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '86400';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '86400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_series_target_id_1']['id'] = 'field_training_series_target_id_1';
  $handler->display->display_options['relationships']['field_training_series_target_id_1']['table'] = 'field_data_field_training_series';
  $handler->display->display_options['relationships']['field_training_series_target_id_1']['field'] = 'field_training_series_target_id';
  $handler->display->display_options['relationships']['field_training_series_target_id_1']['label'] = 'Series';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_instructor_target_id']['id'] = 'field_training_instructor_target_id';
  $handler->display->display_options['relationships']['field_training_instructor_target_id']['table'] = 'field_data_field_training_instructor';
  $handler->display->display_options['relationships']['field_training_instructor_target_id']['field'] = 'field_training_instructor_target_id';
  $handler->display->display_options['relationships']['field_training_instructor_target_id']['label'] = 'Instructor';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_dtime']['id'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['field'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_training_dtime']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_dtime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Instructor */
  $handler->display->display_options['fields']['field_training_instructor']['id'] = 'field_training_instructor';
  $handler->display->display_options['fields']['field_training_instructor']['table'] = 'field_data_field_training_instructor';
  $handler->display->display_options['fields']['field_training_instructor']['field'] = 'field_training_instructor';
  $handler->display->display_options['fields']['field_training_instructor']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['field_training_instructor']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['field_training_instructor']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_instructor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_instructor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_instructor']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_training_instructor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_training_instructor']['separator'] = ';';
  $handler->display->display_options['fields']['field_training_instructor']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_training_instructor_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Date and Time -  start date (field_training_dtime) */
  $handler->display->display_options['sorts']['field_training_dtime_value']['id'] = 'field_training_dtime_value';
  $handler->display->display_options['sorts']['field_training_dtime_value']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['sorts']['field_training_dtime_value']['field'] = 'field_training_dtime_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'training_session' => 'training_session',
  );
  /* Filter criterion: Content: Date and Time - end date (field_training_dtime:value2) */
  $handler->display->display_options['filters']['field_training_dtime_value2']['id'] = 'field_training_dtime_value2';
  $handler->display->display_options['filters']['field_training_dtime_value2']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['filters']['field_training_dtime_value2']['field'] = 'field_training_dtime_value2';
  $handler->display->display_options['filters']['field_training_dtime_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_training_dtime_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_training_dtime_value2']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Upcoming Sessions Dates */
  $handler = $view->new_display('panel_pane', 'Upcoming Sessions Dates', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Upcoming  Sessions with Dates only';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_dtime']['id'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['field'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_training_dtime']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_dtime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['view']['view'] = 'training_sessions';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Series ID',
    ),
  );

  /* Display: Instructors */
  $handler = $view->new_display('block', 'Instructors', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instructors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_puluser_formalname' => 'field_puluser_formalname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_training_instructor_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_training_dtime' => 'field_training_dtime',
    'title' => 0,
    'view_node' => 0,
    'body' => 0,
    'field_training_instructor' => 0,
    'title_1' => 0,
    'field_puluser_formalname' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_dtime']['id'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['field'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_training_dtime']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_dtime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );

  /* Display: Upcoming Sessions Description */
  $handler = $view->new_display('panel_pane', 'Upcoming Sessions Description', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Upcoming  Sessions with Descriptions';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_dtime']['id'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['field'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_training_dtime']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_dtime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['view']['view'] = 'training_sessions';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Series ID',
    ),
  );
  $export['training_sessions'] = $view;

  return $export;
}
