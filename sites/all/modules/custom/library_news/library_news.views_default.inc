<?php
/**
 * @file
 * library_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'active_news_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Active News items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Active News items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['exposed'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted to front page';
  $handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
  $handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
  $handler->display->display_options['filters']['promote']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['remember_roles'] = array(
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
  );

  /* Display: Active News Items */
  $handler = $view->new_display('page', 'Active News Items', 'page');
  $handler->display->display_options['path'] = 'active-news-items';
  $export['active_news_items'] = $view;

  $view = new view();
  $view->name = 'library_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Library News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News for %1';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: News Index Page */
  $handler = $view->new_display('page', 'News Index Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library News and Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title clear-fix';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Event Dates */
  $handler->display->display_options['fields']['field_pul_event_date']['id'] = 'field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['table'] = 'field_data_field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['field'] = 'field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pul_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pul_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_pul_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['field_api_classes'] = TRUE;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_news_event_location']['id'] = 'field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['table'] = 'field_data_field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['field'] = 'field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_event_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_news_event_location']['field_api_classes'] = TRUE;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Display on News Page (field_display_on_news_page) */
  $handler->display->display_options['filters']['field_display_on_news_page_value']['id'] = 'field_display_on_news_page_value';
  $handler->display->display_options['filters']['field_display_on_news_page_value']['table'] = 'field_data_field_display_on_news_page';
  $handler->display->display_options['filters']['field_display_on_news_page_value']['field'] = 'field_display_on_news_page_value';
  $handler->display->display_options['filters']['field_display_on_news_page_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_display_on_news_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'news-index';

  /* Display: Library Featured News Block */
  $handler = $view->new_display('block', 'Library Featured News Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library News and Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_news_featured_graphic' => 0,
    'title' => 0,
    'field_news_article_snippet' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_news_featured_graphic' => 0,
    'title' => 0,
    'field_news_article_snippet' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div><a class="views-more-link" href="/news">More News</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'library-news',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'library-news-homepage';
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_text'] = 'More News';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_path'] = '/news';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Library Feature News Slideshow';

  /* Display: Library News Per Audience */
  $handler = $view->new_display('page', 'Library News Per Audience', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['path'] = 'news/%';

  /* Display: Single News Item Content Pane */
  $handler = $view->new_display('panel_pane', 'Single News Item Content Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'View used in full page view of a news item.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['id'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['table'] = 'field_data_field_news_library_contact';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['field'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['label'] = 'Contact';
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/New_York';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Link to More Information */
  $handler->display->display_options['fields']['field_news_more_information']['id'] = 'field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['table'] = 'field_data_field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['field'] = 'field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['label'] = '';
  $handler->display->display_options['fields']['field_news_more_information']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_more_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_more_information']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_more_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_more_information']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_more_information']['field_api_classes'] = TRUE;
  /* Field: Content: Event Dates */
  $handler->display->display_options['fields']['field_pul_event_date']['id'] = 'field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['table'] = 'field_data_field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['field'] = 'field_pul_event_date';
  $handler->display->display_options['fields']['field_pul_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_pul_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pul_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pul_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pul_event_date']['field_api_classes'] = TRUE;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_news_event_location']['id'] = 'field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['table'] = 'field_data_field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['field'] = 'field_news_event_location';
  $handler->display->display_options['fields']['field_news_event_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_news_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_event_location']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_news_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_event_location']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_event_location']['field_api_classes'] = TRUE;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Audience - News Pane  */
  $handler = $view->new_display('panel_pane', 'Audience - News Pane ', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News and Events for %1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Library News and Events per Audience ';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'library-news',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['field_api_classes'] = TRUE;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Active Homepage Stories */
  $handler = $view->new_display('page', 'Active Homepage Stories', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Homepage News Items';
  $handler->display->display_options['display_description'] = 'Back Office Item to see Active Stories';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'library-news',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Published';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['path'] = 'active-news';

  /* Display: News by Category */
  $handler = $view->new_display('panel_pane', 'News by Category', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'News Feed By Category';
  $handler->display->display_options['footer']['area']['content'] = '<div class="feed-link-view-footer">
<a href="/news/feed/!1">RSS for %1</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Acquistion Highlights List */
  $handler = $view->new_display('panel_pane', 'Acquistion Highlights List', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Acquistion Highlights';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
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
    'field_news_featured_graphic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['id'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['table'] = 'field_data_field_news_library_contact';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['field'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['label'] = 'Contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Link to More Information */
  $handler->display->display_options['fields']['field_news_more_information']['id'] = 'field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['table'] = 'field_data_field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['field'] = 'field_news_more_information';
  $handler->display->display_options['fields']['field_news_more_information']['label'] = '';
  $handler->display->display_options['fields']['field_news_more_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_more_information']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_news_more_information']['alter']['path'] = '[field_news_more_information-url]';
  $handler->display->display_options['fields']['field_news_more_information']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_more_information']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_news_more_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_more_information']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_more_information']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_more_information']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_more_information']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_news_more_information]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = 'Description';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['field_api_classes'] = TRUE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_puluser_fname']['id'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['table'] = 'field_data_field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['field'] = 'field_puluser_fname';
  $handler->display->display_options['fields']['field_puluser_fname']['relationship'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_fname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_fname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_puluser_lname']['id'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['table'] = 'field_data_field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['field'] = 'field_puluser_lname';
  $handler->display->display_options['fields']['field_puluser_lname']['relationship'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['fields']['field_puluser_lname']['label'] = '';
  $handler->display->display_options['fields']['field_puluser_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puluser_lname']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_puluser_lname']['element_default_classes'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = 'Specialist';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_puluser_fname] [field_puluser_lname]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  /* Filter criterion: Content: Material Access (field_material_access) */
  $handler->display->display_options['filters']['field_material_access_value']['id'] = 'field_material_access_value';
  $handler->display->display_options['filters']['field_material_access_value']['table'] = 'field_data_field_material_access';
  $handler->display->display_options['filters']['field_material_access_value']['field'] = 'field_material_access_value';
  $handler->display->display_options['filters']['field_material_access_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material_access_value']['expose']['operator_id'] = 'field_material_access_value_op';
  $handler->display->display_options['filters']['field_material_access_value']['expose']['label'] = 'Access';
  $handler->display->display_options['filters']['field_material_access_value']['expose']['operator'] = 'field_material_access_value_op';
  $handler->display->display_options['filters']['field_material_access_value']['expose']['identifier'] = 'field_material_access_value';
  $handler->display->display_options['filters']['field_material_access_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Featured Collection */
  $handler = $view->new_display('panel_pane', 'Featured Collection', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_libraries']['id'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['table'] = 'field_data_field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['field'] = 'field_news_libraries';
  $handler->display->display_options['fields']['field_news_libraries']['label'] = 'Related to';
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Featured Collection (field_feat_collection) */
  $handler->display->display_options['filters']['field_feat_collection_value']['id'] = 'field_feat_collection_value';
  $handler->display->display_options['filters']['field_feat_collection_value']['table'] = 'field_data_field_feat_collection';
  $handler->display->display_options['filters']['field_feat_collection_value']['field'] = 'field_feat_collection_value';
  $handler->display->display_options['filters']['field_feat_collection_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: News Feed by Category */
  $handler = $view->new_display('feed', 'News Feed by Category', 'feed_1');
  $handler->display->display_options['display_description'] = 'Displays and RSS feed for a specific News Category';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'full';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'summary';
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
    'library_news_item' => 'library_news_item',
  );
  $handler->display->display_options['path'] = 'news/feed/%';

  /* Display: Library Featured News List */
  $handler = $view->new_display('block', 'Library Featured News List', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library News and Events';
  $handler->display->display_options['display_description'] = 'For Homepage';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div><a class="views-more-link" href="/news">More News</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'library-news-homepage';
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_text'] = 'More News';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link_path'] = '/news';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
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
    'library_news_item' => 'library_news_item',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Library Feature News Listings';
  $export['library_news'] = $view;

  $view = new view();
  $view->name = 'news_and_events_categories';
  $view->description = 'Create panes of content for news and event items. ';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'News and Events Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News and Events Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Category */
  $handler->display->display_options['relationships']['reverse_field_news_category_node']['id'] = 'reverse_field_news_category_node';
  $handler->display->display_options['relationships']['reverse_field_news_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_news_category_node']['field'] = 'reverse_field_news_category_node';
  $handler->display->display_options['relationships']['reverse_field_news_category_node']['required'] = TRUE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: COUNT(DISTINCT Taxonomy term: Name) */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['group_type'] = 'count_distinct';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'news_events_categories' => 'news_events_categories',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-and-events-categories';

  /* Display: News Categories */
  $handler = $view->new_display('panel_pane', 'News Categories', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News Categories';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['news_and_events_categories'] = $view;

  return $export;
}
