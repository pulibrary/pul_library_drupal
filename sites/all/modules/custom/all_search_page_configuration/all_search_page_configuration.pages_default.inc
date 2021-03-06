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
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'context' => 'argument_string_1',
        'name' => 'string_length',
        'not' => FALSE,
        'settings' => array(
          'length' => '1',
          'operator' => '>=',
        ),
      ),
    ),
    'settings' => NULL,
    'type' => 'none',
  );
  $page->menu = array(
    'name' => 'navigation',
    'parent' => array(
      'name' => 'navigation',
      'title' => '',
      'type' => 'none',
      'weight' => '0',
    ),
    'title' => '',
    'type' => 'none',
    'weight' => '0',
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
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => 'page-find-all-results',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'all-search-page',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'left' => array(
      'style' => 'default',
    ),
    'middle' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'style' => 'list',
    'style_settings' => array(
      'bottom' => NULL,
      'default' => array(
        'list_type' => 'ul',
      ),
      'fifth' => NULL,
      'first' => NULL,
      'fourth' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'granularity' => 'args',
      'lifetime' => '3600',
    ),
  );
  $display->title = 'Search results for %query:html_safe';
  $display->uuid = '6706501f-32fc-4546-8885-151e4324def4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_search_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7868c2dd-aa60-4589-a3c5-bf34b4647b30';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_blacklight_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-book"></i>Catalog',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7868c2dd-aa60-4589-a3c5-bf34b4647b30';
  $display->content['new-7868c2dd-aa60-4589-a3c5-bf34b4647b30'] = $pane;
  $display->panels['first'][0] = 'new-7868c2dd-aa60-4589-a3c5-bf34b4647b30';
  $pane = new stdClass();
  $pane->pid = 'new-98924198-8e44-4ad0-8988-41db3b74904c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_search_results';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-book"></i>Books+ Search Results',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '98924198-8e44-4ad0-8988-41db3b74904c';
  $display->content['new-98924198-8e44-4ad0-8988-41db3b74904c'] = $pane;
  $display->panels['first'][1] = 'new-98924198-8e44-4ad0-8988-41db3b74904c';
  $pane = new stdClass();
  $pane->pid = 'new-e76cf10f-23ec-4ae6-a549-7a1e4bbd429e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_pulfalight_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e76cf10f-23ec-4ae6-a549-7a1e4bbd429e';
  $display->content['new-e76cf10f-23ec-4ae6-a549-7a1e4bbd429e'] = $pane;
  $display->panels['first'][2] = 'new-e76cf10f-23ec-4ae6-a549-7a1e4bbd429e';
  $pane = new stdClass();
  $pane->pid = 'new-e276c37f-ba5a-47c5-b366-b8ad7176db2a';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_pulmap_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-map"></i>Maps and Geographic Data',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e276c37f-ba5a-47c5-b366-b8ad7176db2a';
  $display->content['new-e276c37f-ba5a-47c5-b366-b8ad7176db2a'] = $pane;
  $display->panels['first'][3] = 'new-e276c37f-ba5a-47c5-b366-b8ad7176db2a';
  $pane = new stdClass();
  $pane->pid = 'new-89943dfe-29c1-422d-aec8-55484fe1a116';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'summon_block-summon_search_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-text"></i>Articles+',
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
  $pane->pid = 'new-10fc1fd2-ebdd-4312-bf87-4e6c40daf39f';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_pudl_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-digital"></i>Digital PUL',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '10fc1fd2-ebdd-4312-bf87-4e6c40daf39f';
  $display->content['new-10fc1fd2-ebdd-4312-bf87-4e6c40daf39f'] = $pane;
  $display->panels['second'][1] = 'new-10fc1fd2-ebdd-4312-bf87-4e6c40daf39f';
  $pane = new stdClass();
  $pane->pid = 'new-7ffe9a21-7fc2-4d99-8196-030e340c66bc';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_arts_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-visual-material"></i>Art Museum Collections',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7ffe9a21-7fc2-4d99-8196-030e340c66bc';
  $display->content['new-7ffe9a21-7fc2-4d99-8196-030e340c66bc'] = $pane;
  $display->panels['second'][2] = 'new-7ffe9a21-7fc2-4d99-8196-030e340c66bc';
  $pane = new stdClass();
  $pane->pid = 'new-dd610713-a27b-456e-812b-f14920a0c05f';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'search_libraries_and_collections-panel_pane_1';
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
  $pane->uuid = 'dd610713-a27b-456e-812b-f14920a0c05f';
  $display->content['new-dd610713-a27b-456e-812b-f14920a0c05f'] = $pane;
  $display->panels['third'][0] = 'new-dd610713-a27b-456e-812b-f14920a0c05f';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0';
  $display->content['new-bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0'] = $pane;
  $display->panels['third'][1] = 'new-bd6c1834-5d3e-41a5-93f3-e7b8d98a13d0';
  $pane = new stdClass();
  $pane->pid = 'new-a972face-b49a-4211-91f0-638d00dcdab5';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'general_site_keyword_search-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a972face-b49a-4211-91f0-638d00dcdab5';
  $display->content['new-a972face-b49a-4211-91f0-638d00dcdab5'] = $pane;
  $display->panels['third'][2] = 'new-a972face-b49a-4211-91f0-638d00dcdab5';
  $pane = new stdClass();
  $pane->pid = 'new-54c20f10-ec16-457b-b80b-b6618625e6a9';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'general_site_user_search-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '54c20f10-ec16-457b-b80b-b6618625e6a9';
  $display->content['new-54c20f10-ec16-457b-b80b-b6618625e6a9'] = $pane;
  $display->panels['third'][3] = 'new-54c20f10-ec16-457b-b80b-b6618625e6a9';
  $pane = new stdClass();
  $pane->pid = 'new-9961b211-79fc-49b8-8ec4-babec104af54';
  $pane->panel = 'third';
  $pane->type = 'block';
  $pane->subtype = 'libguides_block-libguides_search_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-compass"></i>Library Guides',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9961b211-79fc-49b8-8ec4-babec104af54';
  $display->content['new-9961b211-79fc-49b8-8ec4-babec104af54'] = $pane;
  $display->panels['third'][4] = 'new-9961b211-79fc-49b8-8ec4-babec104af54';
  $pane = new stdClass();
  $pane->pid = 'new-d0ce669c-1ab0-4cd1-b26a-44f7ae90e805';
  $pane->panel = 'third';
  $pane->type = 'block';
  $pane->subtype = 'catalog_block-catalog_faq_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '<i class="icon-question"></i>Library FAQ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd0ce669c-1ab0-4cd1-b26a-44f7ae90e805';
  $display->content['new-d0ce669c-1ab0-4cd1-b26a-44f7ae90e805'] = $pane;
  $display->panels['third'][5] = 'new-d0ce669c-1ab0-4cd1-b26a-44f7ae90e805';
  $pane = new stdClass();
  $pane->pid = 'new-b68f4a4c-cdae-4a86-a34d-c7661ec231fd';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'allsearch_block-allsearch_search';
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
  $pane->uuid = 'b68f4a4c-cdae-4a86-a34d-c7661ec231fd';
  $display->content['new-b68f4a4c-cdae-4a86-a34d-c7661ec231fd'] = $pane;
  $display->panels['top'][0] = 'new-b68f4a4c-cdae-4a86-a34d-c7661ec231fd';
  $pane = new stdClass();
  $pane->pid = 'new-c7097a96-9208-44cf-b467-909694a141ba';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Results section anchor links',
    'body' => '<div class="results-section"><label class="show-result-section-menu" for="show-result-section-menu">Skip to Section</label><input id="show-result-section-menu" type="checkbox" /><ul id="result-section-menu" class="result-section-menu"><li><a href="#catalog_block-catalog_blacklight_results">Catalog</a></li><li><a href="#summon_block-summon_search_results">Articles+</a></li><li><a href="#databases_keyword_search-panel_pane_2">Databases</a></li><li><a href="#catalog_block-catalog_pulfalight_results">Library Archives</a></li><li><a href="#catalog_block-catalog_pudl_results">Digital PUL</a></li><li><a href="#catalog_block-catalog_arts_results">Art Museum Collections</a></li><li><a href="#catalog_block-catalog_pulmap_results">Maps and Geographic Data</a></li><li><a href="#general_site_keyword_search-panel_pane_1">Library Website</a></li><li><a href="#general_site_user_search-panel_pane_1">Library Staff</a></li><li><a href="#libguides_block-libguides_search_results">Library Guides</a></li><li><a href="#catalog_block-catalog_faq_results">Library FAQs</a></li></ul></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c7097a96-9208-44cf-b467-909694a141ba';
  $display->content['new-c7097a96-9208-44cf-b467-909694a141ba'] = $pane;
  $display->panels['top'][1] = 'new-c7097a96-9208-44cf-b467-909694a141ba';
  $pane = new stdClass();
  $pane->pid = 'new-80e719e5-6346-4260-9671-bdfb7c6e292c';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'all_search_best_bet-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '80e719e5-6346-4260-9671-bdfb7c6e292c';
  $display->content['new-80e719e5-6346-4260-9671-bdfb7c6e292c'] = $pane;
  $display->panels['top'][2] = 'new-80e719e5-6346-4260-9671-bdfb7c6e292c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_search_view'] = $page;

  return $pages;

}
