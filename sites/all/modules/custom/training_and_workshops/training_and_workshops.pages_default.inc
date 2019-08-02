<?php

/**
 * @file
 * training_and_workshops.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function training_and_workshops_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'zotero_workshops';
  $page->task = 'page';
  $page->admin_title = 'Zotero Workshops';
  $page->admin_description = '';
  $page->path = 'training/zotero';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_zotero_workshops_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'zotero_workshops';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Registration form',
        'keyword' => 'registerform',
        'name' => 'entity:entityform_type',
        'entity_id' => '5',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Series',
        'keyword' => 'series',
        'name' => 'entity:node',
        'entity_id' => '11867',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'eb8993db-7302-40e2-90da-618d2e103552';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_zotero_workshops_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-10ac2c96-47d4-45db-bfe1-3418482073c4';
  $pane->panel = 'middle';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'context_entity:node_1',
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
  $pane->uuid = '10ac2c96-47d4-45db-bfe1-3418482073c4';
  $display->content['new-10ac2c96-47d4-45db-bfe1-3418482073c4'] = $pane;
  $display->panels['middle'][0] = 'new-10ac2c96-47d4-45db-bfe1-3418482073c4';
  $pane = new stdClass();
  $pane->pid = 'new-a78ee89c-5ac3-4c22-a81c-03d57061a2ee';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Registration Required Message',
    'title' => 'Registration Required',
    'body' => '<p>The workshops require registration. &nbsp;Please login below.</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'name' => 'pul_login_block',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a78ee89c-5ac3-4c22-a81c-03d57061a2ee';
  $display->content['new-a78ee89c-5ac3-4c22-a81c-03d57061a2ee'] = $pane;
  $display->panels['middle'][1] = 'new-a78ee89c-5ac3-4c22-a81c-03d57061a2ee';
  $pane = new stdClass();
  $pane->pid = 'new-885ea18b-6f14-465f-8b9c-d7f0d42f9e5b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '885ea18b-6f14-465f-8b9c-d7f0d42f9e5b';
  $display->content['new-885ea18b-6f14-465f-8b9c-d7f0d42f9e5b'] = $pane;
  $display->panels['middle'][2] = 'new-885ea18b-6f14-465f-8b9c-d7f0d42f9e5b';
  $pane = new stdClass();
  $pane->pid = 'new-b3be3c01-1f68-4694-9f48-48d64059ecc2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'training_sessions-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '11867',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b3be3c01-1f68-4694-9f48-48d64059ecc2';
  $display->content['new-b3be3c01-1f68-4694-9f48-48d64059ecc2'] = $pane;
  $display->panels['middle'][3] = 'new-b3be3c01-1f68-4694-9f48-48d64059ecc2';
  $pane = new stdClass();
  $pane->pid = 'new-3bfc171b-e6e2-434b-8890-dda941a2a0f1';
  $pane->panel = 'middle';
  $pane->type = 'entity_view';
  $pane->subtype = 'entityform_type';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'context_entity:entityform_type_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3bfc171b-e6e2-434b-8890-dda941a2a0f1';
  $display->content['new-3bfc171b-e6e2-434b-8890-dda941a2a0f1'] = $pane;
  $display->panels['middle'][4] = 'new-3bfc171b-e6e2-434b-8890-dda941a2a0f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['zotero_workshops'] = $page;

  return $pages;

}
