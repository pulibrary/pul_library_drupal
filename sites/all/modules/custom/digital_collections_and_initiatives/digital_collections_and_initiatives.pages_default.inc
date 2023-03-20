<?php

/**
 * @file
 * digital_collections_and_initiatives.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function digital_collections_and_initiatives_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__digital-collections-secondary-pages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 29;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'digital-collections/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries digital-collections',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'digital-collections-secondary-pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Digital Collections Secondary Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->storage_id = 'node_view__digital-collections-secondary-pages';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---digital-collectio';
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
  $pane->uuid = '026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $display->content['new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f'] = $pane;
  $display->panels['first'][0] = 'new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'second';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['second'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-319457f2-be78-4084-9ebf-11a58cc18329';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_21';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'digital-collections/news',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '319457f2-be78-4084-9ebf-11a58cc18329';
  $display->content['new-319457f2-be78-4084-9ebf-11a58cc18329'] = $pane;
  $display->panels['second'][1] = 'new-319457f2-be78-4084-9ebf-11a58cc18329';
  $pane = new stdClass();
  $pane->pid = 'new-5613fe5b-7813-40cd-a94a-4ee7937751d8';
  $pane->panel = 'second';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '5613fe5b-7813-40cd-a94a-4ee7937751d8';
  $display->content['new-5613fe5b-7813-40cd-a94a-4ee7937751d8'] = $pane;
  $display->panels['second'][2] = 'new-5613fe5b-7813-40cd-a94a-4ee7937751d8';
  $pane = new stdClass();
  $pane->pid = 'new-db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_dispalsys-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'digital-collections--banner',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $display->content['new-db6aa810-0aa6-4038-9eb4-3805c0d7c863'] = $pane;
  $display->panels['top'][0] = 'new-db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__digital-collections-secondary-pages'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__digital-projects';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 28;
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
            'paths' => 'digital-collections',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'branch-libraries digital-collections',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'digital-projects',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Digital Collections Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->storage_id = 'node_view__digital-projects';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---digital-collectio';
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
  $pane->uuid = '026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $display->content['new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f'] = $pane;
  $display->panels['first'][0] = 'new-026f2f8b-4a7a-4279-a18c-324e8ed18d2f';
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'second';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['second'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-6bf13799-7bb7-4c49-86a2-48af14fe9924';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_22';
  $pane->shown = FALSE;
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
  $pane->uuid = '6bf13799-7bb7-4c49-86a2-48af14fe9924';
  $display->content['new-6bf13799-7bb7-4c49-86a2-48af14fe9924'] = $pane;
  $display->panels['second'][1] = 'new-6bf13799-7bb7-4c49-86a2-48af14fe9924';
  $pane = new stdClass();
  $pane->pid = 'new-db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_dispalsys-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Digital Collections and Initiatives',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'digital-collections--banner',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $display->content['new-db6aa810-0aa6-4038-9eb4-3805c0d7c863'] = $pane;
  $display->panels['top'][0] = 'new-db6aa810-0aa6-4038-9eb4-3805c0d7c863';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__digital-projects'] = $handler;

  return $export;
}
