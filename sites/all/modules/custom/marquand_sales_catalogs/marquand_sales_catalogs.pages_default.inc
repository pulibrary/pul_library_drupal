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
  $page->path = 'marquand/resources/sales-catalogs';
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_marquand_sales_catalogs__panel_context_571b8125-3f30-4cad-9cd4-a425e1e20cd5';
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
  $pane = new stdClass();
  $pane->pid = 'new-0ee21d11-00af-4702-b454-8569c47cf3c7';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_text' => 'Marquand Library of Art and Archaeology',
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
  $pane->uuid = '0ee21d11-00af-4702-b454-8569c47cf3c7';
  $display->content['new-0ee21d11-00af-4702-b454-8569c47cf3c7'] = $pane;
  $display->panels['top'][0] = 'new-0ee21d11-00af-4702-b454-8569c47cf3c7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dbbd4dbb-a0db-40ab-9496-139f131a7e5d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['marquand_sales_catalogs'] = $page;

  return $pages;

}
