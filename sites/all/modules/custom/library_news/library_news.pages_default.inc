<?php

/**
 * @file
 * library_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -50;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'entity_bundle:node',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'library_news_item' => 'library_news_item',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second news-item-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News and Events',
    'pipeline' => 'standard',
    'relationships' => array(
      0 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Library Contact',
        'keyword' => 'contact',
        'name' => 'entity_from_field:field_news_library_contact-node-user',
      ),
    ),
    'title' => 'News item Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8efd1ad5-0783-4733-afef-d389f9ea6b6c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4c962ccd-cbef-4870-8d9f-8d431f8a29d9';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_1';
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
  $pane->uuid = '4c962ccd-cbef-4870-8d9f-8d431f8a29d9';
  $display->content['new-4c962ccd-cbef-4870-8d9f-8d431f8a29d9'] = $pane;
  $display->panels['first'][0] = 'new-4c962ccd-cbef-4870-8d9f-8d431f8a29d9';
  $pane = new stdClass();
  $pane->pid = 'new-9603be03-2c69-4ce4-9109-4c4587e4792d';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'relationship_entity_from_field:field_news_library_contact-node-user_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Contact:',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9603be03-2c69-4ce4-9109-4c4587e4792d';
  $display->content['new-9603be03-2c69-4ce4-9109-4c4587e4792d'] = $pane;
  $display->panels['first'][1] = 'new-9603be03-2c69-4ce4-9109-4c4587e4792d';
  $pane = new stdClass();
  $pane->pid = 'new-14ff034c-7fd0-4d2c-8923-880358718327';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'newsletter_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'pul_editor_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14ff034c-7fd0-4d2c-8923-880358718327';
  $display->content['new-14ff034c-7fd0-4d2c-8923-880358718327'] = $pane;
  $display->panels['second'][0] = 'new-14ff034c-7fd0-4d2c-8923-880358718327';
  $pane = new stdClass();
  $pane->pid = 'new-89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events_categories-panel_pane_1';
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
  $pane->uuid = '89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $display->content['new-89c01358-3e86-43ae-a5a6-18505f1df2c4'] = $pane;
  $display->panels['second'][1] = 'new-89c01358-3e86-43ae-a5a6-18505f1df2c4';
  $pane = new stdClass();
  $pane->pid = 'new-64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-news-and-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Library Blogs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $display->content['new-64315e76-50e8-4a40-8a35-4ea05fd43d6d'] = $pane;
  $display->panels['second'][2] = 'new-64315e76-50e8-4a40-8a35-4ea05fd43d6d';
  $pane = new stdClass();
  $pane->pid = 'new-64d52b24-3883-4f97-aaa0-aedb35f4a224';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Firestone Renovation',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '64d52b24-3883-4f97-aaa0-aedb35f4a224';
  $display->content['new-64d52b24-3883-4f97-aaa0-aedb35f4a224'] = $pane;
  $display->panels['second'][3] = 'new-64d52b24-3883-4f97-aaa0-aedb35f4a224';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_9f61d907-6f55-424c-b985-3edf52218add';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_term_1',
          'name' => 'entity_bundle:taxonomy_term',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'tags' => 'tags',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Tags Panel',
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
  $display->title = 'News about %term:name';
  $display->uuid = 'af65e512-8956-482b-91f1-31265ae293de';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_9f61d907-6f55-424c-b985-3edf52218add';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c414b6f-09ca-4baa-8538-98303c3e1249';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '5c414b6f-09ca-4baa-8538-98303c3e1249';
  $display->content['new-5c414b6f-09ca-4baa-8538-98303c3e1249'] = $pane;
  $display->panels['first'][0] = 'new-5c414b6f-09ca-4baa-8538-98303c3e1249';
  $pane = new stdClass();
  $pane->pid = 'new-866e01c0-5482-4767-b5fb-df564f0a1f5c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events_categories-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'News Categories',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '866e01c0-5482-4767-b5fb-df564f0a1f5c';
  $display->content['new-866e01c0-5482-4767-b5fb-df564f0a1f5c'] = $pane;
  $display->panels['second'][0] = 'new-866e01c0-5482-4767-b5fb-df564f0a1f5c';
  $pane = new stdClass();
  $pane->pid = 'new-7b757cc8-4ec0-4729-a2bb-1a9d70550978';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-news-and-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Library Blogs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7b757cc8-4ec0-4729-a2bb-1a9d70550978';
  $display->content['new-7b757cc8-4ec0-4729-a2bb-1a9d70550978'] = $pane;
  $display->panels['second'][1] = 'new-7b757cc8-4ec0-4729-a2bb-1a9d70550978';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_9f61d907-6f55-424c-b985-3edf52218add'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_17';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_term_1',
          'name' => 'term_vocabulary',
          'not' => FALSE,
          'settings' => array(
            'vids' => array(
              21 => '21',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'news-category-page one-sidebar sidebar-second',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News and Events',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'News Category Panel',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '6fede0d2-1c31-4f28-bbc1-fdd7ad71c555';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_17';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3c2bde73-e08d-44e8-9c73-49f15f742152';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '3c2bde73-e08d-44e8-9c73-49f15f742152';
  $display->content['new-3c2bde73-e08d-44e8-9c73-49f15f742152'] = $pane;
  $display->panels['first'][0] = 'new-3c2bde73-e08d-44e8-9c73-49f15f742152';
  $pane = new stdClass();
  $pane->pid = 'new-a4150039-aaa5-416d-a889-46c55771596e';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'newsletter_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'pul_editor_html',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4150039-aaa5-416d-a889-46c55771596e';
  $display->content['new-a4150039-aaa5-416d-a889-46c55771596e'] = $pane;
  $display->panels['second'][0] = 'new-a4150039-aaa5-416d-a889-46c55771596e';
  $pane = new stdClass();
  $pane->pid = 'new-2b2b2a33-5966-46cb-9fec-bdacfa49f6fe';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events_categories-panel_pane_1';
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
  $pane->uuid = '2b2b2a33-5966-46cb-9fec-bdacfa49f6fe';
  $display->content['new-2b2b2a33-5966-46cb-9fec-bdacfa49f6fe'] = $pane;
  $display->panels['second'][1] = 'new-2b2b2a33-5966-46cb-9fec-bdacfa49f6fe';
  $pane = new stdClass();
  $pane->pid = 'new-3df2384c-0c9a-4170-b328-8a02b5e65eea';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-news-and-events';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3df2384c-0c9a-4170-b328-8a02b5e65eea';
  $display->content['new-3df2384c-0c9a-4170-b328-8a02b5e65eea'] = $pane;
  $display->panels['second'][2] = 'new-3df2384c-0c9a-4170-b328-8a02b5e65eea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2b2b2a33-5966-46cb-9fec-bdacfa49f6fe';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_17'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function library_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'settings' => NULL,
    'type' => 'none',
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
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'news',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second news-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'library-news-page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Basic News Page',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Library News';
  $display->uuid = 'fdd31c4f-1359-4e38-8202-b0ef1dfe1754';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db0c7ccf-3adf-4862-a706-fa1402d1489c';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'library_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '10',
    'offset' => '0',
    'override_pager_settings' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'pager_id' => '0',
    'panel_args' => 0,
    'url' => '',
    'use_pager' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db0c7ccf-3adf-4862-a706-fa1402d1489c';
  $display->content['new-db0c7ccf-3adf-4862-a706-fa1402d1489c'] = $pane;
  $display->panels['first'][0] = 'new-db0c7ccf-3adf-4862-a706-fa1402d1489c';
  $pane = new stdClass();
  $pane->pid = 'new-176a9526-7e47-4d46-8a0d-611d80505cdc';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'pul_editor_html',
    'name' => 'newsletter_sidebar',
    'substitute' => TRUE,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '176a9526-7e47-4d46-8a0d-611d80505cdc';
  $display->content['new-176a9526-7e47-4d46-8a0d-611d80505cdc'] = $pane;
  $display->panels['second'][0] = 'new-176a9526-7e47-4d46-8a0d-611d80505cdc';
  $pane = new stdClass();
  $pane->pid = 'new-961d69c4-63bd-4739-be19-afb505b9e510';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events_categories-panel_pane_1';
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
  $pane->uuid = '961d69c4-63bd-4739-be19-afb505b9e510';
  $display->content['new-961d69c4-63bd-4739-be19-afb505b9e510'] = $pane;
  $display->panels['second'][1] = 'new-961d69c4-63bd-4739-be19-afb505b9e510';
  $pane = new stdClass();
  $pane->pid = 'new-9bcb2084-6737-4f2f-97c2-b9055cca87a4';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-news-and-events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Library Blogs',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9bcb2084-6737-4f2f-97c2-b9055cca87a4';
  $display->content['new-9bcb2084-6737-4f2f-97c2-b9055cca87a4'] = $pane;
  $display->panels['second'][2] = 'new-9bcb2084-6737-4f2f-97c2-b9055cca87a4';
  $pane = new stdClass();
  $pane->pid = 'new-091f9606-3f97-4251-957f-847790d9f355';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Renovation Updates',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '091f9606-3f97-4251-957f-847790d9f355';
  $display->content['new-091f9606-3f97-4251-957f-847790d9f355'] = $pane;
  $display->panels['second'][3] = 'new-091f9606-3f97-4251-957f-847790d9f355';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db0c7ccf-3adf-4862-a706-fa1402d1489c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
