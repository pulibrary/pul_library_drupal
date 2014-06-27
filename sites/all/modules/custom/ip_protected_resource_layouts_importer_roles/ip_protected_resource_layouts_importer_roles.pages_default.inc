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
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'IP Protected Resource',
    'no_blocks' => 1,
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ip_protected_db_resource' => 'ip_protected_db_resource',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_9_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a98a76fa-fa85-4c80-814f-c100329e3e12';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-194cf5e4-6b5a-4738-9266-723b45a41d31';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
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
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '194cf5e4-6b5a-4738-9266-723b45a41d31';
    $display->content['new-194cf5e4-6b5a-4738-9266-723b45a41d31'] = $pane;
    $display->panels['left'][0] = 'new-194cf5e4-6b5a-4738-9266-723b45a41d31';
    $pane = new stdClass();
    $pane->pid = 'new-6b39ab1e-8821-46e1-987d-adbb733785b2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'cas-login';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
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
    $pane->uuid = '6b39ab1e-8821-46e1-987d-adbb733785b2';
    $display->content['new-6b39ab1e-8821-46e1-987d-adbb733785b2'] = $pane;
    $display->panels['left'][1] = 'new-6b39ab1e-8821-46e1-987d-adbb733785b2';
    $pane = new stdClass();
    $pane->pid = 'new-e7552e57-ec28-4dd5-ad21-0ec097a01ea8';
    $pane->panel = 'right';
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
    $pane->uuid = 'e7552e57-ec28-4dd5-ad21-0ec097a01ea8';
    $display->content['new-e7552e57-ec28-4dd5-ad21-0ec097a01ea8'] = $pane;
    $display->panels['right'][0] = 'new-e7552e57-ec28-4dd5-ad21-0ec097a01ea8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e7552e57-ec28-4dd5-ad21-0ec097a01ea8';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_34'] = $handler;

  return $export;
}
