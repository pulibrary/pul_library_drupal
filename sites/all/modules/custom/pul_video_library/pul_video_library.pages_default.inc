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
  $handler->weight = 21;
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
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-taxonomy_term',
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
            'paths' => 'vdl
videoservices',
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
  $display->title = 'Video Services';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_194f0b9e-62d0-442a-8439-c7bceceaf789';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][1] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane = new stdClass();
  $pane->pid = 'new-98b61cdc-e213-4296-893e-30ea87bc59bc';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Social Media',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="https://videolib.princeton.edu">Blog</a> – <a href="https://www.facebook.com/PrincetonVideoServices">FaceBook</a> - <a href="https://twitter.com/PuVideoServices">Twitter</a></p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '98b61cdc-e213-4296-893e-30ea87bc59bc';
  $display->content['new-98b61cdc-e213-4296-893e-30ea87bc59bc'] = $pane;
  $display->panels['first'][2] = 'new-98b61cdc-e213-4296-893e-30ea87bc59bc';
  $pane = new stdClass();
  $pane->pid = 'new-c61ca528-a97f-491f-bac9-33f3a603d9de';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c61ca528-a97f-491f-bac9-33f3a603d9de';
  $display->content['new-c61ca528-a97f-491f-bac9-33f3a603d9de'] = $pane;
  $display->panels['first'][3] = 'new-c61ca528-a97f-491f-bac9-33f3a603d9de';
  $pane = new stdClass();
  $pane->pid = 'new-44a8196a-c730-41ef-a09d-758fada63e71';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_interior_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44a8196a-c730-41ef-a09d-758fada63e71';
  $display->content['new-44a8196a-c730-41ef-a09d-758fada63e71'] = $pane;
  $display->panels['middle'][0] = 'new-44a8196a-c730-41ef-a09d-758fada63e71';
  $pane = new stdClass();
  $pane->pid = 'new-9d7129b1-e194-466b-93d2-6a0269c3f4d0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
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
  $pane->uuid = '9d7129b1-e194-466b-93d2-6a0269c3f4d0';
  $display->content['new-9d7129b1-e194-466b-93d2-6a0269c3f4d0'] = $pane;
  $display->panels['middle'][1] = 'new-9d7129b1-e194-466b-93d2-6a0269c3f4d0';
  $pane = new stdClass();
  $pane->pid = 'new-8e8675a4-492f-4a25-a0b1-840e72357663';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'paragraphs-panel_pane_1';
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
  $pane->uuid = '8e8675a4-492f-4a25-a0b1-840e72357663';
  $display->content['new-8e8675a4-492f-4a25-a0b1-840e72357663'] = $pane;
  $display->panels['middle'][2] = 'new-8e8675a4-492f-4a25-a0b1-840e72357663';
  $pane = new stdClass();
  $pane->pid = 'new-aa2ff8ff-0a17-45ed-ad9b-79f59ae68a00';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'bypass_access' => 0,
      'view_mode' => 'featured_link_url',
      'links' => 1,
      'use_content_language' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Video Resources',
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
  $pane->uuid = 'aa2ff8ff-0a17-45ed-ad9b-79f59ae68a00';
  $display->content['new-aa2ff8ff-0a17-45ed-ad9b-79f59ae68a00'] = $pane;
  $display->panels['second'][0] = 'new-aa2ff8ff-0a17-45ed-ad9b-79f59ae68a00';
  $pane = new stdClass();
  $pane->pid = 'new-876faaff-46cf-4664-a622-86d6c5242c41';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_featured_resources';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'bypass_access' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Featured Resources',
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
  $pane->uuid = '876faaff-46cf-4664-a622-86d6c5242c41';
  $display->content['new-876faaff-46cf-4664-a622-86d6c5242c41'] = $pane;
  $display->panels['second'][1] = 'new-876faaff-46cf-4664-a622-86d6c5242c41';
  $pane = new stdClass();
  $pane->pid = 'new-f2ce0503-b91d-4688-a1d4-a346e438bc83';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'External Links',
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
  $pane->uuid = 'f2ce0503-b91d-4688-a1d4-a346e438bc83';
  $display->content['new-f2ce0503-b91d-4688-a1d4-a346e438bc83'] = $pane;
  $display->panels['second'][2] = 'new-f2ce0503-b91d-4688-a1d4-a346e438bc83';
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
    'override_title_text' => 'Video Services',
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
  $handler->weight = 24;
  $handler->conf = array(
    'title' => 'Video Library',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-video',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Branch Home',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '7788',
        'id' => 1,
      ),
    ),
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
            'paths' => 'vdl/*
videoservices/*',
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
  $display->title = '%node:title';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_98c15859-eea2-4068-bf4b-c24b814ac306';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
  $display->panels['first'][1] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
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
  $pane->pid = 'new-26f96e50-2bb7-4659-942d-a3a28eee0649';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'featured_link_url',
      'links' => 1,
      'use_content_language' => 1,
      'link' => 0,
      'bypass_access' => 0,
    ),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Video Resources',
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
  $pane->uuid = '26f96e50-2bb7-4659-942d-a3a28eee0649';
  $display->content['new-26f96e50-2bb7-4659-942d-a3a28eee0649'] = $pane;
  $display->panels['second'][0] = 'new-26f96e50-2bb7-4659-942d-a3a28eee0649';
  $pane = new stdClass();
  $pane->pid = 'new-d10d5460-0072-4705-b07b-714ecd9ad99c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7788',
    ),
    'override_title' => 1,
    'override_title_text' => 'External Links',
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
  $pane->uuid = 'd10d5460-0072-4705-b07b-714ecd9ad99c';
  $display->content['new-d10d5460-0072-4705-b07b-714ecd9ad99c'] = $pane;
  $display->panels['second'][1] = 'new-d10d5460-0072-4705-b07b-714ecd9ad99c';
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
    'override_title_text' => 'Video Services',
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
