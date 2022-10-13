<?php

/**
 * @file
 * pul_makerspace.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_makerspace_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__the-pul-makerspace';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 43;
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
            'paths' => 'makerspace',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'libraries-makerspace',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'the-pul-makerspace',
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
    'title' => 'The PUL Makerspace',
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
  $display->title = 'The PUL Makerspace';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__the-pul-makerspace';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0771cf47-741b-4e4e-ba73-83407405bb0e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-pul-makerspace';
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
  $pane->uuid = '0771cf47-741b-4e4e-ba73-83407405bb0e';
  $display->content['new-0771cf47-741b-4e4e-ba73-83407405bb0e'] = $pane;
  $display->panels['first'][0] = 'new-0771cf47-741b-4e4e-ba73-83407405bb0e';
  $pane = new stdClass();
  $pane->pid = 'new-4603487f-b83d-494f-bc92-69f929d5dc54';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'libhours_makerspace-libhours_makerspace';
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
  $pane->uuid = '4603487f-b83d-494f-bc92-69f929d5dc54';
  $display->content['new-4603487f-b83d-494f-bc92-69f929d5dc54'] = $pane;
  $display->panels['first'][1] = 'new-4603487f-b83d-494f-bc92-69f929d5dc54';
  $pane = new stdClass();
  $pane->pid = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Location',
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
  $pane->pid = 'new-a1af99aa-ff1e-4b35-a8ca-3ff5342564fe';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Makerspace location',
    'body' => '<p>A Floor of Lewis Science Library in the Engineering - Lewis - Fine wing.</p>',
    'format' => 'pul_editor_html',
    'name' => 'pul_makerspace_location',
    'substitute' => 1,
    'title' => 'Location',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a1af99aa-ff1e-4b35-a8ca-3ff5342564fe';
  $display->content['new-a1af99aa-ff1e-4b35-a8ca-3ff5342564fe'] = $pane;
  $display->panels['first'][3] = 'new-a1af99aa-ff1e-4b35-a8ca-3ff5342564fe';
  $pane = new stdClass();
  $pane->pid = 'new-755db5d4-9e24-40f4-af4f-4d9a26d0ee94';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '755db5d4-9e24-40f4-af4f-4d9a26d0ee94';
  $display->content['new-755db5d4-9e24-40f4-af4f-4d9a26d0ee94'] = $pane;
  $display->panels['first'][4] = 'new-755db5d4-9e24-40f4-af4f-4d9a26d0ee94';
  $pane = new stdClass();
  $pane->pid = 'new-6c1f67a5-2673-4c7b-a159-5d23251d0cf1';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6c1f67a5-2673-4c7b-a159-5d23251d0cf1';
  $display->content['new-6c1f67a5-2673-4c7b-a159-5d23251d0cf1'] = $pane;
  $display->panels['middle'][0] = 'new-6c1f67a5-2673-4c7b-a159-5d23251d0cf1';
  $pane = new stdClass();
  $pane->pid = 'new-adcfb358-1b7a-4eda-9568-87e48873e7cc';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'adcfb358-1b7a-4eda-9568-87e48873e7cc';
  $display->content['new-adcfb358-1b7a-4eda-9568-87e48873e7cc'] = $pane;
  $display->panels['middle'][1] = 'new-adcfb358-1b7a-4eda-9568-87e48873e7cc';
  $pane = new stdClass();
  $pane->pid = 'new-ee9cd44e-3811-4342-a636-06a588d5b4bd';
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
  $pane->uuid = 'ee9cd44e-3811-4342-a636-06a588d5b4bd';
  $display->content['new-ee9cd44e-3811-4342-a636-06a588d5b4bd'] = $pane;
  $display->panels['middle'][2] = 'new-ee9cd44e-3811-4342-a636-06a588d5b4bd';
  $pane = new stdClass();
  $pane->pid = 'new-cc8d0f07-8a7a-44b7-8473-433e0fe82a61';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'makerspace events and workshops',
    'body' => '<div id="api_upc_cid12260_iid771"></div><script src="https://api3.libcal.com/api_events.php?iid=771&m=upc&cid=12260&audience=&c=&d=52973&l=5&simple=ul_date&context=object&format=js"> </script>',
    'format' => 'full_html',
    'name' => 'pul_fine_news_events',
    'substitute' => 1,
    'title' => 'Events and Workshops',
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
  $pane->uuid = 'cc8d0f07-8a7a-44b7-8473-433e0fe82a61';
  $display->content['new-cc8d0f07-8a7a-44b7-8473-433e0fe82a61'] = $pane;
  $display->panels['second'][0] = 'new-cc8d0f07-8a7a-44b7-8473-433e0fe82a61';
  $pane = new stdClass();
  $pane->pid = 'new-957e8a07-f61a-4551-bdd3-aedbdbbdc163';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = FALSE;
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
  $pane->uuid = '957e8a07-f61a-4551-bdd3-aedbdbbdc163';
  $display->content['new-957e8a07-f61a-4551-bdd3-aedbdbbdc163'] = $pane;
  $display->panels['second'][1] = 'new-957e8a07-f61a-4551-bdd3-aedbdbbdc163';
  $pane = new stdClass();
  $pane->pid = 'new-569a4a87-8899-491e-91a4-7dfe07522fd9';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_30';
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
  $pane->uuid = '569a4a87-8899-491e-91a4-7dfe07522fd9';
  $display->content['new-569a4a87-8899-491e-91a4-7dfe07522fd9'] = $pane;
  $display->panels['second'][2] = 'new-569a4a87-8899-491e-91a4-7dfe07522fd9';
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
    'override_title_text' => 'The PUL Makerspace',
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
  $export['node_view__the-pul-makerspace'] = $handler;

  return $export;
}
