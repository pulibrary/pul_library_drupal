<?php
/**
 * @file
 * pul_library_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_library_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__pul_event_display';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 37;
  $handler->conf = array(
    'title' => 'PUL Event Display',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'pul_event_display',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'pul_event' => 'pul_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $display->title = '%node:title';
  $display->uuid = '70d1e5f0-479c-4bbd-ac45-fc333a368331';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d8d3c6c-5707-42f7-b3da-cd9fe7724d58';
    $pane->panel = 'first';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d8d3c6c-5707-42f7-b3da-cd9fe7724d58';
    $display->content['new-0d8d3c6c-5707-42f7-b3da-cd9fe7724d58'] = $pane;
    $display->panels['first'][0] = 'new-0d8d3c6c-5707-42f7-b3da-cd9fe7724d58';
    $pane = new stdClass();
    $pane->pid = 'new-01826268-d622-4fb0-8647-cbbb58b83a89';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_event_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'target' => 'node',
        'depth' => '0',
        'hidden' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01826268-d622-4fb0-8647-cbbb58b83a89';
    $display->content['new-01826268-d622-4fb0-8647-cbbb58b83a89'] = $pane;
    $display->panels['second'][0] = 'new-01826268-d622-4fb0-8647-cbbb58b83a89';
    $pane = new stdClass();
    $pane->pid = 'new-cadfb0e3-10c3-427e-913f-04567bee2616';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_event_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cadfb0e3-10c3-427e-913f-04567bee2616';
    $display->content['new-cadfb0e3-10c3-427e-913f-04567bee2616'] = $pane;
    $display->panels['second'][1] = 'new-cadfb0e3-10c3-427e-913f-04567bee2616';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d8d3c6c-5707-42f7-b3da-cd9fe7724d58';
  $handler->conf['display'] = $display;
  $export['node_view__pul_event_display'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function pul_library_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pul_event_listings';
  $page->task = 'page';
  $page->admin_title = 'PUL Event Listings';
  $page->admin_description = '';
  $page->path = 'events';
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
  $handler->name = 'page_pul_event_listings__panel_context_287feea5-462b-4e01-9891-a4cc666d03b7';
  $handler->task = 'page';
  $handler->subtask = 'pul_event_listings';
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
  $display->title = 'Library Events';
  $display->uuid = 'bac46aad-e105-49ba-8ff8-5b32ebc07843';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e647447-e9da-443a-b5bc-4a8206a237c1';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'upcoming_pul_events-panel_pane_1';
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
    $pane->uuid = '0e647447-e9da-443a-b5bc-4a8206a237c1';
    $display->content['new-0e647447-e9da-443a-b5bc-4a8206a237c1'] = $pane;
    $display->panels['first'][0] = 'new-0e647447-e9da-443a-b5bc-4a8206a237c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0e647447-e9da-443a-b5bc-4a8206a237c1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pul_event_listings'] = $page;

  return $pages;

}
