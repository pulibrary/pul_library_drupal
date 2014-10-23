<?php
/**
 * @file
 * pul_scholarly_communications.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_scholarly_communications_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_47';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 16;
  $handler->conf = array(
    'title' => 'Scholarly Communications Office',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'services/scholarly-communications
services/scholarly-communications/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3446f24-62be-40d8-8f48-33f409a2ddec';
    $pane->panel = 'first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img src="/sites/default/files/sco-logo.png" alt="Scholarly Communications Office" /></p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3446f24-62be-40d8-8f48-33f409a2ddec';
    $display->content['new-a3446f24-62be-40d8-8f48-33f409a2ddec'] = $pane;
    $display->panels['first'][0] = 'new-a3446f24-62be-40d8-8f48-33f409a2ddec';
    $pane = new stdClass();
    $pane->pid = 'new-f2731302-1f20-4fdb-8383-6badbe971aec';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-scholarly-communications-of';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'f2731302-1f20-4fdb-8383-6badbe971aec';
    $display->content['new-f2731302-1f20-4fdb-8383-6badbe971aec'] = $pane;
    $display->panels['first'][1] = 'new-f2731302-1f20-4fdb-8383-6badbe971aec';
    $pane = new stdClass();
    $pane->pid = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane->panel = 'second';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $display->content['new-2c452d45-9133-4ec3-b65a-b66d29369ebb'] = $pane;
    $display->panels['second'][0] = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_47'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_48';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 17;
  $handler->conf = array(
    'title' => 'Scholarly Communications Office Staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'services/scholarly-communications/about-us',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f2731302-1f20-4fdb-8383-6badbe971aec';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-scholarly-communications-of';
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
    $pane->uuid = 'f2731302-1f20-4fdb-8383-6badbe971aec';
    $display->content['new-f2731302-1f20-4fdb-8383-6badbe971aec'] = $pane;
    $display->panels['first'][0] = 'new-f2731302-1f20-4fdb-8383-6badbe971aec';
    $pane = new stdClass();
    $pane->pid = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane->panel = 'second';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $display->content['new-2c452d45-9133-4ec3-b65a-b66d29369ebb'] = $pane;
    $display->panels['second'][0] = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane = new stdClass();
    $pane->pid = 'new-d4536865-f110-497e-8de3-05f073fddc5b';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '13200',
      ),
      'override_title' => 1,
      'override_title_text' => 'Scholarly Communications Office Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4536865-f110-497e-8de3-05f073fddc5b';
    $display->content['new-d4536865-f110-497e-8de3-05f073fddc5b'] = $pane;
    $display->panels['second'][1] = 'new-d4536865-f110-497e-8de3-05f073fddc5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_48'] = $handler;

  return $export;
}
