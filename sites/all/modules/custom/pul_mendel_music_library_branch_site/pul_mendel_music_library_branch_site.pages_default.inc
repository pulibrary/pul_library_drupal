<?php

/**
 * @file
 * pul_mendel_music_library_branch_site.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_mendel_music_library_branch_site_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mendel-music-library-branch-news';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'news/music',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-music',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '7791',
        'id' => 1,
        'identifier' => 'Mendel Library',
        'keyword' => 'mendel_config',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'name' => 'mendel-music-library-branch-news',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Mendel Music Library Branch News',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__mendel-music-library-branch-news';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-music';
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
  $pane->uuid = '071a0575-87b0-4da9-86a0-2c8299513224';
  $display->content['new-071a0575-87b0-4da9-86a0-2c8299513224'] = $pane;
  $display->panels['first'][0] = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][1] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-f2802558-815c-4e2d-80ea-1694b1c4093e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'alert--message',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f2802558-815c-4e2d-80ea-1694b1c4093e';
  $display->content['new-f2802558-815c-4e2d-80ea-1694b1c4093e'] = $pane;
  $display->panels['middle'][0] = 'new-f2802558-815c-4e2d-80ea-1694b1c4093e';
  $pane = new stdClass();
  $pane->pid = 'new-060a9371-cdc4-492f-9d70-da54efb70f59';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '060a9371-cdc4-492f-9d70-da54efb70f59';
  $display->content['new-060a9371-cdc4-492f-9d70-da54efb70f59'] = $pane;
  $display->panels['middle'][1] = 'new-060a9371-cdc4-492f-9d70-da54efb70f59';
  $pane = new stdClass();
  $pane->pid = 'new-d98d401c-dac9-4bef-b33f-5de1747822cb';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_16';
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
  $pane->uuid = 'd98d401c-dac9-4bef-b33f-5de1747822cb';
  $display->content['new-d98d401c-dac9-4bef-b33f-5de1747822cb'] = $pane;
  $display->panels['second'][0] = 'new-d98d401c-dac9-4bef-b33f-5de1747822cb';
  $pane = new stdClass();
  $pane->pid = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32b1026f-8608-4103-8905-29c28d0581fd';
  $display->content['new-32b1026f-8608-4103-8905-29c28d0581fd'] = $pane;
  $display->panels['second'][1] = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
  $pane = new stdClass();
  $pane->pid = 'new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'links' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $display->content['new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9'] = $pane;
  $display->panels['second'][2] = 'new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $pane = new stdClass();
  $pane->pid = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Music Research Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $display->content['new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4'] = $pane;
  $display->panels['second'][3] = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Mendel Music Library',
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__mendel-music-library-branch-news'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_228095c7-6111-4346-bea6-55a3d6b896d1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/music/*
music/*',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => TRUE,
          'settings' => array(
            'type' => array(
              'mendel_sheet_music' => 'mendel_sheet_music',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-music',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '7791',
        'id' => 1,
        'identifier' => 'Mendel Library',
        'keyword' => 'mendel_config',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Mendel Music Library Branch Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_228095c7-6111-4346-bea6-55a3d6b896d1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-music';
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
  $pane->uuid = '071a0575-87b0-4da9-86a0-2c8299513224';
  $display->content['new-071a0575-87b0-4da9-86a0-2c8299513224'] = $pane;
  $display->panels['first'][0] = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
  $pane = new stdClass();
  $pane->pid = 'new-70a00674-34a0-48ed-858e-8a44bceaacd1';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_mendel-libhours_mendel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '70a00674-34a0-48ed-858e-8a44bceaacd1';
  $display->content['new-70a00674-34a0-48ed-858e-8a44bceaacd1'] = $pane;
  $display->panels['first'][1] = 'new-70a00674-34a0-48ed-858e-8a44bceaacd1';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
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
  $pane->pid = 'new-df925888-61e2-4fa8-adf5-299d9eb6a805';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_6';
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
  $pane->uuid = 'df925888-61e2-4fa8-adf5-299d9eb6a805';
  $display->content['new-df925888-61e2-4fa8-adf5-299d9eb6a805'] = $pane;
  $display->panels['middle'][0] = 'new-df925888-61e2-4fa8-adf5-299d9eb6a805';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
  $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
  $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane = new stdClass();
  $pane->pid = 'new-d98d401c-dac9-4bef-b33f-5de1747822cb';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_16';
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
  $pane->uuid = 'd98d401c-dac9-4bef-b33f-5de1747822cb';
  $display->content['new-d98d401c-dac9-4bef-b33f-5de1747822cb'] = $pane;
  $display->panels['second'][0] = 'new-d98d401c-dac9-4bef-b33f-5de1747822cb';
  $pane = new stdClass();
  $pane->pid = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32b1026f-8608-4103-8905-29c28d0581fd';
  $display->content['new-32b1026f-8608-4103-8905-29c28d0581fd'] = $pane;
  $display->panels['second'][1] = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
  $pane = new stdClass();
  $pane->pid = 'new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'links' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $display->content['new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9'] = $pane;
  $display->panels['second'][2] = 'new-0cc967d4-f92e-40dc-a82f-6c3a39e8d3c9';
  $pane = new stdClass();
  $pane->pid = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Resource Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $display->content['new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4'] = $pane;
  $display->panels['second'][3] = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Mendel Music Library',
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_228095c7-6111-4346-bea6-55a3d6b896d1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ac92d8e0-98f5-4119-9764-f7d3ef4f8652';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'libraries' => 'libraries',
            ),
          ),
        ),
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/music
music',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-music',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Mendel Music Library Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mendel Music Library';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ac92d8e0-98f5-4119-9764-f7d3ef4f8652';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-music';
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
  $pane->uuid = '23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
  $display->content['new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb'] = $pane;
  $display->panels['first'][0] = 'new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
  $pane = new stdClass();
  $pane->pid = 'new-4fc7d300-33eb-4d87-9b6d-55dbf7fcc8f7';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_mendel-libhours_mendel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '4fc7d300-33eb-4d87-9b6d-55dbf7fcc8f7';
  $display->content['new-4fc7d300-33eb-4d87-9b6d-55dbf7fcc8f7'] = $pane;
  $display->panels['first'][1] = 'new-4fc7d300-33eb-4d87-9b6d-55dbf7fcc8f7';
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
  $pane->pid = 'new-f91eb3d0-c2e2-428f-ab37-68ac5294b49c';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Social media',
    'body' => '<p style="margin: 1em 0 0.5em;"><a href="https://www.facebook.com/MendelMusicLibrary" target="_blank" title="Mendel Music Facebook" style="font-size: 13.008px; line-height: 1.538em;"><img alt="Mendel Music Facebook" src="data:image/jpeg;base64,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cHRuYm9vbAAAAAAAQ2xicmJvb2wAAAAAAFJnc01ib29sAAAAAABDcm5DYm9vbAAAAAAAQ250Q2Jvb2wAAAAAAExibHNib29sAAAAAABOZ3R2Ym9vbAAAAAAARW1sRGJvb2wAAAAAAEludHJib29sAAAAAABCY2tnT2JqYwAAAAEAAAAAAABSR0JDAAAAAwAAAABSZCAgZG91YkBv4AAAAAAAAAAAAEdybiBkb3ViQG/gAAAAAAAAAAAAQmwgIGRvdWJAb+AAAAAAAAAAAABCcmRUVW50RiNSbHQAAAAAAAAAAAAAAABCbGQgVW50RiNSbHQAAAAAAAAAAAAAAABSc2x0VW50RiNQeGxAUgAAAAAAAAAAAAp2ZWN0b3JEYXRhYm9vbAEAAAAAUGdQc2VudW0AAAAAUGdQcwAAAABQZ1BDAAAAAExlZnRVbnRGI1JsdAAAAAAAAAAAAAAAAFRvcCBVbnRGI1JsdAAAAAAAAAAAAAAAAFNjbCBVbnRGI1ByY0BZAAAAAAAAOEJJTQPtAAAAAAAQAEgAAAABAAEASAAAAAEAAThCSU0EJgAAAAAADgAAAAAAAAAAAAA/gAAAOEJJTQQNAAAAAAAEAAAAHjhCSU0EGQAAAAAABAAAAB44QklNA/MAAAAAAAkAAAAAAAAAAAEAOEJJTScQAAAAAAAKAAEAAAAAAAAAAjhCSU0D9QAAAAAASAAvZmYAAQBsZmYABgAAAAAAAQAvZmYAAQChmZoABgAAAAAAAQAyAAAAAQBaAAAABgAAAAAAAQA1AAAAAQAtAAAABgAAAAAAAThCSU0D+AAAAAAAcAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAA4QklNBAgAAAAAABAAAAABAAACQAAAAkAAAAAAOEJJTQQeAAAAAAAEAAAAADhCSU0EGgAAAAADQQAAAAYAAAAAAAAAAAAAADIAAAAyAAAABgBmAGIALQBhAHIAdAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAMgAAADIAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAQ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ZWxlbWVudHMvMS4xLyIgeG1wTU06T3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOjA1ODAxMTc0MDcyMDY4MTE4MDgzQ0MxMzgwQzJBNUVCIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjAxRTQ0MkZBNzAwOTExRTM5NDhCQTE4NTAxRDgxQzg0IiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjNEMkQ5ODQzODIzNEU1MTE4MDM5OTdBOTFFRkMxQzRBIiB4bXA6Q3JlYXRvclRvb2w9IkFkb2JlIFBob3Rvc2hvcCBDUzYgKE1hY2ludG9zaCkiIHhtcDpDcmVhdGVEYXRlPSIyMDE1LTA3LTI3VDEyOjEyOjU2LTA0OjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAxNS0wNy0yN1QxMzowOTozOC0wNDowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAxNS0wNy0yN1QxMzowOTozOC0wNDowMCIgY3JzOkFscmVhZHlBcHBsaWVkPSJUcnVlIiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiBkYzpmb3JtYXQ9ImltYWdlL2pwZWciPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpBQTdBQkZBOTM4MjA2ODExOEMxNDk4QUY5ODFBQkFDRSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDowNTgwMTE3NDA3MjA2ODExODA4M0NDMTM4MEMyQTVFQiIvPiA8eG1wTU06SGlzdG9yeT4gPHJkZjpTZXE+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJzYXZlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDozQzJEOTg0MzgyMzRFNTExODAzOTk3QTkxRUZDMUM0QSIgc3RFdnQ6d2hlbj0iMjAxNS0wNy0yN1QxMzowOTozOC0wNDowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENTNS4xIFdpbmRvd3MiIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjNEMkQ5ODQzODIzNEU1MTE4MDM5OTdBOTFFRkMxQzRBIiBzdEV2dDp3aGVuPSIyMDE1LTA3LTI3VDEzOjA5OjM4LTA0OjAwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M1LjEgV2luZG93cyIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8L3JkZjpTZXE+IDwveG1wTU06SGlzdG9yeT4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+ICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgPD94cGFja2V0IGVuZD0idyI/Pv/uAA5BZG9iZQBkgAAAAAH/2wCEABIODg4QDhUQEBUeExETHiMaFRUaIyIXFxcXFyIRDAwMDAwMEQwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwBFBMTFhkWGxcXGxQODg4UFA4ODg4UEQwMDAwMEREMDAwMDAwRDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDP/AABEIADIAMgMBIgACEQEDEQH/3QAEAAT/xAE/AAABBQEBAQEBAQAAAAAAAAADAAECBAUGBwgJCgsBAAEFAQEBAQEBAAAAAAAAAAEAAgMEBQYHCAkKCxAAAQQBAwIEAgUHBggFAwwzAQACEQMEIRIxBUFRYRMicYEyBhSRobFCIyQVUsFiMzRygtFDByWSU/Dh8WNzNRaisoMmRJNUZEXCo3Q2F9JV4mXys4TD03Xj80YnlKSFtJXE1OT0pbXF1eX1VmZ2hpamtsbW5vY3R1dnd4eXp7fH1+f3EQACAgECBAQDBAUGBwcGBTUBAAIRAyExEgRBUWFxIhMFMoGRFKGxQiPBUtHwMyRi4XKCkkNTFWNzNPElBhaisoMHJjXC0kSTVKMXZEVVNnRl4vKzhMPTdePzRpSkhbSVxNTk9KW1xdXl9VZmdoaWprbG1ub2JzdHV2d3h5ent8f/2gAMAwEAAhEDEQA/AKT3vseXvJc5xkk8kqKSS0GopJJb31e6dVfvyrmh7WHbW06t3fSfY5NlIRFlMRZpwxXYRIa4jxAJUSCDBkHwK9Avy8TGht1rKp+iCY0/qrj+tXVX9RsspcHsIbDhxo1MhkMj8vD4rpQERvbW+2ZX+lf9D0+T9D9xJASUlDsssv8A/9CgkkktBqM66brZ9Kt1kc7QXR/mrrvq9VZVgFtjHMd6jjDgWmPZ+8sr6u5eNjPvN9jaw4N27jExvXT0ZFOQz1KXixkxubqJCr5pHWNen95mxxG969nl+v42Tb1Eurqe9uxoBa0uH537qxnsfW4se0scOWuEEf2XLvLuoYVFnp3XNreBO0nWCuL6jc27PvtadzXPO0ju0exidikSKIoRG63JEDW9y1UkklMxv//RoJJJLQail1/1a/5OP/GO/wC+LkF1/wBWv+Tj/wAY7/vihzfJ9V+L5vo431i/5Td/Ub/35ZK1vrF/ym7+o3/vyyU+HyR/uol8x81JJJJ61//Sr5n9Kt+h9N3839Dn/BoH3LlUlfGwah3eq+5dd9W/+Tj/AMY7/vi8nSUeb5PqvxfN9H0D6xf8pu/qN/78sn7lyqSdD5I/3US+Y+b6L/7Cf0T/AF/64kvOklGuf//Z" height="30" width="30"></a><span style="font-size: 13.008px; line-height: 1.538em;">&nbsp;&nbsp;</span><a href="https://twitter.com/PUMusicLibrary" target="_blank" title="Mendel Music Twitter" style="font-size: 13.008px; line-height: 1.538em;"><img alt="Mendel Music Twitter" src="data:image/jpeg;base64,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U2VudW0AAAAAQ2xyUwAAAABSR0JDAAAAAEludGVlbnVtAAAAAEludGUAAAAAQ2xybQAAAABNcEJsYm9vbAEAAAAPcHJpbnRTaXh0ZWVuQml0Ym9vbAAAAAALcHJpbnRlck5hbWVURVhUAAAAAQAAADhCSU0EOwAAAAABsgAAABAAAAABAAAAAAAScHJpbnRPdXRwdXRPcHRpb25zAAAAEgAAAABDcHRuYm9vbAAAAAAAQ2xicmJvb2wAAAAAAFJnc01ib29sAAAAAABDcm5DYm9vbAAAAAAAQ250Q2Jvb2wAAAAAAExibHNib29sAAAAAABOZ3R2Ym9vbAAAAAAARW1sRGJvb2wAAAAAAEludHJib29sAAAAAABCY2tnT2JqYwAAAAEAAAAAAABSR0JDAAAAAwAAAABSZCAgZG91YkBv4AAAAAAAAAAAAEdybiBkb3ViQG/gAAAAAAAAAAAAQmwgIGRvdWJAb+AAAAAAAAAAAABCcmRUVW50RiNSbHQAAAAAAAAAAAAAAABCbGQgVW50RiNSbHQAAAAAAAAAAAAAAABSc2x0VW50RiNQeGxAUgAAAAAAAAAAAAp2ZWN0b3JEYXRhYm9vbAEAAAAAUGdQc2VudW0AAAAAUGdQcwAAAABQZ1BDAAAAAExlZnRVbnRGI1JsdAAAAAAAAAAAAAAAAFRvcCBVbnRGI1JsdAAAAAAAAAAAAAAAAFNjbCBVbnRGI1ByY0BZAAAAAAAAOEJJTQPtAAAAAAAQAEgAAAABAAEASAAAAAEAAThCSU0EJgAAAAAADgAAAAAAAAAAAAA/gAAAOEJJTQQNAAAAAAAEAAAAHjhCSU0EGQAAAAAABAAAAB44QklNA/MAAAAAAAkAAAAAAAAAAAEAOEJJTScQAAAAAAAKAAEAAAAAAAAAAjhCSU0D9QAAAAAASAAvZmYAAQBsZmYABgAAAAAAAQAvZmYAAQChmZoABgAAAAAAAQAyAAAAAQBaAAAABgAAAAAAAQA1AAAAAQAtAAAABgAAAAAAAThCSU0D+AAAAAAAcAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAA4QklN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cy5hZG9iZS5jb20vY2FtZXJhLXJhdy1zZXR0aW5ncy8xLjAvIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOnhtcD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLyIgeG1sbnM6ZGM9Imh0dHA6Ly9wdXJsLm9yZy9kYy9lbGVtZW50cy8xLjEvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RFdnQ9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZUV2ZW50IyIgY3JzOkFscmVhZHlBcHBsaWVkPSJUcnVlIiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiB4bXA6Q3JlYXRlRGF0ZT0iMjAxNS0wNy0yN1QxMjowOTowMy0wNDowMCIgeG1wOk1vZGlmeURhdGU9IjIwMTUtMDctMjdUMTM6MTM6NDktMDQ6MDAiIHhtcDpNZXRhZGF0YURhdGU9IjIwMTUtMDctMjdUMTM6MTM6NDktMDQ6MDAiIGRjOmZvcm1hdD0iaW1hZ2UvanBlZyIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpDQ0FGRTZEODgyMzRFNTExOUI0NDlGNEJCM0JFMTcyOSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpDQkFGRTZEODgyMzRFNTExOUI0NDlGNEJCM0JFMTcyOSIgeG1wTU06T3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOkNCQUZFNkQ4ODIzNEU1MTE5QjQ0OUY0QkIzQkUxNzI5Ij4gPHhtcE1NOkhpc3Rvcnk+IDxyZGY6U2VxPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6Q0JBRkU2RDg4MjM0RTUxMTlCNDQ5RjRCQjNCRTE3MjkiIHN0RXZ0OndoZW49IjIwMTUtMDctMjdUMTM6MTM6NDktMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzUuMSBXaW5kb3dzIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJzYXZlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDpDQ0FGRTZEODgyMzRFNTExOUI0NDlGNEJCM0JFMTcyOSIgc3RFdnQ6d2hlbj0iMjAxNS0wNy0yN1QxMzoxMzo0OS0wNDowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENTNS4xIFdpbmRvd3MiIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPC9yZGY6U2VxPiA8L3htcE1NOkhpc3Rvcnk+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgIDw/eHBhY2tldCBlbmQ9InciPz7/7gAOQWRvYmUAZIAAAAAB/9sAhAASDg4OEA4VEBAVHhMREx4jGhUVGiMiFxcXFxciEQwMDAwMDBEMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMARQTExYZFhsXFxsUDg4OFBQODg4OFBEMDAwMDBERDAwMDAwMEQwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAz/wAARCAAyADIDASIAAhEBAxEB/90ABAAE/8QBPwAAAQUBAQEBAQEAAAAAAAAAAwABAgQFBgcICQoLAQABBQEBAQEBAQAAAAAAAAABAAIDBAUGBwgJCgsQAAEEAQMCBAIFBwYIBQMMMwEAAhEDBCESMQVBUWETInGBMgYUkaGxQiMkFVLBYjM0coLRQwclklPw4fFjczUWorKDJkSTVGRFwqN0NhfSVeJl8rOEw9N14/NGJ5SkhbSVxNTk9KW1xdXl9VZmdoaWprbG1ub2N0dXZ3eHl6e3x9fn9xEAAgIBAgQEAwQFBgcHBgU1AQACEQMhMRIEQVFhcSITBTKBkRShsUIjwVLR8DMkYuFygpJDUxVjczTxJQYWorKDByY1wtJEk1SjF2RFVTZ0ZeLys4TD03Xj80aUpIW0lcTU5PSltcXV5fVWZnaGlqa2xtbm9ic3R1dnd4eXp7fH/9oADAMBAAIRAxEAPwDUzs+2+1zWuLaWmGtGkx+e9Uk0o7sS4YzMmJrdMx+bB2+9aoEYAAen9Ef3nGkZTJkbl+lL+6hSTStHA6Yclnq2OLK+Gxy5Kc4xFyNBUMcpnhiLLnotORdQ7dU4tPh2P9Zi1L+iCJosjxD/APybFlZFXo2FkkjsSNs/ytibHJCeg9X9WS6WLJjNn0/1ol2f2zX+5/g93/XP9CksGUkz7tj7Fk+9Ze/4P//QIuj6ObDiBrwCzXY4GdJdvrsaualavRslzbjQXgMfqGu7u/4N35i0OYiTjNfo+pzOWkI5Bf6XodG/o+JaZZNTj+79H/ttyt41AooZSDu2CJ4lFSVEzkRRJlEd3QjjhEmQAjI9lnHa0niASuNe91ji95LnO1JK6Pq+UKcY1g/pLvaB/J/wrlzMq3ysaiZfvbf4LT5uVyER+h83+EySUZSVpqP/0VKu4uPhXR6mT6Tu7S2P827d6ar5ND8e99Lxq06Hxb+Y9Blah9Q0PDf6UXJHpPqjxV+jJ7GqzFpqDRcC0fnOeHH/AD3OVXJ61i1Aio+s/sB9H+1YuY0SlQDlo3ciZs55qVVERh/zk1+RZkWm20y4/cB+61ClNKXOg1JVgUNA1jZNleUlo/sbL/d/we/+3/oP66SZ7sP3gyezk/dk/wD/0ug69/NM/m+fzv5z/rC51cQkr/L/AM2HO5n+cP0e3SXEJKZge3Wl0b+lt/m/7f0//Qf+WvNkkzL8kv7rJi/nI/3n3FJeHJLNdR//2Q==" height="30" width="30"></a></p><p>Visit the Mendel Music Library on&nbsp;<a href="https://www.facebook.com/MendelMusicLibrary" target="_blank" title="Mendel Music Facebook">Facebook</a>&nbsp;and&nbsp;<a href="https://twitter.com/PUMusicLibrary" target="_blank" title="Mendel Music Twitter">Twitter</a>&nbsp;for new exciting additions to the library, music news and library happenings.</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f91eb3d0-c2e2-428f-ab37-68ac5294b49c';
  $display->content['new-f91eb3d0-c2e2-428f-ab37-68ac5294b49c'] = $pane;
  $display->panels['first'][3] = 'new-f91eb3d0-c2e2-428f-ab37-68ac5294b49c';
  $pane = new stdClass();
  $pane->pid = 'new-d21f98ab-41ea-4323-86d0-ed80e146e526';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'hidden',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd21f98ab-41ea-4323-86d0-ed80e146e526';
  $display->content['new-d21f98ab-41ea-4323-86d0-ed80e146e526'] = $pane;
  $display->panels['first'][4] = 'new-d21f98ab-41ea-4323-86d0-ed80e146e526';
  $pane = new stdClass();
  $pane->pid = 'new-0d7ed5d2-a1ab-4b41-8fc7-338d30286bee';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_6';
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
  $pane->uuid = '0d7ed5d2-a1ab-4b41-8fc7-338d30286bee';
  $display->content['new-0d7ed5d2-a1ab-4b41-8fc7-338d30286bee'] = $pane;
  $display->panels['middle'][0] = 'new-0d7ed5d2-a1ab-4b41-8fc7-338d30286bee';
  $pane = new stdClass();
  $pane->pid = 'new-342013f6-7353-4c42-b885-868f36a2f0a9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-mendel_search_tabs';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Mendel Music Search by Format',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '342013f6-7353-4c42-b885-868f36a2f0a9';
  $display->content['new-342013f6-7353-4c42-b885-868f36a2f0a9'] = $pane;
  $display->panels['middle'][1] = 'new-342013f6-7353-4c42-b885-868f36a2f0a9';
  $pane = new stdClass();
  $pane->pid = 'new-66c0e6fe-206a-44b4-bca0-1df36640c1ca';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_interior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'hidden',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '66c0e6fe-206a-44b4-bca0-1df36640c1ca';
  $display->content['new-66c0e6fe-206a-44b4-bca0-1df36640c1ca'] = $pane;
  $display->panels['middle'][2] = 'new-66c0e6fe-206a-44b4-bca0-1df36640c1ca';
  $pane = new stdClass();
  $pane->pid = 'new-bd79c592-93de-4e08-bad6-882ba2146a86';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_default',
    'formatter_settings' => array(),
    'label' => 'title',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bd79c592-93de-4e08-bad6-882ba2146a86';
  $display->content['new-bd79c592-93de-4e08-bad6-882ba2146a86'] = $pane;
  $display->panels['middle'][3] = 'new-bd79c592-93de-4e08-bad6-882ba2146a86';
  $pane = new stdClass();
  $pane->pid = 'new-1c12900f-8925-4e65-add2-0f71cc140db5';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_15';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1c12900f-8925-4e65-add2-0f71cc140db5';
  $display->content['new-1c12900f-8925-4e65-add2-0f71cc140db5'] = $pane;
  $display->panels['middle'][4] = 'new-1c12900f-8925-4e65-add2-0f71cc140db5';
  $pane = new stdClass();
  $pane->pid = 'new-02a7925c-3173-486c-a34f-eb521f145cbd';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_14';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '02a7925c-3173-486c-a34f-eb521f145cbd';
  $display->content['new-02a7925c-3173-486c-a34f-eb521f145cbd'] = $pane;
  $display->panels['middle'][5] = 'new-02a7925c-3173-486c-a34f-eb521f145cbd';
  $pane = new stdClass();
  $pane->pid = 'new-99462dbd-5394-4ebf-8a21-044084e4da29';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Music Chat',
    'body' => '<div id="libchat_a286af3a1b028c6b334a404da1f3090b"></div><script type="text/javascript" src="https://v2.libanswers.com/load_chat.php?hash=a286af3a1b028c6b334a404da1f3090b"></script>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '99462dbd-5394-4ebf-8a21-044084e4da29';
  $display->content['new-99462dbd-5394-4ebf-8a21-044084e4da29'] = $pane;
  $display->panels['second'][0] = 'new-99462dbd-5394-4ebf-8a21-044084e4da29';
  $pane = new stdClass();
  $pane->pid = 'new-7653c0bd-f608-4b79-947c-45100392f638';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'pul_editor_html',
    'name' => 'mendel_chat_hours',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7653c0bd-f608-4b79-947c-45100392f638';
  $display->content['new-7653c0bd-f608-4b79-947c-45100392f638'] = $pane;
  $display->panels['second'][1] = 'new-7653c0bd-f608-4b79-947c-45100392f638';
  $pane = new stdClass();
  $pane->pid = 'new-aa94038f-d3e3-4a37-abdd-f022fa36c176';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'aa94038f-d3e3-4a37-abdd-f022fa36c176';
  $display->content['new-aa94038f-d3e3-4a37-abdd-f022fa36c176'] = $pane;
  $display->panels['second'][2] = 'new-aa94038f-d3e3-4a37-abdd-f022fa36c176';
  $pane = new stdClass();
  $pane->pid = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_spotlight_item';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 1,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'links' => 0,
      'view_mode' => 'teaser',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $display->content['new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6'] = $pane;
  $display->panels['second'][3] = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane = new stdClass();
  $pane->pid = 'new-01eeca39-390f-4f63-b86e-28f2e1b2bdfe';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '01eeca39-390f-4f63-b86e-28f2e1b2bdfe';
  $display->content['new-01eeca39-390f-4f63-b86e-28f2e1b2bdfe'] = $pane;
  $display->panels['second'][4] = 'new-01eeca39-390f-4f63-b86e-28f2e1b2bdfe';
  $pane = new stdClass();
  $pane->pid = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_label',
    'formatter_settings' => array(
      'check_access' => 1,
      'link' => 1,
      'links' => 1,
      'text' => '[entity:label]',
      'view_mode' => 'teaser',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
  $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
  $display->panels['second'][5] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane = new stdClass();
  $pane->pid = 'new-e79db668-d0a2-4208-8666-461039bc5e0d';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '6',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'link' => 1,
      'links' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e79db668-d0a2-4208-8666-461039bc5e0d';
  $display->content['new-e79db668-d0a2-4208-8666-461039bc5e0d'] = $pane;
  $display->panels['second'][6] = 'new-e79db668-d0a2-4208-8666-461039bc5e0d';
  $pane = new stdClass();
  $pane->pid = 'new-6bb2c97e-5317-4fe9-baf2-063501761cb8';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Resource Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '6bb2c97e-5317-4fe9-baf2-063501761cb8';
  $display->content['new-6bb2c97e-5317-4fe9-baf2-063501761cb8'] = $pane;
  $display->panels['second'][7] = 'new-6bb2c97e-5317-4fe9-baf2-063501761cb8';
  $pane = new stdClass();
  $pane->pid = 'new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'link_default',
    'formatter_settings' => array(),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Music Research Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
  $display->content['new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2'] = $pane;
  $display->panels['second'][8] = 'new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
  $pane = new stdClass();
  $pane->pid = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(
      'depth' => '0',
      'hidden' => 1,
      'target' => 'node',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
  $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
  $display->panels['second'][9] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
  $pane = new stdClass();
  $pane->pid = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Mendel Music Library',
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ac92d8e0-98f5-4119-9764-f7d3ef4f8652'] = $handler;

  return $export;
}
