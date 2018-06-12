<?php
/**
 * @file
 * cataloging_and_metadata_services.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cataloging_and_metadata_services_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__cataloging-and-metadata-services';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 37;
  $handler->conf = array(
    'title' => 'Cataloging and Metadata Services',
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
            'paths' => 'cataloging-and-metadata-services
cataloging-and-metadata-services/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'name' => 'cataloging-and-metadata-services',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '18e728fd-55f3-445e-9726-f9e8c7632600';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__cataloging-and-metadata-services';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-96abcb32-ece6-4bf9-bd64-6c9efad4621d';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'book-navigation';
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
  $pane->uuid = '96abcb32-ece6-4bf9-bd64-6c9efad4621d';
  $display->content['new-96abcb32-ece6-4bf9-bd64-6c9efad4621d'] = $pane;
  $display->panels['first'][0] = 'new-96abcb32-ece6-4bf9-bd64-6c9efad4621d';
  $pane = new stdClass();
  $pane->pid = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane->panel = 'second';
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
  $pane->uuid = '4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $display->content['new-4034f21f-2466-4a4a-8412-1c6f2882ccff'] = $pane;
  $display->panels['second'][0] = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane = new stdClass();
  $pane->pid = 'new-43e86f87-4ffa-4bfe-a589-f237ccb42321';
  $pane->panel = 'second';
  $pane->type = 'node_book_nav';
  $pane->subtype = 'node_book_nav';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '43e86f87-4ffa-4bfe-a589-f237ccb42321';
  $display->content['new-43e86f87-4ffa-4bfe-a589-f237ccb42321'] = $pane;
  $display->panels['second'][1] = 'new-43e86f87-4ffa-4bfe-a589-f237ccb42321';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $handler->conf['display'] = $display;
  $export['node_view__cataloging-and-metadata-services'] = $handler;

  return $export;
}
