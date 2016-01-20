<?php
/**
 * @file
 * library_newsletters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_newsletters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'library_newsletter_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library Newsletter Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Staff Newsletters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_news_letter_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_news_letter_year' => 'field_news_letter_year',
    'field_news_letter_date' => 'field_news_letter_date',
    'title' => 'title',
    'field_news_letter_issue' => 'field_news_letter_issue',
    'field_news_letter_volume' => 'field_news_letter_volume',
    'field_news_letter_pdf' => 'field_news_letter_pdf',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_news_letter_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_letter_date' => array(
      'sortable' => 1,
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
    'field_news_letter_issue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_letter_volume' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_letter_pdf' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_news_letter_year']['id'] = 'field_news_letter_year';
  $handler->display->display_options['fields']['field_news_letter_year']['table'] = 'field_data_field_news_letter_year';
  $handler->display->display_options['fields']['field_news_letter_year']['field'] = 'field_news_letter_year';
  $handler->display->display_options['fields']['field_news_letter_year']['label'] = '';
  $handler->display->display_options['fields']['field_news_letter_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_letter_year']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_news_letter_year']['field_api_classes'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_letter_date']['id'] = 'field_news_letter_date';
  $handler->display->display_options['fields']['field_news_letter_date']['table'] = 'field_data_field_news_letter_date';
  $handler->display->display_options['fields']['field_news_letter_date']['field'] = 'field_news_letter_date';
  $handler->display->display_options['fields']['field_news_letter_date']['label'] = 'Newsletter Date';
  $handler->display->display_options['fields']['field_news_letter_date']['alter']['text'] = '<a href=\'[field_news_letter_pdf]\' title=\'View the [field_news_letter_date] newsletter\'>[field_news_letter_date]</a>';
  $handler->display->display_options['fields']['field_news_letter_date']['alter']['path'] = '[field_news_letter_pdf]';
  $handler->display->display_options['fields']['field_news_letter_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_news_letter_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Issue */
  $handler->display->display_options['fields']['field_news_letter_issue']['id'] = 'field_news_letter_issue';
  $handler->display->display_options['fields']['field_news_letter_issue']['table'] = 'field_data_field_news_letter_issue';
  $handler->display->display_options['fields']['field_news_letter_issue']['field'] = 'field_news_letter_issue';
  $handler->display->display_options['fields']['field_news_letter_issue']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_issue']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_issue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_issue']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_news_letter_issue']['field_api_classes'] = TRUE;
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_news_letter_volume']['id'] = 'field_news_letter_volume';
  $handler->display->display_options['fields']['field_news_letter_volume']['table'] = 'field_data_field_news_letter_volume';
  $handler->display->display_options['fields']['field_news_letter_volume']['field'] = 'field_news_letter_volume';
  $handler->display->display_options['fields']['field_news_letter_volume']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_volume']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_volume']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_volume']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_news_letter_volume']['field_api_classes'] = TRUE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_news_letter_pdf']['id'] = 'field_news_letter_pdf';
  $handler->display->display_options['fields']['field_news_letter_pdf']['table'] = 'field_data_field_news_letter_pdf';
  $handler->display->display_options['fields']['field_news_letter_pdf']['field'] = 'field_news_letter_pdf';
  $handler->display->display_options['fields']['field_news_letter_pdf']['label'] = 'PDF File';
  $handler->display->display_options['fields']['field_news_letter_pdf']['alter']['text'] = '[field_news_letter_date]';
  $handler->display->display_options['fields']['field_news_letter_pdf']['alter']['path'] = '[field_news_letter_pdf]';
  $handler->display->display_options['fields']['field_news_letter_pdf']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_news_letter_pdf']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_pdf']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_letter_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_letter_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_letter_pdf']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update';
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Date (field_news_letter_date) */
  $handler->display->display_options['sorts']['field_news_letter_date_value']['id'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['table'] = 'field_data_field_news_letter_date';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['field'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'library_newsletter' => 'library_newsletter',
  );

  /* Display: Newsletter Archive */
  $handler = $view->new_display('page', 'Newsletter Archive', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_news_letter_year) */
  $handler->display->display_options['sorts']['field_news_letter_year_value']['id'] = 'field_news_letter_year_value';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['table'] = 'field_data_field_news_letter_year';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['field'] = 'field_news_letter_year_value';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_news_letter_date) */
  $handler->display->display_options['sorts']['field_news_letter_date_value']['id'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['table'] = 'field_data_field_news_letter_date';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['field'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'staff/hr/newsletters';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Current Newsletter */
  $handler = $view->new_display('page', 'Current Newsletter', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Recent Library Staff Newsletter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Newsletter Archive';
  $handler->display->display_options['footer']['area']['content'] = '<div id="full-news-archive"><a href="/staff/hr/newsletters" title="Go to the Newsletter Archive">Newsletter Archive</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_news_letter_year) */
  $handler->display->display_options['sorts']['field_news_letter_year_value']['id'] = 'field_news_letter_year_value';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['table'] = 'field_data_field_news_letter_year';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['field'] = 'field_news_letter_year_value';
  $handler->display->display_options['sorts']['field_news_letter_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_news_letter_date) */
  $handler->display->display_options['sorts']['field_news_letter_date_value']['id'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['table'] = 'field_data_field_news_letter_date';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['field'] = 'field_news_letter_date_value';
  $handler->display->display_options['sorts']['field_news_letter_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'staff/hr/newsletter/current';
  $export['library_newsletter_listings'] = $view;

  return $export;
}
