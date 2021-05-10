<?php

/**
 * @file
 * mendel_sheet_music.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mendel_sheet_music_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mendel-valva-record';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 53;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'music/valva/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '7791',
        'id' => 1,
        'identifier' => 'Mendel Library',
        'keyword' => 'mendel_config',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'name' => 'mendel-valva-record',
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
    'title' => 'Mendel Valva Record',
  );
  $display = new panels_display();
  $display->layout = 'single';
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
  $display->storage_id = 'node_view__mendel-valva-record';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-057aa67e-442d-4c1e-b053-84d1e696d794';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>This piece is part of the Fred D. Valva collection at Princeton University Library – Mendel Music Library. You can access the full collection&nbsp;<a href="/music/valva" rel="nofollow">here</a>. For more information or to request a copy of this piece please email&nbsp;<a href="mailto:muslib@princeton.edu">muslib@princeton.edu</a>.</p>',
    'format' => 'pul_editor_html',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '057aa67e-442d-4c1e-b053-84d1e696d794';
  $display->content['new-057aa67e-442d-4c1e-b053-84d1e696d794'] = $pane;
  $display->panels['top'][0] = 'new-057aa67e-442d-4c1e-b053-84d1e696d794';
  $pane = new stdClass();
  $pane->pid = 'new-0e8bd1c6-3dd5-4344-b1b9-ee8879774ccd';
  $pane->panel = 'top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'id' => '',
    'link' => 0,
    'markup' => 'h1',
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
  $pane->uuid = '0e8bd1c6-3dd5-4344-b1b9-ee8879774ccd';
  $display->content['new-0e8bd1c6-3dd5-4344-b1b9-ee8879774ccd'] = $pane;
  $display->panels['top'][1] = 'new-0e8bd1c6-3dd5-4344-b1b9-ee8879774ccd';
  $pane = new stdClass();
  $pane->pid = 'new-b53c7164-58e9-42c0-91e9-4605b8f2aefd';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->uuid = 'b53c7164-58e9-42c0-91e9-4605b8f2aefd';
  $display->content['new-b53c7164-58e9-42c0-91e9-4605b8f2aefd'] = $pane;
  $display->panels['top'][2] = 'new-b53c7164-58e9-42c0-91e9-4605b8f2aefd';
  $pane = new stdClass();
  $pane->pid = 'new-1b7120f5-58d1-4c98-aeef-bb975e1c3fad';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_sheetmusic_composer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(
      'links' => 1,
      'use_content_language' => 1,
      'view_mode' => 'default',
    ),
    'label' => 'inline',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1b7120f5-58d1-4c98-aeef-bb975e1c3fad';
  $display->content['new-1b7120f5-58d1-4c98-aeef-bb975e1c3fad'] = $pane;
  $display->panels['top'][3] = 'new-1b7120f5-58d1-4c98-aeef-bb975e1c3fad';
  $pane = new stdClass();
  $pane->pid = 'new-1a49da26-17e3-4713-9a92-06e49aeaf429';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_box_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1a49da26-17e3-4713-9a92-06e49aeaf429';
  $display->content['new-1a49da26-17e3-4713-9a92-06e49aeaf429'] = $pane;
  $display->panels['top'][4] = 'new-1a49da26-17e3-4713-9a92-06e49aeaf429';
  $pane = new stdClass();
  $pane->pid = 'new-55fe9845-443d-40dc-835a-56009b3aba5d';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_folder_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'number_integer',
    'formatter_settings' => array(
      'prefix_suffix' => 1,
      'thousand_separator' => '',
    ),
    'label' => 'inline',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '55fe9845-443d-40dc-835a-56009b3aba5d';
  $display->content['new-55fe9845-443d-40dc-835a-56009b3aba5d'] = $pane;
  $display->panels['top'][5] = 'new-55fe9845-443d-40dc-835a-56009b3aba5d';
  $pane = new stdClass();
  $pane->pid = 'new-a8ced441-7e10-4b43-b077-7585bf51f8fa';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_lyricist';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a8ced441-7e10-4b43-b077-7585bf51f8fa';
  $display->content['new-a8ced441-7e10-4b43-b077-7585bf51f8fa'] = $pane;
  $display->panels['top'][6] = 'new-a8ced441-7e10-4b43-b077-7585bf51f8fa';
  $pane = new stdClass();
  $pane->pid = 'new-25d6beea-3dbb-46c8-ae0d-aa2338adb76e';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_arranger';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '25d6beea-3dbb-46c8-ae0d-aa2338adb76e';
  $display->content['new-25d6beea-3dbb-46c8-ae0d-aa2338adb76e'] = $pane;
  $display->panels['top'][7] = 'new-25d6beea-3dbb-46c8-ae0d-aa2338adb76e';
  $pane = new stdClass();
  $pane->pid = 'new-7e349a15-07a5-4c73-a7f2-92a0eb5b270b';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_publisher';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7e349a15-07a5-4c73-a7f2-92a0eb5b270b';
  $display->content['new-7e349a15-07a5-4c73-a7f2-92a0eb5b270b'] = $pane;
  $display->panels['top'][8] = 'new-7e349a15-07a5-4c73-a7f2-92a0eb5b270b';
  $pane = new stdClass();
  $pane->pid = 'new-942f0192-ebcb-4b81-ab50-20284da165f0';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_publisher_citystate';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'text_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '942f0192-ebcb-4b81-ab50-20284da165f0';
  $display->content['new-942f0192-ebcb-4b81-ab50-20284da165f0'] = $pane;
  $display->panels['top'][9] = 'new-942f0192-ebcb-4b81-ab50-20284da165f0';
  $pane = new stdClass();
  $pane->pid = 'new-92f9b13c-c045-4277-af32-7cacfc3742b9';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_publication_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '92f9b13c-c045-4277-af32-7cacfc3742b9';
  $display->content['new-92f9b13c-c045-4277-af32-7cacfc3742b9'] = $pane;
  $display->panels['top'][10] = 'new-92f9b13c-c045-4277-af32-7cacfc3742b9';
  $pane = new stdClass();
  $pane->pid = 'new-957f4041-29bf-427a-8990-f1d2375b7865';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_plate_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'text_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '957f4041-29bf-427a-8990-f1d2375b7865';
  $display->content['new-957f4041-29bf-427a-8990-f1d2375b7865'] = $pane;
  $display->panels['top'][11] = 'new-957f4041-29bf-427a-8990-f1d2375b7865';
  $pane = new stdClass();
  $pane->pid = 'new-3261d059-5253-4c60-95fa-24a4070dca14';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_sh_instrumentation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'taxonomy_term_reference_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '3261d059-5253-4c60-95fa-24a4070dca14';
  $display->content['new-3261d059-5253-4c60-95fa-24a4070dca14'] = $pane;
  $display->panels['top'][12] = 'new-3261d059-5253-4c60-95fa-24a4070dca14';
  $pane = new stdClass();
  $pane->pid = 'new-6f771906-2c37-48f0-9007-53f277834ca9';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_valva_scene_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '6f771906-2c37-48f0-9007-53f277834ca9';
  $display->content['new-6f771906-2c37-48f0-9007-53f277834ca9'] = $pane;
  $display->panels['top'][13] = 'new-6f771906-2c37-48f0-9007-53f277834ca9';
  $pane = new stdClass();
  $pane->pid = 'new-9dfd5113-cd65-46c7-9282-607d311763b7';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mus_longnote';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'text_plain',
    'formatter_settings' => array(),
    'label' => 'inline',
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '9dfd5113-cd65-46c7-9282-607d311763b7';
  $display->content['new-9dfd5113-cd65-46c7-9282-607d311763b7'] = $pane;
  $display->panels['top'][14] = 'new-9dfd5113-cd65-46c7-9282-607d311763b7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__mendel-valva-record'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function mendel_sheet_music_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mendel_valva_sheet_music_collection';
  $page->task = 'page';
  $page->admin_title = 'Mendel Valva Sheet Music Collection';
  $page->admin_description = 'Mendel Valva Collection';
  $page->path = 'music/valva';
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
  $handler->name = 'page_mendel_valva_sheet_music_collection__panel';
  $handler->task = 'page';
  $handler->subtask = 'mendel_valva_sheet_music_collection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => 'branch-libraries libraries-music',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Valva Sheet Music Collection';
  $display->uuid = '4bbdcc65-b0f4-4bfd-9490-bf11e2527b1f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mendel_valva_sheet_music_collection__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fLaYDNwCjPJhNDXnQpCo5pkhRd0oy5yG';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Publication Date',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $display->content['new-a263ee77-b825-4b55-9805-0d37b83ffe4e'] = $pane;
  $display->panels['first'][0] = 'new-a263ee77-b825-4b55-9805-0d37b83ffe4e';
  $pane = new stdClass();
  $pane->pid = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fV8OpYBlZg3DjfOqGRYLn2vYA8v7Wjq0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Composer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $display->content['new-28fcc257-5cbd-49cf-8223-0d08b91d12e4'] = $pane;
  $display->panels['first'][1] = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $pane = new stdClass();
  $pane->pid = 'new-142f4e97-7290-4243-929e-6321996ed8ff';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-WYOGs83PnSlgaQ3raVm9PC0Onji1KORX';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Instrumentation',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '142f4e97-7290-4243-929e-6321996ed8ff';
  $display->content['new-142f4e97-7290-4243-929e-6321996ed8ff'] = $pane;
  $display->panels['first'][2] = 'new-142f4e97-7290-4243-929e-6321996ed8ff';
  $pane = new stdClass();
  $pane->pid = 'new-44b9e203-672e-4764-bcfe-cb34122258a9';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'mendel_valva_sheet_music_collection-panel_pane_1';
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
  $pane->uuid = '44b9e203-672e-4764-bcfe-cb34122258a9';
  $display->content['new-44b9e203-672e-4764-bcfe-cb34122258a9'] = $pane;
  $display->panels['second'][0] = 'new-44b9e203-672e-4764-bcfe-cb34122258a9';
  $pane = new stdClass();
  $pane->pid = 'new-f7734e03-0236-4167-8d21-bab10a305f4b';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '7791',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Mendel Music Library',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7734e03-0236-4167-8d21-bab10a305f4b';
  $display->content['new-f7734e03-0236-4167-8d21-bab10a305f4b'] = $pane;
  $display->panels['top'][0] = 'new-f7734e03-0236-4167-8d21-bab10a305f4b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-28fcc257-5cbd-49cf-8223-0d08b91d12e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mendel_valva_sheet_music_collection'] = $page;

  return $pages;

}
