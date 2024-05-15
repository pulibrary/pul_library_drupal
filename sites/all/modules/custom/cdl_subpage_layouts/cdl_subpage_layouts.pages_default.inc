<?php

/**
 * @file
 * cdl_subpage_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cdl_subpage_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_29';
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
            'paths' => 'collections/*
',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Development Dept Home',
        'keyword' => 'collection_dev',
        'name' => 'entity:node',
      ),
      1 => array(
        'entity_id' => '6557',
        'id' => 2,
        'identifier' => 'Collection Dev Staff',
        'keyword' => 'col_dev_staff',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collection Development Department Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_29';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e8fd779f-7152-414e-840b-cc7f0c8432aa';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-collection-development-webs';
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
  $pane->uuid = 'e8fd779f-7152-414e-840b-cc7f0c8432aa';
  $display->content['new-e8fd779f-7152-414e-840b-cc7f0c8432aa'] = $pane;
  $display->panels['first'][0] = 'new-e8fd779f-7152-414e-840b-cc7f0c8432aa';
  $pane = new stdClass();
  $pane->pid = 'new-a49bdc51-7b20-4b4b-994c-92974182fce1';
  $pane->panel = 'middle';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '%node:title',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a49bdc51-7b20-4b4b-994c-92974182fce1';
  $display->content['new-a49bdc51-7b20-4b4b-994c-92974182fce1'] = $pane;
  $display->panels['middle'][0] = 'new-a49bdc51-7b20-4b4b-994c-92974182fce1';
  $pane = new stdClass();
  $pane->pid = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'subject_specialists';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'collections/people',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '60',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $display->content['new-a3867681-2f6f-4fc7-afda-c33ae3d1062e'] = $pane;
  $display->panels['middle'][1] = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $pane = new stdClass();
  $pane->pid = 'new-e336fa53-c816-4554-8d8a-31ca6be99429';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'cdl_new_acq_spotlight';
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
  $pane->uuid = 'e336fa53-c816-4554-8d8a-31ca6be99429';
  $display->content['new-e336fa53-c816-4554-8d8a-31ca6be99429'] = $pane;
  $display->panels['second'][0] = 'new-e336fa53-c816-4554-8d8a-31ca6be99429';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_29'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_32';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/*
',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'subject_specialists' => 'subject_specialists',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Development Dept Home',
        'keyword' => 'collection_dev',
        'name' => 'entity:node',
      ),
      1 => array(
        'entity_id' => '6557',
        'id' => 2,
        'identifier' => 'Collection Dev Staff',
        'keyword' => 'col_dev_staff',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Subject Selector Profile',
  );
  $display = new panels_display();
  $display->layout = 'nine-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_32';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a44ff88-12c0-4c44-988c-e0eedde91b27';
  $pane->panel = 'first';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'id' => 'selector-name',
    'link' => 0,
    'markup' => 'h1',
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
  $pane->uuid = '0a44ff88-12c0-4c44-988c-e0eedde91b27';
  $display->content['new-0a44ff88-12c0-4c44-988c-e0eedde91b27'] = $pane;
  $display->panels['first'][0] = 'new-0a44ff88-12c0-4c44-988c-e0eedde91b27';
  $pane = new stdClass();
  $pane->pid = 'new-8deb5419-28e5-41a6-87ae-c0db829122a4';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'cdl_subject_selector_bio-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8deb5419-28e5-41a6-87ae-c0db829122a4';
  $display->content['new-8deb5419-28e5-41a6-87ae-c0db829122a4'] = $pane;
  $display->panels['first'][1] = 'new-8deb5419-28e5-41a6-87ae-c0db829122a4';
  $pane = new stdClass();
  $pane->pid = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $pane->panel = 'first';
  $pane->type = 'views';
  $pane->subtype = 'subject_specialists';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'collections/people',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'args' => '',
    'display' => 'page',
    'feed_icons' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'nodes_per_page' => '60',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $display->content['new-a3867681-2f6f-4fc7-afda-c33ae3d1062e'] = $pane;
  $display->panels['first'][2] = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
  $pane = new stdClass();
  $pane->pid = 'new-33999787-0494-49a9-887b-26348570025c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'cdl_subject_selector_bio-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '33999787-0494-49a9-887b-26348570025c';
  $display->content['new-33999787-0494-49a9-887b-26348570025c'] = $pane;
  $display->panels['second'][0] = 'new-33999787-0494-49a9-887b-26348570025c';
  $pane = new stdClass();
  $pane->pid = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_spotlights_by_category-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
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
  $pane->uuid = 'a977c0e3-d6cc-458b-9876-b1829eb2a3da';
  $display->content['new-a977c0e3-d6cc-458b-9876-b1829eb2a3da'] = $pane;
  $display->panels['second'][1] = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
  $pane = new stdClass();
  $pane->pid = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_spotlights_by_category-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
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
  $pane->uuid = '205996bb-27dd-4446-9d2b-5299fbbe4d7d';
  $display->content['new-205996bb-27dd-4446-9d2b-5299fbbe4d7d'] = $pane;
  $display->panels['second'][2] = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
  $pane = new stdClass();
  $pane->pid = 'new-93315735-e8e1-4b76-9db5-f95a6e162a2a';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'pul_logo_file',
    ),
    'label' => 'title',
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
  $pane->uuid = '93315735-e8e1-4b76-9db5-f95a6e162a2a';
  $display->content['new-93315735-e8e1-4b76-9db5-f95a6e162a2a'] = $pane;
  $display->panels['top'][0] = 'new-93315735-e8e1-4b76-9db5-f95a6e162a2a';
  $pane = new stdClass();
  $pane->pid = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
  $display->panels['top'][1] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_32'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_33';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/people',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Dev Homepage ',
        'keyword' => 'colldev_home',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collection Development Specialists Page',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_33';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-559f7312-f967-4483-8a3d-7463bee186ce';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'subject_specialists-panel_pane_1';
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
  $pane->uuid = '559f7312-f967-4483-8a3d-7463bee186ce';
  $display->content['new-559f7312-f967-4483-8a3d-7463bee186ce'] = $pane;
  $display->panels['middle'][0] = 'new-559f7312-f967-4483-8a3d-7463bee186ce';
  $pane = new stdClass();
  $pane->pid = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_image_style' => '',
      'colorbox_node_style' => '',
      'image_link' => '',
      'image_style' => 'pul_logo_file',
    ),
    'label' => 'title',
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
  $pane->uuid = '795314d9-f44a-49fd-b7d1-03db93f48506';
  $display->content['new-795314d9-f44a-49fd-b7d1-03db93f48506'] = $pane;
  $display->panels['top'][0] = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
  $pane = new stdClass();
  $pane->pid = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
  $display->panels['top'][1] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_33'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_35';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
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
              'page' => 'page',
            ),
          ),
        ),
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/cdforum
collections/cdforum/*
collections/reilly08202008
collections/pathways10102010
collections/futureaccess02262010
collections/futureaccess02262010-bio
collections/adelman07102008',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Development Home',
        'keyword' => 'collections_dev_home',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'collections-and-collection-development',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collection Development Home',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collections Forum Layout',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '09a533e2-37dc-48d9-8522-3c2d2d607d94';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_35';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34b3dd4e-f320-480e-8163-61543437b79f';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-collection-development-webs';
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
  $pane->uuid = '34b3dd4e-f320-480e-8163-61543437b79f';
  $display->content['new-34b3dd4e-f320-480e-8163-61543437b79f'] = $pane;
  $display->panels['first'][0] = 'new-34b3dd4e-f320-480e-8163-61543437b79f';
  $pane = new stdClass();
  $pane->pid = 'new-ea8959d1-22dc-4b2c-9314-210fc121c247';
  $pane->panel = 'second';
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
  $pane->uuid = 'ea8959d1-22dc-4b2c-9314-210fc121c247';
  $display->content['new-ea8959d1-22dc-4b2c-9314-210fc121c247'] = $pane;
  $display->panels['second'][0] = 'new-ea8959d1-22dc-4b2c-9314-210fc121c247';
  $pane = new stdClass();
  $pane->pid = 'new-fa195b1a-f834-4534-885b-a4243818faba';
  $pane->panel = 'second';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '%title',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fa195b1a-f834-4534-885b-a4243818faba';
  $display->content['new-fa195b1a-f834-4534-885b-a4243818faba'] = $pane;
  $display->panels['second'][1] = 'new-fa195b1a-f834-4534-885b-a4243818faba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fa195b1a-f834-4534-885b-a4243818faba';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_35'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_36';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/staff',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Dev Homepage ',
        'keyword' => 'colldev_home',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collection Development Staff Page',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_36';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-65a47843-ade8-473b-a592-cbd917a25c8c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6557',
    ),
    'override_title' => 1,
    'override_title_text' => 'Administration',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'administration',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65a47843-ade8-473b-a592-cbd917a25c8c';
  $display->content['new-65a47843-ade8-473b-a592-cbd917a25c8c'] = $pane;
  $display->panels['middle'][0] = 'new-65a47843-ade8-473b-a592-cbd917a25c8c';
  $pane = new stdClass();
  $pane->pid = 'new-f3ed9ea0-7669-4662-99dc-532484494519';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '12775',
    ),
    'override_title' => 1,
    'override_title_text' => 'Support Staff',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'support-staff',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3ed9ea0-7669-4662-99dc-532484494519';
  $display->content['new-f3ed9ea0-7669-4662-99dc-532484494519'] = $pane;
  $display->panels['middle'][1] = 'new-f3ed9ea0-7669-4662-99dc-532484494519';
  $pane = new stdClass();
  $pane->pid = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_image_style' => '',
      'colorbox_node_style' => '',
      'image_link' => '',
      'image_style' => 'pul_logo_file',
    ),
    'label' => 'title',
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
  $pane->uuid = '795314d9-f44a-49fd-b7d1-03db93f48506';
  $display->content['new-795314d9-f44a-49fd-b7d1-03db93f48506'] = $pane;
  $display->panels['top'][0] = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
  $pane = new stdClass();
  $pane->pid = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
  $display->panels['top'][1] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_36'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_10';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
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
              7 => '7',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second collection-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Collections',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collections Page',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '215caaa8-45ae-4012-8c06-7ad718e5ebda';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_10';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_8';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_term_1',
          'name' => 'term_vocabulary',
          'not' => FALSE,
          'settings' => array(
            'machine_name' => array(
              'selector_departments' => 'selector_departments',
              'selector_subject_areas' => 'selector_subject_areas',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '12505',
        'id' => 1,
        'identifier' => 'Collection Development Home Page',
        'keyword' => 'coldev_home',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collection Development Department Taxonomy',
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '98479510-2a50-44c0-9a8e-b23404efb73c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1b0b6ee3-67f8-4b97-b885-2d341afaef89';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter' => 'image',
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'label' => 'title',
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
  $pane->uuid = '1b0b6ee3-67f8-4b97-b885-2d341afaef89';
  $display->content['new-1b0b6ee3-67f8-4b97-b885-2d341afaef89'] = $pane;
  $display->panels['top'][0] = 'new-1b0b6ee3-67f8-4b97-b885-2d341afaef89';
  $pane = new stdClass();
  $pane->pid = 'new-29d977ed-ecf4-4d91-a9d4-7ba30cc8774e';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '29d977ed-ecf4-4d91-a9d4-7ba30cc8774e';
  $display->content['new-29d977ed-ecf4-4d91-a9d4-7ba30cc8774e'] = $pane;
  $display->panels['top'][1] = 'new-29d977ed-ecf4-4d91-a9d4-7ba30cc8774e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1b0b6ee3-67f8-4b97-b885-2d341afaef89';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_8'] = $handler;

  return $export;
}
