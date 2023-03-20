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
  $handler->weight = 17;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'econlib/contact-us
econlib/services/*
econlib/resources
econlib/resources/*',
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
    'title' => 'Pliny Fisk Library of Economics and Finance',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_49';
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
  $pane = new stdClass();
  $pane->pid = 'new-8d0708dc-dce5-4f40-89ee-d9757aee6bbe';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img src="/sites/default/files/firestone-pliny-fisk.png" alt="Pliny Fisk Library of Economics and Finance" width="1200" height="140" /></p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Pliny Fisk Library of Economics and Finance',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0708dc-dce5-4f40-89ee-d9757aee6bbe';
  $display->content['new-8d0708dc-dce5-4f40-89ee-d9757aee6bbe'] = $pane;
  $display->panels['top'][0] = 'new-8d0708dc-dce5-4f40-89ee-d9757aee6bbe';
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
  $handler->weight = 18;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'econlib/about-us',
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
    'title' => 'Pliny Fisk Library of Economics and Finance Staff',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'first' => array(
      'style' => 'stylizer',
    ),
    'middle' => array(
      'style' => 'stylizer',
    ),
    'second' => array(
      'style' => 'stylizer',
    ),
    'style' => 'stylizer',
    'style_settings' => array(
      'bottom' => NULL,
      'default' => array(),
      'first' => array(),
      'middle' => array(),
      'second' => array(),
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_50';
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
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
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
  $pane = new stdClass();
  $pane->pid = 'new-f0ee3314-67a5-47c1-9fcb-d47542f520af';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img src="/sites/default/files/firestone-pliny-fisk.png" alt="Pliny Fisk Library of Economics and Finance" width="1200" height="140" /></p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Pliny Fisk Library of Economics and Finance',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0ee3314-67a5-47c1-9fcb-d47542f520af';
  $display->content['new-f0ee3314-67a5-47c1-9fcb-d47542f520af'] = $pane;
  $display->panels['top'][0] = 'new-f0ee3314-67a5-47c1-9fcb-d47542f520af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_50'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_51';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 20;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'econlib',
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
    'title' => 'Pliny Fisk Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'three-three-three-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'fourth' => NULL,
      'middle' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Pliny Fisk Library of Economics and Finance';
  $display->uuid = 'c8d9f3b2-9ba7-490d-b465-33ef6a5248eb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_51';
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
    'override_title_heading' => 'h2',
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
  $pane->pid = 'new-a24ad9a6-1fa2-41fb-a47d-9aa3b985e7e1';
  $pane->panel = 'fourth';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5374',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a24ad9a6-1fa2-41fb-a47d-9aa3b985e7e1';
  $display->content['new-a24ad9a6-1fa2-41fb-a47d-9aa3b985e7e1'] = $pane;
  $display->panels['fourth'][0] = 'new-a24ad9a6-1fa2-41fb-a47d-9aa3b985e7e1';
  $pane = new stdClass();
  $pane->pid = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
  $pane->panel = 'fourth';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c452d45-9133-4ec3-b65a-b66d29369ebb';
  $display->content['new-2c452d45-9133-4ec3-b65a-b66d29369ebb'] = $pane;
  $display->panels['fourth'][1] = 'new-2c452d45-9133-4ec3-b65a-b66d29369ebb';
  $pane = new stdClass();
  $pane->pid = 'new-be9268de-25b8-4017-b25d-cff8a3caea5a';
  $pane->panel = 'fourth';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-pliny-fisk-affiliates';
  $pane->shown = FALSE;
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'be9268de-25b8-4017-b25d-cff8a3caea5a';
  $display->content['new-be9268de-25b8-4017-b25d-cff8a3caea5a'] = $pane;
  $display->panels['fourth'][2] = 'new-be9268de-25b8-4017-b25d-cff8a3caea5a';
  $pane = new stdClass();
  $pane->pid = 'new-0e85ed1a-c60d-4f5a-83dc-3ea03cbc6f0c';
  $pane->panel = 'fourth';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5374',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0e85ed1a-c60d-4f5a-83dc-3ea03cbc6f0c';
  $display->content['new-0e85ed1a-c60d-4f5a-83dc-3ea03cbc6f0c'] = $pane;
  $display->panels['fourth'][3] = 'new-0e85ed1a-c60d-4f5a-83dc-3ea03cbc6f0c';
  $pane = new stdClass();
  $pane->pid = 'new-0ef9a977-855e-47c1-8de8-17117ac8efbe';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5372',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Articles and Books',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0ef9a977-855e-47c1-8de8-17117ac8efbe';
  $display->content['new-0ef9a977-855e-47c1-8de8-17117ac8efbe'] = $pane;
  $display->panels['second'][0] = 'new-0ef9a977-855e-47c1-8de8-17117ac8efbe';
  $pane = new stdClass();
  $pane->pid = 'new-d6b6c2ec-6650-485e-9f46-0e8518334d49';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5372',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Articles and Books',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd6b6c2ec-6650-485e-9f46-0e8518334d49';
  $display->content['new-d6b6c2ec-6650-485e-9f46-0e8518334d49'] = $pane;
  $display->panels['second'][1] = 'new-d6b6c2ec-6650-485e-9f46-0e8518334d49';
  $pane = new stdClass();
  $pane->pid = 'new-efff9689-7a65-4fc6-ac4f-25568e141cf7';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5373',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Data',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'efff9689-7a65-4fc6-ac4f-25568e141cf7';
  $display->content['new-efff9689-7a65-4fc6-ac4f-25568e141cf7'] = $pane;
  $display->panels['third'][0] = 'new-efff9689-7a65-4fc6-ac4f-25568e141cf7';
  $pane = new stdClass();
  $pane->pid = 'new-53dfccdf-8395-4748-a4bc-bcb6ac7ab005';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5373',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '53dfccdf-8395-4748-a4bc-bcb6ac7ab005';
  $display->content['new-53dfccdf-8395-4748-a4bc-bcb6ac7ab005'] = $pane;
  $display->panels['third'][1] = 'new-53dfccdf-8395-4748-a4bc-bcb6ac7ab005';
  $pane = new stdClass();
  $pane->pid = 'new-7253f9d9-a352-4834-99f5-9589a8d11cf6';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p><img src="/sites/default/files/firestone-pliny-fisk.png" alt="Pliny Fisk Library of Economics and Finance" width="1200" height="140" /></p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Pliny Fisk Library of Economics and Finance',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7253f9d9-a352-4834-99f5-9589a8d11cf6';
  $display->content['new-7253f9d9-a352-4834-99f5-9589a8d11cf6'] = $pane;
  $display->panels['top'][0] = 'new-7253f9d9-a352-4834-99f5-9589a8d11cf6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_51'] = $handler;

  return $export;
}
