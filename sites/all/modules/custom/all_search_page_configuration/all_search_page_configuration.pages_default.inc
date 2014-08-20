<?php
/**
 * @file
 * all_search_page_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function all_search_page_configuration_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_search_view';
  $page->task = 'page';
  $page->admin_title = 'All Search View';
  $page->admin_description = 'All Search View';
  $page->path = 'find/all/%query';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'string_length',
        'settings' => array(
          'operator' => '>=',
          'length' => '1',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_search_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'all_search_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-find-all-results',
    'css_id' => 'all-search-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'list_type' => 'ul',
      ),
      'bottom' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
    ),
    'middle' => array(
      'style' => 'default',
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'style' => 'list',
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '3600',
      'granularity' => 'args',
    ),
  );
  $display->title = 'Search for %query:html_safe';
  $display->uuid = '6706501f-32fc-4546-8885-151e4324def4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98924198-8e44-4ad0-8988-41db3b74904c';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '98924198-8e44-4ad0-8988-41db3b74904c';
    $display->content['new-98924198-8e44-4ad0-8988-41db3b74904c'] = $pane;
    $display->panels['first'][0] = 'new-98924198-8e44-4ad0-8988-41db3b74904c';
    $pane = new stdClass();
    $pane->pid = 'new-89943dfe-29c1-422d-aec8-55484fe1a116';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'summon_block-summon_search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '89943dfe-29c1-422d-aec8-55484fe1a116';
    $display->content['new-89943dfe-29c1-422d-aec8-55484fe1a116'] = $pane;
    $display->panels['second'][0] = 'new-89943dfe-29c1-422d-aec8-55484fe1a116';
    $pane = new stdClass();
    $pane->pid = 'new-bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0';
    $pane->panel = 'third';
    $pane->type = 'views_panes';
    $pane->subtype = 'databases_keyword_search-panel_pane_2';
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
    $pane->uuid = 'bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0';
    $display->content['new-bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0'] = $pane;
    $display->panels['third'][0] = 'new-bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0';
    $pane = new stdClass();
    $pane->pid = 'new-7d7d9a09-6344-48a3-a879-59e1f2cd6b93';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'dbsearch_block-dbsearch_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '7d7d9a09-6344-48a3-a879-59e1f2cd6b93';
    $display->content['new-7d7d9a09-6344-48a3-a879-59e1f2cd6b93'] = $pane;
    $display->panels['top'][0] = 'new-7d7d9a09-6344-48a3-a879-59e1f2cd6b93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_search_view'] = $page;

  return $pages;

}
