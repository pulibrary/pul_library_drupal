<?php
/**
 * @file
 * your_accounts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function your_accounts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 36;
  $handler->conf = array(
    'title' => 'Your Accounts',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'accounts',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-three-three-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'third' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5920e29c-f5c3-4a2e-b31b-21dc56c88f9b';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'block-18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Access Interlibrary Loan',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5920e29c-f5c3-4a2e-b31b-21dc56c88f9b';
    $display->content['new-5920e29c-f5c3-4a2e-b31b-21dc56c88f9b'] = $pane;
    $display->panels['second'][0] = 'new-5920e29c-f5c3-4a2e-b31b-21dc56c88f9b';
    $pane = new stdClass();
    $pane->pid = 'new-e93b178e-f40e-463c-9efa-757e7a5ac9ca';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e93b178e-f40e-463c-9efa-757e7a5ac9ca';
    $display->content['new-e93b178e-f40e-463c-9efa-757e7a5ac9ca'] = $pane;
    $display->panels['top'][0] = 'new-e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506'] = $handler;

  return $export;
}
