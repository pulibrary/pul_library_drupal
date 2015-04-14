<?php
/**
 * @file
 * pul_libraries_ct.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_libraries_ct_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_18';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Branch Pages',
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
            'visibility_setting' => '0',
            'paths' => 'libraries/eastasianlib
libraries/engineering
libraries/architecture
libraries/stokes
libraries/plasma-physics
libraries/scilib
libraries/music
libraries/marquand',
          ),
          'context' => 'empty',
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
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
    $pane->panel = 'first';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'About',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
    $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
    $display->panels['first'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
    $pane = new stdClass();
    $pane->pid = 'new-77f81642-e4a6-4611-b3a2-7de98117b67c';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'calendar/week',
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '%cal:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '%cal:nid',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77f81642-e4a6-4611-b3a2-7de98117b67c';
    $display->content['new-77f81642-e4a6-4611-b3a2-7de98117b67c'] = $pane;
    $display->panels['first'][1] = 'new-77f81642-e4a6-4611-b3a2-7de98117b67c';
    $pane = new stdClass();
    $pane->pid = 'new-ffb439cc-00cf-4d36-82c5-b7e4d9593be6';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_5';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%cal:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ffb439cc-00cf-4d36-82c5-b7e4d9593be6';
    $display->content['new-ffb439cc-00cf-4d36-82c5-b7e4d9593be6'] = $pane;
    $display->panels['first'][2] = 'new-ffb439cc-00cf-4d36-82c5-b7e4d9593be6';
    $pane = new stdClass();
    $pane->pid = 'new-d7d341b9-f98e-47ec-a709-c1ebf67612ab';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'building_maps-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%building:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd7d341b9-f98e-47ec-a709-c1ebf67612ab';
    $display->content['new-d7d341b9-f98e-47ec-a709-c1ebf67612ab'] = $pane;
    $display->panels['first'][3] = 'new-d7d341b9-f98e-47ec-a709-c1ebf67612ab';
    $pane = new stdClass();
    $pane->pid = 'new-b410bbf5-6832-4725-b1aa-13471b06be74';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '%cal:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Today&#x2019;s Hours',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b410bbf5-6832-4725-b1aa-13471b06be74';
    $display->content['new-b410bbf5-6832-4725-b1aa-13471b06be74'] = $pane;
    $display->panels['first'][4] = 'new-b410bbf5-6832-4725-b1aa-13471b06be74';
    $pane = new stdClass();
    $pane->pid = 'new-09a05689-416a-46db-beea-bf08dd380368';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09a05689-416a-46db-beea-bf08dd380368';
    $display->content['new-09a05689-416a-46db-beea-bf08dd380368'] = $pane;
    $display->panels['second'][0] = 'new-09a05689-416a-46db-beea-bf08dd380368';
    $pane = new stdClass();
    $pane->pid = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%cal:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $display->content['new-ac2abf14-0345-47b0-8b21-62a91dc61e76'] = $pane;
    $display->panels['second'][1] = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_21';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Stokes Library',
    'no_blocks' => 0,
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
            'paths' => 'content/stokes-library',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
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
  $display->uuid = '7d26fa1e-ccff-4e1b-91bb-ff65a3a3fc75';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67679e71-4357-4b20-8334-78a2813230c8';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'About',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67679e71-4357-4b20-8334-78a2813230c8';
    $display->content['new-67679e71-4357-4b20-8334-78a2813230c8'] = $pane;
    $display->panels['left'][0] = 'new-67679e71-4357-4b20-8334-78a2813230c8';
    $pane = new stdClass();
    $pane->pid = 'new-14496f67-c3c0-4e01-9616-c3357999b0d8';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7820',
      ),
      'override_title' => 1,
      'override_title_text' => 'Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14496f67-c3c0-4e01-9616-c3357999b0d8';
    $display->content['new-14496f67-c3c0-4e01-9616-c3357999b0d8'] = $pane;
    $display->panels['left'][1] = 'new-14496f67-c3c0-4e01-9616-c3357999b0d8';
    $pane = new stdClass();
    $pane->pid = 'new-d13d7377-ac69-4dbe-ba0d-baee38cbdbdf';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd13d7377-ac69-4dbe-ba0d-baee38cbdbdf';
    $display->content['new-d13d7377-ac69-4dbe-ba0d-baee38cbdbdf'] = $pane;
    $display->panels['right'][0] = 'new-d13d7377-ac69-4dbe-ba0d-baee38cbdbdf';
    $pane = new stdClass();
    $pane->pid = 'new-4129513c-b4e9-4464-a492-ee803425fc05';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_5';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%cal:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4129513c-b4e9-4464-a492-ee803425fc05';
    $display->content['new-4129513c-b4e9-4464-a492-ee803425fc05'] = $pane;
    $display->panels['right'][1] = 'new-4129513c-b4e9-4464-a492-ee803425fc05';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-67679e71-4357-4b20-8334-78a2813230c8';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_21'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_24';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Firestone Library',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second firestone-library',
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
            'paths' => 'libraries/firestone',
          ),
          'context' => 'empty',
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
  $display->uuid = '98999519-4f3d-405a-938b-82590f4e0286';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f29f2df1-f860-42a0-945f-f23e02827d43';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_long_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = 'f29f2df1-f860-42a0-945f-f23e02827d43';
    $display->content['new-f29f2df1-f860-42a0-945f-f23e02827d43'] = $pane;
    $display->panels['first'][0] = 'new-f29f2df1-f860-42a0-945f-f23e02827d43';
    $pane = new stdClass();
    $pane->pid = 'new-6537b419-0ad7-436b-9252-1d7d651fd84a';
    $pane->panel = 'first';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7553',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
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
    $pane->uuid = '6537b419-0ad7-436b-9252-1d7d651fd84a';
    $display->content['new-6537b419-0ad7-436b-9252-1d7d651fd84a'] = $pane;
    $display->panels['first'][1] = 'new-6537b419-0ad7-436b-9252-1d7d651fd84a';
    $pane = new stdClass();
    $pane->pid = 'new-59441d97-43a0-4782-8f32-ec4d7dd89dbb';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => 'About',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59441d97-43a0-4782-8f32-ec4d7dd89dbb';
    $display->content['new-59441d97-43a0-4782-8f32-ec4d7dd89dbb'] = $pane;
    $display->panels['second'][0] = 'new-59441d97-43a0-4782-8f32-ec4d7dd89dbb';
    $pane = new stdClass();
    $pane->pid = 'new-7e61c9c0-89f3-406d-93db-00cc9e47f4ee';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'current_floor_plan_files-panel_pane_1';
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
    $pane->uuid = '7e61c9c0-89f3-406d-93db-00cc9e47f4ee';
    $display->content['new-7e61c9c0-89f3-406d-93db-00cc9e47f4ee'] = $pane;
    $display->panels['second'][1] = 'new-7e61c9c0-89f3-406d-93db-00cc9e47f4ee';
    $pane = new stdClass();
    $pane->pid = 'new-e036616e-7301-4c11-a8e0-fdd6017120bc';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Renovation Updates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e036616e-7301-4c11-a8e0-fdd6017120bc';
    $display->content['new-e036616e-7301-4c11-a8e0-fdd6017120bc'] = $pane;
    $display->panels['second'][2] = 'new-e036616e-7301-4c11-a8e0-fdd6017120bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f29f2df1-f860-42a0-945f-f23e02827d43';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_24'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function pul_libraries_ct_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'libraries';
  $page->task = 'page';
  $page->admin_title = 'Libraries';
  $page->admin_description = '';
  $page->path = 'libraries';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_libraries_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'libraries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Libraries',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second libraries-page',
    'css_id' => 'libraries-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'libraries',
          ),
          'context' => 'empty',
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
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Libraries';
  $display->uuid = 'c67ff6a3-cce7-468c-b132-9465266e038f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-09e8abeb-dd49-41c1-b106-c7d1d95e1cbf';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_2';
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
    $pane->uuid = '09e8abeb-dd49-41c1-b106-c7d1d95e1cbf';
    $display->content['new-09e8abeb-dd49-41c1-b106-c7d1d95e1cbf'] = $pane;
    $display->panels['first'][0] = 'new-09e8abeb-dd49-41c1-b106-c7d1d95e1cbf';
    $pane = new stdClass();
    $pane->pid = 'new-fc889e58-2d8c-4179-9345-06cabf28008d';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Libraries Page Block',
      'title' => 'Collections',
      'body' => '<ul>
<li><a href="/collections-and-collection-development">Collection Development at Princeton</a></li>
</ul>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'collections',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc889e58-2d8c-4179-9345-06cabf28008d';
    $display->content['new-fc889e58-2d8c-4179-9345-06cabf28008d'] = $pane;
    $display->panels['second'][0] = 'new-fc889e58-2d8c-4179-9345-06cabf28008d';
    $pane = new stdClass();
    $pane->pid = 'new-1c062cf0-1ada-4b4f-975a-e8a1e68875d4';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'collections-panel_pane_3';
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
    $pane->uuid = '1c062cf0-1ada-4b4f-975a-e8a1e68875d4';
    $display->content['new-1c062cf0-1ada-4b4f-975a-e8a1e68875d4'] = $pane;
    $display->panels['second'][1] = 'new-1c062cf0-1ada-4b4f-975a-e8a1e68875d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['libraries'] = $page;

  return $pages;

}
