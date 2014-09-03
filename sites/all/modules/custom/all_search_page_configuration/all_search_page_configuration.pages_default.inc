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
  $display->layout = 'omega_12_threecol_4_4_4_stacked';
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
    $pane->pid = 'new-28062ad1-6e4f-459f-965f-8375bed10004';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Books+',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28062ad1-6e4f-459f-965f-8375bed10004';
    $display->content['new-28062ad1-6e4f-459f-965f-8375bed10004'] = $pane;
    $display->panels['left'][0] = 'new-28062ad1-6e4f-459f-965f-8375bed10004';
    $pane = new stdClass();
    $pane->pid = 'new-5d41e22b-d351-480a-84e4-9d6789cd7e54';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_pulfa_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Special Collections Finding Aids',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5d41e22b-d351-480a-84e4-9d6789cd7e54';
    $display->content['new-5d41e22b-d351-480a-84e4-9d6789cd7e54'] = $pane;
    $display->panels['left'][1] = 'new-5d41e22b-d351-480a-84e4-9d6789cd7e54';
    $pane = new stdClass();
    $pane->pid = 'new-cc91e3df-a511-47d5-9db8-64678309e78f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'summon_block-summon_search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Articles+',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc91e3df-a511-47d5-9db8-64678309e78f';
    $display->content['new-cc91e3df-a511-47d5-9db8-64678309e78f'] = $pane;
    $display->panels['middle'][0] = 'new-cc91e3df-a511-47d5-9db8-64678309e78f';
    $pane = new stdClass();
    $pane->pid = 'new-274fb129-ea84-426e-b52b-76c5adec10ff';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_pudl_results';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '274fb129-ea84-426e-b52b-76c5adec10ff';
    $display->content['new-274fb129-ea84-426e-b52b-76c5adec10ff'] = $pane;
    $display->panels['middle'][1] = 'new-274fb129-ea84-426e-b52b-76c5adec10ff';
    $pane = new stdClass();
    $pane->pid = 'new-d3edbd4f-02a5-4349-aea1-c9e4a4e5ce2b';
    $pane->panel = 'right';
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
    $pane->uuid = 'd3edbd4f-02a5-4349-aea1-c9e4a4e5ce2b';
    $display->content['new-d3edbd4f-02a5-4349-aea1-c9e4a4e5ce2b'] = $pane;
    $display->panels['right'][0] = 'new-d3edbd4f-02a5-4349-aea1-c9e4a4e5ce2b';
    $pane = new stdClass();
    $pane->pid = 'new-905c820e-27f7-4295-8a10-79cd19695e1d';
    $pane->panel = 'right';
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
    $pane->uuid = '905c820e-27f7-4295-8a10-79cd19695e1d';
    $display->content['new-905c820e-27f7-4295-8a10-79cd19695e1d'] = $pane;
    $display->panels['right'][1] = 'new-905c820e-27f7-4295-8a10-79cd19695e1d';
    $pane = new stdClass();
    $pane->pid = 'new-9029ddf5-f132-46d1-bc97-631d272a45ad';
    $pane->panel = 'right';
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
    $pane->uuid = '9029ddf5-f132-46d1-bc97-631d272a45ad';
    $display->content['new-9029ddf5-f132-46d1-bc97-631d272a45ad'] = $pane;
    $display->panels['right'][2] = 'new-9029ddf5-f132-46d1-bc97-631d272a45ad';
    $pane = new stdClass();
    $pane->pid = 'new-edc4346b-6343-42f3-87ac-c415a6beaee7';
    $pane->panel = 'right';
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
    $pane->uuid = 'edc4346b-6343-42f3-87ac-c415a6beaee7';
    $display->content['new-edc4346b-6343-42f3-87ac-c415a6beaee7'] = $pane;
    $display->panels['right'][3] = 'new-edc4346b-6343-42f3-87ac-c415a6beaee7';
    $pane = new stdClass();
    $pane->pid = 'new-ecb95ae4-245f-4f6f-8a3e-6c9c6b41eaf4';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'summon_block-summon_guide_results';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ecb95ae4-245f-4f6f-8a3e-6c9c6b41eaf4';
    $display->content['new-ecb95ae4-245f-4f6f-8a3e-6c9c6b41eaf4'] = $pane;
    $display->panels['right'][4] = 'new-ecb95ae4-245f-4f6f-8a3e-6c9c6b41eaf4';
    $pane = new stdClass();
    $pane->pid = 'new-a2fe1ca1-c4db-4317-befa-aae304078539';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'emergency_alert_content_block';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'emergency_alert_block',
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
    $pane->uuid = 'a2fe1ca1-c4db-4317-befa-aae304078539';
    $display->content['new-a2fe1ca1-c4db-4317-befa-aae304078539'] = $pane;
    $display->panels['top'][0] = 'new-a2fe1ca1-c4db-4317-befa-aae304078539';
    $pane = new stdClass();
    $pane->pid = 'new-afa9469f-5c64-49e8-80df-3816e860ac90';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'afa9469f-5c64-49e8-80df-3816e860ac90';
    $display->content['new-afa9469f-5c64-49e8-80df-3816e860ac90'] = $pane;
    $display->panels['top'][1] = 'new-afa9469f-5c64-49e8-80df-3816e860ac90';
    $pane = new stdClass();
    $pane->pid = 'new-95f14bd1-ee06-4c1b-8534-83b3118992f4';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'summon_block-summon_spelling_suggestion';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95f14bd1-ee06-4c1b-8534-83b3118992f4';
    $display->content['new-95f14bd1-ee06-4c1b-8534-83b3118992f4'] = $pane;
    $display->panels['top'][2] = 'new-95f14bd1-ee06-4c1b-8534-83b3118992f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-afa9469f-5c64-49e8-80df-3816e860ac90';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_search_view'] = $page;

  return $pages;

}
