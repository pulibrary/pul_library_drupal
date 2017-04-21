<?php
/**
 * @file
 * library_newsletters.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_newsletters_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_1c1c0b29-2017-4a08-bfc7-d13d77bf9128';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 37;
  $handler->conf = array(
    'title' => 'Staff Announcements',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'staff_announcement' => 'staff_announcement',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
  $display->title = '';
  $display->uuid = '72c5adfc-2b71-451d-b413-aba0a5fd11b0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_1c1c0b29-2017-4a08-bfc7-d13d77bf9128';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-44b098ac-c534-441f-93cf-27b02494e7b3';
  $pane->panel = 'first';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = '44b098ac-c534-441f-93cf-27b02494e7b3';
  $display->content['new-44b098ac-c534-441f-93cf-27b02494e7b3'] = $pane;
  $display->panels['first'][0] = 'new-44b098ac-c534-441f-93cf-27b02494e7b3';
  $pane = new stdClass();
  $pane->pid = 'new-5bd9c230-936e-4fb5-a715-41aaaf137980';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Staff Login',
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
  $pane->uuid = '5bd9c230-936e-4fb5-a715-41aaaf137980';
  $display->content['new-5bd9c230-936e-4fb5-a715-41aaaf137980'] = $pane;
  $display->panels['first'][1] = 'new-5bd9c230-936e-4fb5-a715-41aaaf137980';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-44b098ac-c534-441f-93cf-27b02494e7b3';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_1c1c0b29-2017-4a08-bfc7-d13d77bf9128'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function library_newsletters_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_announcements_all';
  $page->task = 'page';
  $page->admin_title = 'Staff Announcements All';
  $page->admin_description = '';
  $page->path = 'staff/announcements';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
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
  $handler->name = 'page_staff_announcements_all__panel';
  $handler->task = 'page';
  $handler->subtask = 'staff_announcements_all';
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
  $display->title = 'Staff Announcements';
  $display->uuid = 'cb3b659a-ef4a-4af2-a9f4-b84f356a4b93';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_announcements_all__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0d7d0cab-ea0b-46f3-ab61-399eab3bc2a0';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_announcement_lists-panel_pane_1';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0d7d0cab-ea0b-46f3-ab61-399eab3bc2a0';
  $display->content['new-0d7d0cab-ea0b-46f3-ab61-399eab3bc2a0'] = $pane;
  $display->panels['first'][0] = 'new-0d7d0cab-ea0b-46f3-ab61-399eab3bc2a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d7d0cab-ea0b-46f3-ab61-399eab3bc2a0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_announcements_all'] = $page;

  return $pages;

}
