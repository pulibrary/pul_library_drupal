<?php

/**
 * @file
 * pul_branch_plasma_physics_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_branch_plasma_physics_library_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_58';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/plasma-physics/*
plasma-physics/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-plasma',
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
    'title' => 'Plasma Physics Library Branch Pages',
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
  $display->storage_id = 'node_view_panel_context_58';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9b00f811-6a8e-46cc-9a63-deed652cd817';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-plasma-physics';
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
  $pane->uuid = '9b00f811-6a8e-46cc-9a63-deed652cd817';
  $display->content['new-9b00f811-6a8e-46cc-9a63-deed652cd817'] = $pane;
  $display->panels['first'][0] = 'new-9b00f811-6a8e-46cc-9a63-deed652cd817';
  $pane = new stdClass();
  $pane->pid = 'new-55be364a-7f32-447a-9625-3f2d5d3ea7d7';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_plasma-libhours_plasma';
  $pane->shown = FALSE;
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
  $pane->uuid = '55be364a-7f32-447a-9625-3f2d5d3ea7d7';
  $display->content['new-55be364a-7f32-447a-9625-3f2d5d3ea7d7'] = $pane;
  $display->panels['first'][1] = 'new-55be364a-7f32-447a-9625-3f2d5d3ea7d7';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7793',
    ),
    'override_title' => 1,
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
  $pane->pid = 'new-faf854d7-40bf-46af-9a88-912f954839b6';
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
  $pane->css = array(
    'css_class' => 'alert--message',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'faf854d7-40bf-46af-9a88-912f954839b6';
  $display->content['new-faf854d7-40bf-46af-9a88-912f954839b6'] = $pane;
  $display->panels['middle'][0] = 'new-faf854d7-40bf-46af-9a88-912f954839b6';
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
  $pane->pid = 'new-b719a358-f409-47a0-bc66-5a7c4ae18c06';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '532',
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
  $pane->uuid = 'b719a358-f409-47a0-bc66-5a7c4ae18c06';
  $display->content['new-b719a358-f409-47a0-bc66-5a7c4ae18c06'] = $pane;
  $display->panels['second'][0] = 'new-b719a358-f409-47a0-bc66-5a7c4ae18c06';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7793',
    ),
    'override_title' => 1,
    'override_title_text' => 'Plasma Physics Library',
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
  $export['node_view_panel_context_58'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_59';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
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
            'paths' => 'libraries/plasma-physics
plasma-physics',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-plasma',
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
    'title' => 'Plasma Physics Library Landing Page',
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
  $display->title = 'Plasma Physics Library';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_59';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-82ad6790-34f7-44f4-abe8-f23f9c0918ad';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-plasma-physics';
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
  $pane->uuid = '82ad6790-34f7-44f4-abe8-f23f9c0918ad';
  $display->content['new-82ad6790-34f7-44f4-abe8-f23f9c0918ad'] = $pane;
  $display->panels['first'][0] = 'new-82ad6790-34f7-44f4-abe8-f23f9c0918ad';
  $pane = new stdClass();
  $pane->pid = 'new-9b69bd4a-71fb-469b-8ef7-bd9c435ac318';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_plasma-libhours_plasma';
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
  $pane->uuid = '9b69bd4a-71fb-469b-8ef7-bd9c435ac318';
  $display->content['new-9b69bd4a-71fb-469b-8ef7-bd9c435ac318'] = $pane;
  $display->panels['first'][1] = 'new-9b69bd4a-71fb-469b-8ef7-bd9c435ac318';
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
  $pane->pid = 'new-2298786d-1396-42ff-8e2c-dba54288c1a8';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2298786d-1396-42ff-8e2c-dba54288c1a8';
  $display->content['new-2298786d-1396-42ff-8e2c-dba54288c1a8'] = $pane;
  $display->panels['first'][3] = 'new-2298786d-1396-42ff-8e2c-dba54288c1a8';
  $pane = new stdClass();
  $pane->pid = 'new-f9af377d-c322-4bbc-a30f-26bb8f188b1e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_7';
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
  $pane->uuid = 'f9af377d-c322-4bbc-a30f-26bb8f188b1e';
  $display->content['new-f9af377d-c322-4bbc-a30f-26bb8f188b1e'] = $pane;
  $display->panels['middle'][0] = 'new-f9af377d-c322-4bbc-a30f-26bb8f188b1e';
  $pane = new stdClass();
  $pane->pid = 'new-885923fd-30b1-433d-9d4b-f228243e410f';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '885923fd-30b1-433d-9d4b-f228243e410f';
  $display->content['new-885923fd-30b1-433d-9d4b-f228243e410f'] = $pane;
  $display->panels['middle'][1] = 'new-885923fd-30b1-433d-9d4b-f228243e410f';
  $pane = new stdClass();
  $pane->pid = 'new-9f2d33ac-e48d-4c5e-ab75-cdcbdb5f769f';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9f2d33ac-e48d-4c5e-ab75-cdcbdb5f769f';
  $display->content['new-9f2d33ac-e48d-4c5e-ab75-cdcbdb5f769f'] = $pane;
  $display->panels['middle'][2] = 'new-9f2d33ac-e48d-4c5e-ab75-cdcbdb5f769f';
  $pane = new stdClass();
  $pane->pid = 'new-a085f711-458d-4d47-975e-cab98f189a35';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-1',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a085f711-458d-4d47-975e-cab98f189a35';
  $display->content['new-a085f711-458d-4d47-975e-cab98f189a35'] = $pane;
  $display->panels['middle'][3] = 'new-a085f711-458d-4d47-975e-cab98f189a35';
  $pane = new stdClass();
  $pane->pid = 'new-49907fb2-153b-48c4-b7b9-2d8017e03295';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-2',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '49907fb2-153b-48c4-b7b9-2d8017e03295';
  $display->content['new-49907fb2-153b-48c4-b7b9-2d8017e03295'] = $pane;
  $display->panels['middle'][4] = 'new-49907fb2-153b-48c4-b7b9-2d8017e03295';
  $pane = new stdClass();
  $pane->pid = 'new-9d9818ab-1561-4734-b073-ed5060bcbd60';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-3',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9d9818ab-1561-4734-b073-ed5060bcbd60';
  $display->content['new-9d9818ab-1561-4734-b073-ed5060bcbd60'] = $pane;
  $display->panels['middle'][5] = 'new-9d9818ab-1561-4734-b073-ed5060bcbd60';
  $pane = new stdClass();
  $pane->pid = 'new-98dfca6d-7ffc-4fd6-92a7-c2bcc974b741';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-4',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '98dfca6d-7ffc-4fd6-92a7-c2bcc974b741';
  $display->content['new-98dfca6d-7ffc-4fd6-92a7-c2bcc974b741'] = $pane;
  $display->panels['middle'][6] = 'new-98dfca6d-7ffc-4fd6-92a7-c2bcc974b741';
  $pane = new stdClass();
  $pane->pid = 'new-48f2c0da-16b3-4568-836a-df123ce2479c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-5',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '48f2c0da-16b3-4568-836a-df123ce2479c';
  $display->content['new-48f2c0da-16b3-4568-836a-df123ce2479c'] = $pane;
  $display->panels['middle'][7] = 'new-48f2c0da-16b3-4568-836a-df123ce2479c';
  $pane = new stdClass();
  $pane->pid = 'new-79206bc4-6f68-4161-be4c-0c20fd9a7b8e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-6',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '79206bc4-6f68-4161-be4c-0c20fd9a7b8e';
  $display->content['new-79206bc4-6f68-4161-be4c-0c20fd9a7b8e'] = $pane;
  $display->panels['middle'][8] = 'new-79206bc4-6f68-4161-be4c-0c20fd9a7b8e';
  $pane = new stdClass();
  $pane->pid = 'new-eef86046-3753-4b33-94de-3ed10f0c7edd';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'plasma_physics_feeds-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'tab-7',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'eef86046-3753-4b33-94de-3ed10f0c7edd';
  $display->content['new-eef86046-3753-4b33-94de-3ed10f0c7edd'] = $pane;
  $display->panels['middle'][9] = 'new-eef86046-3753-4b33-94de-3ed10f0c7edd';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $display->content['new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6'] = $pane;
  $display->panels['second'][0] = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane = new stdClass();
  $pane->pid = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = TRUE;
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
  $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
  $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
  $display->panels['second'][1] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane = new stdClass();
  $pane->pid = 'new-fa8a9d0c-0af2-4fe0-a24b-2d1ad2853080';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'link' => 1,
      'links' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Service Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fa8a9d0c-0af2-4fe0-a24b-2d1ad2853080';
  $display->content['new-fa8a9d0c-0af2-4fe0-a24b-2d1ad2853080'] = $pane;
  $display->panels['second'][2] = 'new-fa8a9d0c-0af2-4fe0-a24b-2d1ad2853080';
  $pane = new stdClass();
  $pane->pid = 'new-16afc4ca-dffc-44a5-a3f4-7078d940bd72';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'link_default',
    'formatter_settings' => array(),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_text' => 'External Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '16afc4ca-dffc-44a5-a3f4-7078d940bd72';
  $display->content['new-16afc4ca-dffc-44a5-a3f4-7078d940bd72'] = $pane;
  $display->panels['second'][3] = 'new-16afc4ca-dffc-44a5-a3f4-7078d940bd72';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
  $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
  $display->panels['second'][4] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
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
    'override_title_text' => 'Plasma Physics Library',
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
  $export['node_view_panel_context_59'] = $handler;

  return $export;
}
