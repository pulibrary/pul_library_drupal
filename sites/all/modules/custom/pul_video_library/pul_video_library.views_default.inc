<?php
/**
 * @file
 * pul_video_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pul_video_library_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraphs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Paragraphs';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Section (field_section) */
  $handler->display->display_options['relationships']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['relationships']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['relationships']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['relationships']['field_section_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_section_value']['delta'] = '-1';
  /* Field: Paragraphs item: Rendered Paragraphs item */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_paragraphs_item';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_section_value';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Paragraphs item: Image */
  $handler->display->display_options['fields']['field_image_media']['id'] = 'field_image_media';
  $handler->display->display_options['fields']['field_image_media']['table'] = 'field_data_field_image_media';
  $handler->display->display_options['fields']['field_image_media']['field'] = 'field_image_media';
  $handler->display->display_options['fields']['field_image_media']['relationship'] = 'field_section_value';
  $handler->display->display_options['fields']['field_image_media']['label'] = '';
  $handler->display->display_options['fields']['field_image_media']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image_media']['element_class'] = 'media--figure';
  $handler->display->display_options['fields']['field_image_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_media']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_media']['settings'] = array(
    'image_style' => 'story_-_small',
    'image_link' => '',
  );
  /* Field: Paragraphs item: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['relationship'] = 'field_section_value';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_title']['element_class'] = 'media--title';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title']['click_sort_column'] = 'url';
  /* Field: Paragraphs item: Paragraph */
  $handler->display->display_options['fields']['field_paragraph']['id'] = 'field_paragraph';
  $handler->display->display_options['fields']['field_paragraph']['table'] = 'field_data_field_paragraph';
  $handler->display->display_options['fields']['field_paragraph']['field'] = 'field_paragraph';
  $handler->display->display_options['fields']['field_paragraph']['relationship'] = 'field_section_value';
  $handler->display->display_options['fields']['field_paragraph']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph']['alter']['text'] = '<span class="media--title">[field_title]</span>
[field_paragraph]';
  $handler->display->display_options['fields']['field_paragraph']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_paragraph']['element_class'] = 'media--body';
  $handler->display->display_options['fields']['field_paragraph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paragraph']['element_default_classes'] = FALSE;
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

  /* Display: Media Object Pane */
  $handler = $view->new_display('panel_pane', 'Media Object Pane', 'panel_pane_1');
  $export['paragraphs'] = $view;

  return $export;
}
