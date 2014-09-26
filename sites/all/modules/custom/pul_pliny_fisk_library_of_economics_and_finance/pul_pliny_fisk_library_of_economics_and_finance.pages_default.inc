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
            'paths' => 'econlib
econlib/services
econlib/instruction',
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
      'override_title_text' => 'Pliny Fisk Library of Economics and Finance',
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
    $pane->pid = 'new-54bfc6c6-ca41-45b6-9898-f3fceb50d3b0';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-econlib-guides';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Research Guides',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54bfc6c6-ca41-45b6-9898-f3fceb50d3b0';
    $display->content['new-54bfc6c6-ca41-45b6-9898-f3fceb50d3b0'] = $pane;
    $display->panels['second'][0] = 'new-54bfc6c6-ca41-45b6-9898-f3fceb50d3b0';
    $pane = new stdClass();
    $pane->pid = 'new-691851f0-a8b4-4bb5-ae5b-802df17bfbf0';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-econlib-data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Data',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '691851f0-a8b4-4bb5-ae5b-802df17bfbf0';
    $display->content['new-691851f0-a8b4-4bb5-ae5b-802df17bfbf0'] = $pane;
    $display->panels['second'][1] = 'new-691851f0-a8b4-4bb5-ae5b-802df17bfbf0';
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
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'middle' => NULL,
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
      'override_title_text' => 'Pliny Fisk Library of Economics and Finance',
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
    $pane->pid = 'new-83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '13189',
      ),
      'override_title' => 1,
      'override_title_text' => 'Pliny Fisk Library of Economics and Finance Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $display->content['new-83eee2d6-8f61-4012-8268-1bcb9cbc660c'] = $pane;
    $display->panels['middle'][1] = 'new-83eee2d6-8f61-4012-8268-1bcb9cbc660c';
    $pane = new stdClass();
    $pane->pid = 'new-e30c2e99-9230-4c0b-ad53-29f31bb82a1e';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-econlib-affiliates';
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
    $pane->uuid = 'e30c2e99-9230-4c0b-ad53-29f31bb82a1e';
    $display->content['new-e30c2e99-9230-4c0b-ad53-29f31bb82a1e'] = $pane;
    $display->panels['second'][0] = 'new-e30c2e99-9230-4c0b-ad53-29f31bb82a1e';
    $pane = new stdClass();
    $pane->pid = 'new-fffcb74f-34b2-4e46-90ae-90638a771922';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-econlib-guides';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Research Guides',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fffcb74f-34b2-4e46-90ae-90638a771922';
    $display->content['new-fffcb74f-34b2-4e46-90ae-90638a771922'] = $pane;
    $display->panels['second'][1] = 'new-fffcb74f-34b2-4e46-90ae-90638a771922';
    $pane = new stdClass();
    $pane->pid = 'new-ecd80afc-9509-4bb9-87c8-033d8a7f0815';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-econlib-data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Data',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ecd80afc-9509-4bb9-87c8-033d8a7f0815';
    $display->content['new-ecd80afc-9509-4bb9-87c8-033d8a7f0815'] = $pane;
    $display->panels['second'][2] = 'new-ecd80afc-9509-4bb9-87c8-033d8a7f0815';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_50'] = $handler;

  return $export;
}
