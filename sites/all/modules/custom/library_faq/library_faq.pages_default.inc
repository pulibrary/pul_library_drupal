<?php

/**
 * @file
 * library_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_faq_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_15';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'argument_term_1',
          'name' => 'term_vocabulary',
          'not' => FALSE,
          'settings' => array(
            'vids' => array(
              20 => '20',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second faq',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'help',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Help',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'FAQ Page',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Frequently asked Questions: %term:name';
  $display->uuid = '179e8013-4c52-47ad-81aa-ccdc3b2e0d48';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_15';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-42cc94eb-a648-4c92-8bcc-d5f516a6e4bc';
  $pane->panel = 'first';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
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
  $pane->uuid = '42cc94eb-a648-4c92-8bcc-d5f516a6e4bc';
  $display->content['new-42cc94eb-a648-4c92-8bcc-d5f516a6e4bc'] = $pane;
  $display->panels['first'][0] = 'new-42cc94eb-a648-4c92-8bcc-d5f516a6e4bc';
  $pane = new stdClass();
  $pane->pid = 'new-f3fc1bf9-e9a9-49df-8482-a22f78b2e2fd';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'faq_nodes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'context' => array(
      0 => 'argument_term_1.tid',
    ),
    'display' => 'default',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3fc1bf9-e9a9-49df-8482-a22f78b2e2fd';
  $display->content['new-f3fc1bf9-e9a9-49df-8482-a22f78b2e2fd'] = $pane;
  $display->panels['first'][1] = 'new-f3fc1bf9-e9a9-49df-8482-a22f78b2e2fd';
  $pane = new stdClass();
  $pane->pid = 'new-5cbcd7ef-e789-4ed5-ad1a-97c80078c6d6';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-microforms';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'faq/microforms-service',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
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
  $pane->uuid = '5cbcd7ef-e789-4ed5-ad1a-97c80078c6d6';
  $display->content['new-5cbcd7ef-e789-4ed5-ad1a-97c80078c6d6'] = $pane;
  $display->panels['second'][0] = 'new-5cbcd7ef-e789-4ed5-ad1a-97c80078c6d6';
  $pane = new stdClass();
  $pane->pid = 'new-4638a64d-e4de-49f2-bebb-49bf3add1b74';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'faq/microforms-service',
          'visibility_setting' => '0',
        ),
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4638a64d-e4de-49f2-bebb-49bf3add1b74';
  $display->content['new-4638a64d-e4de-49f2-bebb-49bf3add1b74'] = $pane;
  $display->panels['second'][1] = 'new-4638a64d-e4de-49f2-bebb-49bf3add1b74';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_15'] = $handler;

  return $export;
}
