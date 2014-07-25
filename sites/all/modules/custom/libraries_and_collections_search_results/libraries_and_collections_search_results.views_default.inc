<?php
/**
 * @file
 * libraries_and_collections_search_results.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function libraries_and_collections_search_results_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_libraries_and_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_libraries_and_collections';
  $view->human_name = 'Search Libraries and Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Libraries and Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Libraries and Collections';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Building */
  $handler->display->display_options['relationships']['field_building']['id'] = 'field_building';
  $handler->display->display_options['relationships']['field_building']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['relationships']['field_building']['field'] = 'field_building';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Collection URL: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_collection_url_url']['id'] = 'field_collection_url_url';
  $handler->display->display_options['fields']['field_collection_url_url']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_collection_url_url']['field'] = 'field_collection_url_url';
  $handler->display->display_options['fields']['field_collection_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url_url']['alter']['text'] = '<i class="icon-home">&nbsp;</i><a href="[field_collection_url_url]" title="Collection Homepage">Collection Homepage</a>';
  $handler->display->display_options['fields']['field_collection_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url_url']['link_to_entity'] = 0;
  /* Field: Library Homepage: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_library_homepage_url']['id'] = 'field_library_homepage_url';
  $handler->display->display_options['fields']['field_library_homepage_url']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_library_homepage_url']['field'] = 'field_library_homepage_url';
  $handler->display->display_options['fields']['field_library_homepage_url']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage_url']['alter']['text'] = '<i class="icon-home">&nbsp;</i><a href="[field_library_homepage_url]" title="Library Homepage">Library Homepage</a>';
  $handler->display->display_options['fields']['field_library_homepage_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage_url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['relationship'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['text'] = '<i class=\'icon-map-marker icon-large\' > </i> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[field_building]</a>';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_building']['view_mode'] = 'full';
  /* Field: Indexed Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<i class="icon-phone">&nbsp;</i>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<i class="icon-envelope-alt">&nbsp;</i>[field_e_mail_address] ';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['type'] = 'email_plain';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;

  /* Display: Libraries and Collections Search Pane */
  $handler = $view->new_display('panel_pane', 'Libraries and Collections Search Pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Search library and collections titles, descriptions, tags';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Collection URL: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_collection_url_url']['id'] = 'field_collection_url_url';
  $handler->display->display_options['fields']['field_collection_url_url']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_collection_url_url']['field'] = 'field_collection_url_url';
  $handler->display->display_options['fields']['field_collection_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url_url']['alter']['text'] = '<i class="icon-home">&nbsp;</i><a href="[field_collection_url_url]" title="Collection Homepage">Collection Homepage</a>';
  $handler->display->display_options['fields']['field_collection_url_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['field_collection_url_url']['link_to_entity'] = 0;
  /* Field: Library Homepage: The URL of the link. (indexed) */
  $handler->display->display_options['fields']['field_library_homepage_url']['id'] = 'field_library_homepage_url';
  $handler->display->display_options['fields']['field_library_homepage_url']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_library_homepage_url']['field'] = 'field_library_homepage_url';
  $handler->display->display_options['fields']['field_library_homepage_url']['label'] = '';
  $handler->display->display_options['fields']['field_library_homepage_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_library_homepage_url']['alter']['text'] = '<i class="icon-home">&nbsp;</i><a href="[field_library_homepage_url]" title="Library Homepage">Library Homepage</a>';
  $handler->display->display_options['fields']['field_library_homepage_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['field_library_homepage_url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Campus Building LOC ID */
  $handler->display->display_options['fields']['field_campus_building_loc_id']['id'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['field'] = 'field_campus_building_loc_id';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['label'] = '';
  $handler->display->display_options['fields']['field_campus_building_loc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus_building_loc_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['relationship'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['text'] = '<i class=\'icon-map-marker icon-large\' > </i> <a href="http://etcweb.princeton.edu/pumap/#[field_campus_building_loc_id]" target="_blank">[field_building]</a>';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_building']['view_mode'] = 'full';
  /* Field: Indexed Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<i class="icon-phone">&nbsp;</i>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: E-Mail Address */
  $handler->display->display_options['fields']['field_e_mail_address']['id'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_e_mail_address']['field'] = 'field_e_mail_address';
  $handler->display->display_options['fields']['field_e_mail_address']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail_address']['alter']['text'] = '<i class="icon-envelope-alt">&nbsp;</i>[field_e_mail_address] ';
  $handler->display->display_options['fields']['field_e_mail_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail_address']['type'] = 'email_plain';
  /* Field: Indexed Content: Project URL */
  $handler->display->display_options['fields']['field_digital_project_url']['id'] = 'field_digital_project_url';
  $handler->display->display_options['fields']['field_digital_project_url']['table'] = 'search_api_index_libraries_and_collections';
  $handler->display->display_options['fields']['field_digital_project_url']['field'] = 'field_digital_project_url';
  $handler->display->display_options['fields']['field_digital_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_digital_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_digital_project_url']['alter']['text'] = '<i class="icon-home">&nbsp;</i><a href="[field_digital_project_url-url]">Project Website</a>';
  $handler->display->display_options['fields']['field_digital_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_project_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_digital_project_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_digital_project_url']['type'] = 'link_plain';
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $export['search_libraries_and_collections'] = $view;

  return $export;
}
