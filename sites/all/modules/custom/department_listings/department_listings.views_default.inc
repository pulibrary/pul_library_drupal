<?php
/**
 * @file
 * department_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function department_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff_department_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Department Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_puluser_division',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_puluser_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'field_puluser_division' => 'field_puluser_division',
    'field_puluser_section' => 'field_puluser_section',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_officialtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_division' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Taxonomy term: User using PUL Department */
  $handler->display->display_options['relationships']['reverse_field_puluser_department_user']['id'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['relationships']['reverse_field_puluser_department_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_puluser_department_user']['field'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['relationships']['reverse_field_puluser_department_user']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Department';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_puluser_division_user';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name_1]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['relationship'] = 'reverse_field_puluser_division_user';
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['relationship'] = 'reverse_field_puluser_division_user';
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Sort criterion: User: Department Sort (field_puluser_department_sort) */
  $handler->display->display_options['sorts']['field_puluser_department_sort_value']['id'] = 'field_puluser_department_sort_value';
  $handler->display->display_options['sorts']['field_puluser_department_sort_value']['table'] = 'field_data_field_puluser_department_sort';
  $handler->display->display_options['sorts']['field_puluser_department_sort_value']['field'] = 'field_puluser_department_sort_value';
  $handler->display->display_options['sorts']['field_puluser_department_sort_value']['relationship'] = 'reverse_field_puluser_division_user';
  /* Sort criterion: User: Unit Sort (field_puluser_unit_sort) */
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['id'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['table'] = 'field_data_field_puluser_unit_sort';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['field'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['expose']['label'] = 'Unit Sort (field_puluser_unit_sort)';
  /* Sort criterion: User: Staff Sort (field_pul_user_staff_sort) */
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['id'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['table'] = 'field_data_field_pul_user_staff_sort';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['field'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['relationship'] = 'reverse_field_puluser_department_user';
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
    'departments' => 'departments',
  );

  /* Display: Organization Chart by Department */
  $handler = $view->new_display('page', 'Organization Chart by Department', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_puluser_division',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_puluser_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'field_puluser_division' => 'field_puluser_division',
    'field_puluser_section' => 'field_puluser_section',
    'field_pul_user_staff_sort' => 'field_pul_user_staff_sort',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_officialtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_division' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pul_user_staff_sort' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Department';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name_1]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['field_api_classes'] = TRUE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_division']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Field: User: Staff Sort */
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['id'] = 'field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['table'] = 'field_data_field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['field'] = 'field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['label'] = '';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['field_api_classes'] = TRUE;
  /* Field: User: Unit Sort */
  $handler->display->display_options['fields']['field_puluser_unit_sort']['id'] = 'field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['table'] = 'field_data_field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['field'] = 'field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_puluser_unit_sort']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: User: Unit Sort (field_puluser_unit_sort) */
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['id'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['table'] = 'field_data_field_puluser_unit_sort';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['field'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  /* Sort criterion: User: Staff Sort (field_pul_user_staff_sort) */
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['id'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['table'] = 'field_data_field_pul_user_staff_sort';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['field'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'staff/organization';

  /* Display: Department List Only */
  $handler = $view->new_display('page', 'Department List Only', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'staff/department-list';

  /* Display: Staff By Department Pane */
  $handler = $view->new_display('panel_pane', 'Staff By Department Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_puluser_division',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_puluser_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'field_puluser_unit',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
    'field_puluser_formalname' => 'field_puluser_formalname',
    'field_puluser_officialtitle' => 'field_puluser_officialtitle',
    'field_puluser_phone_number' => 'field_puluser_phone_number',
    'mail' => 'mail',
    'field_puluser_division' => 'field_puluser_division',
    'field_puluser_section' => 'field_puluser_section',
    'field_puluser_unit' => 'field_puluser_unit',
    'field_puluser_divsect' => 'field_puluser_divsect',
    'field_puluser_unit_sort' => 'field_puluser_unit_sort',
    'field_pul_user_staff_sort' => 'field_pul_user_staff_sort',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_formalname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_officialtitle' => array(
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
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_division' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_section' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_divsect' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_puluser_unit_sort' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pul_user_staff_sort' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Department';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Formal Name */
  $handler->display->display_options['fields']['field_puluser_formalname']['id'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['table'] = 'field_data_field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['field'] = 'field_puluser_formalname';
  $handler->display->display_options['fields']['field_puluser_formalname']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_formalname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_formalname']['alter']['path'] = 'staff/[name_1]';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_formalname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_formalname']['element_default_classes'] = FALSE;
  /* Field: User: Official Title */
  $handler->display->display_options['fields']['field_puluser_officialtitle']['id'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['table'] = 'field_data_field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field'] = 'field_puluser_officialtitle';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_officialtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_officialtitle']['field_api_classes'] = TRUE;
  /* Field: User: Phone Number */
  $handler->display->display_options['fields']['field_puluser_phone_number']['id'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['table'] = 'field_data_field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['field'] = 'field_puluser_phone_number';
  $handler->display->display_options['fields']['field_puluser_phone_number']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_phone_number']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Division */
  $handler->display->display_options['fields']['field_puluser_division']['id'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['table'] = 'field_data_field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['field'] = 'field_puluser_division';
  $handler->display->display_options['fields']['field_puluser_division']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_division']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_division']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_division']['alter']['text'] = '<h2>[field_puluser_division]</h2>';
  $handler->display->display_options['fields']['field_puluser_division']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_puluser_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_division']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_division']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_division']['field_api_classes'] = TRUE;
  /* Field: User: Section */
  $handler->display->display_options['fields']['field_puluser_section']['id'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['table'] = 'field_data_field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['field'] = 'field_puluser_section';
  $handler->display->display_options['fields']['field_puluser_section']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_section']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['alter']['text'] = '<h3>[field_puluser_division] - [field_puluser_section]</h3>';
  $handler->display->display_options['fields']['field_puluser_section']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_section']['alter']['preserve_tags'] = '<h3>';
  $handler->display->display_options['fields']['field_puluser_section']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_puluser_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_section']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_puluser_section']['field_api_classes'] = TRUE;
  /* Field: User: Unit */
  $handler->display->display_options['fields']['field_puluser_unit']['id'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['table'] = 'field_data_field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['field'] = 'field_puluser_unit';
  $handler->display->display_options['fields']['field_puluser_unit']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_unit']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_unit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit']['alter']['text'] = '<h4>[field_puluser_section] - [field_puluser_unit]</h4>';
  $handler->display->display_options['fields']['field_puluser_unit']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit']['alter']['preserve_tags'] = '<h4>';
  $handler->display->display_options['fields']['field_puluser_unit']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_puluser_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_puluser_unit']['field_api_classes'] = TRUE;
  /* Field: User: DivSect */
  $handler->display->display_options['fields']['field_puluser_divsect']['id'] = 'field_puluser_divsect';
  $handler->display->display_options['fields']['field_puluser_divsect']['table'] = 'field_data_field_puluser_divsect';
  $handler->display->display_options['fields']['field_puluser_divsect']['field'] = 'field_puluser_divsect';
  $handler->display->display_options['fields']['field_puluser_divsect']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_divsect']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_divsect']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_divsect']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_divsect']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_divsect']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_divsect']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_divsect']['field_api_classes'] = TRUE;
  /* Field: User: Unit Sort */
  $handler->display->display_options['fields']['field_puluser_unit_sort']['id'] = 'field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['table'] = 'field_data_field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['field'] = 'field_puluser_unit_sort';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_unit_sort']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_unit_sort']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_puluser_unit_sort']['field_api_classes'] = TRUE;
  /* Field: User: Staff Sort */
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['id'] = 'field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['table'] = 'field_data_field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['field'] = 'field_pul_user_staff_sort';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['label'] = '';
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pul_user_staff_sort']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Unit Sort (field_puluser_unit_sort) */
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['id'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['table'] = 'field_data_field_puluser_unit_sort';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['field'] = 'field_puluser_unit_sort_value';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['sorts']['field_puluser_unit_sort_value']['expose']['label'] = 'Unit Sort (field_puluser_unit_sort)';
  /* Sort criterion: User: DivSect (field_puluser_divsect) */
  $handler->display->display_options['sorts']['field_puluser_divsect_value']['id'] = 'field_puluser_divsect_value';
  $handler->display->display_options['sorts']['field_puluser_divsect_value']['table'] = 'field_data_field_puluser_divsect';
  $handler->display->display_options['sorts']['field_puluser_divsect_value']['field'] = 'field_puluser_divsect_value';
  $handler->display->display_options['sorts']['field_puluser_divsect_value']['relationship'] = 'reverse_field_puluser_department_user';
  /* Sort criterion: User: Staff Sort (field_pul_user_staff_sort) */
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['id'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['table'] = 'field_data_field_pul_user_staff_sort';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['field'] = 'field_pul_user_staff_sort_value';
  $handler->display->display_options['sorts']['field_pul_user_staff_sort_value']['relationship'] = 'reverse_field_puluser_department_user';
  /* Sort criterion: User: Last Name (field_puluser_lname) */
  $handler->display->display_options['sorts']['field_puluser_lname_value']['id'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['field'] = 'field_puluser_lname_value';
  $handler->display->display_options['sorts']['field_puluser_lname_value']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'departments' => 'departments',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'reverse_field_puluser_department_user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
    17 => '17',
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
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Department List */
  $handler = $view->new_display('block', 'Department List', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['staff_department_list'] = $view;

  return $export;
}
