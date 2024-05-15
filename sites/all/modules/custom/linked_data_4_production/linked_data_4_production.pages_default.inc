<?php

/**
 * @file
 * linked_data_4_production.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function linked_data_4_production_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__linked-data-news-index';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 23;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'cams/ld4p/news',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '27317',
        'id' => 1,
        'identifier' => 'Content',
        'keyword' => 'node_2',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'name' => 'linked-data-news-index',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(
      0 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'File from Content (on Content: Logo Graphic [field_pul_landing_logo])',
        'keyword' => 'file',
        'name' => 'entity_from_field:field_pul_landing_logo-node-file',
      ),
    ),
    'title' => 'Linked Data News Index',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'naked',
    'style_settings' => array(
      'bottom' => NULL,
      'branding' => NULL,
      'content' => NULL,
      'default' => NULL,
      'first' => NULL,
      'footer' => NULL,
      'header' => NULL,
      'help' => NULL,
      'highlighted' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'navigation' => NULL,
      'right' => NULL,
      'second' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__linked-data-news-index';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-491332a8-5279-4562-b7ec-4d8e2280deac';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_20';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '491332a8-5279-4562-b7ec-4d8e2280deac';
  $display->content['new-491332a8-5279-4562-b7ec-4d8e2280deac'] = $pane;
  $display->panels['middle'][0] = 'new-491332a8-5279-4562-b7ec-4d8e2280deac';
  $pane = new stdClass();
  $pane->pid = 'new-529ab1c7-8c4c-4d15-bcdb-00cdeaf2ede1';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'file_view_mode' => 'default',
      'image_link' => '',
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'LD4P at Princeton',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '529ab1c7-8c4c-4d15-bcdb-00cdeaf2ede1';
  $display->content['new-529ab1c7-8c4c-4d15-bcdb-00cdeaf2ede1'] = $pane;
  $display->panels['top'][0] = 'new-529ab1c7-8c4c-4d15-bcdb-00cdeaf2ede1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__linked-data-news-index'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__linked-data-project';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 22;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'cams/ld4p',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'linked-data-project',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Linked Data Project',
  );
  $display = new panels_display();
  $display->layout = 'nine-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'naked',
    'style_settings' => array(
      'bottom' => NULL,
      'branding' => NULL,
      'content' => NULL,
      'default' => NULL,
      'first' => NULL,
      'footer' => NULL,
      'header' => NULL,
      'help' => NULL,
      'highlighted' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'navigation' => NULL,
      'right' => NULL,
      'second' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__linked-data-project';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_default',
    'formatter_settings' => array(),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'About the Project',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $display->content['new-c076ecca-83b9-4466-9ee3-5da77b8e934f'] = $pane;
  $display->panels['first'][0] = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $pane = new stdClass();
  $pane->pid = 'new-c068bce0-9bff-425c-be37-ae30cbed154b';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c068bce0-9bff-425c-be37-ae30cbed154b';
  $display->content['new-c068bce0-9bff-425c-be37-ae30cbed154b'] = $pane;
  $display->panels['second'][0] = 'new-c068bce0-9bff-425c-be37-ae30cbed154b';
  $pane = new stdClass();
  $pane->pid = 'new-55fecbc9-268b-48c6-a084-4361f53c3c61';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '27317',
    ),
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '55fecbc9-268b-48c6-a084-4361f53c3c61';
  $display->content['new-55fecbc9-268b-48c6-a084-4361f53c3c61'] = $pane;
  $display->panels['second'][1] = 'new-55fecbc9-268b-48c6-a084-4361f53c3c61';
  $pane = new stdClass();
  $pane->pid = 'new-5d223fff-4316-4331-8440-b15d74d84da4';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_image_style' => '',
      'colorbox_node_style' => '',
      'image_link' => '',
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'LD4P at Princeton',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5d223fff-4316-4331-8440-b15d74d84da4';
  $display->content['new-5d223fff-4316-4331-8440-b15d74d84da4'] = $pane;
  $display->panels['top'][0] = 'new-5d223fff-4316-4331-8440-b15d74d84da4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__linked-data-project'] = $handler;

  return $export;
}
