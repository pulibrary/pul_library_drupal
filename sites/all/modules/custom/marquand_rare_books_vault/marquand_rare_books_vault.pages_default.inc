<?php
/**
 * @file
 * marquand_rare_books_vault.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function marquand_rare_books_vault_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'marquand_rare_books_vault_list';
  $page->task = 'page';
  $page->admin_title = 'Marquand Rare Books Vault List';
  $page->admin_description = 'Marquand Rare Books List';
  $page->path = 'marquand/vault';
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
  $handler->name = 'page_marquand_rare_books_vault_list__panel_context_8032a19a-03dd-4214-b9ed-11f0ae163b16';
  $handler->task = 'page';
  $handler->subtask = 'marquand_rare_books_vault_list';
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
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Rare Books Vault';
  $display->uuid = 'd13b34f0-eb1a-4913-bb7e-8050f122f379';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d8281e2-c534-4cc4-9f06-06bceabcf1dc';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-iZg1hwFZD5XmpgcfOT05G8D5SgynjmTJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Location Code',
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
    $pane->uuid = '1d8281e2-c534-4cc4-9f06-06bceabcf1dc';
    $display->content['new-1d8281e2-c534-4cc4-9f06-06bceabcf1dc'] = $pane;
    $display->panels['first'][0] = 'new-1d8281e2-c534-4cc4-9f06-06bceabcf1dc';
    $pane = new stdClass();
    $pane->pid = 'new-748ec096-741e-4543-a606-2676420a627f';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-NkaMwtKRkCXBNCzP0Cv148XPpGel1Ylc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Date Created',
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
    $pane->uuid = '748ec096-741e-4543-a606-2676420a627f';
    $display->content['new-748ec096-741e-4543-a606-2676420a627f'] = $pane;
    $display->panels['first'][1] = 'new-748ec096-741e-4543-a606-2676420a627f';
    $pane = new stdClass();
    $pane->pid = 'new-903a9f28-5dfe-4fbf-9033-75fe62f7f9c4';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-IUMLnTIToqet1Dkc2AH3eqriJ9yvqi8S';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subject',
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
    $pane->uuid = '903a9f28-5dfe-4fbf-9033-75fe62f7f9c4';
    $display->content['new-903a9f28-5dfe-4fbf-9033-75fe62f7f9c4'] = $pane;
    $display->panels['first'][2] = 'new-903a9f28-5dfe-4fbf-9033-75fe62f7f9c4';
    $pane = new stdClass();
    $pane->pid = 'new-ce61ca62-509a-4752-8e00-798e2451f709';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-uQGsRCI9jEekDc0YcvsOxujblfT9ftyf';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ce61ca62-509a-4752-8e00-798e2451f709';
    $display->content['new-ce61ca62-509a-4752-8e00-798e2451f709'] = $pane;
    $display->panels['first'][3] = 'new-ce61ca62-509a-4752-8e00-798e2451f709';
    $pane = new stdClass();
    $pane->pid = 'new-b547e3c2-906f-429d-a78c-b8445f393c20';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'marquand_rare_books_search-panel_pane_1';
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
    $pane->uuid = 'b547e3c2-906f-429d-a78c-b8445f393c20';
    $display->content['new-b547e3c2-906f-429d-a78c-b8445f393c20'] = $pane;
    $display->panels['second'][0] = 'new-b547e3c2-906f-429d-a78c-b8445f393c20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b547e3c2-906f-429d-a78c-b8445f393c20';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['marquand_rare_books_vault_list'] = $page;

  return $pages;

}
