<?php

/**
 * @file
 * pul_east_asian_library_branch_site.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_east_asian_library_branch_site_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_371e012c-d817-4143-a618-9be59b656015';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'East Asian Library Branch Pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-eal',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Branch Home',
        'keyword' => 'library',
        'name' => 'entity:node',
        'entity_id' => '7785',
        'id' => 1,
      ),
    ),
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
            'paths' => 'libraries/eastasianlib/*
eastasianlib/*
eastasian/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_371e012c-d817-4143-a618-9be59b656015';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9961d05a-6ae0-49a6-88e5-e9f0eee26387';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-east-asian';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '9961d05a-6ae0-49a6-88e5-e9f0eee26387';
  $display->content['new-9961d05a-6ae0-49a6-88e5-e9f0eee26387'] = $pane;
  $display->panels['first'][0] = 'new-9961d05a-6ae0-49a6-88e5-e9f0eee26387';
  $pane = new stdClass();
  $pane->pid = 'new-dcd55986-eacd-4249-b9d4-62c5b8fabe52';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_eastasian-libhours_eastasian';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dcd55986-eacd-4249-b9d4-62c5b8fabe52';
  $display->content['new-dcd55986-eacd-4249-b9d4-62c5b8fabe52'] = $pane;
  $display->panels['first'][1] = 'new-dcd55986-eacd-4249-b9d4-62c5b8fabe52';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7785',
    ),
    'override_title' => 1,
    'override_title_text' => 'Contact Us',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][2] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-f6b296df-91f7-462a-ba34-cd6de5705220';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f6b296df-91f7-462a-ba34-cd6de5705220';
  $display->content['new-f6b296df-91f7-462a-ba34-cd6de5705220'] = $pane;
  $display->panels['middle'][0] = 'new-f6b296df-91f7-462a-ba34-cd6de5705220';
  $pane = new stdClass();
  $pane->pid = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->uuid = 'bb6b1a21-e308-4754-85f7-61c08d988b08';
  $display->content['new-bb6b1a21-e308-4754-85f7-61c08d988b08'] = $pane;
  $display->panels['middle'][1] = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane = new stdClass();
  $pane->pid = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
  $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
  $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane = new stdClass();
  $pane->pid = 'new-015efc53-508a-4f7c-8985-894329929bdf';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'eastasian/news',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '015efc53-508a-4f7c-8985-894329929bdf';
  $display->content['new-015efc53-508a-4f7c-8985-894329929bdf'] = $pane;
  $display->panels['middle'][3] = 'new-015efc53-508a-4f7c-8985-894329929bdf';
  $pane = new stdClass();
  $pane->pid = 'new-b1a3a190-3927-43b5-8a9f-fc72adeff1d1';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'view_mode' => 'featured_link_url',
      'links' => 1,
    ),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Research & Scholarship',
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
  $pane->uuid = 'b1a3a190-3927-43b5-8a9f-fc72adeff1d1';
  $display->content['new-b1a3a190-3927-43b5-8a9f-fc72adeff1d1'] = $pane;
  $display->panels['second'][0] = 'new-b1a3a190-3927-43b5-8a9f-fc72adeff1d1';
  $pane = new stdClass();
  $pane->pid = 'new-56932dbc-e61c-4145-9f6a-3bbd30cf3939';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Databases & Tools',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '56932dbc-e61c-4145-9f6a-3bbd30cf3939';
  $display->content['new-56932dbc-e61c-4145-9f6a-3bbd30cf3939'] = $pane;
  $display->panels['second'][1] = 'new-56932dbc-e61c-4145-9f6a-3bbd30cf3939';
  $pane = new stdClass();
  $pane->pid = 'new-89b4b59f-e9c3-4c3b-85a4-1dd31778473c';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Featured Resources',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '89b4b59f-e9c3-4c3b-85a4-1dd31778473c';
  $display->content['new-89b4b59f-e9c3-4c3b-85a4-1dd31778473c'] = $pane;
  $display->panels['second'][2] = 'new-89b4b59f-e9c3-4c3b-85a4-1dd31778473c';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7785',
    ),
    'override_title' => 1,
    'override_title_text' => 'The East Asian Library and the Gest Collection',
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
  $pane->uuid = 'b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->content['new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b'] = $pane;
  $display->panels['top'][0] = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane = new stdClass();
  $pane->pid = 'new-e0862ec6-2faf-4d2f-a73f-536352e619b4';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h3 style="text-align: center;"><span>普林斯頓大學葛思德東亞圖書館 ・ プリンストン大学東アジア図書館 ・ 프린스턴 대학교 동아시아 도서관</span></h3>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0862ec6-2faf-4d2f-a73f-536352e619b4';
  $display->content['new-e0862ec6-2faf-4d2f-a73f-536352e619b4'] = $pane;
  $display->panels['top'][1] = 'new-e0862ec6-2faf-4d2f-a73f-536352e619b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_371e012c-d817-4143-a618-9be59b656015'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f3966023-9c0c-425b-960f-8d3749bfeb2d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'East Asian Library Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-eal',
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
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'libraries' => 'libraries',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'eastasianlib
eastasian
libraries/eastasianlib',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
    ),
  );
  $display->cache = array();
  $display->title = 'East Asian Library';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_f3966023-9c0c-425b-960f-8d3749bfeb2d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d52a33c4-69c3-43d6-b0a3-d6859f3cb27f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-east-asian';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'd52a33c4-69c3-43d6-b0a3-d6859f3cb27f';
  $display->content['new-d52a33c4-69c3-43d6-b0a3-d6859f3cb27f'] = $pane;
  $display->panels['first'][0] = 'new-d52a33c4-69c3-43d6-b0a3-d6859f3cb27f';
  $pane = new stdClass();
  $pane->pid = 'new-3bac95a0-32c0-4af4-9e81-babc55e68907';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_eastasian-libhours_eastasian';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bac95a0-32c0-4af4-9e81-babc55e68907';
  $display->content['new-3bac95a0-32c0-4af4-9e81-babc55e68907'] = $pane;
  $display->panels['first'][1] = 'new-3bac95a0-32c0-4af4-9e81-babc55e68907';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][2] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-ef75c8f2-5162-45e7-92b7-5d6af6ca032f';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ef75c8f2-5162-45e7-92b7-5d6af6ca032f';
  $display->content['new-ef75c8f2-5162-45e7-92b7-5d6af6ca032f'] = $pane;
  $display->panels['first'][3] = 'new-ef75c8f2-5162-45e7-92b7-5d6af6ca032f';
  $pane = new stdClass();
  $pane->pid = 'new-8404cf75-c431-49c9-9701-1499c368da2c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8404cf75-c431-49c9-9701-1499c368da2c';
  $display->content['new-8404cf75-c431-49c9-9701-1499c368da2c'] = $pane;
  $display->panels['middle'][0] = 'new-8404cf75-c431-49c9-9701-1499c368da2c';
  $pane = new stdClass();
  $pane->pid = 'new-b4f3a0d6-c3ee-49f9-8779-f4bac8ed6d21';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_interior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b4f3a0d6-c3ee-49f9-8779-f4bac8ed6d21';
  $display->content['new-b4f3a0d6-c3ee-49f9-8779-f4bac8ed6d21'] = $pane;
  $display->panels['middle'][1] = 'new-b4f3a0d6-c3ee-49f9-8779-f4bac8ed6d21';
  $pane = new stdClass();
  $pane->pid = 'new-44f46d4c-944d-4947-b48f-308187acf0d8';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44f46d4c-944d-4947-b48f-308187acf0d8';
  $display->content['new-44f46d4c-944d-4947-b48f-308187acf0d8'] = $pane;
  $display->panels['middle'][2] = 'new-44f46d4c-944d-4947-b48f-308187acf0d8';
  $pane = new stdClass();
  $pane->pid = 'new-b87d0c74-25b6-4684-a3e1-3db9c57942ef';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b87d0c74-25b6-4684-a3e1-3db9c57942ef';
  $display->content['new-b87d0c74-25b6-4684-a3e1-3db9c57942ef'] = $pane;
  $display->panels['middle'][3] = 'new-b87d0c74-25b6-4684-a3e1-3db9c57942ef';
  $pane = new stdClass();
  $pane->pid = 'new-0749a1b9-91a3-4e76-ab3b-3eccd33b28d7';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'view_mode' => 'featured_link_url',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Research & Scholarship',
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
  $pane->uuid = '0749a1b9-91a3-4e76-ab3b-3eccd33b28d7';
  $display->content['new-0749a1b9-91a3-4e76-ab3b-3eccd33b28d7'] = $pane;
  $display->panels['second'][0] = 'new-0749a1b9-91a3-4e76-ab3b-3eccd33b28d7';
  $pane = new stdClass();
  $pane->pid = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_spotlight_item';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 1,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->uuid = '5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $display->content['new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6'] = $pane;
  $display->panels['second'][1] = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane = new stdClass();
  $pane->pid = 'new-5dfc5af8-9a9e-4ad2-a804-79a4b0035c84';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Databases & Tools',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5dfc5af8-9a9e-4ad2-a804-79a4b0035c84';
  $display->content['new-5dfc5af8-9a9e-4ad2-a804-79a4b0035c84'] = $pane;
  $display->panels['second'][2] = 'new-5dfc5af8-9a9e-4ad2-a804-79a4b0035c84';
  $pane = new stdClass();
  $pane->pid = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 1,
      'link' => 1,
      'text' => '[entity:label]',
      'check_access' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
  $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
  $display->panels['second'][3] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane = new stdClass();
  $pane->pid = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'branch_image_branding',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'The East Asian Library and the Gest Collection',
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
  $pane->uuid = 'd4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $display->content['new-d4e21373-0c6d-47b1-92bb-5ca5896df51d'] = $pane;
  $display->panels['top'][0] = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $pane = new stdClass();
  $pane->pid = 'new-e2913c81-2f96-4407-8214-057f8d857ca6';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h3 style="text-align: center;"><span>普林斯頓大學葛思德東亞圖書館 ・ プリンストン大学東アジア図書館 ・ 프린스턴 대학교 동아시아 도서관</span></h3>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e2913c81-2f96-4407-8214-057f8d857ca6';
  $display->content['new-e2913c81-2f96-4407-8214-057f8d857ca6'] = $pane;
  $display->panels['top'][1] = 'new-e2913c81-2f96-4407-8214-057f8d857ca6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f3966023-9c0c-425b-960f-8d3749bfeb2d'] = $handler;

  return $export;
}
