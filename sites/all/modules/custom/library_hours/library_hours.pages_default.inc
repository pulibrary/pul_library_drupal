<?php
/**
 * @file
 * library_hours.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_hours_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -5;
  $handler->conf = array(
    'title' => 'Individual Date Page',
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
        'keyword' => 'calendar',
        'name' => 'entity_from_field:field_hrs_lib_calendar-node-node',
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
              'library_hours' => 'library_hours',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:field_hrs_lib_calendar';
  $display->uuid = '81bd8a3b-8cca-444f-8103-fe30d4a0ca3b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0dbe43ea-6d68-4999-8649-c36276824d87';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'calendar_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
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
  $pane->uuid = '0dbe43ea-6d68-4999-8649-c36276824d87';
  $display->content['new-0dbe43ea-6d68-4999-8649-c36276824d87'] = $pane;
  $display->panels['middle'][0] = 'new-0dbe43ea-6d68-4999-8649-c36276824d87';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_13';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Library Hours Calendar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-sidebar  page-hours',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              19 => '19',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Hours',
    'panels_breadcrumbs_paths' => 'hours',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c9789bf5-813b-489e-8edc-f93b5899f3fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_13';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3f97ff20-3af1-48cf-9c6a-403347963a9c';
  $pane->panel = 'middle';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
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
  $pane->uuid = '3f97ff20-3af1-48cf-9c6a-403347963a9c';
  $display->content['new-3f97ff20-3af1-48cf-9c6a-403347963a9c'] = $pane;
  $display->panels['middle'][0] = 'new-3f97ff20-3af1-48cf-9c6a-403347963a9c';
  $pane = new stdClass();
  $pane->pid = 'new-82be679d-103e-4ca4-977e-5bf56e332c93';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours_calendar-panel_pane_2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'hours',
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '%term:tid',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '82be679d-103e-4ca4-977e-5bf56e332c93';
  $display->content['new-82be679d-103e-4ca4-977e-5bf56e332c93'] = $pane;
  $display->panels['middle'][1] = 'new-82be679d-103e-4ca4-977e-5bf56e332c93';
  $pane = new stdClass();
  $pane->pid = 'new-8a37a979-a540-41c1-abf5-9e1b800f2816';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'calendar/month',
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '%term:tid',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8a37a979-a540-41c1-abf5-9e1b800f2816';
  $display->content['new-8a37a979-a540-41c1-abf5-9e1b800f2816'] = $pane;
  $display->panels['middle'][2] = 'new-8a37a979-a540-41c1-abf5-9e1b800f2816';
  $pane = new stdClass();
  $pane->pid = 'new-b7cc040e-76de-4d76-ab65-0322b6869d49';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'calendar/week',
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '%term:tid',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b7cc040e-76de-4d76-ab65-0322b6869d49';
  $display->content['new-b7cc040e-76de-4d76-ab65-0322b6869d49'] = $pane;
  $display->panels['middle'][3] = 'new-b7cc040e-76de-4d76-ab65-0322b6869d49';
  $pane = new stdClass();
  $pane->pid = 'new-bdb7c60e-2f1e-48ad-8fa8-148d771f3953';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'calendar_details-panel_pane_2';
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
  $pane->uuid = 'bdb7c60e-2f1e-48ad-8fa8-148d771f3953';
  $display->content['new-bdb7c60e-2f1e-48ad-8fa8-148d771f3953'] = $pane;
  $display->panels['top'][0] = 'new-bdb7c60e-2f1e-48ad-8fa8-148d771f3953';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-82be679d-103e-4ca4-977e-5bf56e332c93';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_13'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function library_hours_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hours';
  $page->task = 'page';
  $page->admin_title = 'Hours';
  $page->admin_description = '';
  $page->path = 'hours';
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
  $handler->name = 'page_hours_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hours';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second hours-view',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
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
  $display->title = 'Library Hours';
  $display->uuid = '5656b58b-5203-4db6-a11e-bd634eb6eee8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hours_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-58f899d7-3196-4c4e-a46d-8da35703458b';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'emergency_alert_content_block';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'emergency_alert_block',
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
  $pane->uuid = '58f899d7-3196-4c4e-a46d-8da35703458b';
  $display->content['new-58f899d7-3196-4c4e-a46d-8da35703458b'] = $pane;
  $display->panels['first'][0] = 'new-58f899d7-3196-4c4e-a46d-8da35703458b';
  $pane = new stdClass();
  $pane->pid = 'new-4cb81c3f-4f49-4a4a-9005-117f5a21e3b4';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'calendar_details-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Official posted hours for all Library units by month:',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4cb81c3f-4f49-4a4a-9005-117f5a21e3b4';
  $display->content['new-4cb81c3f-4f49-4a4a-9005-117f5a21e3b4'] = $pane;
  $display->panels['first'][1] = 'new-4cb81c3f-4f49-4a4a-9005-117f5a21e3b4';
  $pane = new stdClass();
  $pane->pid = 'new-cea639d2-52ef-4a2f-a6bd-77fa5371bb05';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'calendar/day',
    'override_title' => 0,
    'override_title_text' => 'Hours for',
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
  $pane->uuid = 'cea639d2-52ef-4a2f-a6bd-77fa5371bb05';
  $display->content['new-cea639d2-52ef-4a2f-a6bd-77fa5371bb05'] = $pane;
  $display->panels['first'][2] = 'new-cea639d2-52ef-4a2f-a6bd-77fa5371bb05';
  $pane = new stdClass();
  $pane->pid = 'new-a8690ff1-4031-4955-a0ea-74d5bc62ea9e';
  $pane->panel = 'second';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '6584',
    'links' => 0,
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a8690ff1-4031-4955-a0ea-74d5bc62ea9e';
  $display->content['new-a8690ff1-4031-4955-a0ea-74d5bc62ea9e'] = $pane;
  $display->panels['second'][0] = 'new-a8690ff1-4031-4955-a0ea-74d5bc62ea9e';
  $pane = new stdClass();
  $pane->pid = 'new-0c621817-a3cd-4a0d-8338-5ed07b2ba59d';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0c621817-a3cd-4a0d-8338-5ed07b2ba59d';
  $display->content['new-0c621817-a3cd-4a0d-8338-5ed07b2ba59d'] = $pane;
  $display->panels['second'][1] = 'new-0c621817-a3cd-4a0d-8338-5ed07b2ba59d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hours'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hours_all';
  $page->task = 'page';
  $page->admin_title = 'Hours All';
  $page->admin_description = '';
  $page->path = 'staff/hours/all';
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
  $handler->name = 'page_hours_all_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hours_all';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Calendar',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '19',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '69f38ad2-f28d-49d1-8f87-3d016bf8a590';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hours_all_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e83d226-48e2-4d35-bdb0-b75868a6ae54';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_hours-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'calendar/day',
    'arguments' => array(
      'field_hrs_lib_calendar_target_id' => '%taxonomy_vocabulary:vid',
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
  $pane->uuid = '2e83d226-48e2-4d35-bdb0-b75868a6ae54';
  $display->content['new-2e83d226-48e2-4d35-bdb0-b75868a6ae54'] = $pane;
  $display->panels['middle'][0] = 'new-2e83d226-48e2-4d35-bdb0-b75868a6ae54';
  $pane = new stdClass();
  $pane->pid = 'new-a7b95d21-d748-4400-b35e-10486c2f7c1f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'calendar_details';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->uuid = 'a7b95d21-d748-4400-b35e-10486c2f7c1f';
  $display->content['new-a7b95d21-d748-4400-b35e-10486c2f7c1f'] = $pane;
  $display->panels['middle'][1] = 'new-a7b95d21-d748-4400-b35e-10486c2f7c1f';
  $pane = new stdClass();
  $pane->pid = 'new-20ee550a-a94d-417b-a8a7-1f9d2501c3a8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'calendar_details-panel_pane_2';
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
  $pane->uuid = '20ee550a-a94d-417b-a8a7-1f9d2501c3a8';
  $display->content['new-20ee550a-a94d-417b-a8a7-1f9d2501c3a8'] = $pane;
  $display->panels['middle'][2] = 'new-20ee550a-a94d-417b-a8a7-1f9d2501c3a8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2e83d226-48e2-4d35-bdb0-b75868a6ae54';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hours_all'] = $page;

  return $pages;

}
