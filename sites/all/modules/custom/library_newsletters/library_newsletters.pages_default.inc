<?php
/**
 * @file
 * library_newsletters.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function library_newsletters_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newsletter_archive';
  $page->task = 'page';
  $page->admin_title = 'NewsLetter Archive';
  $page->admin_description = '';
  $page->path = 'staff/newsletters';
  $page->access = array(
    'logic' => 'and',
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
  $handler->name = 'page_newsletter_archive__panel';
  $handler->task = 'page';
  $handler->subtask = 'newsletter_archive';
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
  $display->title = 'Library Newsletter Archive';
  $display->uuid = '13881bb9-93fb-4e3a-ad65-975dea543d0c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_newsletter_archive__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-70024487-fd6f-4981-9b85-18cd0b9734fc';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_newsletter_listings-panel_pane_1';
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
  $pane->uuid = '70024487-fd6f-4981-9b85-18cd0b9734fc';
  $display->content['new-70024487-fd6f-4981-9b85-18cd0b9734fc'] = $pane;
  $display->panels['first'][0] = 'new-70024487-fd6f-4981-9b85-18cd0b9734fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-70024487-fd6f-4981-9b85-18cd0b9734fc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newsletter_archive'] = $page;

  return $pages;

}
