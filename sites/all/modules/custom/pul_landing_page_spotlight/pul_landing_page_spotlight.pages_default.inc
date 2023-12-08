<?php

/**
 * @file
 * pul_landing_page_spotlight.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_landing_page_spotlight_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_46';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -38;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'spotlight/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Homepage Spotlight Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'nine-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '76522646-8010-4d77-ba64-76b7014964c0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_46';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-73ef3913-05a5-45c8-b9f8-cef2f76a2237';
  $pane->panel = 'first';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
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
  $pane->uuid = '73ef3913-05a5-45c8-b9f8-cef2f76a2237';
  $display->content['new-73ef3913-05a5-45c8-b9f8-cef2f76a2237'] = $pane;
  $display->panels['first'][0] = 'new-73ef3913-05a5-45c8-b9f8-cef2f76a2237';
  $pane = new stdClass();
  $pane->pid = 'new-648181e1-f1d3-445f-ac1c-2fd841a13667';
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
  $pane->uuid = '648181e1-f1d3-445f-ac1c-2fd841a13667';
  $display->content['new-648181e1-f1d3-445f-ac1c-2fd841a13667'] = $pane;
  $display->panels['second'][0] = 'new-648181e1-f1d3-445f-ac1c-2fd841a13667';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-73ef3913-05a5-45c8-b9f8-cef2f76a2237';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_46'] = $handler;

  return $export;
}
