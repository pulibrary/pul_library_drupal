<?php
/**
 * @file
 * pul_branch_engineering.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_branch_engineering_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_52';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 26;
  $handler->conf = array(
    'title' => 'Engineering Library Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-engineering',
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
            'paths' => 'libraries/engineering',
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
    $pane->pid = 'new-5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-engineering';
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
    $pane->uuid = '5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $display->content['new-5eb46f46-ffc5-442a-88f1-51c5485ff048'] = $pane;
    $display->panels['first'][0] = 'new-5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $pane = new stdClass();
    $pane->pid = 'new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
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
    $pane->uuid = '1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
    $display->content['new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a'] = $pane;
    $display->panels['first'][1] = 'new-1e3da5b5-e23e-46e9-81a4-8aa1b3abe09a';
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
    $pane->pid = 'new-52dbdaaa-f44d-4220-a043-296f978be740';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert--message',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52dbdaaa-f44d-4220-a043-296f978be740';
    $display->content['new-52dbdaaa-f44d-4220-a043-296f978be740'] = $pane;
    $display->panels['middle'][0] = 'new-52dbdaaa-f44d-4220-a043-296f978be740';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4895123a-689b-465c-bf0b-3fe871089781';
    $display->content['new-4895123a-689b-465c-bf0b-3fe871089781'] = $pane;
    $display->panels['middle'][1] = 'new-4895123a-689b-465c-bf0b-3fe871089781';
    $pane = new stdClass();
    $pane->pid = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_branch_spotlight_item';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 1,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
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
    $pane->uuid = '5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
    $display->content['new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6'] = $pane;
    $display->panels['second'][0] = 'new-5c1e881c-edb6-42c2-ad19-8b61c7cbbaa6';
    $pane = new stdClass();
    $pane->pid = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_branch_featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '5',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 1,
        'link' => 1,
        'text' => '[entity:label]',
        'check_access' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
    $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
    $display->panels['second'][1] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
    $pane = new stdClass();
    $pane->pid = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_amenities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'target' => 'node',
        'depth' => '0',
        'hidden' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Amenities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
    $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
    $display->panels['second'][2] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
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
      'override_title_text' => 'Engineering Library',
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
  $export['node_view_panel_context_52'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_53';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 27;
  $handler->conf = array(
    'title' => 'Engineering Library Branch Pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-engineering',
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
            'paths' => 'libraries/engineering/*

help/engineering-course-reserves-request-form',
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
    $pane->pid = 'new-5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-engineering';
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
    $pane->uuid = '5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $display->content['new-5eb46f46-ffc5-442a-88f1-51c5485ff048'] = $pane;
    $display->panels['first'][0] = 'new-5eb46f46-ffc5-442a-88f1-51c5485ff048';
    $pane = new stdClass();
    $pane->pid = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '3690',
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
    $pane->uuid = '6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $display->content['new-6d8cc8bc-71b5-4b12-87df-6557f117d98e'] = $pane;
    $display->panels['first'][1] = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $pane = new stdClass();
    $pane->pid = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3690',
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
        'nid' => '7786',
      ),
      'override_title' => 1,
      'override_title_text' => 'Contact Us',
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
    $pane->pid = 'new-2e4700fe-b9f0-4d34-944b-eb5ea82eb56a';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert--message',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e4700fe-b9f0-4d34-944b-eb5ea82eb56a';
    $display->content['new-2e4700fe-b9f0-4d34-944b-eb5ea82eb56a'] = $pane;
    $display->panels['middle'][0] = 'new-2e4700fe-b9f0-4d34-944b-eb5ea82eb56a';
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
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
    $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
    $display->panels['middle'][2] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
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
    $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'branch_library_image-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7786',
      ),
      'override_title' => 1,
      'override_title_text' => 'Engineering Library',
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
  $export['node_view_panel_context_53'] = $handler;

  return $export;
}
