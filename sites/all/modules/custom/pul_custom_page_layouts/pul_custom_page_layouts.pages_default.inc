<?php

/**
 * @file
 * pul_custom_page_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_custom_page_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__fall-2020-resources';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 36;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => '2020-21-resources
2020-21-resources/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'section-services branch-libraries fall-2020',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'fall-2020-resources',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Fall 2020 Resources',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->title = '2020-2021 Resources';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__fall-2020-resources';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5360ecbd-fe52-4f82-9b63-cc8213bd6c5f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-fall-2020-resources';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => '2020-21-resources/*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
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
  $pane->uuid = '5360ecbd-fe52-4f82-9b63-cc8213bd6c5f';
  $display->content['new-5360ecbd-fe52-4f82-9b63-cc8213bd6c5f'] = $pane;
  $display->panels['first'][0] = 'new-5360ecbd-fe52-4f82-9b63-cc8213bd6c5f';
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'second';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => '2020-21-resources/*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['second'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '43980',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '2020-21 Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->content['new-1bbb162e-5063-43cd-8dbf-37576edfd980'] = $pane;
  $display->panels['top'][0] = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane = new stdClass();
  $pane->pid = 'new-c6e2e366-4f63-44b8-9b8a-d1bed2bbb24a';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_graphics-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => '2020-21-resources',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '30620',
    ),
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
  $pane->uuid = 'c6e2e366-4f63-44b8-9b8a-d1bed2bbb24a';
  $display->content['new-c6e2e366-4f63-44b8-9b8a-d1bed2bbb24a'] = $pane;
  $display->panels['top'][1] = 'new-c6e2e366-4f63-44b8-9b8a-d1bed2bbb24a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__fall-2020-resources'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__fall-2020-services';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 37;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/study-browse
services/book-pick-up
services/in-house-digitization',
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
    'name' => 'fall-2020-services',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'services',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Services',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Fall 2020 Services',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '18e728fd-55f3-445e-9726-f9e8c7632600';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__fall-2020-services';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-59a5530e-cbfc-4f92-a5dd-d8be2c6174aa';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-fall-2020-services';
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
  $pane->uuid = '59a5530e-cbfc-4f92-a5dd-d8be2c6174aa';
  $display->content['new-59a5530e-cbfc-4f92-a5dd-d8be2c6174aa'] = $pane;
  $display->panels['first'][0] = 'new-59a5530e-cbfc-4f92-a5dd-d8be2c6174aa';
  $pane = new stdClass();
  $pane->pid = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 1,
    'links' => 1,
    'no_extras' => 1,
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
  $pane->uuid = '4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $display->content['new-4034f21f-2466-4a4a-8412-1c6f2882ccff'] = $pane;
  $display->panels['middle'][0] = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane = new stdClass();
  $pane->pid = 'new-183fce29-5c58-4faf-b242-ece452fb0130';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/reserves
services/reserves/*
',
          'visibility_setting' => '0',
        ),
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
  $pane->uuid = '183fce29-5c58-4faf-b242-ece452fb0130';
  $display->content['new-183fce29-5c58-4faf-b242-ece452fb0130'] = $pane;
  $display->panels['second'][0] = 'new-183fce29-5c58-4faf-b242-ece452fb0130';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $handler->conf['display'] = $display;
  $export['node_view__fall-2020-services'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function pul_custom_page_layouts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'admin_subject_list';
  $page->task = 'page';
  $page->admin_title = 'Admin Subject List';
  $page->admin_description = 'Panel for Administrative View of DMG Subject List';
  $page->path = 'admin/dmg/subjects';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_admin_subject_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'admin_subject_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'admin/dmg',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'DMG Panel',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = 'Manage Subjects';
  $display->uuid = 'd10025b3-92fc-4a46-955e-8898f44ed622';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_admin_subject_list_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e29bacce-0df1-43fe-9cd4-8ea3f2fbcf0e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'dmg_subject_views';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '10',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e29bacce-0df1-43fe-9cd4-8ea3f2fbcf0e';
  $display->content['new-e29bacce-0df1-43fe-9cd4-8ea3f2fbcf0e'] = $pane;
  $display->panels['left'][0] = 'new-e29bacce-0df1-43fe-9cd4-8ea3f2fbcf0e';
  $pane = new stdClass();
  $pane->pid = 'new-396ec0f6-4dfa-4f32-9ada-f1fe3117a20e';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_subject_views-panel_pane_4';
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
  $pane->uuid = '396ec0f6-4dfa-4f32-9ada-f1fe3117a20e';
  $display->content['new-396ec0f6-4dfa-4f32-9ada-f1fe3117a20e'] = $pane;
  $display->panels['left'][1] = 'new-396ec0f6-4dfa-4f32-9ada-f1fe3117a20e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e29bacce-0df1-43fe-9cd4-8ea3f2fbcf0e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['admin_subject_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'committee_listings';
  $page->task = 'page';
  $page->admin_title = 'Committee Listings';
  $page->admin_description = 'Staff Committee Listings';
  $page->path = 'staff/committees';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_committee_listings_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'committee_listings';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'one-sidebar sidebar-second committee-landing-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = 'Library Committees';
  $display->uuid = 'b2b42d32-9c67-4f6b-8e81-3f294a2434ce';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_committee_listings_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d575d0e2-1964-4650-936e-e9050030494e';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_1';
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
  $pane->uuid = 'd575d0e2-1964-4650-936e-e9050030494e';
  $display->content['new-d575d0e2-1964-4650-936e-e9050030494e'] = $pane;
  $display->panels['first'][0] = 'new-d575d0e2-1964-4650-936e-e9050030494e';
  $pane = new stdClass();
  $pane->pid = 'new-d9c0a777-26ef-4dc8-bbb2-193248040d39';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd9c0a777-26ef-4dc8-bbb2-193248040d39';
  $display->content['new-d9c0a777-26ef-4dc8-bbb2-193248040d39'] = $pane;
  $display->panels['second'][0] = 'new-d9c0a777-26ef-4dc8-bbb2-193248040d39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['committee_listings'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'database_platforms';
  $page->task = 'page';
  $page->admin_title = 'Database Platforms';
  $page->admin_description = 'Displays Database platform Content';
  $page->path = 'research/databases/platforms';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_database_platforms_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'database_platforms';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'database-platform-list one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = 'Database Platforms';
  $display->uuid = '75870a6a-4ed5-4333-bbcb-11ee14a7216f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_database_platforms_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-72253619-9649-46fe-8b99-22f40c496d3f';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_dbs_packages-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
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
  $pane->uuid = '72253619-9649-46fe-8b99-22f40c496d3f';
  $display->content['new-72253619-9649-46fe-8b99-22f40c496d3f'] = $pane;
  $display->panels['left'][0] = 'new-72253619-9649-46fe-8b99-22f40c496d3f';
  $pane = new stdClass();
  $pane->pid = 'new-ad2190a6-c21f-4a87-a416-27adae996ae6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dmg-admin-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'DMG',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ad2190a6-c21f-4a87-a416-27adae996ae6';
  $display->content['new-ad2190a6-c21f-4a87-a416-27adae996ae6'] = $pane;
  $display->panels['right'][0] = 'new-ad2190a6-c21f-4a87-a416-27adae996ae6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-72253619-9649-46fe-8b99-22f40c496d3f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['database_platforms'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'databases_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Databases Landing Page';
  $page->admin_description = 'Homepage for Databases and Subjects. ';
  $page->path = 'research/databases/!letter';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'menu-find',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array(
    'letter' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_databases_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'databases_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'find-databases-home',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'research',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Research',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'args',
      'lifetime' => '15',
    ),
  );
  $display->title = 'Databases <em>%letter:html_safe</em>';
  $display->uuid = 'ea01149d-e062-4ecb-9903-82cb142df5e0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_databases_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f360c213-a549-4885-a5e6-50524a6d8080';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'dbsearch_block-dbsearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Articles+ Search',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f360c213-a549-4885-a5e6-50524a6d8080';
  $display->content['new-f360c213-a549-4885-a5e6-50524a6d8080'] = $pane;
  $display->panels['first'][0] = 'new-f360c213-a549-4885-a5e6-50524a6d8080';
  $pane = new stdClass();
  $pane->pid = 'new-6d9665ea-48c1-4b5c-abd3-a6ed893fded8';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'databases_by_subject';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 1,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6d9665ea-48c1-4b5c-abd3-a6ed893fded8';
  $display->content['new-6d9665ea-48c1-4b5c-abd3-a6ed893fded8'] = $pane;
  $display->panels['first'][1] = 'new-6d9665ea-48c1-4b5c-abd3-a6ed893fded8';
  $pane = new stdClass();
  $pane->pid = 'new-bf16818d-f90e-483c-bd97-8c0c3c5cd44c';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'clone_of_glossary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'context' => array(
      0 => 'argument_string_1.raw',
    ),
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'links--decorate',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bf16818d-f90e-483c-bd97-8c0c3c5cd44c';
  $display->content['new-bf16818d-f90e-483c-bd97-8c0c3c5cd44c'] = $pane;
  $display->panels['first'][2] = 'new-bf16818d-f90e-483c-bd97-8c0c3c5cd44c';
  $pane = new stdClass();
  $pane->pid = 'new-34b5f53c-c39a-4690-a2a1-5b0d927cce30';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'specialist_finder';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'context' => array(
      0 => '',
    ),
    'display' => 'block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Find a Subject Librarian',
    'pager_id' => '0',
    'panel_args' => 1,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'ctools-jump-menu',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '34b5f53c-c39a-4690-a2a1-5b0d927cce30';
  $display->content['new-34b5f53c-c39a-4690-a2a1-5b0d927cce30'] = $pane;
  $display->panels['second'][0] = 'new-34b5f53c-c39a-4690-a2a1-5b0d927cce30';
  $pane = new stdClass();
  $pane->pid = 'new-486d7971-e959-42f3-9a14-3688a08ec083';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_search';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Articles+ Search',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '486d7971-e959-42f3-9a14-3688a08ec083';
  $display->content['new-486d7971-e959-42f3-9a14-3688a08ec083'] = $pane;
  $display->panels['second'][1] = 'new-486d7971-e959-42f3-9a14-3688a08ec083';
  $pane = new stdClass();
  $pane->pid = 'new-73b25230-4aee-4b03-83a7-ff440183230b';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-26';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Report a Problem',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '73b25230-4aee-4b03-83a7-ff440183230b';
  $display->content['new-73b25230-4aee-4b03-83a7-ff440183230b'] = $pane;
  $display->panels['second'][2] = 'new-73b25230-4aee-4b03-83a7-ff440183230b';
  $pane = new stdClass();
  $pane->pid = 'new-594bb988-bc63-4f8d-b1f3-c7353c38b205';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '594bb988-bc63-4f8d-b1f3-c7353c38b205';
  $display->content['new-594bb988-bc63-4f8d-b1f3-c7353c38b205'] = $pane;
  $display->panels['second'][3] = 'new-594bb988-bc63-4f8d-b1f3-c7353c38b205';
  $pane = new stdClass();
  $pane->pid = 'new-f9c1549a-1c0c-4c5b-b044-c31ac8486915';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_glossary-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f9c1549a-1c0c-4c5b-b044-c31ac8486915';
  $display->content['new-f9c1549a-1c0c-4c5b-b044-c31ac8486915'] = $pane;
  $display->panels['second'][4] = 'new-f9c1549a-1c0c-4c5b-b044-c31ac8486915';
  $pane = new stdClass();
  $pane->pid = 'new-bcfc80f7-baca-4836-9685-75ad6c39045e';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_glossary-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'links--decorate',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'bcfc80f7-baca-4836-9685-75ad6c39045e';
  $display->content['new-bcfc80f7-baca-4836-9685-75ad6c39045e'] = $pane;
  $display->panels['second'][5] = 'new-bcfc80f7-baca-4836-9685-75ad6c39045e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bf16818d-f90e-483c-bd97-8c0c3c5cd44c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['databases_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'databases_search_results_page';
  $page->task = 'page';
  $page->admin_title = 'Databases Search Results Page';
  $page->admin_description = 'Databases Search Results';
  $page->path = 'research/databases/search/%query';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_databases_search_results_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'databases_search_results_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'database-results-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
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
  $display->title = 'Find Databases related to <span class=\'query\'>%query</span>';
  $display->uuid = '8c252a09-0ce1-47a9-8c4e-31443fa68035';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_databases_search_results_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-588b4e40-d434-42e3-9d97-e964cc8924df';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'dbsearch_block-dbsearch_search';
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
  $pane->uuid = '588b4e40-d434-42e3-9d97-e964cc8924df';
  $display->content['new-588b4e40-d434-42e3-9d97-e964cc8924df'] = $pane;
  $display->panels['first'][0] = 'new-588b4e40-d434-42e3-9d97-e964cc8924df';
  $pane = new stdClass();
  $pane->pid = 'new-80c01aaf-3aff-48e7-ab19-e7fc26bb35b1';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'databases_keyword_search-panel_pane_1';
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
  $pane->uuid = '80c01aaf-3aff-48e7-ab19-e7fc26bb35b1';
  $display->content['new-80c01aaf-3aff-48e7-ab19-e7fc26bb35b1'] = $pane;
  $display->panels['first'][1] = 'new-80c01aaf-3aff-48e7-ab19-e7fc26bb35b1';
  $pane = new stdClass();
  $pane->pid = 'new-ea52a6a6-a07d-494d-8a11-98f8013d76cb';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'databases_keyword_search';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'context' => array(
      0 => 'argument_string_1.html_safe',
    ),
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '10',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => 'Database Titles',
    'pager_id' => '0',
    'panel_args' => 1,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ea52a6a6-a07d-494d-8a11-98f8013d76cb';
  $display->content['new-ea52a6a6-a07d-494d-8a11-98f8013d76cb'] = $pane;
  $display->panels['first'][2] = 'new-ea52a6a6-a07d-494d-8a11-98f8013d76cb';
  $pane = new stdClass();
  $pane->pid = 'new-3744011e-0f73-44fa-80de-1b5b5cc74ac1';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3744011e-0f73-44fa-80de-1b5b5cc74ac1';
  $display->content['new-3744011e-0f73-44fa-80de-1b5b5cc74ac1'] = $pane;
  $display->panels['second'][0] = 'new-3744011e-0f73-44fa-80de-1b5b5cc74ac1';
  $pane = new stdClass();
  $pane->pid = 'new-762c0967-6236-4678-b227-85ff89eab823';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_subject_search-panel_pane_2';
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
  $pane->uuid = '762c0967-6236-4678-b227-85ff89eab823';
  $display->content['new-762c0967-6236-4678-b227-85ff89eab823'] = $pane;
  $display->panels['second'][1] = 'new-762c0967-6236-4678-b227-85ff89eab823';
  $pane = new stdClass();
  $pane->pid = 'new-bbece6f5-113e-4f41-ab0d-e73b6f1848a4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'database_subject_search-panel_pane_1';
  $pane->shown = FALSE;
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
  $pane->uuid = 'bbece6f5-113e-4f41-ab0d-e73b6f1848a4';
  $display->content['new-bbece6f5-113e-4f41-ab0d-e73b6f1848a4'] = $pane;
  $display->panels['second'][2] = 'new-bbece6f5-113e-4f41-ab0d-e73b6f1848a4';
  $pane = new stdClass();
  $pane->pid = 'new-170b62aa-90fb-499f-9415-f64af81d6bc6';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_guide_results';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '170b62aa-90fb-499f-9415-f64af81d6bc6';
  $display->content['new-170b62aa-90fb-499f-9415-f64af81d6bc6'] = $pane;
  $display->panels['second'][3] = 'new-170b62aa-90fb-499f-9415-f64af81d6bc6';
  $pane = new stdClass();
  $pane->pid = 'new-cc7306d8-d215-48f7-9b34-261325e1bac3';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'libguides_block-libguides_search_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-links"></i> Library Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'cc7306d8-d215-48f7-9b34-261325e1bac3';
  $display->content['new-cc7306d8-d215-48f7-9b34-261325e1bac3'] = $pane;
  $display->panels['second'][4] = 'new-cc7306d8-d215-48f7-9b34-261325e1bac3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['databases_search_results_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'department_list';
  $page->task = 'page';
  $page->admin_title = 'Department List';
  $page->admin_description = 'Department Listing Landing Pages. ';
  $page->path = 'staff/departments';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_department_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'department_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second department-list-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff/directory',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff Directory',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'none',
      'lifetime' => '86400',
    ),
  );
  $display->title = 'Library Departments';
  $display->uuid = '893515c7-7883-4dde-9441-5211f8f36c88';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_department_list_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d523d34-fce9-40a3-950a-27d250c10333';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'staff_department_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d523d34-fce9-40a3-950a-27d250c10333';
  $display->content['new-9d523d34-fce9-40a3-950a-27d250c10333'] = $pane;
  $display->panels['first'][0] = 'new-9d523d34-fce9-40a3-950a-27d250c10333';
  $pane = new stdClass();
  $pane->pid = 'new-9bd72a65-0cb6-44ac-a6ac-58acdcf9661d';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9bd72a65-0cb6-44ac-a6ac-58acdcf9661d';
  $display->content['new-9bd72a65-0cb6-44ac-a6ac-58acdcf9661d'] = $pane;
  $display->panels['second'][0] = 'new-9bd72a65-0cb6-44ac-a6ac-58acdcf9661d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['department_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'digital_initiatives';
  $page->task = 'page';
  $page->admin_title = 'Digital Initiatives';
  $page->admin_description = '';
  $page->path = 'diglib';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_digital_initiatives_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'digital_initiatives';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12502',
        'id' => 1,
        'identifier' => 'Digital Initiatives',
        'keyword' => 'node',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Digital Initiatives';
  $display->uuid = '2339d0bf-d92a-45ed-b6af-1ac355bad346';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_digital_initiatives_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47bf7cdc-81c6-4328-9140-320fd5b1045a';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'digital_project_listing-panel_pane_2';
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
  $pane->uuid = '47bf7cdc-81c6-4328-9140-320fd5b1045a';
  $display->content['new-47bf7cdc-81c6-4328-9140-320fd5b1045a'] = $pane;
  $display->panels['first'][0] = 'new-47bf7cdc-81c6-4328-9140-320fd5b1045a';
  $pane = new stdClass();
  $pane->pid = 'new-fb3c2560-8f80-4266-8e18-ab64bd0a1aab';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'digital_collections_mission';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fb3c2560-8f80-4266-8e18-ab64bd0a1aab';
  $display->content['new-fb3c2560-8f80-4266-8e18-ab64bd0a1aab'] = $pane;
  $display->panels['second'][0] = 'new-fb3c2560-8f80-4266-8e18-ab64bd0a1aab';
  $pane = new stdClass();
  $pane->pid = 'new-0903483b-b8e0-46a4-bc11-8fafaa52a987';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Digital Initiatives Mission Statement',
    'body' => 'Princeton University Library Digital Initiatives (PULDI) promotes and develops new ways of harnessing digital technologies to advance the Library\'s strategic mission.
',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Mission',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0903483b-b8e0-46a4-bc11-8fafaa52a987';
  $display->content['new-0903483b-b8e0-46a4-bc11-8fafaa52a987'] = $pane;
  $display->panels['second'][1] = 'new-0903483b-b8e0-46a4-bc11-8fafaa52a987';
  $pane = new stdClass();
  $pane->pid = 'new-5a359c61-4be9-46ec-b8f1-2380bf8eca9f';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_graphics-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5062',
    ),
    'override_title' => 1,
    'override_title_text' => 'Featured Resource',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5a359c61-4be9-46ec-b8f1-2380bf8eca9f';
  $display->content['new-5a359c61-4be9-46ec-b8f1-2380bf8eca9f'] = $pane;
  $display->panels['second'][2] = 'new-5a359c61-4be9-46ec-b8f1-2380bf8eca9f';
  $pane = new stdClass();
  $pane->pid = 'new-125cb290-4bf1-470e-9a11-f4c17d17b879';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'title',
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
  $pane->uuid = '125cb290-4bf1-470e-9a11-f4c17d17b879';
  $display->content['new-125cb290-4bf1-470e-9a11-f4c17d17b879'] = $pane;
  $display->panels['top'][0] = 'new-125cb290-4bf1-470e-9a11-f4c17d17b879';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-47bf7cdc-81c6-4328-9140-320fd5b1045a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['digital_initiatives'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dmg_dashboard';
  $page->task = 'page';
  $page->admin_title = 'DMG Dashboard';
  $page->admin_description = 'Dashboard for DMG Users';
  $page->path = 'admin/dmg';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 4,
          ),
        ),
      ),
    ),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dmg_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dmg_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'DMG Dashboard';
  $display->uuid = 'e7b963bc-f445-4b37-b83e-645cbd847403';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dmg_dashboard_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-59606a9a-4110-4df4-93f6-56b2ac213f9c';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_database_admin_lists-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Recently Updated Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '59606a9a-4110-4df4-93f6-56b2ac213f9c';
  $display->content['new-59606a9a-4110-4df4-93f6-56b2ac213f9c'] = $pane;
  $display->panels['left'][0] = 'new-59606a9a-4110-4df4-93f6-56b2ac213f9c';
  $pane = new stdClass();
  $pane->pid = 'new-7781c59c-0b5f-4cbf-a4f7-0206daa14ad7';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'databases_by_url';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '50',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7781c59c-0b5f-4cbf-a4f7-0206daa14ad7';
  $display->content['new-7781c59c-0b5f-4cbf-a4f7-0206daa14ad7'] = $pane;
  $display->panels['left'][1] = 'new-7781c59c-0b5f-4cbf-a4f7-0206daa14ad7';
  $pane = new stdClass();
  $pane->pid = 'new-83e9e906-5667-4f97-a44b-af1baff7ec07';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_glossary-panel_pane_2';
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
  $pane->uuid = '83e9e906-5667-4f97-a44b-af1baff7ec07';
  $display->content['new-83e9e906-5667-4f97-a44b-af1baff7ec07'] = $pane;
  $display->panels['right'][0] = 'new-83e9e906-5667-4f97-a44b-af1baff7ec07';
  $pane = new stdClass();
  $pane->pid = 'new-0def10fe-8478-499f-812a-c0a97623113f';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_subject_views-panel_pane_1';
  $pane->shown = FALSE;
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
  $pane->uuid = '0def10fe-8478-499f-812a-c0a97623113f';
  $display->content['new-0def10fe-8478-499f-812a-c0a97623113f'] = $pane;
  $display->panels['right'][1] = 'new-0def10fe-8478-499f-812a-c0a97623113f';
  $pane = new stdClass();
  $pane->pid = 'new-2e96dc2c-369c-467b-93bb-9cfdc64de471';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dmg_subject_views-panel_pane_2';
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
  $pane->uuid = '2e96dc2c-369c-467b-93bb-9cfdc64de471';
  $display->content['new-2e96dc2c-369c-467b-93bb-9cfdc64de471'] = $pane;
  $display->panels['top'][0] = 'new-2e96dc2c-369c-467b-93bb-9cfdc64de471';
  $pane = new stdClass();
  $pane->pid = 'new-6254256a-fd4c-4a00-b7e9-50a9355500b2';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-dmg-admin-menu';
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
  $pane->uuid = '6254256a-fd4c-4a00-b7e9-50a9355500b2';
  $display->content['new-6254256a-fd4c-4a00-b7e9-50a9355500b2'] = $pane;
  $display->panels['top'][1] = 'new-6254256a-fd4c-4a00-b7e9-50a9355500b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-83e9e906-5667-4f97-a44b-af1baff7ec07';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dmg_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'find_all_search_page';
  $page->task = 'page';
  $page->admin_title = 'Find All Search Page';
  $page->admin_description = 'Blank Find All Page. ';
  $page->path = 'find/all';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_find_all_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'find_all_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'find-all-search-page-empty',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'args',
      'lifetime' => '300',
    ),
  );
  $display->title = 'All Search';
  $display->uuid = '5f724647-cd2e-425f-ac6e-1f38d070cea6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_find_all_search_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1f6e00c6-02cf-4e00-b1dc-39d8db2a9862';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'allsearch_block-allsearch_search';
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
  $pane->uuid = '1f6e00c6-02cf-4e00-b1dc-39d8db2a9862';
  $display->content['new-1f6e00c6-02cf-4e00-b1dc-39d8db2a9862'] = $pane;
  $display->panels['left'][0] = 'new-1f6e00c6-02cf-4e00-b1dc-39d8db2a9862';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1f6e00c6-02cf-4e00-b1dc-39d8db2a9862';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['find_all_search_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'Homepage';
  $page->path = 'test';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'landingpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'branding' => NULL,
      'content' => NULL,
      'default' => NULL,
      'fifth' => NULL,
      'first' => NULL,
      'footer' => NULL,
      'fourth' => NULL,
      'header' => NULL,
      'help' => NULL,
      'highlighted' => NULL,
      'last' => NULL,
      'main' => NULL,
      'navigation' => NULL,
      'second' => NULL,
      'secondary' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'tertiary-first' => NULL,
      'tertiary-second' => NULL,
      'tertiary-third' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = 'eb9a5729-ace2-4d45-8855-a003010dca38';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d9a98cf-9a8a-46e5-a0e5-8f8b87c1b2b5';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-homepage_search_tabs';
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
  $pane->uuid = '9d9a98cf-9a8a-46e5-a0e5-8f8b87c1b2b5';
  $display->content['new-9d9a98cf-9a8a-46e5-a0e5-8f8b87c1b2b5'] = $pane;
  $display->panels['first'][0] = 'new-9d9a98cf-9a8a-46e5-a0e5-8f8b87c1b2b5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'landingpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '877e1448-6925-4c72-bf1d-638484ef393c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0987ed13-ab5e-468b-9108-e4754c8c2d2e';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'libcal_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'events--homepage',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0987ed13-ab5e-468b-9108-e4754c8c2d2e';
  $display->content['new-0987ed13-ab5e-468b-9108-e4754c8c2d2e'] = $pane;
  $display->panels['bottom'][0] = 'new-0987ed13-ab5e-468b-9108-e4754c8c2d2e';
  $pane = new stdClass();
  $pane->pid = 'new-b04f016a-4d65-4934-8423-8918655cbfcf';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'libcal_events-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'events--homepage',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b04f016a-4d65-4934-8423-8918655cbfcf';
  $display->content['new-b04f016a-4d65-4934-8423-8918655cbfcf'] = $pane;
  $display->panels['bottom'][1] = 'new-b04f016a-4d65-4934-8423-8918655cbfcf';
  $pane = new stdClass();
  $pane->pid = 'new-136db3d2-38da-4ab8-b58f-688d163ac90d';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title' => 'Locations and Hours',
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
  $pane->uuid = '136db3d2-38da-4ab8-b58f-688d163ac90d';
  $display->content['new-136db3d2-38da-4ab8-b58f-688d163ac90d'] = $pane;
  $display->panels['first'][0] = 'new-136db3d2-38da-4ab8-b58f-688d163ac90d';
  $pane = new stdClass();
  $pane->pid = 'new-eb58174b-63d6-416a-848c-4c81ebee41ac';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours-libhours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Locations and Hours',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eb58174b-63d6-416a-848c-4c81ebee41ac';
  $display->content['new-eb58174b-63d6-416a-848c-4c81ebee41ac'] = $pane;
  $display->panels['first'][1] = 'new-eb58174b-63d6-416a-848c-4c81ebee41ac';
  $pane = new stdClass();
  $pane->pid = 'new-c02dafc1-d1ba-47a1-a2f1-9d892573c72c';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'library_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_1',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '4',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'News',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'library-news',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c02dafc1-d1ba-47a1-a2f1-9d892573c72c';
  $display->content['new-c02dafc1-d1ba-47a1-a2f1-9d892573c72c'] = $pane;
  $display->panels['second'][0] = 'new-c02dafc1-d1ba-47a1-a2f1-9d892573c72c';
  $pane = new stdClass();
  $pane->pid = 'new-7ff21ea7-c718-4484-b2f2-82b9dd63504f';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'emergency_alert_content_block';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'emergency_alert_block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '1',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7ff21ea7-c718-4484-b2f2-82b9dd63504f';
  $display->content['new-7ff21ea7-c718-4484-b2f2-82b9dd63504f'] = $pane;
  $display->panels['top'][0] = 'new-7ff21ea7-c718-4484-b2f2-82b9dd63504f';
  $pane = new stdClass();
  $pane->pid = 'new-5bc452f6-dc1c-4369-9436-1833b6a7fe4a';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_graphics-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '30620',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '2020-21 Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'resources--homepage',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5bc452f6-dc1c-4369-9436-1833b6a7fe4a';
  $display->content['new-5bc452f6-dc1c-4369-9436-1833b6a7fe4a'] = $pane;
  $display->panels['top'][1] = 'new-5bc452f6-dc1c-4369-9436-1833b6a7fe4a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lewis_locker_request_form';
  $page->task = 'page';
  $page->admin_title = 'Lewis Locker Request Form';
  $page->admin_description = '';
  $page->path = 'libraries/scilib/locker-request';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lewis_locker_request_form_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lewis_locker_request_form';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '2',
        'id' => 1,
        'identifier' => 'Entityform Type',
        'keyword' => 'entityform_type',
        'name' => 'entity:entityform_type',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Lewis Library Group Study Room Request',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ae6de861-df5a-4d11-8793-891d7367a643';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lewis_locker_request_form_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6f662008-fdf6-422b-bac9-32795466a7d5';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>To request a locker, you must be a Princeton student.&nbsp; Please login using your netid and password in order to request a locker.</p><p>Any problems? <a href="mailto:scilib.princeton.edu">Email</a> us.</p><p>&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Lewis Library Locker Request',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6f662008-fdf6-422b-bac9-32795466a7d5';
  $display->content['new-6f662008-fdf6-422b-bac9-32795466a7d5'] = $pane;
  $display->panels['middle'][0] = 'new-6f662008-fdf6-422b-bac9-32795466a7d5';
  $pane = new stdClass();
  $pane->pid = 'new-d4af77a3-f02d-42b5-a6cd-1f13d930a81e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd4af77a3-f02d-42b5-a6cd-1f13d930a81e';
  $display->content['new-d4af77a3-f02d-42b5-a6cd-1f13d930a81e'] = $pane;
  $display->panels['middle'][1] = 'new-d4af77a3-f02d-42b5-a6cd-1f13d930a81e';
  $pane = new stdClass();
  $pane->pid = 'new-be08fb66-0f47-4ee2-bfc5-a28eee03d47b';
  $pane->panel = 'middle';
  $pane->type = 'entity_view';
  $pane->subtype = 'entityform_type';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'context_entity:entityform_type_1',
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
  $pane->uuid = 'be08fb66-0f47-4ee2-bfc5-a28eee03d47b';
  $display->content['new-be08fb66-0f47-4ee2-bfc5-a28eee03d47b'] = $pane;
  $display->panels['middle'][2] = 'new-be08fb66-0f47-4ee2-bfc5-a28eee03d47b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-be08fb66-0f47-4ee2-bfc5-a28eee03d47b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lewis_locker_request_form'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lewis_room_registration_form';
  $page->task = 'page';
  $page->admin_title = 'Lewis Room Registration Form';
  $page->admin_description = '';
  $page->path = 'libraries/scilib/room-reservations';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lewis_room_registration_form_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lewis_room_registration_form';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '1',
        'id' => 1,
        'identifier' => 'Entityform Type',
        'keyword' => 'entityform_type',
        'name' => 'entity:entityform_type',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Lewis Library Group Study Room Request',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05434960-d3fa-409c-a5c2-1ce2224bd188';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lewis_room_registration_form_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dfb10bbc-a959-422f-95a5-f2c8745f026f';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>To request a room, a patron must be a Princeton University affiliate.&nbsp; Please login using your netid and password in order to request a room.</p><p>Any problems? <a href="mailto:scilib.princeton.edu">Email</a> us.</p><p>&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Lewis Library Group Study Room Request',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfb10bbc-a959-422f-95a5-f2c8745f026f';
  $display->content['new-dfb10bbc-a959-422f-95a5-f2c8745f026f'] = $pane;
  $display->panels['middle'][0] = 'new-dfb10bbc-a959-422f-95a5-f2c8745f026f';
  $pane = new stdClass();
  $pane->pid = 'new-726fa116-a7f8-44f0-a854-4eaa431c72d0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '726fa116-a7f8-44f0-a854-4eaa431c72d0';
  $display->content['new-726fa116-a7f8-44f0-a854-4eaa431c72d0'] = $pane;
  $display->panels['middle'][1] = 'new-726fa116-a7f8-44f0-a854-4eaa431c72d0';
  $pane = new stdClass();
  $pane->pid = 'new-06841620-b9e8-40ba-b049-583bd5177dd6';
  $pane->panel = 'middle';
  $pane->type = 'entity_view';
  $pane->subtype = 'entityform_type';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'context_entity:entityform_type_1',
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
  $pane->uuid = '06841620-b9e8-40ba-b049-583bd5177dd6';
  $display->content['new-06841620-b9e8-40ba-b049-583bd5177dd6'] = $pane;
  $display->panels['middle'][2] = 'new-06841620-b9e8-40ba-b049-583bd5177dd6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06841620-b9e8-40ba-b049-583bd5177dd6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lewis_room_registration_form'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'not_found_page';
  $page->task = 'page';
  $page->admin_title = 'Not Found Page';
  $page->admin_description = 'Page to display for http 404 error';
  $page->path = 'not-found';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_not_found_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'not_found_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '#not-found',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'We\'re sorry, but there was a problem finding the page you requested.';
  $display->uuid = 'a1cf31f4-0ff0-4887-98f3-b4555b7207ad';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_not_found_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-984d77d2-d36d-4f4f-9b4b-bf782add332d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Help',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '984d77d2-d36d-4f4f-9b4b-bf782add332d';
  $display->content['new-984d77d2-d36d-4f4f-9b4b-bf782add332d'] = $pane;
  $display->panels['middle'][0] = 'new-984d77d2-d36d-4f4f-9b4b-bf782add332d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['not_found_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'prds_search_results_page';
  $page->task = 'page';
  $page->admin_title = 'PRDS Search Results Page';
  $page->admin_description = 'PRDS Search Results';
  $page->path = 'research-data/search/%query';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_prds_search_results_page__panel_context_13c89ea1-deaa-44fa-8d38-24616ee45f01';
  $handler->task = 'page';
  $handler->subtask = 'prds_search_results_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'prds-results-page section-services branch-libraries',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'prds',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'PRDS',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->title = 'Search Results for %query in Princeton Research Data Service';
  $display->uuid = '8c252a09-0ce1-47a9-8c4e-31443fa68035';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_prds_search_results_page__panel_context_13c89ea1-deaa-44fa-8d38-24616ee45f01';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3de70b9-80bf-4c94-9aa0-80b940640865';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---research-data-ser';
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
  $pane->uuid = 'c3de70b9-80bf-4c94-9aa0-80b940640865';
  $display->content['new-c3de70b9-80bf-4c94-9aa0-80b940640865'] = $pane;
  $display->panels['first'][0] = 'new-c3de70b9-80bf-4c94-9aa0-80b940640865';
  $pane = new stdClass();
  $pane->pid = 'new-5ca35116-e96f-4897-b011-411351c5400d';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'prdssearch_block-prdssearch_search';
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
  $pane->uuid = '5ca35116-e96f-4897-b011-411351c5400d';
  $display->content['new-5ca35116-e96f-4897-b011-411351c5400d'] = $pane;
  $display->panels['second'][0] = 'new-5ca35116-e96f-4897-b011-411351c5400d';
  $pane = new stdClass();
  $pane->pid = 'new-7ef9e86e-bc6a-4329-8b16-cf436f9471b6';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'section_search-panel_pane_1';
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
  $pane->uuid = '7ef9e86e-bc6a-4329-8b16-cf436f9471b6';
  $display->content['new-7ef9e86e-bc6a-4329-8b16-cf436f9471b6'] = $pane;
  $display->panels['second'][1] = 'new-7ef9e86e-bc6a-4329-8b16-cf436f9471b6';
  $pane = new stdClass();
  $pane->pid = 'new-0d57f30b-bf4b-4def-bccb-cfc9d1d30f22';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Princeton Research Data Service',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0d57f30b-bf4b-4def-bccb-cfc9d1d30f22';
  $display->content['new-0d57f30b-bf4b-4def-bccb-cfc9d1d30f22'] = $pane;
  $display->panels['top'][0] = 'new-0d57f30b-bf4b-4def-bccb-cfc9d1d30f22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['prds_search_results_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_categories_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Research Categories Landing Page';
  $page->admin_description = 'Page of PUL Featured Links related to Research';
  $page->path = 'research';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research_categories_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research_categories_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'six-six';
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
  $display->title = 'Research Tools';
  $display->uuid = 'bbbb1fa2-c2ee-4da0-9bec-d3e198d747a3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_research_categories_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40401fb7-3ccb-4847-8dfe-8a5d48e00616';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5007',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'quick-links',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40401fb7-3ccb-4847-8dfe-8a5d48e00616';
  $display->content['new-40401fb7-3ccb-4847-8dfe-8a5d48e00616'] = $pane;
  $display->panels['first'][0] = 'new-40401fb7-3ccb-4847-8dfe-8a5d48e00616';
  $pane = new stdClass();
  $pane->pid = 'new-42c0b272-55b0-423e-a163-b25fcf44bb7d';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5008',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'specialized-research-resources',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '42c0b272-55b0-423e-a163-b25fcf44bb7d';
  $display->content['new-42c0b272-55b0-423e-a163-b25fcf44bb7d'] = $pane;
  $display->panels['first'][1] = 'new-42c0b272-55b0-423e-a163-b25fcf44bb7d';
  $pane = new stdClass();
  $pane->pid = 'new-25196fdc-3ae4-4d62-8d47-953cf51b512c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5009',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'pul-research-resources',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '25196fdc-3ae4-4d62-8d47-953cf51b512c';
  $display->content['new-25196fdc-3ae4-4d62-8d47-953cf51b512c'] = $pane;
  $display->panels['second'][0] = 'new-25196fdc-3ae4-4d62-8d47-953cf51b512c';
  $pane = new stdClass();
  $pane->pid = 'new-f59815f3-47e6-46ca-9401-17b0a38e99ac';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5010',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'additional-research-tools',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f59815f3-47e6-46ca-9401-17b0a38e99ac';
  $display->content['new-f59815f3-47e6-46ca-9401-17b0a38e99ac'] = $pane;
  $display->panels['second'][1] = 'new-f59815f3-47e6-46ca-9401-17b0a38e99ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_categories_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_categories_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Service Categories Landing Page';
  $page->admin_description = 'Holds lists of Top PUL Service Categories';
  $page->path = 'services';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_service_categories_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'service_categories_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'six-six';
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
  $display->title = 'Library Services';
  $display->uuid = 'e74c36b3-3256-4c38-a5c7-6c364c53926e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_service_categories_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-08157df2-3e2e-40f9-a090-7fd5134cff54';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '30621',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Spring 2021 Services',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '08157df2-3e2e-40f9-a090-7fd5134cff54';
  $display->content['new-08157df2-3e2e-40f9-a090-7fd5134cff54'] = $pane;
  $display->panels['first'][0] = 'new-08157df2-3e2e-40f9-a090-7fd5134cff54';
  $pane = new stdClass();
  $pane->pid = 'new-12d6311d-f924-4674-9140-4a9ce025c84b';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5012',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'using-collections',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '12d6311d-f924-4674-9140-4a9ce025c84b';
  $display->content['new-12d6311d-f924-4674-9140-4a9ce025c84b'] = $pane;
  $display->panels['first'][1] = 'new-12d6311d-f924-4674-9140-4a9ce025c84b';
  $pane = new stdClass();
  $pane->pid = 'new-1990251f-5830-470d-9c11-1e220e7871ab';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5013',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'using-libraries',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1990251f-5830-470d-9c11-1e220e7871ab';
  $display->content['new-1990251f-5830-470d-9c11-1e220e7871ab'] = $pane;
  $display->panels['first'][2] = 'new-1990251f-5830-470d-9c11-1e220e7871ab';
  $pane = new stdClass();
  $pane->pid = 'new-3064c05f-2827-4ac7-ac7e-32c9d764453d';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5014',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'research-services',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3064c05f-2827-4ac7-ac7e-32c9d764453d';
  $display->content['new-3064c05f-2827-4ac7-ac7e-32c9d764453d'] = $pane;
  $display->panels['second'][0] = 'new-3064c05f-2827-4ac7-ac7e-32c9d764453d';
  $pane = new stdClass();
  $pane->pid = 'new-7a37fa06-78c2-4967-9b55-c984164853e3';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_pul_link_group-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5011',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'request-delivery',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a37fa06-78c2-4967-9b55-c984164853e3';
  $display->content['new-7a37fa06-78c2-4967-9b55-c984164853e3'] = $pane;
  $display->panels['second'][1] = 'new-7a37fa06-78c2-4967-9b55-c984164853e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_categories_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Staff Landing Page';
  $page->admin_description = '';
  $page->path = 'staff/directory/%letter';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array(
    'letter' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'staff-index-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff/directory
',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff List',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = 'Staff List: %letter:html_safe';
  $display->uuid = 'd0bbd3e0-4102-4435-a24d-1bfb83e520ae';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f65a61c8-1ea5-4438-9008-619648edc9f2';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_list_browse-panel_pane_1';
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
  $pane->css = array(
    'css_class' => 'links--decorate',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f65a61c8-1ea5-4438-9008-619648edc9f2';
  $display->content['new-f65a61c8-1ea5-4438-9008-619648edc9f2'] = $pane;
  $display->panels['first'][0] = 'new-f65a61c8-1ea5-4438-9008-619648edc9f2';
  $pane = new stdClass();
  $pane->pid = 'new-97b7e5d7-4a58-4072-a1b4-357f92b378de';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'general_site_user_search';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '25',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '97b7e5d7-4a58-4072-a1b4-357f92b378de';
  $display->content['new-97b7e5d7-4a58-4072-a1b4-357f92b378de'] = $pane;
  $display->panels['first'][1] = 'new-97b7e5d7-4a58-4072-a1b4-357f92b378de';
  $pane = new stdClass();
  $pane->pid = 'new-1e854a4f-20a2-4ca6-8d7f-93fd813e80f2';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e854a4f-20a2-4ca6-8d7f-93fd813e80f2';
  $display->content['new-1e854a4f-20a2-4ca6-8d7f-93fd813e80f2'] = $pane;
  $display->panels['second'][0] = 'new-1e854a4f-20a2-4ca6-8d7f-93fd813e80f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f65a61c8-1ea5-4438-9008-619648edc9f2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_search_landing_page';
  $page->task = 'page';
  $page->admin_title = 'staff_search_landing_page';
  $page->admin_description = '';
  $page->path = 'find/staff/%query';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff_search_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_search_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'staff-find-results-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'find/all/%query:html_safe',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Find All %query:html_safe',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_9_3';
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
  $display->uuid = '524cbeac-736c-42d2-a7b5-ceb790dea4ba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_search_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c588f89a-c906-4927-95d3-45ba46beffa7';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'general_site_user_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'context' => array(
      0 => 'argument_string_1.html_safe',
    ),
    'display' => 'page_2',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '25',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 1,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c588f89a-c906-4927-95d3-45ba46beffa7';
  $display->content['new-c588f89a-c906-4927-95d3-45ba46beffa7'] = $pane;
  $display->panels['left'][0] = 'new-c588f89a-c906-4927-95d3-45ba46beffa7';
  $pane = new stdClass();
  $pane->pid = 'new-a97b3c93-cc4c-4cad-be56-40fe14446adb';
  $pane->panel = 'right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a97b3c93-cc4c-4cad-be56-40fe14446adb';
  $display->content['new-a97b3c93-cc4c-4cad-be56-40fe14446adb'] = $pane;
  $display->panels['right'][0] = 'new-a97b3c93-cc4c-4cad-be56-40fe14446adb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c588f89a-c906-4927-95d3-45ba46beffa7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_search_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'subject_specialists_page';
  $page->task = 'page';
  $page->admin_title = 'Subject Specialists Page';
  $page->admin_description = 'Browse through subject specialists. ';
  $page->path = 'staff/specialists';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_subject_specialists_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'subject_specialists_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second specialist-landing-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'single';
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
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'none',
      'lifetime' => '14400',
    ),
  );
  $display->title = 'Subject Librarians';
  $display->uuid = 'a01f0ee6-2ca6-4d4f-ae0f-2c68a274a10b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_subject_specialists_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2acb5036-d733-4f47-92ad-88786e43c67c';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 1,
    'nid' => '1913',
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
  $pane->uuid = '2acb5036-d733-4f47-92ad-88786e43c67c';
  $display->content['new-2acb5036-d733-4f47-92ad-88786e43c67c'] = $pane;
  $display->panels['top'][0] = 'new-2acb5036-d733-4f47-92ad-88786e43c67c';
  $pane = new stdClass();
  $pane->pid = 'new-290372d0-9ee7-4aa0-892f-eae6b57379a0';
  $pane->panel = 'top';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '290372d0-9ee7-4aa0-892f-eae6b57379a0';
  $display->content['new-290372d0-9ee7-4aa0-892f-eae6b57379a0'] = $pane;
  $display->panels['top'][1] = 'new-290372d0-9ee7-4aa0-892f-eae6b57379a0';
  $pane = new stdClass();
  $pane->pid = 'new-5384ce6a-2808-4232-8387-6435a7bb6b93';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'specialist_finder';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5384ce6a-2808-4232-8387-6435a7bb6b93';
  $display->content['new-5384ce6a-2808-4232-8387-6435a7bb6b93'] = $pane;
  $display->panels['top'][2] = 'new-5384ce6a-2808-4232-8387-6435a7bb6b93';
  $pane = new stdClass();
  $pane->pid = 'new-b54fa5e1-c2de-48a3-a733-ba4660bd008c';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'databases_by_subject';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block_2',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 1,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b54fa5e1-c2de-48a3-a733-ba4660bd008c';
  $display->content['new-b54fa5e1-c2de-48a3-a733-ba4660bd008c'] = $pane;
  $display->panels['top'][3] = 'new-b54fa5e1-c2de-48a3-a733-ba4660bd008c';
  $pane = new stdClass();
  $pane->pid = 'new-30026619-0e37-4777-9278-2e6855a4e02f';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'specialist_finder';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'links--decorate',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '30026619-0e37-4777-9278-2e6855a4e02f';
  $display->content['new-30026619-0e37-4777-9278-2e6855a4e02f'] = $pane;
  $display->panels['top'][4] = 'new-30026619-0e37-4777-9278-2e6855a4e02f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['subject_specialists_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'subjects_home_page';
  $page->task = 'page';
  $page->admin_title = 'Subjects Home Page';
  $page->admin_description = 'Home page listing all active subjects. ';
  $page->path = 'research/databases/subjects';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_subjects_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'subjects_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second find-subjects-landing-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'research/databases',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
      'third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Databases by Subject';
  $display->uuid = '27331c10-7aad-4384-a329-b9d40b5182fd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_subjects_home_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e5302c8-9964-4b39-bccd-2eef07cfbb75';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'databases_by_subject';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e5302c8-9964-4b39-bccd-2eef07cfbb75';
  $display->content['new-2e5302c8-9964-4b39-bccd-2eef07cfbb75'] = $pane;
  $display->panels['first'][0] = 'new-2e5302c8-9964-4b39-bccd-2eef07cfbb75';
  $pane = new stdClass();
  $pane->pid = 'new-d84a5bbb-a2a5-4a9f-b9d5-b9ebaf33dfd4';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'specialist_finder';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'block',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '0',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Find a Subject Librarian',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd84a5bbb-a2a5-4a9f-b9d5-b9ebaf33dfd4';
  $display->content['new-d84a5bbb-a2a5-4a9f-b9d5-b9ebaf33dfd4'] = $pane;
  $display->panels['second'][0] = 'new-d84a5bbb-a2a5-4a9f-b9d5-b9ebaf33dfd4';
  $pane = new stdClass();
  $pane->pid = 'new-1d493223-0101-44aa-9991-29cf5ac8ed37';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-26';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Report a Problem',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1d493223-0101-44aa-9991-29cf5ac8ed37';
  $display->content['new-1d493223-0101-44aa-9991-29cf5ac8ed37'] = $pane;
  $display->panels['second'][1] = 'new-1d493223-0101-44aa-9991-29cf5ac8ed37';
  $pane = new stdClass();
  $pane->pid = 'new-4f625bea-d86f-4c26-bf08-033d56c1740c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_glossary-panel_pane_2';
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
  $pane->uuid = '4f625bea-d86f-4c26-bf08-033d56c1740c';
  $display->content['new-4f625bea-d86f-4c26-bf08-033d56c1740c'] = $pane;
  $display->panels['second'][2] = 'new-4f625bea-d86f-4c26-bf08-033d56c1740c';
  $pane = new stdClass();
  $pane->pid = 'new-2b6a9fd4-bd22-41dc-892e-cfab85e36596';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_glossary-panel_pane_3';
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
  $pane->uuid = '2b6a9fd4-bd22-41dc-892e-cfab85e36596';
  $display->content['new-2b6a9fd4-bd22-41dc-892e-cfab85e36596'] = $pane;
  $display->panels['second'][3] = 'new-2b6a9fd4-bd22-41dc-892e-cfab85e36596';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['subjects_home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'systems_office';
  $page->task = 'page';
  $page->admin_title = 'Systems Office';
  $page->admin_description = '';
  $page->path = 'staff/systems_office/staff';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_systems_office_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'systems_office';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'left_bottom' => NULL,
      'left_top' => NULL,
      'middle_bottom' => NULL,
      'middle_top' => NULL,
      'right' => NULL,
      'right_top' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Library Systems Office';
  $display->uuid = '09b49cf7-9779-4834-a5be-64cd20c73e64';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_systems_office_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2d93509e-f72e-46d2-9f85-d771d9833474';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6771',
    ),
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
  $pane->uuid = '2d93509e-f72e-46d2-9f85-d771d9833474';
  $display->content['new-2d93509e-f72e-46d2-9f85-d771d9833474'] = $pane;
  $display->panels['middle'][0] = 'new-2d93509e-f72e-46d2-9f85-d771d9833474';
  $pane = new stdClass();
  $pane->pid = 'new-dbb7c0b5-a5ec-4a0d-a65b-07336c7265f8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6676',
    ),
    'override_title' => 1,
    'override_title_text' => 'Systems',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dbb7c0b5-a5ec-4a0d-a65b-07336c7265f8';
  $display->content['new-dbb7c0b5-a5ec-4a0d-a65b-07336c7265f8'] = $pane;
  $display->panels['middle'][1] = 'new-dbb7c0b5-a5ec-4a0d-a65b-07336c7265f8';
  $pane = new stdClass();
  $pane->pid = 'new-5d156781-2970-4dd3-8124-67ecc8cfbd0f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6769',
    ),
    'override_title' => 1,
    'override_title_text' => 'Digital Studio',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5d156781-2970-4dd3-8124-67ecc8cfbd0f';
  $display->content['new-5d156781-2970-4dd3-8124-67ecc8cfbd0f'] = $pane;
  $display->panels['middle'][2] = 'new-5d156781-2970-4dd3-8124-67ecc8cfbd0f';
  $pane = new stdClass();
  $pane->pid = 'new-af99eab5-b2aa-4823-ae00-408df8fc9efe';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6770',
    ),
    'override_title' => 1,
    'override_title_text' => 'Preservation Office',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'af99eab5-b2aa-4823-ae00-408df8fc9efe';
  $display->content['new-af99eab5-b2aa-4823-ae00-408df8fc9efe'] = $pane;
  $display->panels['middle'][3] = 'new-af99eab5-b2aa-4823-ae00-408df8fc9efe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['systems_office'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'topic_page';
  $page->task = 'page';
  $page->admin_title = 'Topic Page';
  $page->admin_description = 'Topic Page';
  $page->path = 'subject/%name';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'breadcrumb' => 1,
        'input_form' => 'tid',
        'transform' => 0,
        'vids' => array(
          1 => 0,
          4 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          12 => '12',
          13 => 0,
          14 => 0,
          15 => 0,
          16 => 0,
          17 => 0,
          18 => 0,
          19 => 0,
          20 => 0,
        ),
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_topic_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'topic_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'topic-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'subjects',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Subjects',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = '%name';
  $display->uuid = 'be90f301-45a1-47a2-805b-6fc32867d979';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_topic_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6105d0ae-888d-44f2-8cb5-545c93cce705';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-panel_pane_3';
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
  $pane->uuid = '6105d0ae-888d-44f2-8cb5-545c93cce705';
  $display->content['new-6105d0ae-888d-44f2-8cb5-545c93cce705'] = $pane;
  $display->panels['left'][0] = 'new-6105d0ae-888d-44f2-8cb5-545c93cce705';
  $pane = new stdClass();
  $pane->pid = 'new-7a88dc21-167e-462a-a835-b158a2d4de70';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-lib_guides_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'argument_term_1',
        'name' => 'entity_field_value:taxonomy_term:database_subjects:field_subs_primary_library_guide',
        'not' => FALSE,
        'settings' => array(
          'field_subs_primary_library_guide' => array(
            'und' => array(
              0 => array(
                'url' => '',
              ),
            ),
          ),
          'field_subs_primary_library_guide_attributes' => array(
            0 => array(
              'url' => '',
            ),
          ),
          'field_subs_primary_library_guide_title' => array(
            0 => array(
              'url' => '',
            ),
          ),
          'field_subs_primary_library_guide_url' => array(
            0 => array(
              'url' => '',
            ),
          ),
        ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a88dc21-167e-462a-a835-b158a2d4de70';
  $display->content['new-7a88dc21-167e-462a-a835-b158a2d4de70'] = $pane;
  $display->panels['left'][1] = 'new-7a88dc21-167e-462a-a835-b158a2d4de70';
  $pane = new stdClass();
  $pane->pid = 'new-18e0fdb7-12e6-4b7f-8a82-c8774675bb63';
  $pane->panel = 'right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '18e0fdb7-12e6-4b7f-8a82-c8774675bb63';
  $display->content['new-18e0fdb7-12e6-4b7f-8a82-c8774675bb63'] = $pane;
  $display->panels['right'][0] = 'new-18e0fdb7-12e6-4b7f-8a82-c8774675bb63';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6105d0ae-888d-44f2-8cb5-545c93cce705';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['topic_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'website_content_search';
  $page->task = 'page';
  $page->admin_title = 'Website Search Results';
  $page->admin_description = '';
  $page->path = 'find/website/%query';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'query',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_website_content_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'website_content_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'find/website
find/website/%query',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Website Search
Search for %query',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Website Search Panel',
  );
  $display = new panels_display();
  $display->layout = 'nine-three-stacked';
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
  $display->title = 'Website Search for <i>%query</i>';
  $display->uuid = 'd712ecac-b503-4555-85e8-33a6933069f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_website_content_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5641ed17-42c4-4b2c-8ff7-8773970967b6';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'general_site_keyword_search-panel_pane_2';
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
  $pane->uuid = '5641ed17-42c4-4b2c-8ff7-8773970967b6';
  $display->content['new-5641ed17-42c4-4b2c-8ff7-8773970967b6'] = $pane;
  $display->panels['first'][0] = 'new-5641ed17-42c4-4b2c-8ff7-8773970967b6';
  $pane = new stdClass();
  $pane->pid = 'new-72d62efb-2811-4c7b-929d-5da545a5303a';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'general_site_user_search-panel_pane_1';
  $pane->shown = FALSE;
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
  $pane->uuid = '72d62efb-2811-4c7b-929d-5da545a5303a';
  $display->content['new-72d62efb-2811-4c7b-929d-5da545a5303a'] = $pane;
  $display->panels['first'][1] = 'new-72d62efb-2811-4c7b-929d-5da545a5303a';
  $pane = new stdClass();
  $pane->pid = 'new-05ef493c-71da-46c2-88fa-37854c2a72c8';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-R2AEH1rq0GDt4tPXW5YJy8gBEbPVTgPU';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Filter by Tags',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '05ef493c-71da-46c2-88fa-37854c2a72c8';
  $display->content['new-05ef493c-71da-46c2-88fa-37854c2a72c8'] = $pane;
  $display->panels['second'][0] = 'new-05ef493c-71da-46c2-88fa-37854c2a72c8';
  $pane = new stdClass();
  $pane->pid = 'new-b9add156-3e5a-40fe-bed2-ee7edbda2721';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'website_block-website_search';
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
  $pane->uuid = 'b9add156-3e5a-40fe-bed2-ee7edbda2721';
  $display->content['new-b9add156-3e5a-40fe-bed2-ee7edbda2721'] = $pane;
  $display->panels['top'][0] = 'new-b9add156-3e5a-40fe-bed2-ee7edbda2721';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['website_content_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'website_search_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Website Search Landing Page';
  $page->admin_description = 'Lnad';
  $page->path = 'find/website';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_website_search_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'website_search_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'website-search-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
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
  $display->title = 'Search Library Website';
  $display->uuid = 'c90f0d3f-7f74-48a7-862a-54ad9f4a5dfb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_website_search_landing_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e79b99ed-7218-497b-b88c-3ec941eb0a86';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'website_block-website_search';
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
  $pane->uuid = 'e79b99ed-7218-497b-b88c-3ec941eb0a86';
  $display->content['new-e79b99ed-7218-497b-b88c-3ec941eb0a86'] = $pane;
  $display->panels['left'][0] = 'new-e79b99ed-7218-497b-b88c-3ec941eb0a86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e79b99ed-7218-497b-b88c-3ec941eb0a86';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['website_search_landing_page'] = $page;

  return $pages;

}
