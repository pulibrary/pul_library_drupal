<?php

/**
 * @file
 * libcal_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function libcal_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__exhibitions-index-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 46;
  $handler->conf = array(
    'title' => 'Exhibitions Index Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second exhibitions-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library Contact',
        'keyword' => 'contact',
        'name' => 'entity_from_field:field_news_library_contact-node-user',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'exhibitions',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News and Events',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
    'name' => 'exhibitions-index-page',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8efd1ad5-0783-4733-afef-d389f9ea6b6c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__exhibitions-index-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d773cdfd-2fe3-440d-ae2c-8f04bd85173b';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libcal_events-panel_pane_3';
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
  $pane->uuid = 'd773cdfd-2fe3-440d-ae2c-8f04bd85173b';
  $display->content['new-d773cdfd-2fe3-440d-ae2c-8f04bd85173b'] = $pane;
  $display->panels['first'][0] = 'new-d773cdfd-2fe3-440d-ae2c-8f04bd85173b';
  $pane = new stdClass();
  $pane->pid = 'new-1b9ba5ff-ddd6-40d0-becb-bc2619c93b4f';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'pul_editor_html',
    'substitute' => TRUE,
    'name' => 'exhibitions_footer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1b9ba5ff-ddd6-40d0-becb-bc2619c93b4f';
  $display->content['new-1b9ba5ff-ddd6-40d0-becb-bc2619c93b4f'] = $pane;
  $display->panels['first'][1] = 'new-1b9ba5ff-ddd6-40d0-becb-bc2619c93b4f';
  $pane = new stdClass();
  $pane->pid = 'new-89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events_categories-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $display->content['new-89c01358-3e86-43ae-a5a6-18505f1df2c4'] = $pane;
  $display->panels['second'][0] = 'new-89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $pane = new stdClass();
  $pane->pid = 'new-64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-news-and-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Library Blogs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $display->content['new-64315e76-50e8-4a40-8a35-4ea05fd43d6d'] = $pane;
  $display->panels['second'][1] = 'new-64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__exhibitions-index-page'] = $handler;

  return $export;
}
