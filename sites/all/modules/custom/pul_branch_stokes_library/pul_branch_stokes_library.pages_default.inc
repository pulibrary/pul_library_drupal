<?php
/**
 * @file
 * pul_branch_stokes_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_branch_stokes_library_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_56';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 30;
  $handler->conf = array(
    'title' => 'Stokes Library Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-stokes',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-taxonomy_term',
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
            'paths' => 'libraries/stokes
stokes',
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
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_56';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-88b6ea07-f6c7-445e-8b03-72c6fbeadd1a';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-stokes';
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
  $pane->uuid = '88b6ea07-f6c7-445e-8b03-72c6fbeadd1a';
  $display->content['new-88b6ea07-f6c7-445e-8b03-72c6fbeadd1a'] = $pane;
  $display->panels['first'][0] = 'new-88b6ea07-f6c7-445e-8b03-72c6fbeadd1a';
  $pane = new stdClass();
  $pane->pid = 'new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '%cal:tid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Today\'s Hours',
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
  $pane->uuid = '1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
  $display->content['new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a'] = $pane;
  $display->panels['first'][1] = 'new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
  $pane = new stdClass();
  $pane->pid = 'new-b78982e6-3a41-48bd-8d28-258b5d00d32d';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = 'b78982e6-3a41-48bd-8d28-258b5d00d32d';
  $display->content['new-b78982e6-3a41-48bd-8d28-258b5d00d32d'] = $pane;
  $display->panels['first'][2] = 'new-b78982e6-3a41-48bd-8d28-258b5d00d32d';
  $pane = new stdClass();
  $pane->pid = 'new-df54d9b7-91da-428d-aba5-c5a4db7f7dea';
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
  $pane->uuid = 'df54d9b7-91da-428d-aba5-c5a4db7f7dea';
  $display->content['new-df54d9b7-91da-428d-aba5-c5a4db7f7dea'] = $pane;
  $display->panels['first'][3] = 'new-df54d9b7-91da-428d-aba5-c5a4db7f7dea';
  $pane = new stdClass();
  $pane->pid = 'new-7ec6490d-1981-436a-9f84-9f05b0e914e2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_8';
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
  $pane->uuid = '7ec6490d-1981-436a-9f84-9f05b0e914e2';
  $display->content['new-7ec6490d-1981-436a-9f84-9f05b0e914e2'] = $pane;
  $display->panels['middle'][0] = 'new-7ec6490d-1981-436a-9f84-9f05b0e914e2';
  $pane = new stdClass();
  $pane->pid = 'new-8b39e4b1-e072-4053-ba32-86b4b0b65f18';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_search';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Articles+',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8b39e4b1-e072-4053-ba32-86b4b0b65f18';
  $display->content['new-8b39e4b1-e072-4053-ba32-86b4b0b65f18'] = $pane;
  $display->panels['middle'][1] = 'new-8b39e4b1-e072-4053-ba32-86b4b0b65f18';
  $pane = new stdClass();
  $pane->pid = 'new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
  $display->content['new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff'] = $pane;
  $display->panels['middle'][2] = 'new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
  $pane = new stdClass();
  $pane->pid = 'new-12334b83-5ab9-42b1-b921-fab6e158bbec';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '12334b83-5ab9-42b1-b921-fab6e158bbec';
  $display->content['new-12334b83-5ab9-42b1-b921-fab6e158bbec'] = $pane;
  $display->panels['middle'][3] = 'new-12334b83-5ab9-42b1-b921-fab6e158bbec';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
  $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
  $display->panels['second'][1] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane = new stdClass();
  $pane->pid = 'new-89418c64-c041-437f-b316-176cc00761cc';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
      'view_mode' => 'featured_link_url',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Services',
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
  $pane->uuid = '89418c64-c041-437f-b316-176cc00761cc';
  $display->content['new-89418c64-c041-437f-b316-176cc00761cc'] = $pane;
  $display->panels['second'][2] = 'new-89418c64-c041-437f-b316-176cc00761cc';
  $pane = new stdClass();
  $pane->pid = 'new-93404a59-2a59-4011-992b-e3ab9b91e43a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Key Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '93404a59-2a59-4011-992b-e3ab9b91e43a';
  $display->content['new-93404a59-2a59-4011-992b-e3ab9b91e43a'] = $pane;
  $display->panels['second'][3] = 'new-93404a59-2a59-4011-992b-e3ab9b91e43a';
  $pane = new stdClass();
  $pane->pid = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'target' => 'node',
      'depth' => '0',
      'hidden' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
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
    'override_title_text' => 'Stokes Library',
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
  $export['node_view_panel_context_56'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_57';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 30;
  $handler->conf = array(
    'title' => 'Stokes Library Branch Pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-stokes',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Stokes Library',
        'keyword' => 'stokes_config',
        'name' => 'entity:node',
        'entity_id' => '7796',
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
            'paths' => 'libraries/stokes/*
stokes/*',
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
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_57';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f1d8a36f-5189-40bd-8d00-d1f2d41fb98c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-stokes';
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
  $pane->uuid = 'f1d8a36f-5189-40bd-8d00-d1f2d41fb98c';
  $display->content['new-f1d8a36f-5189-40bd-8d00-d1f2d41fb98c'] = $pane;
  $display->panels['first'][0] = 'new-f1d8a36f-5189-40bd-8d00-d1f2d41fb98c';
  $pane = new stdClass();
  $pane->pid = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '3711',
    ),
    'override_title' => 1,
    'override_title_text' => 'Today\'s Hours',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6d8cc8bc-71b5-4b12-87df-6557f117d98e';
  $display->content['new-6d8cc8bc-71b5-4b12-87df-6557f117d98e'] = $pane;
  $display->panels['first'][1] = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
  $pane = new stdClass();
  $pane->pid = 'new-afdd33ac-fb36-431d-8c4e-05f8b085567d';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7796',
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
  $pane->uuid = 'afdd33ac-fb36-431d-8c4e-05f8b085567d';
  $display->content['new-afdd33ac-fb36-431d-8c4e-05f8b085567d'] = $pane;
  $display->panels['first'][2] = 'new-afdd33ac-fb36-431d-8c4e-05f8b085567d';
  $pane = new stdClass();
  $pane->pid = 'new-27a42e25-6319-4fbf-a39b-ec606a614a53';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_8';
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
  $pane->uuid = '27a42e25-6319-4fbf-a39b-ec606a614a53';
  $display->content['new-27a42e25-6319-4fbf-a39b-ec606a614a53'] = $pane;
  $display->panels['middle'][0] = 'new-27a42e25-6319-4fbf-a39b-ec606a614a53';
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
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 11,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->pid = 'new-431eaeac-af37-4a03-b1e6-8f616b2044a2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Faculty Login',
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
  $pane->uuid = '431eaeac-af37-4a03-b1e6-8f616b2044a2';
  $display->content['new-431eaeac-af37-4a03-b1e6-8f616b2044a2'] = $pane;
  $display->panels['middle'][3] = 'new-431eaeac-af37-4a03-b1e6-8f616b2044a2';
  $pane = new stdClass();
  $pane->pid = 'new-29f16e39-9fd6-4fdc-90bb-4af9b04969a6';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Faculty Login',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '29f16e39-9fd6-4fdc-90bb-4af9b04969a6';
  $display->content['new-29f16e39-9fd6-4fdc-90bb-4af9b04969a6'] = $pane;
  $display->panels['middle'][4] = 'new-29f16e39-9fd6-4fdc-90bb-4af9b04969a6';
  $pane = new stdClass();
  $pane->pid = 'new-f308f274-2410-4536-badf-74f83a5a6489';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = FALSE;
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
  $pane->uuid = 'f308f274-2410-4536-badf-74f83a5a6489';
  $display->content['new-f308f274-2410-4536-badf-74f83a5a6489'] = $pane;
  $display->panels['second'][0] = 'new-f308f274-2410-4536-badf-74f83a5a6489';
  $pane = new stdClass();
  $pane->pid = 'new-fd3d7db3-973e-47e5-98da-68fcf50c84c5';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-stokes--get-help';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Get Help',
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
  $pane->uuid = 'fd3d7db3-973e-47e5-98da-68fcf50c84c5';
  $display->content['new-fd3d7db3-973e-47e5-98da-68fcf50c84c5'] = $pane;
  $display->panels['second'][1] = 'new-fd3d7db3-973e-47e5-98da-68fcf50c84c5';
  $pane = new stdClass();
  $pane->pid = 'new-75555f92-99e1-4fe2-9644-998fcbf52221';
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
      'view_mode' => 'featured_link_url',
      'links' => 1,
    ),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Services',
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
  $pane->uuid = '75555f92-99e1-4fe2-9644-998fcbf52221';
  $display->content['new-75555f92-99e1-4fe2-9644-998fcbf52221'] = $pane;
  $display->panels['second'][2] = 'new-75555f92-99e1-4fe2-9644-998fcbf52221';
  $pane = new stdClass();
  $pane->pid = 'new-1df13d2d-afe9-4296-9f47-03b9e9137cf2';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7796',
    ),
    'override_title' => 1,
    'override_title_text' => 'Services',
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
  $pane->uuid = '1df13d2d-afe9-4296-9f47-03b9e9137cf2';
  $display->content['new-1df13d2d-afe9-4296-9f47-03b9e9137cf2'] = $pane;
  $display->panels['second'][3] = 'new-1df13d2d-afe9-4296-9f47-03b9e9137cf2';
  $pane = new stdClass();
  $pane->pid = 'new-6f8dd1ee-b040-466c-87b1-739fa95e8175';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7796',
    ),
    'override_title' => 1,
    'override_title_text' => 'Key Links',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6f8dd1ee-b040-466c-87b1-739fa95e8175';
  $display->content['new-6f8dd1ee-b040-466c-87b1-739fa95e8175'] = $pane;
  $display->panels['second'][4] = 'new-6f8dd1ee-b040-466c-87b1-739fa95e8175';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7796',
    ),
    'override_title' => 1,
    'override_title_text' => 'Stokes Library',
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
  $export['node_view_panel_context_57'] = $handler;

  return $export;
}
