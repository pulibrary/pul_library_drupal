<?php
/**
 * @file
 * microforms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function microforms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'microforms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Microforms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newspapers on Microfilm';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'City';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'newspaper_cities' => 'newspaper_cities',
    'audiences' => 0,
    'database_keywords' => 0,
    'database_subjects' => 0,
    'departments' => 0,
    'division' => 0,
    'editing_groups' => 0,
    'lib_event_types' => 0,
    'faq_topics' => 0,
    'library_hours_calendars' => 0,
    'pul_location_type' => 0,
    'news_events_categories' => 0,
    'newspaper_countries' => 0,
    'newspaper_us_states' => 0,
    'princeton_library_blog_tags' => 0,
    'subjects' => 0,
    'resource_types' => 0,
    'section' => 0,
    'tags' => 0,
    'unit' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'Country';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'newspaper_countries' => 'newspaper_countries',
    'audiences' => 0,
    'database_keywords' => 0,
    'database_subjects' => 0,
    'departments' => 0,
    'division' => 0,
    'editing_groups' => 0,
    'lib_event_types' => 0,
    'faq_topics' => 0,
    'library_hours_calendars' => 0,
    'pul_location_type' => 0,
    'news_events_categories' => 0,
    'newspaper_cities' => 0,
    'newspaper_us_states' => 0,
    'princeton_library_blog_tags' => 0,
    'subjects' => 0,
    'resource_types' => 0,
    'section' => 0,
    'tags' => 0,
    'unit' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_2']['id'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['term_node_tid_2']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_2']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_2']['label'] = 'State';
  $handler->display->display_options['relationships']['term_node_tid_2']['vocabularies'] = array(
    'newspaper_us_states' => 'newspaper_us_states',
    'audiences' => 0,
    'database_keywords' => 0,
    'database_subjects' => 0,
    'departments' => 0,
    'division' => 0,
    'editing_groups' => 0,
    'lib_event_types' => 0,
    'faq_topics' => 0,
    'library_hours_calendars' => 0,
    'pul_location_type' => 0,
    'news_events_categories' => 0,
    'newspaper_cities' => 0,
    'newspaper_countries' => 0,
    'princeton_library_blog_tags' => 0,
    'subjects' => 0,
    'resource_types' => 0,
    'section' => 0,
    'tags' => 0,
    'unit' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_microforms_country']['id'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['table'] = 'field_data_field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['field'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_country']['field_api_classes'] = TRUE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: US State */
  $handler->display->display_options['fields']['field_microforms_us_states']['id'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['table'] = 'field_data_field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['field'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['label'] = 'States';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid_1';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'term_node_tid_2';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_2']['id'] = 'name_2';
  $handler->display->display_options['sorts']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_2']['field'] = 'name';
  $handler->display->display_options['sorts']['name_2']['relationship'] = 'term_node_tid';
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
    'microforms_newspapers' => 'microforms_newspapers',
  );

  /* Display: Newspapers by Country */
  $handler = $view->new_display('panel_pane', 'Newspapers by Country', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'International Newspapers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_microforms_country']['id'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['table'] = 'field_data_field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['field'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_country']['field_api_classes'] = TRUE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: US State */
  $handler->display->display_options['fields']['field_microforms_us_states']['id'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['table'] = 'field_data_field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['field'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['label'] = 'States';
  $handler->display->display_options['fields']['field_microforms_us_states']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_microforms_us_states']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy Term',
    ),
  );

  /* Display: Newspapers by Country - Individual Countries */
  $handler = $view->new_display('panel_pane', 'Newspapers by Country - Individual Countries', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Foreign Newspapers on Microfilm';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_microforms_country']['id'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['table'] = 'field_data_field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['field'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_microforms_country']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_country']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_country']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy Term',
    ),
  );

  /* Display: US Newspapers */
  $handler = $view->new_display('panel_pane', 'US Newspapers', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'United States';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: US State */
  $handler->display->display_options['fields']['field_microforms_us_states']['id'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['table'] = 'field_data_field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['field'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['label'] = 'States';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'microforms_newspapers' => 'microforms_newspapers',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '4502',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'newspaper_countries';
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy Term',
    ),
  );

  /* Display: US Papers by State */
  $handler = $view->new_display('panel_pane', 'US Papers by State', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'United States';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'microforms_newspapers' => 'microforms_newspapers',
  );
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy Term',
    ),
  );

  /* Display: Papers by City */
  $handler = $view->new_display('panel_pane', 'Papers by City', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Newspaper';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_microforms_country']['id'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['table'] = 'field_data_field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['field'] = 'field_microforms_country';
  $handler->display->display_options['fields']['field_microforms_country']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_country']['field_api_classes'] = TRUE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_microforms_city']['id'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['table'] = 'field_data_field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['field'] = 'field_microforms_city';
  $handler->display->display_options['fields']['field_microforms_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_city']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_city']['field_api_classes'] = TRUE;
  /* Field: Content: US State */
  $handler->display->display_options['fields']['field_microforms_us_states']['id'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['table'] = 'field_data_field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['field'] = 'field_microforms_us_states';
  $handler->display->display_options['fields']['field_microforms_us_states']['label'] = 'State';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_us_states']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_us_states']['field_api_classes'] = TRUE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_microforms_call_number']['id'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['table'] = 'field_data_field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['field'] = 'field_microforms_call_number';
  $handler->display->display_options['fields']['field_microforms_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_call_number']['field_api_classes'] = TRUE;
  /* Field: Content: Holdings Date */
  $handler->display->display_options['fields']['field_microforms_holdings_date']['id'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['table'] = 'field_data_field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field'] = 'field_microforms_holdings_date';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_microforms_holdings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_microforms_holdings_date']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'microforms_newspapers' => 'microforms_newspapers',
  );
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
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy Term',
    ),
  );
  $export['microforms'] = $view;

  $view = new view();
  $view->name = 'microforms_states_and_countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Microforms States and Countries';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['label'] = 'Select Country:';
  $handler->display->display_options['style_options']['choose'] = '- Select -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '/taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'newspaper_countries' => 'newspaper_countries',
  );

  /* Display: Newspapers Countries List */
  $handler = $view->new_display('panel_pane', 'Newspapers Countries List', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'International Newspapers on Microfilm';

  /* Display: US States List */
  $handler = $view->new_display('panel_pane', 'US States List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'United States Newspapers on Microfilm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['label'] = 'Select State:';
  $handler->display->display_options['style_options']['choose'] = '- Select -';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'newspaper_us_states' => 'newspaper_us_states',
  );

  /* Display: Cities List */
  $handler = $view->new_display('panel_pane', 'Cities List', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'City Newspapers on Microfilm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['label'] = 'Select City:';
  $handler->display->display_options['style_options']['choose'] = '- Select -';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'newspaper_cities' => 'newspaper_cities',
  );
  $export['microforms_states_and_countries'] = $view;

  return $export;
}
