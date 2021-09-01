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
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Promoted to front page status */
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
  /* Filter criterion: Content: Published status */
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-items';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_class'] = 'news-item-graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['field_news_article_snippet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_news_libraries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_category']['id'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['fields']['field_news_category']['field'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_category']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="news-item-text"><h2>[title]</h2><p>[field_news_article_snippet]</p><span class="news-item-date">Posted on [created] in [field_news_category]</span></div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l, F j, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Promoted to front page status */
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
  /* Filter criterion: Content: Published status */
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
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['id'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['table'] = 'field_data_field_news_library_contact';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['field'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['label'] = 'Contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['created']['label'] = 'Published on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day_of_week_and_date';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/New_York';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'library_news';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_13';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
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
  $handler->display->display_options['fields']['field_news_libraries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_news_libraries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['field_api_classes'] = TRUE;
  /* Field: Content: Library Contact */
  $handler->display->display_options['fields']['field_news_library_contact']['id'] = 'field_news_library_contact';
  $handler->display->display_options['fields']['field_news_library_contact']['table'] = 'field_data_field_news_library_contact';
  $handler->display->display_options['fields']['field_news_library_contact']['field'] = 'field_news_library_contact';
  $handler->display->display_options['fields']['field_news_library_contact']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_library_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_library_contact']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_library_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_library_contact']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_news_library_contact']['settings'] = array(
    'view_mode' => 'staff_brief_listing',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_news_library_contact']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_library_contact']['field_api_classes'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Video Embed URL */
  $handler->display->display_options['fields']['field_video_embed_url']['id'] = 'field_video_embed_url';
  $handler->display->display_options['fields']['field_video_embed_url']['table'] = 'field_data_field_video_embed_url';
  $handler->display->display_options['fields']['field_video_embed_url']['field'] = 'field_video_embed_url';
  $handler->display->display_options['fields']['field_video_embed_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed_url']['alter']['text'] = '<iframe src="[field_video_embed_url-value]" frameborder="0" width="450" height="450"></iframe>';
  $handler->display->display_options['fields']['field_video_embed_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_video_embed_url']['element_class'] = 'video-wrapper';
  $handler->display->display_options['fields']['field_video_embed_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed_url']['type'] = 'text_plain';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_news_article_snippet']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_news_libraries']['exclude'] = TRUE;
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
  /* Filter criterion: Content: Published status */
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
  /* Field: Content: Link to edit content */
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
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_class'] = 'news-item-graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title clear-fix';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_category']['id'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['fields']['field_news_category']['field'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_category']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="news-item-text"><h2>[title]</h2><p>[field_news_article_snippet]</p><span class="news-item-date">Posted on [created] in [field_news_category]</span></div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
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
  $handler->display->display_options['fields']['field_news_libraries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_libraries']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_libraries']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_libraries']['settings'] = array(
    'bypass_access' => 0,
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
  /* Filter criterion: Content: Published status */
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
  /* Field: User: Link to user */
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
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published status */
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news--item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news__featured';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div><a class="views-more-link" href="/news">More News</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Homepage Spotlight */
  $handler->display->display_options['fields']['field_homepage_spotlight']['id'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['field'] = 'field_homepage_spotlight';
  $handler->display->display_options['fields']['field_homepage_spotlight']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_spotlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['alter']['text'] = '<div class="library-spotlight">Library<br>Spotlight</div>';
  $handler->display->display_options['fields']['field_homepage_spotlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_spotlight']['hide_empty'] = TRUE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_homepage_spotlight]<div class="featured-new-item-image">[field_news_featured_graphic]</div><div class="featured-news-item-body"><h3>[title]</h3><span class="read-more">Read more</span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Homepage Spotlight (field_homepage_spotlight) */
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['id'] = 'field_homepage_spotlight_value';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['table'] = 'field_data_field_homepage_spotlight';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['field'] = 'field_homepage_spotlight_value';
  $handler->display->display_options['sorts']['field_homepage_spotlight_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Library Feature News Listings';

  /* Display: Marquand Rare Books Highlight */
  $handler = $view->new_display('panel_pane', 'Marquand Rare Books Highlight', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rare Book Highlights';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'More Rare Books';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/marquand/rare-book-highlights';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'More Rare Books';
  $handler->display->display_options['fields']['nothing']['alter']['rel'] = 'More Rare Books';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'heading--centered';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '

[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['text'] = '<div class="library-news-link">[field_news_featured_graphic]</div>';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_class'] = 'library-news-link';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authors']['delta_offset'] = '0';
  /* Field: Content: Full Title */
  $handler->display->display_options['fields']['field_full_title']['id'] = 'field_full_title';
  $handler->display->display_options['fields']['field_full_title']['table'] = 'field_data_field_full_title';
  $handler->display->display_options['fields']['field_full_title']['field'] = 'field_full_title';
  $handler->display->display_options['fields']['field_full_title']['label'] = '';
  $handler->display->display_options['fields']['field_full_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_title']['element_label_colon'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  /* Field: Content: Physical Description */
  $handler->display->display_options['fields']['field_physical_description']['id'] = 'field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['table'] = 'field_data_field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['field'] = 'field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['label'] = '';
  $handler->display->display_options['fields']['field_physical_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_physical_description']['element_label_colon'] = FALSE;
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_call_number']['id'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['table'] = 'field_data_field_call_number';
  $handler->display->display_options['fields']['field_call_number']['field'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['label'] = '';
  $handler->display->display_options['fields']['field_call_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['element_label_colon'] = FALSE;
  /* Field: Content: Link to Catalog */
  $handler->display->display_options['fields']['field_catalog_url']['id'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['table'] = 'field_data_field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['field'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_url']['alter']['text'] = '<div class="media--stacked"><div class="library-news-link">[field_news_featured_graphic]</a>
<div class="copy"><p>[field_authors]<br><em>[field_full_title]</em><br>[field_publisher]<br>[field_physical_description]<br>[field_call_number]<br>[field_catalog_url]</p></div></div>';
  $handler->display->display_options['fields']['field_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Marquand Branch News List */
  $handler = $view->new_display('panel_pane', 'Marquand Branch News List', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marquand News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/marquand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;

  /* Display: Marquand Branch News Index */
  $handler = $view->new_display('panel_pane', 'Marquand Branch News Index', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from Marquand Library';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/marquand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;

  /* Display: Marquand Branch Rare Books Highlights Index */
  $handler = $view->new_display('panel_pane', 'Marquand Branch Rare Books Highlights Index', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rare Book Highlights from Marquand Library';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/marquand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;

  /* Display: East Asian Branch News Index */
  $handler = $view->new_display('panel_pane', 'East Asian Branch News Index', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from East Asian Library';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/eastasianlib';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6285 => '6285',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: East Asian Latest News */
  $handler = $view->new_display('panel_pane', 'East Asian Latest News', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More East Asian Library News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'eastasian/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6285 => '6285',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Mendel Branch News Index */
  $handler = $view->new_display('panel_pane', 'Mendel Branch News Index', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from Mendel Music Library';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/music';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6287 => '6287',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Mendel Exhibit */
  $handler = $view->new_display('panel_pane', 'Mendel Exhibit', 'panel_pane_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '
[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['text'] = '[field_news_featured_graphic]';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6287 => '6287',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    3778 => '3778',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Mendel E-Resource Highlight */
  $handler = $view->new_display('panel_pane', 'Mendel E-Resource Highlight', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New E-Resource';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['text'] = '[field_news_featured_graphic]';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'news-image',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6287 => '6287',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4917 => '4917',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Mendel Branch News List */
  $handler = $view->new_display('panel_pane', 'Mendel Branch News List', 'panel_pane_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mendel News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/marquand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6287 => '6287',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    3778 => '3778',
    4917 => '4917',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-7 days';

  /* Display: Single News Item Bibliographic Information */
  $handler = $view->new_display('panel_pane', 'Single News Item Bibliographic Information', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'View used in full page view of a news item to display bibliographic Data';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['id'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['table'] = 'field_data_field_news_library_contact';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['field'] = 'field_news_library_contact_target_id';
  $handler->display->display_options['relationships']['field_news_library_contact_target_id']['label'] = 'Contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Full Title */
  $handler->display->display_options['fields']['field_full_title']['id'] = 'field_full_title';
  $handler->display->display_options['fields']['field_full_title']['table'] = 'field_data_field_full_title';
  $handler->display->display_options['fields']['field_full_title']['field'] = 'field_full_title';
  $handler->display->display_options['fields']['field_full_title']['label'] = '';
  $handler->display->display_options['fields']['field_full_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_title']['hide_empty'] = TRUE;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authors']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['delta_offset'] = '0';
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_call_number']['id'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['table'] = 'field_data_field_call_number';
  $handler->display->display_options['fields']['field_call_number']['field'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['label'] = '';
  $handler->display->display_options['fields']['field_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_number']['hide_empty'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = TRUE;
  /* Field: Content: Physical Description */
  $handler->display->display_options['fields']['field_physical_description']['id'] = 'field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['table'] = 'field_data_field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['field'] = 'field_physical_description';
  $handler->display->display_options['fields']['field_physical_description']['label'] = '';
  $handler->display->display_options['fields']['field_physical_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_physical_description']['hide_empty'] = TRUE;
  /* Field: Content: Link to Catalog */
  $handler->display->display_options['fields']['field_catalog_url']['id'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['table'] = 'field_data_field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['field'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_url']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Published status */
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

  /* Display: Engineering Latest News */
  $handler = $view->new_display('panel_pane', 'Engineering Latest News', 'panel_pane_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Engineering Library News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'engineering/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    5380 => '5380',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-60 day';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Engineering Branch News Index */
  $handler = $view->new_display('panel_pane', 'Engineering Branch News Index', 'panel_pane_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from Engineering Library';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/engineering';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    5380 => '5380',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: LD4P Latest News */
  $handler = $view->new_display('panel_pane', 'LD4P Latest News', 'panel_pane_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News from Linked Data 4 Production';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Linked Data 4 Production News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = '/tsd/cams/ld4p/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    25634 => '25634',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: LD4P News Index */
  $handler = $view->new_display('panel_pane', 'LD4P News Index', 'panel_pane_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News from Linked Data 4 Production';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/ld4p';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    25634 => '25634',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Digital Collections News Index */
  $handler = $view->new_display('panel_pane', 'Digital Collections News Index', 'panel_pane_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News and Reports';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/engineering';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    5386 => '5386',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Digital Collections Latest News */
  $handler = $view->new_display('panel_pane', 'Digital Collections Latest News', 'panel_pane_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News and Reports';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Digital Collections and Initiatives News and Reports';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'digital-collections/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    5386 => '5386',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Psychology and Neuroscience Latest News */
  $handler = $view->new_display('panel_pane', 'Psychology and Neuroscience Latest News', 'panel_pane_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Psychology and Neuroscience News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'lewis/psychology-neuroscience/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    30369 => '30369',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: History Latest News */
  $handler = $view->new_display('panel_pane', 'History Latest News', 'panel_pane_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More East Asian Library News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'eastasian/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    30370 => '30370',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Psychology and Neuroscience News Index */
  $handler = $view->new_display('panel_pane', 'Psychology and Neuroscience News Index', 'panel_pane_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News About Psychology and Neuroscience';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/engineering';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    30369 => '30369',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Research Data Service Latest News */
  $handler = $view->new_display('panel_pane', 'Research Data Service Latest News', 'panel_pane_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Research Data News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'research-data/news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-list';
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
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    30397 => '30397',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Research Data News Index */
  $handler = $view->new_display('panel_pane', 'Research Data News Index', 'panel_pane_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'news-list';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    30397 => '30397',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Marquand Branch Rare Books Highlights Index - Brief */
  $handler = $view->new_display('panel_pane', 'Marquand Branch Rare Books Highlights Index - Brief', 'panel_pane_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rare Book Highlights';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Marquand News';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news/marquand';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['footer']['area']['label'] = 'Rare book LInk';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/marquand/rare-book-highlights">More Highlights</a>';
  $handler->display->display_options['footer']['area']['format'] = 'pul_editor_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'views-field-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['access_id'] = array(
    6286 => '6286',
  );
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Category (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    4977 => '4977',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_events_categories';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  /* Sort criterion: COUNT(DISTINCT Taxonomy term: Name) */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['group_type'] = 'count_distinct';
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
