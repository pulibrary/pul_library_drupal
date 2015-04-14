<?php
/**
 * @file
 * pul_mendel_music_library_branch_site.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_mendel_music_library_branch_site_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_228095c7-6111-4346-bea6-55a3d6b896d1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 32;
  $handler->conf = array(
    'title' => 'Mendel Music Library Branch Pages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-music',
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
            'paths' => 'libraries/music/*',
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
    $pane->pid = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-music';
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
    $pane->uuid = '071a0575-87b0-4da9-86a0-2c8299513224';
    $display->content['new-071a0575-87b0-4da9-86a0-2c8299513224'] = $pane;
    $display->panels['first'][0] = 'new-071a0575-87b0-4da9-86a0-2c8299513224';
    $pane = new stdClass();
    $pane->pid = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_hrs_lib_calendar_target_id' => '3707',
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
    $pane->uuid = '6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $display->content['new-6d8cc8bc-71b5-4b12-87df-6557f117d98e'] = $pane;
    $display->panels['first'][1] = 'new-6d8cc8bc-71b5-4b12-87df-6557f117d98e';
    $pane = new stdClass();
    $pane->pid = 'new-ac2abf14-0345-47b0-8b21-62a91dc61e76';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3707',
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
        'nid' => '7791',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
    $display->content['new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5'] = $pane;
    $display->panels['first'][3] = 'new-a0b83abd-55a1-4c8a-b999-5cd8f6b6b4f5';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '29ab6b62-7249-4620-b70a-fbf48315a11b';
    $display->content['new-29ab6b62-7249-4620-b70a-fbf48315a11b'] = $pane;
    $display->panels['middle'][1] = 'new-29ab6b62-7249-4620-b70a-fbf48315a11b';
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
    $pane->pid = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'branch_features-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7791',
      ),
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
    $pane->uuid = '32b1026f-8608-4103-8905-29c28d0581fd';
    $display->content['new-32b1026f-8608-4103-8905-29c28d0581fd'] = $pane;
    $display->panels['second'][1] = 'new-32b1026f-8608-4103-8905-29c28d0581fd';
    $pane = new stdClass();
    $pane->pid = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'branch_features-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '7791',
      ),
      'override_title' => 1,
      'override_title_text' => 'Music Research Guides',
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
    $pane->uuid = 'b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
    $display->content['new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4'] = $pane;
    $display->panels['second'][2] = 'new-b8609c7f-bf2d-4fe9-b944-bd91d89038f4';
    $pane = new stdClass();
    $pane->pid = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
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
      'override_title_text' => 'Mendel Music Library',
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
    $pane->uuid = 'b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
    $display->content['new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b'] = $pane;
    $display->panels['top'][0] = 'new-b87b9cbe-fcf6-4ff7-b8a6-6280abcbef1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_228095c7-6111-4346-bea6-55a3d6b896d1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ac92d8e0-98f5-4119-9764-f7d3ef4f8652';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 31;
  $handler->conf = array(
    'title' => 'Mendel Music Library Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-music',
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
            'paths' => 'libraries/music',
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
    $pane->pid = 'new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-branch-music';
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
    $pane->uuid = '23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
    $display->content['new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb'] = $pane;
    $display->panels['first'][0] = 'new-23b607ab-a416-4cbb-8fae-fdfaf9ae58bb';
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
    $pane->shown = TRUE;
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
    $pane->pid = 'new-eb3a0d26-e506-4b0e-a1f4-952a4fe2533f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_6';
    $pane->shown = FALSE;
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
    $pane->uuid = 'eb3a0d26-e506-4b0e-a1f4-952a4fe2533f';
    $display->content['new-eb3a0d26-e506-4b0e-a1f4-952a4fe2533f'] = $pane;
    $display->panels['middle'][0] = 'new-eb3a0d26-e506-4b0e-a1f4-952a4fe2533f';
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
    $pane->pid = 'new-0cdc3ba2-0546-4ede-b9aa-2ddd1af860eb';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-get-help-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '0cdc3ba2-0546-4ede-b9aa-2ddd1af860eb';
    $display->content['new-0cdc3ba2-0546-4ede-b9aa-2ddd1af860eb'] = $pane;
    $display->panels['second'][0] = 'new-0cdc3ba2-0546-4ede-b9aa-2ddd1af860eb';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4a7e8630-60ac-4b66-b428-9053907bb89a';
    $display->content['new-4a7e8630-60ac-4b66-b428-9053907bb89a'] = $pane;
    $display->panels['second'][2] = 'new-4a7e8630-60ac-4b66-b428-9053907bb89a';
    $pane = new stdClass();
    $pane->pid = 'new-e79db668-d0a2-4208-8666-461039bc5e0d';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_branch_quick_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '5',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
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
    $pane->uuid = 'e79db668-d0a2-4208-8666-461039bc5e0d';
    $display->content['new-e79db668-d0a2-4208-8666-461039bc5e0d'] = $pane;
    $display->panels['second'][3] = 'new-e79db668-d0a2-4208-8666-461039bc5e0d';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
    $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
    $display->panels['second'][4] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
    $pane = new stdClass();
    $pane->pid = 'new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_branch_external_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '5',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Music Research Guides',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
    $display->content['new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2'] = $pane;
    $display->panels['second'][5] = 'new-4ab4a127-bc3f-454a-ab6b-95bf078f7cf2';
    $pane = new stdClass();
    $pane->pid = 'new-d5b48f86-8697-40a3-84a3-a3c107733070';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mendel Social Media',
      'title' => 'Connect',
      'body' => '<p style="text-align: left;"><a href="https://www.facebook.com/MendelMusicLibrary" target="_blank" title="Facebook"><img src="http://musiclib.princeton.edu/sites/default/files/FBlogobox_0.jpg" alt="" width="36" height="36" /></a>&nbsp; &nbsp;&nbsp;<a href="https://www.facebook.com/MendelMusicLibrary" target="_blank" title="Facebook"></a><a href="https://twitter.com/PUMusicLibrary" target="_blank" title="Twitter"><img src="http://musiclib.princeton.edu/sites/default/files/twitterlogobox_0.jpg" alt="" width="36" height="36" /><br /></a></p><p>Visit the Mendel Music Library on&nbsp;<a href="https://www.facebook.com/MendelMusicLibrary" target="_blank">Facebook&nbsp;</a>or&nbsp;<a href="https://twitter.com/PUMusicLibrary" target="_blank">Twitter</a>!</p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd5b48f86-8697-40a3-84a3-a3c107733070';
    $display->content['new-d5b48f86-8697-40a3-84a3-a3c107733070'] = $pane;
    $display->panels['second'][6] = 'new-d5b48f86-8697-40a3-84a3-a3c107733070';
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
      'override_title_text' => 'Mendel Music Library',
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
  $export['node_view__panel_context_ac92d8e0-98f5-4119-9764-f7d3ef4f8652'] = $handler;

  return $export;
}
