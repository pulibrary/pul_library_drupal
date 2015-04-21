<?php
/**
 * @file
 * pul_libraries_ct.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_libraries_ct_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'libraries';
  $view->description = 'Library Information Bundles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Libraries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Libraries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_library_homepage' => 'field_library_homepage',
    'field_campus_building_loc_id' => 'field_campus_building_loc_id',
    'title_1' => 'title_1',
    'field_e_mail_address' => 'field_e_mail_address',
    'field_phone' => 'field_phone',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['id'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['table'] = 'field_data_field_hours_calendar';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['field'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['relationships']['field_hours_calendar_target_id']['label'] = 'Calendar';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_building_target_id']['id'] = 'field_building_target_id';
  $handler->display->display_options['relationships']['field_building_target_id']['table'] = 'field_data_field_building';
  $handler->display->display_options['relationships']['field_building_target_id']['field'] = 'field_building_target_id';
  $handler->display->display_options['relationships']['field_building_target_id']['label'] = 'Building';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '<i class="icon-home icon-large"> </i><a href="[field_library_homepage-url]">Website</a>';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage-url]';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class=\'icon-map-marker icon-large\' > </i> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<i class=\'icon-large icon-envelope-alt\'>&nbsp;</i>[field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<i class="icon-large icon-phone">&nbsp;</i>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Hours Code */
  $handler->display->display_options['fields']['field_lib_hours_code']['id'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['table'] = 'field_data_field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['field'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['label'] = '';
  $handler->display->display_options['fields']['field_lib_hours_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['type'] = 'text_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="icon-large icon-calendar"> </i> <a href="/hours/[field_lib_hours_code]">Location Hours</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'libraries' => 'libraries',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'library/all';

  /* Display: Information  */
  $handler = $view->new_display('panel_pane', 'Information ', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Library Image */
  $handler->display->display_options['fields']['field_library_image']['id'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['table'] = 'field_data_field_library_image';
  $handler->display->display_options['fields']['field_library_image']['field'] = 'field_library_image';
  $handler->display->display_options['fields']['field_library_image']['label'] = '';
  $handler->display->display_options['fields']['field_library_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_library_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_library_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_library_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_library_image']['field_api_classes'] = TRUE;
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '<span class="icon-large icon-home"></span> <a href="[field_library_homepage-url]" title="Visit %1 Website>%1 Homepage</a>';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage-url]';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span class=\'icon-large icon-location\' ></span> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address_1';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_1']['element_label_colon'] = FALSE;
  /* Field: Content: Address 2 */
  $handler->display->display_options['fields']['field_address_2']['id'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['table'] = 'field_data_field_address_2';
  $handler->display->display_options['fields']['field_address_2']['field'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_address_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Content: Zip */
  $handler->display->display_options['fields']['field_zip']['id'] = 'field_zip';
  $handler->display->display_options['fields']['field_zip']['table'] = 'field_data_field_zip';
  $handler->display->display_options['fields']['field_zip']['field'] = 'field_zip';
  $handler->display->display_options['fields']['field_zip']['label'] = '';
  $handler->display->display_options['fields']['field_zip']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip']['alter']['text'] = '[field_city], [field_state] [field_zip] ';
  $handler->display->display_options['fields']['field_zip']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<span class="icon-large icon-phone"></span> [field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = 'Fax: [field_fax]';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  /* Field: Content: Hours Code */
  $handler->display->display_options['fields']['field_lib_hours_code']['id'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['table'] = 'field_data_field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['field'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['label'] = '';
  $handler->display->display_options['fields']['field_lib_hours_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['type'] = 'text_plain';
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<span class=\'icon-large icon-email\'></span> [field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="icon-large icon-clock"></span> <a href="/hours/[field_lib_hours_code]">Location Hours</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
      'label' => 'Node ID',
    ),
  );

  /* Display: Library Web Service */
  $handler = $view->new_display('services', 'Library Web Service', 'services_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_library_homepage' => 'field_library_homepage',
    'field_campus_building_loc_id' => 'field_campus_building_loc_id',
    'title_1' => 'title_1',
    'field_e_mail_address' => 'field_e_mail_address',
    'field_phone' => 'field_phone',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '<i class="icon-home"> </i><a href="[field_library_homepage-url]">Website</a>';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage-url]';
  $handler->display->display_options['fields']['field_library_homepage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';
  /* Field: Content: Geo Locations */
  $handler->display->display_options['fields']['field_geofield_locations']['id'] = 'field_geofield_locations';
  $handler->display->display_options['fields']['field_geofield_locations']['table'] = 'field_data_field_geofield_locations';
  $handler->display->display_options['fields']['field_geofield_locations']['field'] = 'field_geofield_locations';
  $handler->display->display_options['fields']['field_geofield_locations']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_geofield_locations']['label'] = 'lat';
  $handler->display->display_options['fields']['field_geofield_locations']['alter']['text'] = '<latty>[field_geofield_locations-lat]</latty>';
  $handler->display->display_options['fields']['field_geofield_locations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_locations']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_locations']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield_locations']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_geofield_locations']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Geo Locations */
  $handler->display->display_options['fields']['field_geofield_locations_1']['id'] = 'field_geofield_locations_1';
  $handler->display->display_options['fields']['field_geofield_locations_1']['table'] = 'field_data_field_geofield_locations';
  $handler->display->display_options['fields']['field_geofield_locations_1']['field'] = 'field_geofield_locations';
  $handler->display->display_options['fields']['field_geofield_locations_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_geofield_locations_1']['label'] = 'long';
  $handler->display->display_options['fields']['field_geofield_locations_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_locations_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_locations_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield_locations_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_geofield_locations_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'phone';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<i class="icon-large icon-phone">&nbsp;</i>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = 'email';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<i class=\'icon-large icon-envelope-alt\'>&nbsp;</i>[field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['type'] = 'email_plain';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_campus_address_1']['id'] = 'field_campus_address_1';
  $handler->display->display_options['fields']['field_campus_address_1']['table'] = 'field_data_field_campus_address_1';
  $handler->display->display_options['fields']['field_campus_address_1']['field'] = 'field_campus_address_1';
  $handler->display->display_options['fields']['field_campus_address_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_address_1']['label'] = 'street';
  $handler->display->display_options['fields']['field_campus_address_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_address_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_address_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_address_1']['element_default_classes'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_campus_city']['id'] = 'field_campus_city';
  $handler->display->display_options['fields']['field_campus_city']['table'] = 'field_data_field_campus_city';
  $handler->display->display_options['fields']['field_campus_city']['field'] = 'field_campus_city';
  $handler->display->display_options['fields']['field_campus_city']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_city']['label'] = 'city';
  $handler->display->display_options['fields']['field_campus_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_city']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_city']['element_default_classes'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_campus_state']['id'] = 'field_campus_state';
  $handler->display->display_options['fields']['field_campus_state']['table'] = 'field_data_field_campus_state';
  $handler->display->display_options['fields']['field_campus_state']['field'] = 'field_campus_state';
  $handler->display->display_options['fields']['field_campus_state']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_state']['label'] = 'state';
  $handler->display->display_options['fields']['field_campus_state']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_state']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_state']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_state']['element_default_classes'] = FALSE;
  /* Field: Content: Hours Calendar */
  $handler->display->display_options['fields']['field_hours_calendar']['id'] = 'field_hours_calendar';
  $handler->display->display_options['fields']['field_hours_calendar']['table'] = 'field_data_field_hours_calendar';
  $handler->display->display_options['fields']['field_hours_calendar']['field'] = 'field_hours_calendar';
  $handler->display->display_options['fields']['field_hours_calendar']['label'] = 'calendar';
  $handler->display->display_options['fields']['field_hours_calendar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hours_calendar']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_hours_calendar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hours_calendar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hours_calendar']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_hours_calendar']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'node_id';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['path'] = 'libraries';

  /* Display: Detail List */
  $handler = $view->new_display('panel_pane', 'Detail List', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Library';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '<i class="icon-home icon-large"> </i><a href="[field_library_homepage-url]">Website</a>';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage-url]';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_library_homepage']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span class=\'icon-large icon-location\' >&nbsp;</span> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<span class=\'icon-large icon-email\'>&nbsp;</span>[field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<span class="icon-large icon-phone">&nbsp;</span>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Hours Code */
  $handler->display->display_options['fields']['field_lib_hours_code']['id'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['table'] = 'field_data_field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['field'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['label'] = '';
  $handler->display->display_options['fields']['field_lib_hours_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lib_hours_code']['alter']['text'] = '<span class=\'icon-large icon-clock\'>&nbsp;</span>[field_hours_code]';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['type'] = 'text_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="icon-large icon-clock">&nbsp;</span> <a href="/hours/[field_lib_hours_code]">Location Hours</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Libraries List */
  $handler = $view->new_display('panel_pane', 'Libraries List', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '<a href="[field_library_homepage-url]">[title]</a>';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage-url]';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';

  /* Display: Branch Information */
  $handler = $view->new_display('panel_pane', 'Branch Information', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class=\'icon-location icon-large\' > </i> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<i class=\'icon-large icon-mail\'>&nbsp;</i>[field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<i class="icon-large icon-phone">&nbsp;</i>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Hours Code */
  $handler->display->display_options['fields']['field_lib_hours_code']['id'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['table'] = 'field_data_field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['field'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['label'] = '';
  $handler->display->display_options['fields']['field_lib_hours_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['type'] = 'text_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="icon-large icon-calendar"> </i> <a href="/hours/[field_lib_hours_code]">Location Hours</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Branch Information - with Address and Fax */
  $handler = $view->new_display('panel_pane', 'Branch Information - with Address and Fax', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'field_data_field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_building_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class=\'icon-location icon-large\' > </i> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[title_1]</a>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address_1';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_1']['alter']['text'] = '<a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[field_address_1]</a>';
  $handler->display->display_options['fields']['field_address_1']['element_label_colon'] = FALSE;
  /* Field: Content: Address 2 */
  $handler->display->display_options['fields']['field_address_2']['id'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['table'] = 'field_data_field_address_2';
  $handler->display->display_options['fields']['field_address_2']['field'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['label'] = '';
  $handler->display->display_options['fields']['field_address_2']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Content: Zip */
  $handler->display->display_options['fields']['field_zip']['id'] = 'field_zip';
  $handler->display->display_options['fields']['field_zip']['table'] = 'field_data_field_zip';
  $handler->display->display_options['fields']['field_zip']['field'] = 'field_zip';
  $handler->display->display_options['fields']['field_zip']['label'] = '';
  $handler->display->display_options['fields']['field_zip']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip']['alter']['text'] = '[field_city], [field_state] [field_zip]';
  $handler->display->display_options['fields']['field_zip']['element_label_colon'] = FALSE;
  /* Field: Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'field_data_field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '[field_e_mail_address]';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_e_mail_address']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_e_mail_address']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Phone: [field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = 'Fax: [field_fax]';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  /* Field: Content: Hours Code */
  $handler->display->display_options['fields']['field_lib_hours_code']['id'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['table'] = 'field_data_field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['field'] = 'field_lib_hours_code';
  $handler->display->display_options['fields']['field_lib_hours_code']['label'] = '';
  $handler->display->display_options['fields']['field_lib_hours_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lib_hours_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lib_hours_code']['type'] = 'text_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_hours_calendar_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="icon-large icon-calendar"> </i> <a href="/hours/[field_lib_hours_code]">Location Hours</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'library-info';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['libraries'] = $view;

  $view = new view();
  $view->name = 'libraries_and_collections_combined';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Libraries and Collections Combined';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Libraries';
  $handler->display->display_options['css_class'] = 'libraries_collections_menu';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Collections';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="see-more" id="libraries-collections-see-more">
 <h3> <a href="/collections-and-collection-development">Collections and Collecting at Princeton</a></h3>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[nothing]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Collection URL */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_collection_url']['type'] = 'link_plain';
  /* Field: Content: Library Homepage */
  $handler->display->display_options['fields']['field_library_homepage']['id'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['table'] = 'field_data_field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['field'] = 'field_library_homepage';
  $handler->display->display_options['fields']['field_library_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_library_homepage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage']['alter']['path'] = '[field_library_homepage]';
  $handler->display->display_options['fields']['field_library_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_library_homepage']['type'] = 'link_plain';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'libraries' => 'libraries',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'collection' => 'collection',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Add to Libraries &amp; Collections Dropdown Menu (field_libs_cols_main_menu) */
  $handler->display->display_options['filters']['field_libs_cols_main_menu_value']['id'] = 'field_libs_cols_main_menu_value';
  $handler->display->display_options['filters']['field_libs_cols_main_menu_value']['table'] = 'field_data_field_libs_cols_main_menu';
  $handler->display->display_options['filters']['field_libs_cols_main_menu_value']['field'] = 'field_libs_cols_main_menu_value';
  $handler->display->display_options['filters']['field_libs_cols_main_menu_value']['value'] = array(
    1 => '1',
  );
  $export['libraries_and_collections_combined'] = $view;

  return $export;
}
