<?php
/**
 * @file
 * library_spaces.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_spaces_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_17';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'title' => 'Room Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second rooms',
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
              'library_meeting_space_locations' => 'library_meeting_space_locations',
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
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '136d5cc1-d09b-412f-b847-a4111e858835';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9738ab4c-842a-44e0-a8a7-e2da41e8be0d';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'meeting_rooms-panel_pane_1';
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
    $pane->uuid = '9738ab4c-842a-44e0-a8a7-e2da41e8be0d';
    $display->content['new-9738ab4c-842a-44e0-a8a7-e2da41e8be0d'] = $pane;
    $display->panels['first'][0] = 'new-9738ab4c-842a-44e0-a8a7-e2da41e8be0d';
    $pane = new stdClass();
    $pane->pid = 'new-0d9b1e69-f64e-4161-9f42-58e4f2f348c0';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'meeting_rooms-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Reserving',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d9b1e69-f64e-4161-9f42-58e4f2f348c0';
    $display->content['new-0d9b1e69-f64e-4161-9f42-58e4f2f348c0'] = $pane;
    $display->panels['second'][0] = 'new-0d9b1e69-f64e-4161-9f42-58e4f2f348c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_17'] = $handler;

  return $export;
}
