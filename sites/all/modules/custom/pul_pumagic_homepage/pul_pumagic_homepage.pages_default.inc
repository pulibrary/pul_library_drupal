<?php
/**
 * @file
 * pul_pumagic_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_pumagic_homepage_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_45';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'PU Magic Collection Home',
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
            'paths' => 'collections/pumagic',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5320997f-517d-46b5-a920-385af3ee4088';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4c9316c-577a-47f7-9b20-9ab0cafd9b8e';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-map-and-geospatial---main-m';
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
    $pane->uuid = 'd4c9316c-577a-47f7-9b20-9ab0cafd9b8e';
    $display->content['new-d4c9316c-577a-47f7-9b20-9ab0cafd9b8e'] = $pane;
    $display->panels['first'][0] = 'new-d4c9316c-577a-47f7-9b20-9ab0cafd9b8e';
    $pane = new stdClass();
    $pane->pid = 'new-a2527f89-85bf-4d4d-8c92-565e856d90b9';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'content_body_mode',
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
    $pane->uuid = 'a2527f89-85bf-4d4d-8c92-565e856d90b9';
    $display->content['new-a2527f89-85bf-4d4d-8c92-565e856d90b9'] = $pane;
    $display->panels['middle'][0] = 'new-a2527f89-85bf-4d4d-8c92-565e856d90b9';
    $pane = new stdClass();
    $pane->pid = 'new-40c94260-9976-4bdc-8b6d-7c3c32913301';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'collections-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40c94260-9976-4bdc-8b6d-7c3c32913301';
    $display->content['new-40c94260-9976-4bdc-8b6d-7c3c32913301'] = $pane;
    $display->panels['second'][0] = 'new-40c94260-9976-4bdc-8b6d-7c3c32913301';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a2527f89-85bf-4d4d-8c92-565e856d90b9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_45'] = $handler;

  return $export;
}