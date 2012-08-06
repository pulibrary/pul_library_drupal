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

  $view = new view;
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
  $handler->display->display_options['title'] = 'Library News';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_featured_graphic' => 'field_news_featured_graphic',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 1;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_categories']['id'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['field'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['label'] = 'Related to:';
  $handler->display->display_options['fields']['field_news_categories']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['field_api_classes'] = 1;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 1;
  /* Field: Content: Libraries */
  $handler->display->display_options['fields']['field_news_categories']['id'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['field'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['label'] = 'Related to:';
  $handler->display->display_options['fields']['field_news_categories']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_categories']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_categories']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_news_categories']['field_api_classes'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
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
  $handler->display->display_options['path'] = 'news';

  /* Display: Library Featured News Block */
  $handler = $view->new_display('block', 'Library Featured News Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div><a href="/news">Read More</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Graphic */
  $handler->display->display_options['fields']['field_news_featured_graphic']['id'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['table'] = 'field_data_field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['field'] = 'field_news_featured_graphic';
  $handler->display->display_options['fields']['field_news_featured_graphic']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_featured_graphic']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_featured_graphic']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_featured_graphic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_graphic']['type'] = 'flexslider';
  $handler->display->display_options['fields']['field_news_featured_graphic']['settings'] = array(
    'flexslider_optionset' => 'library_spotlight',
  );
  $handler->display->display_options['fields']['field_news_featured_graphic']['field_api_classes'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Article Snippet */
  $handler->display->display_options['fields']['field_news_article_snippet']['id'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['table'] = 'field_data_field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['field'] = 'field_news_article_snippet';
  $handler->display->display_options['fields']['field_news_article_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_snippet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_snippet']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_article_snippet']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_article_snippet']['field_api_classes'] = 0;
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
  $export['library_news'] = $view;

  return $export;
}
