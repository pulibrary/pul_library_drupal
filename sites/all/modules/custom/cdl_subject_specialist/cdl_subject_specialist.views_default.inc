<?php
/**
 * @file
 * cdl_subject_specialist.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cdl_subject_specialist_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cdl_subject_selector_bio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subject Selector Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
    'field_office_location' => 'field_office_location',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'mail' => 'mail',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['id'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['table'] = 'field_data_field_library_directory_profile';
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['field'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['id'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['field'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_subs_specialist_taxonomy_term']['relationship'] = 'field_library_directory_profile_target_id';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_office_location']['id'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['fields']['field_office_location']['field'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_office_location']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['mail']['label'] = 'email';
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_library_directory_profile_target_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['fields']['name']['label'] = 'Research Databases';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
    'subject_specialists' => 'subject_specialists',
  );

  /* Display: Selector Profile Listing */
  $handler = $view->new_display('panel_pane', 'Selector Profile Listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_class'] = 'selector-directory-profile';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'cdl_subject_selector_bio';
  $handler->display->display_options['fields']['view']['display'] = 'selector_directory_info';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Selector Subject Areas */
  $handler->display->display_options['fields']['field_selector_subject_areas']['id'] = 'field_selector_subject_areas';
  $handler->display->display_options['fields']['field_selector_subject_areas']['table'] = 'field_data_field_selector_subject_areas';
  $handler->display->display_options['fields']['field_selector_subject_areas']['field'] = 'field_selector_subject_areas';
  $handler->display->display_options['fields']['field_selector_subject_areas']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_selector_subject_areas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_selector_subject_areas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_selector_subject_areas']['multi_type'] = 'ul';
  /* Field: Content: Department and Programs */
  $handler->display->display_options['fields']['field_sel_library_department']['id'] = 'field_sel_library_department';
  $handler->display->display_options['fields']['field_sel_library_department']['table'] = 'field_data_field_sel_library_department';
  $handler->display->display_options['fields']['field_sel_library_department']['field'] = 'field_sel_library_department';
  $handler->display->display_options['fields']['field_sel_library_department']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_sel_library_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sel_library_department']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sel_library_department']['multi_type'] = 'ul';
  /* Field: Content: Related Websites */
  $handler->display->display_options['fields']['field_research_guides_websites']['id'] = 'field_research_guides_websites';
  $handler->display->display_options['fields']['field_research_guides_websites']['table'] = 'field_data_field_research_guides_websites';
  $handler->display->display_options['fields']['field_research_guides_websites']['field'] = 'field_research_guides_websites';
  $handler->display->display_options['fields']['field_research_guides_websites']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_research_guides_websites']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_research_guides_websites']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_guides_websites']['multi_type'] = 'ul';
  /* Field: Content: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['field_api_classes'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Selector ID',
    ),
  );

  /* Display: Selector Related Database Subjects */
  $handler = $view->new_display('panel_pane', 'Selector Related Database Subjects', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Databases';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_subs_specialist_taxonomy_term';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Selector ID',
    ),
  );

  /* Display: Selector Profile Pic */
  $handler = $view->new_display('panel_pane', 'Selector Profile Pic', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Selector Profile Bio Pic';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';

  /* Display: Selector Directory Information */
  $handler = $view->new_display('panel_pane', 'Selector Directory Information', 'selector_directory_info');
  $handler->display->display_options['display_description'] = 'Office Location, Telephone, e-mail';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_office_location']['id'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['fields']['field_office_location']['field'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_office_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_office_location']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['mail']['label'] = 'email';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_library_directory_profile_target_id';
  $export['cdl_subject_selector_bio'] = $view;

  $view = new view();
  $view->name = 'subject_specialists';
  $view->description = 'Description here, hover.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subject Specialists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Who Collects What?';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['id'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['table'] = 'field_data_field_library_directory_profile';
  $handler->display->display_options['relationships']['field_library_directory_profile_target_id']['field'] = 'field_library_directory_profile_target_id';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_library_directory_profile_target_id';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: Content: Subject Area */
  $handler->display->display_options['fields']['field_subject_area']['id'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['field'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['label'] = '';
  $handler->display->display_options['fields']['field_subject_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_area']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_area']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Subject Area (field_subject_area) */
  $handler->display->display_options['sorts']['field_subject_area_value']['id'] = 'field_subject_area_value';
  $handler->display->display_options['sorts']['field_subject_area_value']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['sorts']['field_subject_area_value']['field'] = 'field_subject_area_value';
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
    'subject_specialists' => 'subject_specialists',
  );
  /* Filter criterion: Content: Subject Area (field_subject_area) */
  $handler->display->display_options['filters']['field_subject_area_value']['id'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['filters']['field_subject_area_value']['field'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator_id'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['label'] = 'Subject Area';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['identifier'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_subject_area',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_subject_area' => 'field_subject_area',
    'field_profile_image' => 'field_profile_image',
    'title' => 'title',
    'field_job_title' => 'field_job_title',
    'field_e_mail' => 'field_e_mail',
    'field_telephone' => 'field_telephone',
    'field_last_name_first_name' => 'field_last_name_first_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_subject_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_image' => array(
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
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_e_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telephone' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile-photo';
  /* Field: Content: Subject Area */
  $handler->display->display_options['fields']['field_subject_area']['id'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['field'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['label'] = '';
  $handler->display->display_options['fields']['field_subject_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_area']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_subject_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_area']['delta_offset'] = '0';
  /* Field: Content: Profile Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Specialist';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: Content: Last Name, First Name */
  $handler->display->display_options['fields']['field_last_name_first_name']['id'] = 'field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['table'] = 'field_data_field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['field'] = 'field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_sel_last_name']['id'] = 'field_sel_last_name';
  $handler->display->display_options['fields']['field_sel_last_name']['table'] = 'field_data_field_sel_last_name';
  $handler->display->display_options['fields']['field_sel_last_name']['field'] = 'field_sel_last_name';
  $handler->display->display_options['fields']['field_sel_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_sel_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sel_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sel_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sel_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sel_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sel_last_name']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_sel_last_name) */
  $handler->display->display_options['sorts']['field_sel_last_name_value']['id'] = 'field_sel_last_name_value';
  $handler->display->display_options['sorts']['field_sel_last_name_value']['table'] = 'field_data_field_sel_last_name';
  $handler->display->display_options['sorts']['field_sel_last_name_value']['field'] = 'field_sel_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'subject_specialists' => 'subject_specialists',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    11 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Subject Area (field_subject_area) */
  $handler->display->display_options['filters']['field_subject_area_value']['id'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['filters']['field_subject_area_value']['field'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator_id'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['label'] = 'Subject Area (field_subject_area)';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['identifier'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_subject_area_value']['group_info']['label'] = 'Subject Area';
  $handler->display->display_options['filters']['field_subject_area_value']['group_info']['identifier'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Area Studies',
      'operator' => 'or',
      'value' => array(
        'Area Studies' => 'Area Studies',
      ),
    ),
    2 => array(
      'title' => 'Arts',
      'operator' => 'or',
      'value' => array(
        'Arts' => 'Arts',
      ),
    ),
    3 => array(
      'title' => 'Engineering',
      'operator' => 'or',
      'value' => array(
        'Engineering' => 'Engineering',
      ),
    ),
    4 => array(
      'title' => 'General',
      'operator' => 'or',
      'value' => array(
        'General' => 'General',
      ),
    ),
    5 => array(
      'title' => 'Humanities and Social Sciences',
      'operator' => 'or',
      'value' => array(
        'Humanities and Social Sciences' => 'Humanities and Social Sciences',
      ),
    ),
    6 => array(
      'title' => 'Rare Books and Special Collections',
      'operator' => 'or',
      'value' => array(
        'Rare Books and Special Collections' => 'Rare Books and Special Collections',
      ),
    ),
    7 => array(
      'title' => 'Sciences',
      'operator' => 'or',
      'value' => array(
        'Sciences' => 'Sciences',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'collections/subject-specialists';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Selector Profile Table */
  $handler = $view->new_display('panel_pane', 'Selector Profile Table', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_subject_area',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'title' => 'title',
    'field_job_title' => 'field_job_title',
    'mail' => 'mail',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'field_subject_area' => 'field_subject_area',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = 'Title';
  $handler->display->display_options['fields']['field_job_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_job_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'field_library_directory_profile_target_id';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: Content: Subject Area */
  $handler->display->display_options['fields']['field_subject_area']['id'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['field'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['label'] = '';
  $handler->display->display_options['fields']['field_subject_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_area']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_area']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subject_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subject_area']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['subject_specialists'] = $view;

  return $export;
}
