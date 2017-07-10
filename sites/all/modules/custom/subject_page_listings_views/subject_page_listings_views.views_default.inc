<?php
/**
 * @file
 * subject_page_listings_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function subject_page_listings_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tier_one_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Subject Page Lisitings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supplementary Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['id'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['table'] = 'field_data_field_subs_tier_one_resources';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['field'] = 'field_subs_tier_one_resources_target_id';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );

  /* Display: Core Resources by Subject Block */
  $handler = $view->new_display('block', 'Core Resources by Subject Block', 'block');

  /* Display: Core Resources Pane */
  $handler = $view->new_display('panel_pane', 'Core Resources Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Core Resources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_db_date_coverage' => 'field_db_date_coverage',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<i class="icon-rss icon-large"></i>&nbsp;<a href="/resources/[tid]/core/feed">Subscribe to updates for Core Resources for [name] </a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['id'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['table'] = 'field_data_field_subs_tier_one_resources';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['field'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['id'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['table'] = 'field_data_field_dboverride_database';
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['field'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['relationships']['field_dboverride_database_target_id']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['alter']['text'] = '[field_db_use_proxy-value]';
  $handler->display->display_options['fields']['field_db_use_proxy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url']['alter']['text'] = '[field_db_access_url-url]';
  $handler->display->display_options['fields']['field_db_access_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_plain';
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_db_date_coverage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-access-url="[field_db_access_url]" data-ezproxy-access="[field_db_use_proxy]">[title]</span>  <span class="db-date-coverage">[field_db_date_coverage]</span>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles resource-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_dboverride_database_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );
  /* Filter criterion: Content: Suppress This Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_suppressed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_db_suppressed_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Supplementary Resources Pane */
  $handler = $view->new_display('panel_pane', 'Supplementary Resources Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Supplementary Resources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_db_date_coverage' => 'field_db_date_coverage',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<i class="icon-rss icon-large"></i>&nbsp;<a href="/resources/[tid]/supplemental/feed">Subscribe to updates for Supplemental Resources for [name] </a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['id'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['table'] = 'field_data_field_subs_tier_two_resources';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['field'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_plain';
  /* Field: Content: Use EZproxy */
  $handler->display->display_options['fields']['field_db_use_proxy']['id'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['table'] = 'field_data_field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['field'] = 'field_db_use_proxy';
  $handler->display->display_options['fields']['field_db_use_proxy']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['field_db_use_proxy']['label'] = '';
  $handler->display->display_options['fields']['field_db_use_proxy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_use_proxy']['element_default_classes'] = FALSE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = '';
  $handler->display->display_options['fields']['field_db_date_coverage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['type'] = 'text_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span data-access-url="[field_db_access_url]" data-ezproxy-access="[field_db_use_proxy]">[title]</span> <span class="db-date-coverage">[field_db_date_coverage]</span>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'database-titles resource-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Also Known As */
  $handler->display->display_options['fields']['field_dboverride_database']['id'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['table'] = 'field_data_field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['field'] = 'field_dboverride_database';
  $handler->display->display_options['fields']['field_dboverride_database']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['field_dboverride_database']['label'] = '';
  $handler->display->display_options['fields']['field_dboverride_database']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dboverride_database']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_database']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dboverride_database']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dboverride_database']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_dboverride_database']['settings'] = array(
    'view_mode' => 'database_description_only',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_dboverride_database']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );
  /* Filter criterion: Content: Suppress This Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_suppressed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Subject Librarian Pane */
  $handler = $view->new_display('panel_pane', 'Subject Librarian Pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subject Librarian(s)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['id'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['table'] = 'field_data_field_subs_specialist';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['field'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'user--picture';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  /* Field: User: Nick Name */
  $handler->display->display_options['fields']['field_puluser_nick_name']['id'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['table'] = 'field_data_field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['field'] = 'field_puluser_nick_name';
  $handler->display->display_options['fields']['field_puluser_nick_name']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_nick_name']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_nick_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_nick_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['alter']['text'] = '[field_puluser_nick_name] [field_puluser_lname]';
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_lname']['element_class'] = 'user--name';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['id'] = 'field_puluser_officialtitle_1';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['element_class'] = 'user--title';
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle_1']['element_default_classes'] = FALSE;
  /* Field: User: PUL Department */
  $handler->display->display_options['fields']['field_puluser_department']['id'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['table'] = 'field_data_field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['field'] = 'field_puluser_department';
  $handler->display->display_options['fields']['field_puluser_department']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_department']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_department']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<i class="icon-email"></i> [mail]';
  $handler->display->display_options['fields']['mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['mail']['element_class'] = 'user--email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['alter']['text'] = '<i class="icon-phone"></i> [field_puluser_phone_number]';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_class'] = 'user--phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['type'] = 'text_plain';
  /* Field: User: Office */
  $handler->display->display_options['fields']['field_puluser_office']['id'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['table'] = 'field_data_field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['field'] = 'field_puluser_office';
  $handler->display->display_options['fields']['field_puluser_office']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_office']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_office']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_office']['alter']['text'] = '<i class="icon-location"></i> [field_puluser_office] ';
  $handler->display->display_options['fields']['field_puluser_office']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_office']['element_class'] = 'user--office';
  $handler->display->display_options['fields']['field_puluser_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_office']['hide_empty'] = TRUE;
  /* Field: User: Building Location */
  $handler->display->display_options['fields']['field_puluser_building_location']['id'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['table'] = 'field_data_field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['field'] = 'field_puluser_building_location';
  $handler->display->display_options['fields']['field_puluser_building_location']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_building_location']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_building_location']['alter']['text'] = '<i class="icon-library"></i> [field_puluser_building_location]';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_class'] = 'user--building';
  $handler->display->display_options['fields']['field_puluser_building_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_building_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Library Guides Pane */
  $handler = $view->new_display('panel_pane', 'Library Guides Pane', 'lib_guides_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Help';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_subs_primary_library_guide' => 'field_subs_primary_library_guide',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Field: Taxonomy term: Primary Library Guide */
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['id'] = 'field_subs_primary_library_guide';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['table'] = 'field_data_field_subs_primary_library_guide';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['field'] = 'field_subs_primary_library_guide';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['label'] = '';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['alter']['text'] = ' [field_subs_primary_library_guide]';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_subs_primary_library_guide']['click_sort_column'] = 'url';
  /* Field: Taxonomy term: Other Guides */
  $handler->display->display_options['fields']['field_subs_other_guides']['id'] = 'field_subs_other_guides';
  $handler->display->display_options['fields']['field_subs_other_guides']['table'] = 'field_data_field_subs_other_guides';
  $handler->display->display_options['fields']['field_subs_other_guides']['field'] = 'field_subs_other_guides';
  $handler->display->display_options['fields']['field_subs_other_guides']['label'] = '';
  $handler->display->display_options['fields']['field_subs_other_guides']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subs_other_guides']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subs_other_guides']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subs_other_guides']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subs_other_guides']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subs_other_guides']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_subs_other_guides']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_subs_other_guides']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subs_other_guides']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Core Resources Feed */
  $handler = $view->new_display('feed', 'Core Resources Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Core Research Resources for %1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Core library research tools  for %1 available to Princeton Library Users.';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'field_puluser_formalname';
  $handler->display->display_options['row_options']['date_field'] = 'last_updated';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['id'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['table'] = 'field_data_field_subs_tier_one_resources';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['field'] = 'field_subs_tier_one_resources_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['id'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['table'] = 'field_data_field_subs_specialist';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['field'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_subs_specialist_target_id';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );
  /* Filter criterion: Content: Suppress This Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_suppressed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'resources/%/core/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Supplementary Resources Feed */
  $handler = $view->new_display('feed', 'Supplementary Resources Feed', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Supplementary Research Resources %1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Supplemental library research tools  for %1 available to Princeton Library Users';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'view_user';
  $handler->display->display_options['row_options']['date_field'] = 'last_updated';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['id'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['table'] = 'field_data_field_subs_tier_two_resources';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['field'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_two_resources_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['id'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['table'] = 'field_data_field_subs_specialist';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['field'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_two_resources_target_id';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['fields']['last_updated']['label'] = '';
  $handler->display->display_options['fields']['last_updated']['element_label_colon'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );
  /* Filter criterion: Content: Suppress This Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['relationship'] = 'field_subs_tier_two_resources_target_id';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'resources/%/supplemental/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Topic Page Database Display */
  $handler = $view->new_display('panel_pane', 'Topic Page Database Display', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Databases';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_db_date_coverage' => 'field_db_date_coverage',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['id'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['table'] = 'field_data_field_subs_tier_one_resources';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['field'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'View Listings';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'subjects/databaases/[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Special Collections Resources Feed */
  $handler = $view->new_display('feed', 'Special Collections Resources Feed', 'feed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RBSC Research Tools';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'RBSC Research Resources';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'field_puluser_formalname';
  $handler->display->display_options['row_options']['date_field'] = 'last_updated';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['id'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['table'] = 'field_data_field_subs_tier_one_resources';
  $handler->display->display_options['relationships']['field_subs_tier_one_resources_target_id']['field'] = 'field_subs_tier_one_resources_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['id'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['table'] = 'field_data_field_subs_specialist';
  $handler->display->display_options['relationships']['field_subs_specialist_target_id']['field'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Coverage */
  $handler->display->display_options['fields']['field_db_date_coverage']['id'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['table'] = 'field_data_field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['field'] = 'field_db_date_coverage';
  $handler->display->display_options['fields']['field_db_date_coverage']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_date_coverage']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_db_date_coverage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_date_coverage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_db_date_coverage']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_subs_specialist_target_id';
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'field_subs_specialist_target_id';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['relationship'] = 'field_subs_tier_one_resources_target_id';
  /* Field: Content: Access URL */
  $handler->display->display_options['fields']['field_db_access_url']['id'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['table'] = 'field_data_field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['field'] = 'field_db_access_url';
  $handler->display->display_options['fields']['field_db_access_url']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['fields']['field_db_access_url']['label'] = '';
  $handler->display->display_options['fields']['field_db_access_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_db_access_url']['alter']['text'] = '[field_db_access_url-url]';
  $handler->display->display_options['fields']['field_db_access_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_db_access_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_db_access_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_db_access_url']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_db_access_url']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '3761';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'database_subjects' => 'database_subjects',
  );
  /* Filter criterion: Content: Suppress This Title (field_db_suppressed) */
  $handler->display->display_options['filters']['field_db_suppressed_value']['id'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['table'] = 'field_data_field_db_suppressed';
  $handler->display->display_options['filters']['field_db_suppressed_value']['field'] = 'field_db_suppressed_value';
  $handler->display->display_options['filters']['field_db_suppressed_value']['relationship'] = 'field_subs_tier_one_resources_target_id';
  $handler->display->display_options['filters']['field_db_suppressed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_db_suppressed_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'resources/rbsc/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $export['tier_one_resources'] = $view;

  return $export;
}
