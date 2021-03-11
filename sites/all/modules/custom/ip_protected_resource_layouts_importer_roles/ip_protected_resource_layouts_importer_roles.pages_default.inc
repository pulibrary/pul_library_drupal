<?php

/**
 * @file
 * ip_protected_resource_layouts_importer_roles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ip_protected_resource_layouts_importer_roles_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_34';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 16;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'ip_protected_db_resource' => 'ip_protected_db_resource',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'IP Protected Resource',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a98a76fa-fa85-4c80-814f-c100329e3e12';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_34';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7368db21-8e77-416f-8daf-b8243307a217';
  $pane->panel = 'first';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7368db21-8e77-416f-8daf-b8243307a217';
  $display->content['new-7368db21-8e77-416f-8daf-b8243307a217'] = $pane;
  $display->panels['first'][0] = 'new-7368db21-8e77-416f-8daf-b8243307a217';
  $pane = new stdClass();
  $pane->pid = 'new-4e537281-8182-4cbd-8280-c89d659c81f5';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Sign in to View Connection Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4e537281-8182-4cbd-8280-c89d659c81f5';
  $display->content['new-4e537281-8182-4cbd-8280-c89d659c81f5'] = $pane;
  $display->panels['first'][1] = 'new-4e537281-8182-4cbd-8280-c89d659c81f5';
  $pane = new stdClass();
  $pane->pid = 'new-199dd781-7836-48bf-a578-b68d552c31ea';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
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
  $pane->uuid = '199dd781-7836-48bf-a578-b68d552c31ea';
  $display->content['new-199dd781-7836-48bf-a578-b68d552c31ea'] = $pane;
  $display->panels['second'][0] = 'new-199dd781-7836-48bf-a578-b68d552c31ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_34'] = $handler;

  return $export;
}
