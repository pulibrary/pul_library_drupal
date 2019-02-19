<?php

/**
 * @file
 * highlights_psychology_and_neuroscience.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function highlights_psychology_and_neuroscience_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__highlights-for-the-psychology-and-neuroscience-departments';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Highlights for the Psychology and Neuroscience Departments',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'branch-libraries libraries-lewis',
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
            'paths' => 'lewis/psychology-neuroscience',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'highlights-for-the-psychology-and-neuroscience-departments',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Lewis Library
Highlights in Psychology and Neuroscience',
    'panels_breadcrumbs_paths' => '/lewis
/lewis/psychology-neuroscience',
    'panels_breadcrumbs_home' => 0,
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
  $display->title = 'Highlights for the Psychology and Neuroscience Departments';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__highlights-for-the-psychology-and-neuroscience-departments';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-09424f61-14d7-41a7-9086-7790f33cc59f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-highlights-for-neuroscience';
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
  $pane->uuid = '09424f61-14d7-41a7-9086-7790f33cc59f';
  $display->content['new-09424f61-14d7-41a7-9086-7790f33cc59f'] = $pane;
  $display->panels['first'][0] = 'new-09424f61-14d7-41a7-9086-7790f33cc59f';
  $pane = new stdClass();
  $pane->pid = 'new-20710499-fc1d-47b6-a750-e3304ed70b57';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '10660',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'liason-librarian',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '20710499-fc1d-47b6-a750-e3304ed70b57';
  $display->content['new-20710499-fc1d-47b6-a750-e3304ed70b57'] = $pane;
  $display->panels['first'][1] = 'new-20710499-fc1d-47b6-a750-e3304ed70b57';
  $pane = new stdClass();
  $pane->pid = 'new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
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
  $pane->uuid = 'b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
  $display->content['new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff'] = $pane;
  $display->panels['middle'][0] = 'new-b6a51450-c4e2-4ce7-8f20-0a1c285c02ff';
  $pane = new stdClass();
  $pane->pid = 'new-12334b83-5ab9-42b1-b921-fab6e158bbec';
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
  $pane->uuid = '12334b83-5ab9-42b1-b921-fab6e158bbec';
  $display->content['new-12334b83-5ab9-42b1-b921-fab6e158bbec'] = $pane;
  $display->panels['middle'][1] = 'new-12334b83-5ab9-42b1-b921-fab6e158bbec';
  $pane = new stdClass();
  $pane->pid = 'new-a000d06e-2373-4c32-a54a-c77d9e9d7606';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_news-panel_pane_23';
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
  $pane->uuid = 'a000d06e-2373-4c32-a54a-c77d9e9d7606';
  $display->content['new-a000d06e-2373-4c32-a54a-c77d9e9d7606'] = $pane;
  $display->panels['middle'][2] = 'new-a000d06e-2373-4c32-a54a-c77d9e9d7606';
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
  $pane->pid = 'new-4f310bf6-7a3d-4816-a20f-d4b0b97ace5c';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_section_library_promotion';
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
    'override_title_text' => 'Events',
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
  $pane->uuid = '4f310bf6-7a3d-4816-a20f-d4b0b97ace5c';
  $display->content['new-4f310bf6-7a3d-4816-a20f-d4b0b97ace5c'] = $pane;
  $display->panels['second'][2] = 'new-4f310bf6-7a3d-4816-a20f-d4b0b97ace5c';
  $pane = new stdClass();
  $pane->pid = 'new-89418c64-c041-437f-b316-176cc00761cc';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_quick_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
      'view_mode' => 'featured_link_url',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Services',
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
  $pane->uuid = '89418c64-c041-437f-b316-176cc00761cc';
  $display->content['new-89418c64-c041-437f-b316-176cc00761cc'] = $pane;
  $display->panels['second'][3] = 'new-89418c64-c041-437f-b316-176cc00761cc';
  $pane = new stdClass();
  $pane->pid = 'new-93404a59-2a59-4011-992b-e3ab9b91e43a';
  $pane->panel = 'second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_external_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Key Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '93404a59-2a59-4011-992b-e3ab9b91e43a';
  $display->content['new-93404a59-2a59-4011-992b-e3ab9b91e43a'] = $pane;
  $display->panels['second'][4] = 'new-93404a59-2a59-4011-992b-e3ab9b91e43a';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e3691a6d-205f-49b0-a046-4195215f16d5';
  $display->content['new-e3691a6d-205f-49b0-a046-4195215f16d5'] = $pane;
  $display->panels['second'][5] = 'new-e3691a6d-205f-49b0-a046-4195215f16d5';
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
    'override_title_text' => 'Highlights for the Psychology and Neuroscience Departments',
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
  $export['node_view__highlights-for-the-psychology-and-neuroscience-departments'] = $handler;

  return $export;
}
