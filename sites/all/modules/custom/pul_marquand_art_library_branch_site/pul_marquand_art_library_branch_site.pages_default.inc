<?php

/**
 * @file
 * pul_marquand_art_library_branch_site.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_marquand_art_library_branch_site_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__marquand-art-library-rare-books-highlights-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/marquand/rare-book-highlights
marquand/rare-book-highlights',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-marquand',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'marquand-art-library-rare-books-highlights-page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Marquand Art Library Rare Books Highlights Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__marquand-art-library-rare-books-highlights-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-marquand';
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
  $pane->uuid = '613b7db4-b688-47ae-9341-34faeaad247c';
  $display->content['new-613b7db4-b688-47ae-9341-34faeaad247c'] = $pane;
  $display->panels['first'][0] = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][1] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-86137842-d80a-410f-8c2a-c6a4c6e29771';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_8';
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
  $pane->uuid = '86137842-d80a-410f-8c2a-c6a4c6e29771';
  $display->content['new-86137842-d80a-410f-8c2a-c6a4c6e29771'] = $pane;
  $display->panels['middle'][0] = 'new-86137842-d80a-410f-8c2a-c6a4c6e29771';
  $pane = new stdClass();
  $pane->pid = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'bb6b1a21-e308-4754-85f7-61c08d988b08';
  $display->content['new-bb6b1a21-e308-4754-85f7-61c08d988b08'] = $pane;
  $display->panels['middle'][1] = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane = new stdClass();
  $pane->pid = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
  $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
  $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane = new stdClass();
  $pane->pid = 'new-880396d6-30a1-424a-91fe-8f721efb7df0';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_7';
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
  $pane->uuid = '880396d6-30a1-424a-91fe-8f721efb7df0';
  $display->content['new-880396d6-30a1-424a-91fe-8f721efb7df0'] = $pane;
  $display->panels['second'][0] = 'new-880396d6-30a1-424a-91fe-8f721efb7df0';
  $pane = new stdClass();
  $pane->pid = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '445f9490-0cfe-420e-8d45-950c00e66303';
  $display->content['new-445f9490-0cfe-420e-8d45-950c00e66303'] = $pane;
  $display->panels['second'][1] = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
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
    'override_title_heading' => 'h2',
    'override_title_text' => 'Marquand Library of Art and Archaeology',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->content['new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b'] = $pane;
  $display->panels['top'][0] = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__marquand-art-library-rare-books-highlights-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_36fad5a9-3f57-45e1-bb19-8f49b0da0eca';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 9;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/marquand/news
news/marquand',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-marquand',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Marquand Art Library News Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_36fad5a9-3f57-45e1-bb19-8f49b0da0eca';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-marquand';
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
  $pane->uuid = '613b7db4-b688-47ae-9341-34faeaad247c';
  $display->content['new-613b7db4-b688-47ae-9341-34faeaad247c'] = $pane;
  $display->panels['first'][0] = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][1] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-92ee51d5-2ee8-4ec2-9960-5540b142f4a7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'library-news',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92ee51d5-2ee8-4ec2-9960-5540b142f4a7';
  $display->content['new-92ee51d5-2ee8-4ec2-9960-5540b142f4a7'] = $pane;
  $display->panels['middle'][0] = 'new-92ee51d5-2ee8-4ec2-9960-5540b142f4a7';
  $pane = new stdClass();
  $pane->pid = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'bb6b1a21-e308-4754-85f7-61c08d988b08';
  $display->content['new-bb6b1a21-e308-4754-85f7-61c08d988b08'] = $pane;
  $display->panels['middle'][1] = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane = new stdClass();
  $pane->pid = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
  $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
  $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane = new stdClass();
  $pane->pid = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '445f9490-0cfe-420e-8d45-950c00e66303';
  $display->content['new-445f9490-0cfe-420e-8d45-950c00e66303'] = $pane;
  $display->panels['second'][0] = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
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
    'override_title_heading' => 'h2',
    'override_title_text' => 'Marquand Library of Art and Archaeology',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->content['new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b'] = $pane;
  $display->panels['top'][0] = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_36fad5a9-3f57-45e1-bb19-8f49b0da0eca'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_aa13b93b-2ca9-4c15-8536-69b49a2eaa07';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'libraries' => 'libraries',
            ),
          ),
        ),
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/marquand
marquand',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-marquand',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Marquand Art Library Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Marquand Art Library';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_aa13b93b-2ca9-4c15-8536-69b49a2eaa07';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fd18fcf4-ff59-4c74-8451-28432d06de09';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-marquand';
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
  $pane->uuid = 'fd18fcf4-ff59-4c74-8451-28432d06de09';
  $display->content['new-fd18fcf4-ff59-4c74-8451-28432d06de09'] = $pane;
  $display->panels['first'][0] = 'new-fd18fcf4-ff59-4c74-8451-28432d06de09';
  $pane = new stdClass();
  $pane->pid = 'new-2f656216-2c77-472d-82d7-d55b7570aef6';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_marquand-libhours_marquand';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f656216-2c77-472d-82d7-d55b7570aef6';
  $display->content['new-2f656216-2c77-472d-82d7-d55b7570aef6'] = $pane;
  $display->panels['first'][1] = 'new-2f656216-2c77-472d-82d7-d55b7570aef6';
  $pane = new stdClass();
  $pane->pid = 'new-c25831d8-8914-48ba-94f4-b3e2233e2ec0';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c25831d8-8914-48ba-94f4-b3e2233e2ec0';
  $display->content['new-c25831d8-8914-48ba-94f4-b3e2233e2ec0'] = $pane;
  $display->panels['first'][2] = 'new-c25831d8-8914-48ba-94f4-b3e2233e2ec0';
  $pane = new stdClass();
  $pane->pid = 'new-d0baed64-6775-4b92-961d-29266a39b49a';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'hidden',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd0baed64-6775-4b92-961d-29266a39b49a';
  $display->content['new-d0baed64-6775-4b92-961d-29266a39b49a'] = $pane;
  $display->panels['first'][3] = 'new-d0baed64-6775-4b92-961d-29266a39b49a';
  $pane = new stdClass();
  $pane->pid = 'new-71c42d93-a7a2-4356-971e-a33d8eb96b29';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_interior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'hidden',
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
  $pane->uuid = '71c42d93-a7a2-4356-971e-a33d8eb96b29';
  $display->content['new-71c42d93-a7a2-4356-971e-a33d8eb96b29'] = $pane;
  $display->panels['middle'][0] = 'new-71c42d93-a7a2-4356-971e-a33d8eb96b29';
  $pane = new stdClass();
  $pane->pid = 'new-780ed68a-1bf7-44d7-b8e2-8fc24a9524e7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_1';
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
  $pane->uuid = '780ed68a-1bf7-44d7-b8e2-8fc24a9524e7';
  $display->content['new-780ed68a-1bf7-44d7-b8e2-8fc24a9524e7'] = $pane;
  $display->panels['middle'][1] = 'new-780ed68a-1bf7-44d7-b8e2-8fc24a9524e7';
  $pane = new stdClass();
  $pane->pid = 'new-8753b33e-7fd9-4b37-8997-0fa07ea97c39';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_default',
    'formatter_settings' => array(),
    'label' => 'title',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8753b33e-7fd9-4b37-8997-0fa07ea97c39';
  $display->content['new-8753b33e-7fd9-4b37-8997-0fa07ea97c39'] = $pane;
  $display->panels['middle'][2] = 'new-8753b33e-7fd9-4b37-8997-0fa07ea97c39';
  $pane = new stdClass();
  $pane->pid = 'new-5e0cc6e5-690a-41e3-a3d6-686b7f6a0736';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_6';
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
  $pane->uuid = '5e0cc6e5-690a-41e3-a3d6-686b7f6a0736';
  $display->content['new-5e0cc6e5-690a-41e3-a3d6-686b7f6a0736'] = $pane;
  $display->panels['middle'][3] = 'new-5e0cc6e5-690a-41e3-a3d6-686b7f6a0736';
  $pane = new stdClass();
  $pane->pid = 'new-3ac16927-08f2-4a11-a074-4d665a11974a';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_7';
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
  $pane->uuid = '3ac16927-08f2-4a11-a074-4d665a11974a';
  $display->content['new-3ac16927-08f2-4a11-a074-4d665a11974a'] = $pane;
  $display->panels['second'][0] = 'new-3ac16927-08f2-4a11-a074-4d665a11974a';
  $pane = new stdClass();
  $pane->pid = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_spotlight_item';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 1,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'links' => 0,
      'view_mode' => 'teaser',
    ),
    'label' => 'hidden',
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
  $pane->uuid = '5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $display->content['new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6'] = $pane;
  $display->panels['second'][1] = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
  $pane = new stdClass();
  $pane->pid = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_label',
    'formatter_settings' => array(
      'check_access' => 1,
      'link' => 1,
      'links' => 1,
      'text' => '[entity:label]',
      'view_mode' => 'teaser',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
  $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
  $display->panels['second'][2] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
  $pane = new stdClass();
  $pane->pid = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(
      'depth' => '0',
      'hidden' => 1,
      'target' => 'node',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
  $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
  $display->panels['second'][3] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
  $pane = new stdClass();
  $pane->pid = 'new-7ea772e3-7ec4-4885-828a-73652bd9c14d';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'link_default',
    'formatter_settings' => array(),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7ea772e3-7ec4-4885-828a-73652bd9c14d';
  $display->content['new-7ea772e3-7ec4-4885-828a-73652bd9c14d'] = $pane;
  $display->panels['second'][4] = 'new-7ea772e3-7ec4-4885-828a-73652bd9c14d';
  $pane = new stdClass();
  $pane->pid = 'new-ec839670-7c05-4f82-b958-6c40aded20da';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'link' => 1,
      'links' => 1,
      'use_content_language' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ec839670-7c05-4f82-b958-6c40aded20da';
  $display->content['new-ec839670-7c05-4f82-b958-6c40aded20da'] = $pane;
  $display->panels['second'][5] = 'new-ec839670-7c05-4f82-b958-6c40aded20da';
  $pane = new stdClass();
  $pane->pid = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Marquand Library of Art and Archaeology',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $display->content['new-d4e21373-0c6d-47b1-92bb-5ca5896df51d'] = $pane;
  $display->panels['top'][0] = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_aa13b93b-2ca9-4c15-8536-69b49a2eaa07'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ed5c5fa7-55c5-4de7-af71-b5f420344c08';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/marquand/*
marquand/*',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => TRUE,
          'settings' => array(
            'paths' => 'libraries/marquand/rare-book-highlights
marquand/rare-book-highlights',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries libraries-marquand',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '7790',
        'id' => 1,
        'identifier' => 'Branch Home',
        'keyword' => 'library',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(
      1 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
      ),
    ),
    'title' => 'Marquand Art Library Branch Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ed5c5fa7-55c5-4de7-af71-b5f420344c08';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-branch-marquand';
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
  $pane->uuid = '613b7db4-b688-47ae-9341-34faeaad247c';
  $display->content['new-613b7db4-b688-47ae-9341-34faeaad247c'] = $pane;
  $display->panels['first'][0] = 'new-613b7db4-b688-47ae-9341-34faeaad247c';
  $pane = new stdClass();
  $pane->pid = 'new-c01f900c-9d19-411a-8c11-0bb3f32b23a0';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_marquand-libhours_marquand';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c01f900c-9d19-411a-8c11-0bb3f32b23a0';
  $display->content['new-c01f900c-9d19-411a-8c11-0bb3f32b23a0'] = $pane;
  $display->panels['first'][1] = 'new-c01f900c-9d19-411a-8c11-0bb3f32b23a0';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][2] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-3e8e0a4e-91ed-4888-9193-555fa2ad2635';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'emergency_alert_content_block-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'alert--message',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3e8e0a4e-91ed-4888-9193-555fa2ad2635';
  $display->content['new-3e8e0a4e-91ed-4888-9193-555fa2ad2635'] = $pane;
  $display->panels['middle'][0] = 'new-3e8e0a4e-91ed-4888-9193-555fa2ad2635';
  $pane = new stdClass();
  $pane->pid = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bb6b1a21-e308-4754-85f7-61c08d988b08';
  $display->content['new-bb6b1a21-e308-4754-85f7-61c08d988b08'] = $pane;
  $display->panels['middle'][1] = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
  $pane = new stdClass();
  $pane->pid = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
  $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
  $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
  $pane = new stdClass();
  $pane->pid = 'new-ef002f65-9dd4-4cb0-9655-d9c7e4f3bb56';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_8';
  $pane->shown = FALSE;
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
  $pane->uuid = 'ef002f65-9dd4-4cb0-9655-d9c7e4f3bb56';
  $display->content['new-ef002f65-9dd4-4cb0-9655-d9c7e4f3bb56'] = $pane;
  $display->panels['middle'][3] = 'new-ef002f65-9dd4-4cb0-9655-d9c7e4f3bb56';
  $pane = new stdClass();
  $pane->pid = 'new-ef1d512f-52f8-4841-9c33-a5a961bc60ed';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'marquand_sales_catalogs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'libraries/marquand/resources/sale',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ef1d512f-52f8-4841-9c33-a5a961bc60ed';
  $display->content['new-ef1d512f-52f8-4841-9c33-a5a961bc60ed'] = $pane;
  $display->panels['middle'][4] = 'new-ef1d512f-52f8-4841-9c33-a5a961bc60ed';
  $pane = new stdClass();
  $pane->pid = 'new-db1242d4-5321-4868-8fc6-73f9579d969d';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_7';
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
  $pane->uuid = 'db1242d4-5321-4868-8fc6-73f9579d969d';
  $display->content['new-db1242d4-5321-4868-8fc6-73f9579d969d'] = $pane;
  $display->panels['second'][0] = 'new-db1242d4-5321-4868-8fc6-73f9579d969d';
  $pane = new stdClass();
  $pane->pid = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7790',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Featured Resources',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '445f9490-0cfe-420e-8d45-950c00e66303';
  $display->content['new-445f9490-0cfe-420e-8d45-950c00e66303'] = $pane;
  $display->panels['second'][1] = 'new-445f9490-0cfe-420e-8d45-950c00e66303';
  $pane = new stdClass();
  $pane->pid = 'new-b63919bd-a1e7-4265-9317-df7e843f954b';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'entityreference_entity_view',
    'formatter_settings' => array(
      'links' => 1,
      'use_content_language' => 1,
      'view_mode' => 'featured_link_url',
    ),
    'label' => 'title',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Quick Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b63919bd-a1e7-4265-9317-df7e843f954b';
  $display->content['new-b63919bd-a1e7-4265-9317-df7e843f954b'] = $pane;
  $display->panels['second'][2] = 'new-b63919bd-a1e7-4265-9317-df7e843f954b';
  $pane = new stdClass();
  $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
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
    'override_title_heading' => 'h2',
    'override_title_text' => 'Marquand Library of Art and Archaeology',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->content['new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b'] = $pane;
  $display->panels['top'][0] = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ed5c5fa7-55c5-4de7-af71-b5f420344c08'] = $handler;

  return $export;
}
