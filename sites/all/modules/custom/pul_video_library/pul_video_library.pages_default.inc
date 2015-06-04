<?php
/**
 * @file
 * pul_video_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_video_library_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_194f0b9e-62d0-442a-8439-c7bceceaf789';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 30;
  $handler->conf = array(
    'title' => 'Video Library Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-video',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'libraries' => 'libraries',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'vdl',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c8a6f28-fd93-4695-bbb4-e3fcf8dbe716';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-video-library';
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
    $pane->uuid = '6c8a6f28-fd93-4695-bbb4-e3fcf8dbe716';
    $display->content['new-6c8a6f28-fd93-4695-bbb4-e3fcf8dbe716'] = $pane;
    $display->panels['first'][0] = 'new-6c8a6f28-fd93-4695-bbb4-e3fcf8dbe716';
    $pane = new stdClass();
    $pane->pid = 'new-0b248b5b-5dea-4ea6-aaf0-abb93ae47564';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '%cal:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Today\'s Hours',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0b248b5b-5dea-4ea6-aaf0-abb93ae47564';
    $display->content['new-0b248b5b-5dea-4ea6-aaf0-abb93ae47564'] = $pane;
    $display->panels['first'][1] = 'new-0b248b5b-5dea-4ea6-aaf0-abb93ae47564';
    $pane = new stdClass();
    $pane->pid = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%cal:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $display->content['new-ac2abf14-0345-47b0-8b21-62a91dc61e76'] = $pane;
    $display->panels['first'][2] = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $pane = new stdClass();
    $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
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
    $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
    $display->panels['first'][3] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $pane = new stdClass();
    $pane->pid = 'new-4895123a-689b-465c-bf0b-3fe871089781';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_long_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4895123a-689b-465c-bf0b-3fe871089781';
    $display->content['new-4895123a-689b-465c-bf0b-3fe871089781'] = $pane;
    $display->panels['middle'][0] = 'new-4895123a-689b-465c-bf0b-3fe871089781';
    $pane = new stdClass();
    $pane->pid = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_library_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'branch_image_branding',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Video Library',
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
    $pane->uuid = 'd4e21373-0c6d-47b1-92bb-5ca5896df51d';
    $display->content['new-d4e21373-0c6d-47b1-92bb-5ca5896df51d'] = $pane;
    $display->panels['top'][0] = 'new-d4e21373-0c6d-47b1-92bb-5ca5896df51d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_194f0b9e-62d0-442a-8439-c7bceceaf789'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_98c15859-eea2-4068-bf4b-c24b814ac306';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 30;
  $handler->conf = array(
    'title' => 'Video Library',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-video',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'vdl/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58f31192-32e1-42dc-8fd4-b96cef1896e0';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-video-library';
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
    $pane->uuid = '58f31192-32e1-42dc-8fd4-b96cef1896e0';
    $display->content['new-58f31192-32e1-42dc-8fd4-b96cef1896e0'] = $pane;
    $display->panels['first'][0] = 'new-58f31192-32e1-42dc-8fd4-b96cef1896e0';
    $pane = new stdClass();
    $pane->pid = 'new-b42c5cdd-fc51-4f5b-aba1-aa357e6adeae';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '3824',
      ),
      'override_title' => 1,
      'override_title_text' => 'Today\'s Hours',
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
    $pane->uuid = 'b42c5cdd-fc51-4f5b-aba1-aa357e6adeae';
    $display->content['new-b42c5cdd-fc51-4f5b-aba1-aa357e6adeae'] = $pane;
    $display->panels['first'][1] = 'new-b42c5cdd-fc51-4f5b-aba1-aa357e6adeae';
    $pane = new stdClass();
    $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'libraries-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7788',
      ),
      'override_title' => 1,
      'override_title_text' => 'Contact Us',
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
    $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
    $display->panels['first'][2] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
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
    $pane->uuid = 'bb6b1a21-e308-4754-85f7-61c08d988b08';
    $display->content['new-bb6b1a21-e308-4754-85f7-61c08d988b08'] = $pane;
    $display->panels['middle'][0] = 'new-bb6b1a21-e308-4754-85f7-61c08d988b08';
    $pane = new stdClass();
    $pane->pid = 'new-da6d2020-f96a-4dce-8edf-2d707988d576';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'da6d2020-f96a-4dce-8edf-2d707988d576';
    $display->content['new-da6d2020-f96a-4dce-8edf-2d707988d576'] = $pane;
    $display->panels['middle'][1] = 'new-da6d2020-f96a-4dce-8edf-2d707988d576';
    $pane = new stdClass();
    $pane->pid = 'new-f308f274-2410-4536-badf-74f83a5a6489';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-get-help-menu';
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
    $pane->uuid = 'f308f274-2410-4536-badf-74f83a5a6489';
    $display->content['new-f308f274-2410-4536-badf-74f83a5a6489'] = $pane;
    $display->panels['second'][0] = 'new-f308f274-2410-4536-badf-74f83a5a6489';
    $pane = new stdClass();
    $pane->pid = 'new-30102572-fd55-487f-bd13-21a49e956a56';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'branch_library_image-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7788',
      ),
      'override_title' => 1,
      'override_title_text' => 'Video Library',
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
    $pane->uuid = '30102572-fd55-487f-bd13-21a49e956a56';
    $display->content['new-30102572-fd55-487f-bd13-21a49e956a56'] = $pane;
    $display->panels['top'][0] = 'new-30102572-fd55-487f-bd13-21a49e956a56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_98c15859-eea2-4068-bf4b-c24b814ac306'] = $handler;

  return $export;
}
