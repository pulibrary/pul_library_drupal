<?php
/**
 * @file
 * library_study_rooms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function library_study_rooms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'study_space_listings_for_firestone_library';
  $page->task = 'page';
  $page->admin_title = 'Study Space Listings for Firestone Library';
  $page->admin_description = 'Study Spaces for Firestone.';
  $page->path = 'libraries/firestone/study-rooms';
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
  $handler->name = 'page_study_space_listings_for_firestone_library_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'study_space_listings_for_firestone_library';
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
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
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
  $display->title = 'Firestone Reading and Graduate Study Rooms';
  $display->uuid = 'f4eb48c6-0a7d-4bed-a025-0e1dd90a2fe2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c592a3a-3259-4b26-a095-b1a9873c22b5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'study_room_lists-panel_pane_1';
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
    $pane->uuid = '0c592a3a-3259-4b26-a095-b1a9873c22b5';
    $display->content['new-0c592a3a-3259-4b26-a095-b1a9873c22b5'] = $pane;
    $display->panels['middle'][0] = 'new-0c592a3a-3259-4b26-a095-b1a9873c22b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['study_space_listings_for_firestone_library'] = $page;

  return $pages;

}
