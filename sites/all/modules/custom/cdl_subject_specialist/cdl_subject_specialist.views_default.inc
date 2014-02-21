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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Broken/missing handler */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_subject_area']['id'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['field'] = 'field_subject_area';
  $handler->display->display_options['fields']['field_subject_area']['label'] = '';
  $handler->display->display_options['fields']['field_subject_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_area']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Specialist';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_last_name_first_name']['id'] = 'field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['table'] = 'field_data_field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['field'] = 'field_last_name_first_name';
  $handler->display->display_options['fields']['field_last_name_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_subject_area_value']['id'] = 'field_subject_area_value';
  $handler->display->display_options['sorts']['field_subject_area_value']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['sorts']['field_subject_area_value']['field'] = 'field_subject_area_value';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_last_name_first_name_value']['id'] = 'field_last_name_first_name_value';
  $handler->display->display_options['sorts']['field_last_name_first_name_value']['table'] = 'field_data_field_last_name_first_name';
  $handler->display->display_options['sorts']['field_last_name_first_name_value']['field'] = 'field_last_name_first_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_last_name_first_name_value']['id'] = 'field_last_name_first_name_value';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['table'] = 'field_data_field_last_name_first_name';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['field'] = 'field_last_name_first_name_value';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['value'] = array(
    'all' => 'all',
    'Acosta-Rodriguez, Fernando' => 'Acosta-Rodriguez, Fernando',
    'Baruzzi, Andrea' => 'Baruzzi, Andrea',
    'Belcher, Emily' => 'Belcher, Emily',
    'Bennett, Elizabeth' => 'Bennett, Elizabeth',
    'Bennett, Hannah' => 'Bennett, Hannah',
    'Bielawski, Marvin' => 'Bielawski, Marvin',
    'Bivens-Tatum, Wayne' => 'Bivens-Tatum, Wayne',
    'Bordelon, Bobray' => 'Bordelon, Bobray',
    'Broch, Elana' => 'Broch, Elana',
    'Brooke, Sandra' => 'Brooke, Sandra',
    'Darrington, Jeremy' => 'Darrington, Jeremy',
    'Dawes, Trevor' => 'Dawes, Trevor',
    'Deis, Louise' => 'Deis, Louise',
    'Delaney, John' => 'Delaney, John',
    'Donatiello, Joann' => 'Donatiello, Joann',
    'Dressel, Willow' => 'Dressel, Willow',
    'Emanuel, Tracie' => 'Emanuel, Tracie',
    'Fabricand-Person, Nicole' => 'Fabricand-Person, Nicole',
    'Farrell, Katharine' => 'Farrell, Katharine',
    'Ferguson, Stephen' => 'Ferguson, Stephen',
    'Friedman, Rebecca' => 'Friedman, Rebecca',
    'Gaspari-Bridges, Patty' => 'Gaspari-Bridges, Patty',
    'George, Mary' => 'George, Mary',
    'Hatfield, Rex' => 'Hatfield, Rex',
    'Hausman, Gary' => 'Hausman, Gary',
    'Heijdra, Martin' => 'Heijdra, Martin',
    'Hines, Todd' => 'Hines, Todd',
    'Hollander, David' => 'Hollander, David',
    'Holmquist, Jane' => 'Holmquist, Jane',
    'Immel, Andrea' => 'Immel, Andrea',
    'Jenkins, David' => 'Jenkins, David',
    'Langley, Anne' => 'Langley, Anne',
    'Lee, Hyoungbae' => 'Lee, Hyoungbae',
    'Linke, Daniel' => 'Linke, Daniel',
    'Logan, John' => 'Logan, John',
    'Magier, David' => 'Magier, David',
    'Makino, Yasuko' => 'Makino, Yasuko',
    'Melby, Julie' => 'Melby, Julie',
    'Nero, Neil' => 'Nero, Neil',
    'Noguchi, Setsuko' => 'Noguchi, Setsuko',
    'Oppenheim, Linda' => 'Oppenheim, Linda',
    'Popescu, Adriana' => 'Popescu, Adriana',
    'Pressman Levy, Nancy' => 'Pressman Levy, Nancy',
    'Primer, Ben' => 'Primer, Ben',
    'Rosenstock, Sandra' => 'Rosenstock, Sandra',
    'Scott, Darwin' => 'Scott, Darwin',
    'Shawa, Tsering Wangyal' => 'Shawa, Tsering Wangyal',
    'Skemer, Don' => 'Skemer, Don',
    'Stahl, Alan' => 'Stahl, Alan',
    'Swift, Gabriel' => 'Swift, Gabriel',
    'Trainer, Karin' => 'Trainer, Karin',
    'Weinberger, James' => 'Weinberger, James',
    'White, Susan Bennett' => 'White, Susan Bennett',
    'Wishart, Kimberly' => 'Wishart, Kimberly',
  );
  $handler->display->display_options['filters']['field_last_name_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['operator_id'] = 'field_last_name_first_name_value_op';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['label'] = 'Our Specialists';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['operator'] = 'field_last_name_first_name_value_op';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['identifier'] = 'field_last_name_first_name_value';
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    11 => 0,
    16 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_subject_area_value']['id'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['table'] = 'field_data_field_subject_area';
  $handler->display->display_options['filters']['field_subject_area_value']['field'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['value'] = array(
    'all' => 'all',
    'Area Studies' => 'Area Studies',
    'Arts' => 'Arts',
    'Engineering' => 'Engineering',
    'General' => 'General',
    'Humanities and Social Sciences' => 'Humanities and Social Sciences',
    'Rare Books and Special Collections' => 'Rare Books and Special Collections',
    'Sciences' => 'Sciences',
  );
  $handler->display->display_options['filters']['field_subject_area_value']['group'] = 1;
  $handler->display->display_options['filters']['field_subject_area_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator_id'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['label'] = 'General Area';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['operator'] = 'field_subject_area_value_op';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['identifier'] = 'field_subject_area_value';
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_area_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    11 => 0,
    16 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_subject_specialities_value']['id'] = 'field_subject_specialities_value';
  $handler->display->display_options['filters']['field_subject_specialities_value']['table'] = 'field_data_field_subject_specialities';
  $handler->display->display_options['filters']['field_subject_specialities_value']['field'] = 'field_subject_specialities_value';
  $handler->display->display_options['filters']['field_subject_specialities_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_subject_specialities_value']['group'] = 1;
  $handler->display->display_options['filters']['field_subject_specialities_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_specialities_value']['expose']['operator_id'] = 'field_subject_specialities_value_op';
  $handler->display->display_options['filters']['field_subject_specialities_value']['expose']['label'] = 'What subject are you researching?';
  $handler->display->display_options['filters']['field_subject_specialities_value']['expose']['operator'] = 'field_subject_specialities_value_op';
  $handler->display->display_options['filters']['field_subject_specialities_value']['expose']['identifier'] = 'field_subject_specialities_value';
  $handler->display->display_options['filters']['field_subject_specialities_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    11 => 0,
    16 => 0,
  );
  $handler->display->display_options['path'] = 'subject-specialists';

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
  $export['subject_specialists'] = $view;

  return $export;
}
