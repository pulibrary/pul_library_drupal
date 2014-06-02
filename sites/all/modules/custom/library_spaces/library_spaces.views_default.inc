<?php
/**
 * @file
 * library_spaces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_spaces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'meeting_rooms';
  $view->description = 'Views of the Content from Library Meeting Rooms';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_library_target_id']['id'] = 'field_meeting_library_target_id';
  $handler->display->display_options['relationships']['field_meeting_library_target_id']['table'] = 'field_data_field_meeting_library';
  $handler->display->display_options['relationships']['field_meeting_library_target_id']['field'] = 'field_meeting_library_target_id';
  $handler->display->display_options['relationships']['field_meeting_library_target_id']['label'] = 'Library';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Library */
  $handler->display->display_options['fields']['field_location_in_library']['id'] = 'field_location_in_library';
  $handler->display->display_options['fields']['field_location_in_library']['table'] = 'field_data_field_location_in_library';
  $handler->display->display_options['fields']['field_location_in_library']['field'] = 'field_location_in_library';
  $handler->display->display_options['fields']['field_location_in_library']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_in_library']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_location_in_library']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location_in_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_in_library']['hide_empty'] = TRUE;
  /* Field: Content: Location Type */
  $handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['label'] = 'Room Type';
  $handler->display->display_options['fields']['field_location_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_type']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_location_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_location_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: User Type */
  $handler->display->display_options['fields']['field_user_type']['id'] = 'field_user_type';
  $handler->display->display_options['fields']['field_user_type']['table'] = 'field_data_field_user_type';
  $handler->display->display_options['fields']['field_user_type']['field'] = 'field_user_type';
  $handler->display->display_options['fields']['field_user_type']['label'] = 'For Use By';
  $handler->display->display_options['fields']['field_user_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_type']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_type']['delta_offset'] = '0';
  /* Field: Content: Maximum Occupancy */
  $handler->display->display_options['fields']['field_maximum_occupancy']['id'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['field'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_maximum_occupancy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Guidelines for Reserving */
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['id'] = 'field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['table'] = 'field_data_field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['field'] = 'field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_default_classes'] = FALSE;
  /* Field: Content: Reservation Link */
  $handler->display->display_options['fields']['field_reservation_link']['id'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['table'] = 'field_data_field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['field'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_link']['field_api_classes'] = TRUE;
  /* Field: Content: Reservation Schedule */
  $handler->display->display_options['fields']['field_reservation_schedule']['id'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['table'] = 'field_data_field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['field'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_schedule']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
    'library_meeting_space_locations' => 'library_meeting_space_locations',
  );

  /* Display: Meeting Room - Pane */
  $handler = $view->new_display('panel_pane', 'Meeting Room - Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_meeting_library_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Library';
  /* Field: Content: Location Type */
  $handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['label'] = 'Room Type';
  $handler->display->display_options['fields']['field_location_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_type']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_location_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_location_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: User Type */
  $handler->display->display_options['fields']['field_user_type']['id'] = 'field_user_type';
  $handler->display->display_options['fields']['field_user_type']['table'] = 'field_data_field_user_type';
  $handler->display->display_options['fields']['field_user_type']['field'] = 'field_user_type';
  $handler->display->display_options['fields']['field_user_type']['label'] = 'For Use By';
  $handler->display->display_options['fields']['field_user_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_type']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_type']['delta_offset'] = '0';
  /* Field: Content: Maximum Occupancy */
  $handler->display->display_options['fields']['field_maximum_occupancy']['id'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['field'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_maximum_occupancy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_maximum_occupancy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Guidelines for Reserving */
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['id'] = 'field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['table'] = 'field_data_field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['field'] = 'field_guidelines_for_reserving';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guidelines_for_reserving']['element_default_classes'] = FALSE;
  /* Field: Content: Reservation Link */
  $handler->display->display_options['fields']['field_reservation_link']['id'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['table'] = 'field_data_field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['field'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_link']['field_api_classes'] = TRUE;
  /* Field: Content: Reservation Schedule */
  $handler->display->display_options['fields']['field_reservation_schedule']['id'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['table'] = 'field_data_field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['field'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_schedule']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_schedule']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_schedule']['field_api_classes'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Room Reservation - Pane */
  $handler = $view->new_display('panel_pane', 'Room Reservation - Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reservation Link */
  $handler->display->display_options['fields']['field_reservation_link']['id'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['table'] = 'field_data_field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['field'] = 'field_reservation_link';
  $handler->display->display_options['fields']['field_reservation_link']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_link']['alter']['text'] = '<a class="colorbox-node" href="[field_reservation_link-url]?width=600&height=600">Reserve Now</a>';
  $handler->display->display_options['fields']['field_reservation_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_link']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_link']['field_api_classes'] = TRUE;
  /* Field: Content: Reservation Schedule */
  $handler->display->display_options['fields']['field_reservation_schedule']['id'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['table'] = 'field_data_field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['field'] = 'field_reservation_schedule';
  $handler->display->display_options['fields']['field_reservation_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_wrapper_class'] = 'service-connect-btn';
  $handler->display->display_options['fields']['field_reservation_schedule']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_schedule']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reservation_schedule']['field_api_classes'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['meeting_rooms'] = $view;

  return $export;
}
