<?php

/**
 * @file
 * mendel_sheet_music.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mendel_sheet_music_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mendel_valva_sheet_music_collection';
  $page->task = 'page';
  $page->admin_title = 'Mendel Valva Sheet Music Collection';
  $page->admin_description = 'Mendel Valva Collection';
  $page->path = 'music/valva';
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
  $handler->name = 'page_mendel_valva_sheet_music_collection__panel';
  $handler->task = 'page';
  $handler->subtask = 'mendel_valva_sheet_music_collection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-music',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'first' => NULL,
      'second' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Valva Sheet Music Collection';
  $display->uuid = '4bbdcc65-b0f4-4bfd-9490-bf11e2527b1f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mendel_valva_sheet_music_collection__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fLaYDNwCjPJhNDXnQpCo5pkhRd0oy5yG';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Publication Date',
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
  $pane->uuid = 'a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $display->content['new-a263ee77-b825-4b55-9805-0d37b83ffe4e'] = $pane;
  $display->panels['first'][0] = 'new-a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $pane = new stdClass();
  $pane->pid = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fV8OpYBlZg3DjfOqGRYLn2vYA8v7Wjq0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Composer',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $display->content['new-28fcc257-5cbd-49cf-8223-0d08b91d12e4'] = $pane;
  $display->panels['first'][1] = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $pane = new stdClass();
  $pane->pid = 'new-142f4e97-7290-4243-929e-6321996ed8ff';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-WYOGs83PnSlgaQ3raVm9PC0Onji1KORX';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Instrumentation',
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
  $pane->uuid = '142f4e97-7290-4243-929e-6321996ed8ff';
  $display->content['new-142f4e97-7290-4243-929e-6321996ed8ff'] = $pane;
  $display->panels['first'][2] = 'new-142f4e97-7290-4243-929e-6321996ed8ff';
  $pane = new stdClass();
  $pane->pid = 'new-44b9e203-672e-4764-bcfe-cb34122258a9';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'mendel_valva_sheet_music_collection-panel_pane_1';
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
  $pane->uuid = '44b9e203-672e-4764-bcfe-cb34122258a9';
  $display->content['new-44b9e203-672e-4764-bcfe-cb34122258a9'] = $pane;
  $display->panels['second'][0] = 'new-44b9e203-672e-4764-bcfe-cb34122258a9';
  $pane = new stdClass();
  $pane->pid = 'new-f7734e03-0236-4167-8d21-bab10a305f4b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_text' => 'Mendel Music Library',
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
  $pane->uuid = 'f7734e03-0236-4167-8d21-bab10a305f4b';
  $display->content['new-f7734e03-0236-4167-8d21-bab10a305f4b'] = $pane;
  $display->panels['top'][0] = 'new-f7734e03-0236-4167-8d21-bab10a305f4b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mendel_valva_sheet_music_collection'] = $page;

  return $pages;

}
