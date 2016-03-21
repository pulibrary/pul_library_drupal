<?php
/**
 * @file
 * pul_cas_resource_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_cas_resource_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_37';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'CAS Protected Resources',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'cas_protected_db_resource' => 'cas_protected_db_resource',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases',
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_home' => 1,
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
  $display->uuid = 'dc0f5477-5179-421d-90e0-379a0b9acdc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df81a123-2580-4510-84e6-77701d95af8d';
    $pane->panel = 'first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
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
      'admin_title' => 'On Campus Users',
      'title' => 'Non Princeton Patrons',
      'body' => '<p>If you do not have Princeton University Faculty, Student, Staff, or affliate account and are working at public terminal in one of our libraries please see the circulation or reference desk for information on how to access this resource.&nbsp;</p>',
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
    $pane->uuid = 'df81a123-2580-4510-84e6-77701d95af8d';
    $display->content['new-df81a123-2580-4510-84e6-77701d95af8d'] = $pane;
    $display->panels['first'][0] = 'new-df81a123-2580-4510-84e6-77701d95af8d';
    $pane = new stdClass();
    $pane->pid = 'new-24175cef-88d4-4ab4-80a2-ce26cdbca761';
    $pane->panel = 'first';
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
    $pane->uuid = '24175cef-88d4-4ab4-80a2-ce26cdbca761';
    $display->content['new-24175cef-88d4-4ab4-80a2-ce26cdbca761'] = $pane;
    $display->panels['first'][1] = 'new-24175cef-88d4-4ab4-80a2-ce26cdbca761';
    $pane = new stdClass();
    $pane->pid = 'new-f3321d76-8d04-4648-a59e-ff7c6bb0199d';
    $pane->panel = 'first';
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
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f3321d76-8d04-4648-a59e-ff7c6bb0199d';
    $display->content['new-f3321d76-8d04-4648-a59e-ff7c6bb0199d'] = $pane;
    $display->panels['first'][2] = 'new-f3321d76-8d04-4648-a59e-ff7c6bb0199d';
    $pane = new stdClass();
    $pane->pid = 'new-649ec903-5337-4a71-9a1f-34a6c18dfeb5';
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
    $pane->uuid = '649ec903-5337-4a71-9a1f-34a6c18dfeb5';
    $display->content['new-649ec903-5337-4a71-9a1f-34a6c18dfeb5'] = $pane;
    $display->panels['second'][0] = 'new-649ec903-5337-4a71-9a1f-34a6c18dfeb5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f3321d76-8d04-4648-a59e-ff7c6bb0199d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_37'] = $handler;

  return $export;
}
