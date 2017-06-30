<?php
/**
 * @file
 * staff_announcements.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function staff_announcements_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'announcements';
  $page->task = 'page';
  $page->admin_title = 'Announcements';
  $page->admin_description = '';
  $page->path = 'staff/announcements';
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
  $handler->name = 'page_announcements__panel';
  $handler->task = 'page';
  $handler->subtask = 'announcements';
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
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Staff Announcements Archive';
  $display->uuid = '8a155bc6-cb34-4d2a-b59d-e15f1b5b1b8a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_announcements__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e79e7ea8-1d12-4be8-af6c-11adfec0b16c';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_announcement_lists-panel_pane_3';
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
  $pane->uuid = 'e79e7ea8-1d12-4be8-af6c-11adfec0b16c';
  $display->content['new-e79e7ea8-1d12-4be8-af6c-11adfec0b16c'] = $pane;
  $display->panels['first'][0] = 'new-e79e7ea8-1d12-4be8-af6c-11adfec0b16c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['announcements'] = $page;

  return $pages;

}
