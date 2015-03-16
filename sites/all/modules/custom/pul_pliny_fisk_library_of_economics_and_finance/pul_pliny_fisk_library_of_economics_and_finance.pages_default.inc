<?php
/**
 * @file
 * pul_pliny_fisk_library_of_economics_and_finance.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_pliny_fisk_library_of_economics_and_finance_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_49';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 18;
  $handler->conf = array(
    'title' => 'Pliny Fisk Library of Economics and Finance',
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
            'paths' => 'econlib/services
econlib/services/*
econlib/resources
econlib/resources/*',
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
      'second' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Pliny Fisk Library of Economics and Finance';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-pliny-fisk-library-of-econo';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $display->content['new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c'] = $pane;
    $display->panels['first'][0] = 'new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $pane = new stdClass();
    $pane->pid = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane = new stdClass();
    $pane->pid = 'new-be9268de-25b8-4017-b25d-cff8a3caea5a';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-pliny-fisk-affiliates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Affiliates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be9268de-25b8-4017-b25d-cff8a3caea5a';
    $display->content['new-be9268de-25b8-4017-b25d-cff8a3caea5a'] = $pane;
    $display->panels['second'][0] = 'new-be9268de-25b8-4017-b25d-cff8a3caea5a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_49'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_50';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 19;
  $handler->conf = array(
    'title' => 'Pliny Fisk Library of Economics and Finance Staff',
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
            'paths' => 'econlib/about-us',
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
      'default' => array(),
      'first' => array(),
      'second' => array(),
      'middle' => array(),
    ),
    'style' => 'stylizer',
    'first' => array(
      'style' => 'stylizer',
    ),
    'middle' => array(
      'style' => 'stylizer',
    ),
    'second' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-pliny-fisk-library-of-econo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $display->content['new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c'] = $pane;
    $display->panels['first'][0] = 'new-ffeaa372-526f-43ea-bc5b-1193d88e3e8c';
    $pane = new stdClass();
    $pane->pid = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane->panel = 'middle';
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
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $display->content['new-2c452d45-9133-4ec3-b65a-b66d29369ebb'] = $pane;
    $display->panels['middle'][0] = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
    $pane = new stdClass();
    $pane->pid = 'new-83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '13326',
      ),
      'override_title' => 1,
      'override_title_text' => 'Pliny Fisk Library of Economics and Finance Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $display->content['new-83eee2d6-8f61-4012-8268-1bcb9cbc660c'] = $pane;
    $display->panels['middle'][1] = 'new-83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $pane = new stdClass();
    $pane->pid = 'new-2db32aa8-be9c-46d0-bb85-d5e2790742f1';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-pliny-fisk-affiliates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Affiliates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2db32aa8-be9c-46d0-bb85-d5e2790742f1';
    $display->content['new-2db32aa8-be9c-46d0-bb85-d5e2790742f1'] = $pane;
    $display->panels['second'][0] = 'new-2db32aa8-be9c-46d0-bb85-d5e2790742f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_50'] = $handler;

  return $export;
}
