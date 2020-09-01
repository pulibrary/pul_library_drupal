<?php

/**
 * @file
 * pul_custom_node_page_varients.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_custom_node_page_varients_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -40;
  $handler->conf = array(
    'title' => 'Individual Database Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'database-resource-page one-sidebar sidebar-second',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Content from Content (on Content: Affected Databases [field_affected_databases])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_affected_databases-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Content from Content (on Content: Also Known As [field_dboverride_database])',
        'keyword' => 'overridden_title',
        'name' => 'entity_from_field:field_dboverride_database-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Term from node',
        'keyword' => 'term',
        'name' => 'term_from_node',
        'vid' => '12',
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
              'database' => 'database',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Back to Databases',
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'right' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3e2f3b9c-1127-42e7-9774-14f8d73df069';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40ab659a-0fee-41e8-b71f-2eb0397bc9d8';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_5';
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
  $pane->uuid = '40ab659a-0fee-41e8-b71f-2eb0397bc9d8';
  $display->content['new-40ab659a-0fee-41e8-b71f-2eb0397bc9d8'] = $pane;
  $display->panels['first'][0] = 'new-40ab659a-0fee-41e8-b71f-2eb0397bc9d8';
  $pane = new stdClass();
  $pane->pid = 'new-5af94f17-adec-43a3-8d10-078f3e29ea47';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5af94f17-adec-43a3-8d10-078f3e29ea47';
  $display->content['new-5af94f17-adec-43a3-8d10-078f3e29ea47'] = $pane;
  $display->panels['first'][1] = 'new-5af94f17-adec-43a3-8d10-078f3e29ea47';
  $pane = new stdClass();
  $pane->pid = 'new-573d7083-83fd-4dfb-be87-00684711321c';
  $pane->panel = 'first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => 'database',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '573d7083-83fd-4dfb-be87-00684711321c';
  $display->content['new-573d7083-83fd-4dfb-be87-00684711321c'] = $pane;
  $display->panels['first'][2] = 'new-573d7083-83fd-4dfb-be87-00684711321c';
  $pane = new stdClass();
  $pane->pid = 'new-9dd155f3-e5f8-454f-8f24-0fab3d32cc8b';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_1';
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
  $pane->uuid = '9dd155f3-e5f8-454f-8f24-0fab3d32cc8b';
  $display->content['new-9dd155f3-e5f8-454f-8f24-0fab3d32cc8b'] = $pane;
  $display->panels['first'][3] = 'new-9dd155f3-e5f8-454f-8f24-0fab3d32cc8b';
  $pane = new stdClass();
  $pane->pid = 'new-96037c4a-a1f3-4006-a781-a77052a3d0b2';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Primary Subjects',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '96037c4a-a1f3-4006-a781-a77052a3d0b2';
  $display->content['new-96037c4a-a1f3-4006-a781-a77052a3d0b2'] = $pane;
  $display->panels['first'][4] = 'new-96037c4a-a1f3-4006-a781-a77052a3d0b2';
  $pane = new stdClass();
  $pane->pid = 'new-8cc9b6b0-db0f-48fd-abe1-e3884ee35ef1';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Related Subjects',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8cc9b6b0-db0f-48fd-abe1-e3884ee35ef1';
  $display->content['new-8cc9b6b0-db0f-48fd-abe1-e3884ee35ef1'] = $pane;
  $display->panels['first'][5] = 'new-8cc9b6b0-db0f-48fd-abe1-e3884ee35ef1';
  $pane = new stdClass();
  $pane->pid = 'new-cdcf47fb-e137-4262-82c5-df846cb318b4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'databases_by_url-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cdcf47fb-e137-4262-82c5-df846cb318b4';
  $display->content['new-cdcf47fb-e137-4262-82c5-df846cb318b4'] = $pane;
  $display->panels['second'][0] = 'new-cdcf47fb-e137-4262-82c5-df846cb318b4';
  $pane = new stdClass();
  $pane->pid = 'new-7ee46b86-a462-4227-87a3-701f186bb8c7';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'dbsearch_block-dbsearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Find Other Databases',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7ee46b86-a462-4227-87a3-701f186bb8c7';
  $display->content['new-7ee46b86-a462-4227-87a3-701f186bb8c7'] = $pane;
  $display->panels['second'][1] = 'new-7ee46b86-a462-4227-87a3-701f186bb8c7';
  $pane = new stdClass();
  $pane->pid = 'new-e803b08e-4d3b-4aa6-9336-1502d4524491';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_search';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e803b08e-4d3b-4aa6-9336-1502d4524491';
  $display->content['new-e803b08e-4d3b-4aa6-9336-1502d4524491'] = $pane;
  $display->panels['second'][2] = 'new-e803b08e-4d3b-4aa6-9336-1502d4524491';
  $pane = new stdClass();
  $pane->pid = 'new-d6944d8c-2a57-48ea-94a5-0ce45b356206';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd6944d8c-2a57-48ea-94a5-0ce45b356206';
  $display->content['new-d6944d8c-2a57-48ea-94a5-0ce45b356206'] = $pane;
  $display->panels['second'][3] = 'new-d6944d8c-2a57-48ea-94a5-0ce45b356206';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-573d7083-83fd-4dfb-be87-00684711321c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'OFA Staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second ofa',
    'css_id' => 'ofa-landing-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'staff/ofa/staff',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ec6045a0-187f-4a11-8a61-f8462996fc09';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_10';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1f575c9f-f812-4e38-aa64-36525d2b946e';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Header',
    'title' => '',
    'body' => '<h1>Office of Finance and Administration</h1>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1f575c9f-f812-4e38-aa64-36525d2b946e';
  $display->content['new-1f575c9f-f812-4e38-aa64-36525d2b946e'] = $pane;
  $display->panels['middle'][0] = 'new-1f575c9f-f812-4e38-aa64-36525d2b946e';
  $pane = new stdClass();
  $pane->pid = 'new-7a24d013-1094-406e-a80b-8ad4b185b89d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = '7a24d013-1094-406e-a80b-8ad4b185b89d';
  $display->content['new-7a24d013-1094-406e-a80b-8ad4b185b89d'] = $pane;
  $display->panels['middle'][1] = 'new-7a24d013-1094-406e-a80b-8ad4b185b89d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -31;
  $handler->conf = array(
    'title' => 'OFA Security',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second ofa',
    'css_id' => 'ofa-landing-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'staff/ofa/safety/library-security',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '04bb8a8f-1a31-44be-b853-ed9a60117579';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_11';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5686b47c-4f73-4257-a618-a35dae21cc11';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Header',
    'title' => '',
    'body' => '<h1>Office of Finance and Administration</h1>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5686b47c-4f73-4257-a618-a35dae21cc11';
  $display->content['new-5686b47c-4f73-4257-a618-a35dae21cc11'] = $pane;
  $display->panels['middle'][0] = 'new-5686b47c-4f73-4257-a618-a35dae21cc11';
  $pane = new stdClass();
  $pane->pid = 'new-10b51229-2b22-41be-ae37-95daf2ee2f2f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = '10b51229-2b22-41be-ae37-95daf2ee2f2f';
  $display->content['new-10b51229-2b22-41be-ae37-95daf2ee2f2f'] = $pane;
  $display->panels['middle'][1] = 'new-10b51229-2b22-41be-ae37-95daf2ee2f2f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'help/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Title
%node:menu-link',
    'panels_breadcrumbs_paths' => 'help
%node:menu-link',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cfc28604-c1a7-4720-92ce-68bbc8acce26';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_13';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b7c1067-7ee1-447d-a4ba-cce09da42d27';
  $pane->panel = 'first';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2b7c1067-7ee1-447d-a4ba-cce09da42d27';
  $display->content['new-2b7c1067-7ee1-447d-a4ba-cce09da42d27'] = $pane;
  $display->panels['first'][0] = 'new-2b7c1067-7ee1-447d-a4ba-cce09da42d27';
  $pane = new stdClass();
  $pane->pid = 'new-d7d7f859-3e3e-49c5-a470-a37bcba437d9';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7d7f859-3e3e-49c5-a470-a37bcba437d9';
  $display->content['new-d7d7f859-3e3e-49c5-a470-a37bcba437d9'] = $pane;
  $display->panels['second'][0] = 'new-d7d7f859-3e3e-49c5-a470-a37bcba437d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Chat Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second chat-page',
    'css_id' => 'chat-home-page',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '3702',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'help/chat
help/chat/*
help/ask-a-librarian',
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
  $display->title = '%node:title';
  $display->uuid = 'e25af73a-35ce-46e6-a461-5fd6e46ceee2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_15';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8b302848-39ad-43b5-84b5-8840ccb6b6bf';
  $pane->panel = 'first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b302848-39ad-43b5-84b5-8840ccb6b6bf';
  $display->content['new-8b302848-39ad-43b5-84b5-8840ccb6b6bf'] = $pane;
  $display->panels['first'][0] = 'new-8b302848-39ad-43b5-84b5-8840ccb6b6bf';
  $pane = new stdClass();
  $pane->pid = 'new-b9fe8d47-14c9-4d90-ad3f-fc6efd90336d';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'libhours_ask-libhours_ask';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b9fe8d47-14c9-4d90-ad3f-fc6efd90336d';
  $display->content['new-b9fe8d47-14c9-4d90-ad3f-fc6efd90336d'] = $pane;
  $display->panels['second'][0] = 'new-b9fe8d47-14c9-4d90-ad3f-fc6efd90336d';
  $pane = new stdClass();
  $pane->pid = 'new-78ce78a2-9fac-47d0-9fd0-c25365d597ae';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_7';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '3702',
    ),
    'override_title' => 1,
    'override_title_text' => 'Hours Today',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '78ce78a2-9fac-47d0-9fd0-c25365d597ae';
  $display->content['new-78ce78a2-9fac-47d0-9fd0-c25365d597ae'] = $pane;
  $display->panels['second'][1] = 'new-78ce78a2-9fac-47d0-9fd0-c25365d597ae';
  $pane = new stdClass();
  $pane->pid = 'new-48e32453-1b16-4581-9ca3-3e68b549d646';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Chat Hours Block',
    'title' => '',
    'body' => '<p>For more information consult the full chat <a href="/hours/ask-a-librarian">schedule</a>&nbsp;</p>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '48e32453-1b16-4581-9ca3-3e68b549d646';
  $display->content['new-48e32453-1b16-4581-9ca3-3e68b549d646'] = $pane;
  $display->panels['second'][2] = 'new-48e32453-1b16-4581-9ca3-3e68b549d646';
  $pane = new stdClass();
  $pane->pid = 'new-56a09321-e6fa-4cdc-af13-16ae67ef2cb1';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_cal_academic_hours';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'office_hours',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'daysformat' => 'long',
      'hoursformat' => '1',
      'compress' => 0,
      'grouped' => 0,
      'showclosed' => 0,
      'closedformat' => 'Closed',
      'separator_days' => '<br>',
      'separator_grouped_days' => ' - ',
      'separator_day_hours' => ': ',
      'separator_hours_hours' => '-',
      'separator_more_hours' => ', ',
    ),
    'context' => 'context_entity:taxonomy_term_1',
    'override_title' => 1,
    'override_title_text' => 'Current Hours',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '56a09321-e6fa-4cdc-af13-16ae67ef2cb1';
  $display->content['new-56a09321-e6fa-4cdc-af13-16ae67ef2cb1'] = $pane;
  $display->panels['second'][3] = 'new-56a09321-e6fa-4cdc-af13-16ae67ef2cb1';
  $pane = new stdClass();
  $pane->pid = 'new-1d3cbd16-8d42-44f3-9583-58b0e2447bca';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_5';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'calendar/week',
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '3702',
    ),
    'override_title' => 1,
    'override_title_text' => 'Hours',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1d3cbd16-8d42-44f3-9583-58b0e2447bca';
  $display->content['new-1d3cbd16-8d42-44f3-9583-58b0e2447bca'] = $pane;
  $display->panels['second'][4] = 'new-1d3cbd16-8d42-44f3-9583-58b0e2447bca';
  $pane = new stdClass();
  $pane->pid = 'new-c5ad453e-1752-40b6-aede-1b28896c3665';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c5ad453e-1752-40b6-aede-1b28896c3665';
  $display->content['new-c5ad453e-1752-40b6-aede-1b28896c3665'] = $pane;
  $display->panels['second'][5] = 'new-c5ad453e-1752-40b6-aede-1b28896c3665';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8b302848-39ad-43b5-84b5-8840ccb6b6bf';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_20';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Alternative Database Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second alternative-database-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'alternative_database_title' => 'alternative_database_title',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases',
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_home' => 1,
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
  $display->uuid = '174322c6-6c8a-4fd9-86cb-5d8182bb74d7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_20';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-77616566-1d06-43e8-9d14-848c7ba12a0c';
  $pane->panel = 'first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '77616566-1d06-43e8-9d14-848c7ba12a0c';
  $display->content['new-77616566-1d06-43e8-9d14-848c7ba12a0c'] = $pane;
  $display->panels['first'][0] = 'new-77616566-1d06-43e8-9d14-848c7ba12a0c';
  $pane = new stdClass();
  $pane->pid = 'new-b9dbf977-c993-49cd-a085-a045c5f07d49';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_access_credentials-panel_pane_3';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b9dbf977-c993-49cd-a085-a045c5f07d49';
  $display->content['new-b9dbf977-c993-49cd-a085-a045c5f07d49'] = $pane;
  $display->panels['first'][1] = 'new-b9dbf977-c993-49cd-a085-a045c5f07d49';
  $pane = new stdClass();
  $pane->pid = 'new-75f2270f-6508-46bb-a823-9a2ac06332a0';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'dbsearch_block-dbsearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Find Databases',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '75f2270f-6508-46bb-a823-9a2ac06332a0';
  $display->content['new-75f2270f-6508-46bb-a823-9a2ac06332a0'] = $pane;
  $display->panels['second'][0] = 'new-75f2270f-6508-46bb-a823-9a2ac06332a0';
  $pane = new stdClass();
  $pane->pid = 'new-47879dab-8977-4a23-8e14-56e1dfd60f23';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_search';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '47879dab-8977-4a23-8e14-56e1dfd60f23';
  $display->content['new-47879dab-8977-4a23-8e14-56e1dfd60f23'] = $pane;
  $display->panels['second'][1] = 'new-47879dab-8977-4a23-8e14-56e1dfd60f23';
  $pane = new stdClass();
  $pane->pid = 'new-a570b4e7-ef99-4195-865b-161042f0b74c';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a570b4e7-ef99-4195-865b-161042f0b74c';
  $display->content['new-a570b4e7-ef99-4195-865b-161042f0b74c'] = $pane;
  $display->panels['second'][2] = 'new-a570b4e7-ef99-4195-865b-161042f0b74c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_20'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_28';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Database Platform Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'database-platform-page one-sidebar sidebar-second',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'database_package' => 'database_package',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->title = '%node:title';
  $display->uuid = '221cf6df-b178-4f35-90af-153d35f497e4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_28';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-da10fea7-6f31-4473-9d45-6e9d033f06c9';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'title',
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
  $pane->uuid = 'da10fea7-6f31-4473-9d45-6e9d033f06c9';
  $display->content['new-da10fea7-6f31-4473-9d45-6e9d033f06c9'] = $pane;
  $display->panels['first'][0] = 'new-da10fea7-6f31-4473-9d45-6e9d033f06c9';
  $pane = new stdClass();
  $pane->pid = 'new-2c4245c7-dbf8-460f-a7bd-1e86d2ccf951';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_dbs_packages-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Current Configuration',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c4245c7-dbf8-460f-a7bd-1e86d2ccf951';
  $display->content['new-2c4245c7-dbf8-460f-a7bd-1e86d2ccf951'] = $pane;
  $display->panels['first'][1] = 'new-2c4245c7-dbf8-460f-a7bd-1e86d2ccf951';
  $pane = new stdClass();
  $pane->pid = 'new-f7f93309-6dff-4353-9ea7-cd738bd7b05e';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'databases_by_url-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7f93309-6dff-4353-9ea7-cd738bd7b05e';
  $display->content['new-f7f93309-6dff-4353-9ea7-cd738bd7b05e'] = $pane;
  $display->panels['first'][2] = 'new-f7f93309-6dff-4353-9ea7-cd738bd7b05e';
  $pane = new stdClass();
  $pane->pid = 'new-086c849d-42b3-42b1-a909-8d32aa698e61';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dmg-admin-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = '086c849d-42b3-42b1-a909-8d32aa698e61';
  $display->content['new-086c849d-42b3-42b1-a909-8d32aa698e61'] = $pane;
  $display->panels['second'][0] = 'new-086c849d-42b3-42b1-a909-8d32aa698e61';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da10fea7-6f31-4473-9d45-6e9d033f06c9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_28'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_44';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Research Data Management',
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
            'paths' => 'research-data-management
research-data-management/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '44d0876c-ac82-4ab6-a0d3-45d2166535f8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_44';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3377600a-ac39-4113-be81-998cb1c4f785';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img src="/sites/all/themes/pul_base/images/sco-logo.png" alt="Scholarly Communications Office" /></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3377600a-ac39-4113-be81-998cb1c4f785';
  $display->content['new-3377600a-ac39-4113-be81-998cb1c4f785'] = $pane;
  $display->panels['first'][0] = 'new-3377600a-ac39-4113-be81-998cb1c4f785';
  $pane = new stdClass();
  $pane->pid = 'new-ff1c0a58-9059-41a8-be43-757c4a72b9d1';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-research-data-management';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ff1c0a58-9059-41a8-be43-757c4a72b9d1';
  $display->content['new-ff1c0a58-9059-41a8-be43-757c4a72b9d1'] = $pane;
  $display->panels['first'][1] = 'new-ff1c0a58-9059-41a8-be43-757c4a72b9d1';
  $pane = new stdClass();
  $pane->pid = 'new-ec67772b-6242-4870-827e-6d44b3f3ef2c';
  $pane->panel = 'second';
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
  $pane->uuid = 'ec67772b-6242-4870-827e-6d44b3f3ef2c';
  $display->content['new-ec67772b-6242-4870-827e-6d44b3f3ef2c'] = $pane;
  $display->panels['second'][0] = 'new-ec67772b-6242-4870-827e-6d44b3f3ef2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ec67772b-6242-4870-827e-6d44b3f3ef2c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_44'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Office of Finance Administration',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second ofa',
    'css_id' => 'ofa-landing-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'staff/ofa/*
staff/ofa',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Office of Finance and Administration';
  $display->uuid = '330a3d79-9a38-43cc-bae8-d8529a97e255';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6edb251a-3a4d-4c6b-ba52-732d6bddb6e9';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ofa-main-menu';
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
  $pane->uuid = '6edb251a-3a4d-4c6b-ba52-732d6bddb6e9';
  $display->content['new-6edb251a-3a4d-4c6b-ba52-732d6bddb6e9'] = $pane;
  $display->panels['first'][0] = 'new-6edb251a-3a4d-4c6b-ba52-732d6bddb6e9';
  $pane = new stdClass();
  $pane->pid = 'new-ea91ea92-1858-40ec-aedd-ebe0901a06db';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ofa-main-menu';
  $pane->shown = FALSE;
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
  $pane->uuid = 'ea91ea92-1858-40ec-aedd-ebe0901a06db';
  $display->content['new-ea91ea92-1858-40ec-aedd-ebe0901a06db'] = $pane;
  $display->panels['middle'][0] = 'new-ea91ea92-1858-40ec-aedd-ebe0901a06db';
  $pane = new stdClass();
  $pane->pid = 'new-144f3eee-b571-489f-b80b-6886ffdc703c';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Header',
    'title' => 'Office of Finance and Administration',
    'body' => '<h2>%node:title</h2>',
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
  $pane->uuid = '144f3eee-b571-489f-b80b-6886ffdc703c';
  $display->content['new-144f3eee-b571-489f-b80b-6886ffdc703c'] = $pane;
  $display->panels['middle'][1] = 'new-144f3eee-b571-489f-b80b-6886ffdc703c';
  $pane = new stdClass();
  $pane->pid = 'new-26f789a7-7a33-49cc-8d77-e9a758f8e7e7';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '%node:title',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '26f789a7-7a33-49cc-8d77-e9a758f8e7e7';
  $display->content['new-26f789a7-7a33-49cc-8d77-e9a758f8e7e7'] = $pane;
  $display->panels['middle'][2] = 'new-26f789a7-7a33-49cc-8d77-e9a758f8e7e7';
  $pane = new stdClass();
  $pane->pid = 'new-7d9d536d-8f2f-41d9-9239-46834ffcd6c4';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7d9d536d-8f2f-41d9-9239-46834ffcd6c4';
  $display->content['new-7d9d536d-8f2f-41d9-9239-46834ffcd6c4'] = $pane;
  $display->panels['middle'][3] = 'new-7d9d536d-8f2f-41d9-9239-46834ffcd6c4';
  $pane = new stdClass();
  $pane->pid = 'new-a513b840-7d59-4f5e-9879-496967e5d414';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ofa-quick-links';
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
  $pane->uuid = 'a513b840-7d59-4f5e-9879-496967e5d414';
  $display->content['new-a513b840-7d59-4f5e-9879-496967e5d414'] = $pane;
  $display->panels['second'][0] = 'new-a513b840-7d59-4f5e-9879-496967e5d414';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26f789a7-7a33-49cc-8d77-e9a758f8e7e7';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}
