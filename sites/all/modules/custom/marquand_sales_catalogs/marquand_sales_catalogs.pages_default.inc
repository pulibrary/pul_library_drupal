<?php
/**
 * @file
 * marquand_sales_catalogs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function marquand_sales_catalogs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'marquand_sales_catalogs';
  $page->task = 'page';
  $page->admin_title = 'Marquand Sales Catalogs';
  $page->admin_description = 'Sales Catalogs for Marquand';
  $page->path = 'marquand/sales-catalogs';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_marquand_sales_catalogs__panel_context_571b8125-3f30-4cad-9cd4-a425e1e20cd5';
  $handler->task = 'page';
  $handler->subtask = 'marquand_sales_catalogs';
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sales Catalogs at Marquand Library';
  $display->uuid = '1da56d22-d24a-42ee-9a15-2cecd955ba21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dbbd4dbb-a0db-40ab-9496-139f131a7e5d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'marquand_sales_catalogs-panel_pane_1';
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
    $pane->uuid = 'dbbd4dbb-a0db-40ab-9496-139f131a7e5d';
    $display->content['new-dbbd4dbb-a0db-40ab-9496-139f131a7e5d'] = $pane;
    $display->panels['middle'][0] = 'new-dbbd4dbb-a0db-40ab-9496-139f131a7e5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dbbd4dbb-a0db-40ab-9496-139f131a7e5d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['marquand_sales_catalogs'] = $page;

  return $pages;

}
