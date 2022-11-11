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
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_18';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 45;
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
            'paths' => '2020-21-resources
architecture
digital-collections
eastasian
eastasianlib
engineering
fall-2020
lewis
libraries/architecture
libraries/engineering
libraries/music
libraries/plasma-physics
libraries/recap
libraries/scilib
libraries/stokes
makerspace
marquand
music
plasma-physics
rdos
research-data
services/open-access-publishing-program
stokes
videoservices
vdl',
            'visibility_setting' => '0',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Branch Pages',
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
  $display->storage_id = 'node_view_panel_context_18';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'middle';
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
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_21';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
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
    'title' => 'Stokes Library',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_21';
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
  $handler->weight = -26;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'firestone
firestone/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second firestone-library branch-libraries',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Firestone Library',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '98999519-4f3d-405a-938b-82590f4e0286';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_24';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f766f08-48aa-4e1a-b38d-17a2885038b7';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-firestone';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f766f08-48aa-4e1a-b38d-17a2885038b7';
  $display->content['new-2f766f08-48aa-4e1a-b38d-17a2885038b7'] = $pane;
  $display->panels['first'][0] = 'new-2f766f08-48aa-4e1a-b38d-17a2885038b7';
  $pane = new stdClass();
  $pane->pid = 'new-c834e26e-7795-4abd-9f1c-b86fdfe0636e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_firestone-libhours_firestone';
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
  $pane->uuid = 'c834e26e-7795-4abd-9f1c-b86fdfe0636e';
  $display->content['new-c834e26e-7795-4abd-9f1c-b86fdfe0636e'] = $pane;
  $display->panels['first'][1] = 'new-c834e26e-7795-4abd-9f1c-b86fdfe0636e';
  $pane = new stdClass();
  $pane->pid = 'new-fca19c8b-2b66-46a1-92c5-f8a4fce945e5';
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
  $pane->uuid = 'fca19c8b-2b66-46a1-92c5-f8a4fce945e5';
  $display->content['new-fca19c8b-2b66-46a1-92c5-f8a4fce945e5'] = $pane;
  $display->panels['first'][2] = 'new-fca19c8b-2b66-46a1-92c5-f8a4fce945e5';
  $pane = new stdClass();
  $pane->pid = 'new-53ba4930-9de5-4cf0-a379-40df7e8c076b';
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
  $pane->uuid = '53ba4930-9de5-4cf0-a379-40df7e8c076b';
  $display->content['new-53ba4930-9de5-4cf0-a379-40df7e8c076b'] = $pane;
  $display->panels['first'][3] = 'new-53ba4930-9de5-4cf0-a379-40df7e8c076b';
  $pane = new stdClass();
  $pane->pid = 'new-da5bbe9d-0fbb-41cc-abc9-b12eaddcab58';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'firestone/*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7787',
    ),
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
  $pane->uuid = 'da5bbe9d-0fbb-41cc-abc9-b12eaddcab58';
  $display->content['new-da5bbe9d-0fbb-41cc-abc9-b12eaddcab58'] = $pane;
  $display->panels['first'][4] = 'new-da5bbe9d-0fbb-41cc-abc9-b12eaddcab58';
  $pane = new stdClass();
  $pane->pid = 'new-2739e4c8-9004-4bfc-93aa-f82eb8195850';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2739e4c8-9004-4bfc-93aa-f82eb8195850';
  $display->content['new-2739e4c8-9004-4bfc-93aa-f82eb8195850'] = $pane;
  $display->panels['middle'][0] = 'new-2739e4c8-9004-4bfc-93aa-f82eb8195850';
  $pane = new stdClass();
  $pane->pid = 'new-65b9a9ad-c670-4fdb-afa2-aa81d9d05182';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '65b9a9ad-c670-4fdb-afa2-aa81d9d05182';
  $display->content['new-65b9a9ad-c670-4fdb-afa2-aa81d9d05182'] = $pane;
  $display->panels['middle'][1] = 'new-65b9a9ad-c670-4fdb-afa2-aa81d9d05182';
  $pane = new stdClass();
  $pane->pid = 'new-6537b419-0ad7-436b-9252-1d7d651fd84a';
  $pane->panel = 'middle';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'firestone',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '7553',
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
  $pane->uuid = '6537b419-0ad7-436b-9252-1d7d651fd84a';
  $display->content['new-6537b419-0ad7-436b-9252-1d7d651fd84a'] = $pane;
  $display->panels['middle'][2] = 'new-6537b419-0ad7-436b-9252-1d7d651fd84a';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7e61c9c0-89f3-406d-93db-00cc9e47f4ee';
  $display->content['new-7e61c9c0-89f3-406d-93db-00cc9e47f4ee'] = $pane;
  $display->panels['second'][0] = 'new-7e61c9c0-89f3-406d-93db-00cc9e47f4ee';
  $pane = new stdClass();
  $pane->pid = 'new-0c0d618b-7a69-4f82-b173-22ee038c3ba4';
  $pane->panel = 'second';
  $pane->type = 'token';
  $pane->subtype = 'node:field-amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
    'sanitize' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0c0d618b-7a69-4f82-b173-22ee038c3ba4';
  $display->content['new-0c0d618b-7a69-4f82-b173-22ee038c3ba4'] = $pane;
  $display->panels['second'][1] = 'new-0c0d618b-7a69-4f82-b173-22ee038c3ba4';
  $pane = new stdClass();
  $pane->pid = 'new-a56d38e3-8bed-4433-a61c-1c768b3b3583';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Firestone Study Rooms',
    'body' => '<p>Study&nbsp;rooms are designed for Princeton University students and/or faculty to work on various projects, and are available on a first-come, first-served basis or can be reserved ahead of time through the <a href="https://libcal.princeton.edu/reserve/firestone-study-rooms">room reservation system</a>.</p><p>Reservations have precedent over walk-in usage.&nbsp;</p>',
    'format' => 'pul_editor_html',
    'name' => 'firestone_study_room_blurb',
    'substitute' => 1,
    'title' => 'Study Rooms',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a56d38e3-8bed-4433-a61c-1c768b3b3583';
  $display->content['new-a56d38e3-8bed-4433-a61c-1c768b3b3583'] = $pane;
  $display->panels['second'][2] = 'new-a56d38e3-8bed-4433-a61c-1c768b3b3583';
  $pane = new stdClass();
  $pane->pid = 'new-18cdaad0-46c2-49d1-ae48-03636301af8c';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tiger Tea Room Blurb',
    'body' => '<p>Dining Services Calendar</p>',
    'format' => 'pul_editor_html',
    'name' => 'tiger_tea_room_blurb',
    'substitute' => 1,
    'title' => 'Tiger Tea Room',
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
  $pane->uuid = '18cdaad0-46c2-49d1-ae48-03636301af8c';
  $display->content['new-18cdaad0-46c2-49d1-ae48-03636301af8c'] = $pane;
  $display->panels['second'][3] = 'new-18cdaad0-46c2-49d1-ae48-03636301af8c';
  $pane = new stdClass();
  $pane->pid = 'new-7abbee4d-32a4-4e3b-91fb-a173697d1826';
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
      'file_view_mode' => 'default',
      'image_link' => '',
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Firestone Library',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7abbee4d-32a4-4e3b-91fb-a173697d1826';
  $display->content['new-7abbee4d-32a4-4e3b-91fb-a173697d1826'] = $pane;
  $display->panels['top'][0] = 'new-7abbee4d-32a4-4e3b-91fb-a173697d1826';
  $pane = new stdClass();
  $pane->pid = 'new-6d53f61b-754f-4bad-9c5b-a44017847277';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'firestone/*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7787',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Firestone Library',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6d53f61b-754f-4bad-9c5b-a44017847277';
  $display->content['new-6d53f61b-754f-4bad-9c5b-a44017847277'] = $pane;
  $display->panels['top'][1] = 'new-6d53f61b-754f-4bad-9c5b-a44017847277';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second libraries-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'libraries-page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Libraries',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Libraries';
  $display->uuid = 'c67ff6a3-cce7-468c-b132-9465266e038f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_libraries_panel_context';
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
    'body' => '<ul>
<li><a href="/collections-and-collection-development">Collection Development at Princeton</a></li>
</ul>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
    'title' => 'Collections',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'collections',
    'css_id' => '',
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
