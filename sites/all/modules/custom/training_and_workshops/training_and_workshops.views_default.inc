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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_training_series_target_id_1';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Content: Date and Time -  start date (field_training_dtime) */
  $handler->display->display_options['sorts']['field_training_dtime_value']['id'] = 'field_training_dtime_value';
  $handler->display->display_options['sorts']['field_training_dtime_value']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['sorts']['field_training_dtime_value']['field'] = 'field_training_dtime_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_training_dtime' => 'field_training_dtime',
    'nid' => 'nid',
    'field_training_session_title' => 'field_training_session_title',
    'field_training_description' => 'field_training_description',
    'view' => 'view',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_training_dtime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_training_session_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_training_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Session Title */
  $handler->display->display_options['fields']['field_training_session_title']['id'] = 'field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['table'] = 'field_data_field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['field'] = 'field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['hide_empty'] = TRUE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_training_description']['id'] = 'field_training_description';
  $handler->display->display_options['fields']['field_training_description']['table'] = 'field_data_field_training_description';
  $handler->display->display_options['fields']['field_training_description']['field'] = 'field_training_description';
  $handler->display->display_options['fields']['field_training_description']['label'] = '';
  $handler->display->display_options['fields']['field_training_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_description']['hide_empty'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Instructor(s)';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['view']['view'] = 'training_sessions';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_training_room']['id'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['table'] = 'field_data_field_training_room';
  $handler->display->display_options['fields']['field_training_room']['field'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['label'] = 'Location';
  $handler->display->display_options['fields']['field_training_room']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Session Info';
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
    'training_session' => 'training_session',
  );
  /* Filter criterion: Content: Date and Time - end date (field_training_dtime:value2) */
  $handler->display->display_options['filters']['field_training_dtime_value2']['id'] = 'field_training_dtime_value2';
  $handler->display->display_options['filters']['field_training_dtime_value2']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['filters']['field_training_dtime_value2']['field'] = 'field_training_dtime_value2';
  $handler->display->display_options['filters']['field_training_dtime_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_training_dtime_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_training_dtime_value2']['default_date'] = 'now';
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
  /* Field: Content: Session Title */
  $handler->display->display_options['fields']['field_training_session_title']['id'] = 'field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['table'] = 'field_data_field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['field'] = 'field_training_session_title';
  $handler->display->display_options['fields']['field_training_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_training_session_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_session_title']['hide_empty'] = TRUE;

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

  $view = new view();
  $view->name = 'zotero_training_submissions';
  $view->description = 'A list of all entityforms submissions';
  $view->tag = 'entityforms';
  $view->base_table = 'entityform';
  $view->human_name = 'Zotero Training Submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zotero Training Registrations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    19 => '19',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  $handler->display->display_options['empty']['area']['content'] = 'No entityforms have been created yet';
  /* Relationship: Entityform: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_zotero_reg_session_target_id']['id'] = 'field_zotero_reg_session_target_id';
  $handler->display->display_options['relationships']['field_zotero_reg_session_target_id']['table'] = 'field_data_field_zotero_reg_session';
  $handler->display->display_options['relationships']['field_zotero_reg_session_target_id']['field'] = 'field_zotero_reg_session_target_id';
  $handler->display->display_options['relationships']['field_zotero_reg_session_target_id']['label'] = 'Session';
  /* Field: Entityform: Name */
  $handler->display->display_options['fields']['field_zotero_reg_name']['id'] = 'field_zotero_reg_name';
  $handler->display->display_options['fields']['field_zotero_reg_name']['table'] = 'field_data_field_zotero_reg_name';
  $handler->display->display_options['fields']['field_zotero_reg_name']['field'] = 'field_zotero_reg_name';
  $handler->display->display_options['fields']['field_zotero_reg_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zotero_reg_name']['field_api_classes'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Netid';
  /* Field: Entityform: E-mail */
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['id'] = 'field_zotero_reg_e_mail';
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['table'] = 'field_data_field_zotero_reg_e_mail';
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['field'] = 'field_zotero_reg_e_mail';
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zotero_reg_e_mail']['field_api_classes'] = TRUE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_dtime']['id'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['field'] = 'field_training_dtime';
  $handler->display->display_options['fields']['field_training_dtime']['relationship'] = 'field_zotero_reg_session_target_id';
  $handler->display->display_options['fields']['field_training_dtime']['label'] = 'Session Date';
  $handler->display->display_options['fields']['field_training_dtime']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_dtime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_dtime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_training_dtime']['field_api_classes'] = TRUE;
  /* Field: Entityform: Comments */
  $handler->display->display_options['fields']['field_zotero_reg_comments']['id'] = 'field_zotero_reg_comments';
  $handler->display->display_options['fields']['field_zotero_reg_comments']['table'] = 'field_data_field_zotero_reg_comments';
  $handler->display->display_options['fields']['field_zotero_reg_comments']['field'] = 'field_zotero_reg_comments';
  $handler->display->display_options['fields']['field_zotero_reg_comments']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_comments']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zotero_reg_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zotero_reg_comments']['field_api_classes'] = TRUE;
  /* Field: Entityform Type: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['label'] = 'Form Type';
  $handler->display->display_options['fields']['label_1']['exclude'] = TRUE;
  /* Field: Entityform: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Entityform: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Entityform: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'View';
  /* Sort criterion: Entityform: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Date and Time -  start date (field_training_dtime) */
  $handler->display->display_options['sorts']['field_training_dtime_value']['id'] = 'field_training_dtime_value';
  $handler->display->display_options['sorts']['field_training_dtime_value']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['sorts']['field_training_dtime_value']['field'] = 'field_training_dtime_value';
  $handler->display->display_options['sorts']['field_training_dtime_value']['relationship'] = 'field_zotero_reg_session_target_id';
  $handler->display->display_options['sorts']['field_training_dtime_value']['order'] = 'DESC';
  /* Filter criterion: Entityform: Draft */
  $handler->display->display_options['filters']['draft']['id'] = 'draft';
  $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  $handler->display->display_options['filters']['draft']['field'] = 'draft';
  $handler->display->display_options['filters']['draft']['operator'] = '!=';
  $handler->display->display_options['filters']['draft']['value']['value'] = '1';
  /* Filter criterion: Entityform: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'zotero_workshop_registration' => 'zotero_workshop_registration',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_training_dtime) */
  $handler->display->display_options['filters']['field_training_dtime_value']['id'] = 'field_training_dtime_value';
  $handler->display->display_options['filters']['field_training_dtime_value']['table'] = 'field_data_field_training_dtime';
  $handler->display->display_options['filters']['field_training_dtime_value']['field'] = 'field_training_dtime_value';
  $handler->display->display_options['filters']['field_training_dtime_value']['relationship'] = 'field_zotero_reg_session_target_id';
  $handler->display->display_options['filters']['field_training_dtime_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_dtime_value']['expose']['operator_id'] = 'field_training_dtime_value_op';
  $handler->display->display_options['filters']['field_training_dtime_value']['expose']['label'] = 'Session Date';
  $handler->display->display_options['filters']['field_training_dtime_value']['expose']['operator'] = 'field_training_dtime_value_op';
  $handler->display->display_options['filters']['field_training_dtime_value']['expose']['identifier'] = 'session';
  $handler->display->display_options['filters']['field_training_dtime_value']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_training_dtime_value']['year_range'] = '-1:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'entityforms_admin_page');
  $handler->display->display_options['path'] = 'training/zotero/submissions';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Submissions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'autofields_table');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'training/zotero/submissions/table';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['description'] = 'View Submissions for all Entityforms';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Zotero Registrations */
  $handler = $view->new_display('panel_pane', 'Zotero Registrations', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['zotero_training_submissions'] = $view;

  return $export;
}
