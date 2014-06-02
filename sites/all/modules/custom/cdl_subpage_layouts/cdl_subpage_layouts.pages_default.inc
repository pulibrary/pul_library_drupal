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
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Collection Development Department Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Collection Development Dept Home',
        'keyword' => 'collection_dev',
        'name' => 'entity:node',
        'entity_id' => '12505',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Collection Dev Staff',
        'keyword' => 'col_dev_staff',
        'name' => 'entity:node',
        'entity_id' => '6557',
        'id' => 2,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/*
',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'acquisitions_highlights' => 'acquisitions_highlights',
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_twocol_9_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a49bdc51-7b20-4b4b-994c-92974182fce1';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
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
    $display->panels['left'][0] = 'new-a49bdc51-7b20-4b4b-994c-92974182fce1';
    $pane = new stdClass();
    $pane->pid = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'subject_specialists';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/people',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '60',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = 'a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $display->content['new-a3867681-2f6f-4fc7-afda-c33ae3d1062e'] = $pane;
    $display->panels['left'][1] = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $pane = new stdClass();
    $pane->pid = 'new-ec9a0ca6-4dfd-40b0-a313-9980b6d17b39';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/staff',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ec9a0ca6-4dfd-40b0-a313-9980b6d17b39';
    $display->content['new-ec9a0ca6-4dfd-40b0-a313-9980b6d17b39'] = $pane;
    $display->panels['left'][2] = 'new-ec9a0ca6-4dfd-40b0-a313-9980b6d17b39';
    $pane = new stdClass();
    $pane->pid = 'new-6641d3c1-54b8-4356-9601-4e132f9174b0';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'workgroup-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/staff',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6641d3c1-54b8-4356-9601-4e132f9174b0';
    $display->content['new-6641d3c1-54b8-4356-9601-4e132f9174b0'] = $pane;
    $display->panels['left'][3] = 'new-6641d3c1-54b8-4356-9601-4e132f9174b0';
    $pane = new stdClass();
    $pane->pid = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a977c0e3-d6cc-458b-9876-b1829eb2a3da';
    $display->content['new-a977c0e3-d6cc-458b-9876-b1829eb2a3da'] = $pane;
    $display->panels['right'][0] = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
    $pane = new stdClass();
    $pane->pid = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_spotlights_by_category-panel_pane_1';
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
    $pane->uuid = '205996bb-27dd-4446-9d2b-5299fbbe4d7d';
    $display->content['new-205996bb-27dd-4446-9d2b-5299fbbe4d7d'] = $pane;
    $display->panels['right'][1] = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
    $pane = new stdClass();
    $pane->pid = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_page_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'cssclass_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'target' => 'node',
        'depth' => '0',
        'hidden' => 1,
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
    $pane->uuid = '1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $display->content['new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed'] = $pane;
    $display->panels['top'][0] = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane = new stdClass();
    $pane->pid = 'new-93315735-e8e1-4b76-9db5-f95a6e162a2a';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'pul_logo_file',
        'image_link' => '',
      ),
      'context' => 'context_entity:node_1',
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
    $pane->uuid = '93315735-e8e1-4b76-9db5-f95a6e162a2a';
    $display->content['new-93315735-e8e1-4b76-9db5-f95a6e162a2a'] = $pane;
    $display->panels['top'][1] = 'new-93315735-e8e1-4b76-9db5-f95a6e162a2a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
    $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
    $display->panels['top'][2] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_29'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_31';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Collection Development Acquisitions Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Collection Dev Homepage ',
        'keyword' => 'colldev_home',
        'name' => 'entity:node',
        'entity_id' => '12505',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/highlights',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_onecol_12_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a891f1e-1ed7-4809-b0fd-91d840d2d875';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'acquisitions_highlights-panel_pane_1';
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
    $pane->uuid = '2a891f1e-1ed7-4809-b0fd-91d840d2d875';
    $display->content['new-2a891f1e-1ed7-4809-b0fd-91d840d2d875'] = $pane;
    $display->panels['bottom'][0] = 'new-2a891f1e-1ed7-4809-b0fd-91d840d2d875';
    $pane = new stdClass();
    $pane->pid = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'colorbox_node_style' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'image_style' => 'pul_logo_file',
        'image_link' => '',
      ),
      'context' => 'context_entity:node_1',
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
    $pane = new stdClass();
    $pane->pid = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_page_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'cssclass_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'target' => 'node',
        'depth' => '0',
        'hidden' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $display->content['new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed'] = $pane;
    $display->panels['top'][2] = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane = new stdClass();
    $pane->pid = 'new-3247c631-c788-4214-b10d-a3520a2aff6c';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'acquisitions_highlights';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '30',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3247c631-c788-4214-b10d-a3520a2aff6c';
    $display->content['new-3247c631-c788-4214-b10d-a3520a2aff6c'] = $pane;
    $display->panels['top'][3] = 'new-3247c631-c788-4214-b10d-a3520a2aff6c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_31'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_32';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Subject Selector Profile',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Collection Development Dept Home',
        'keyword' => 'collection_dev',
        'name' => 'entity:node',
        'entity_id' => '12505',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Collection Dev Staff',
        'keyword' => 'col_dev_staff',
        'name' => 'entity:node',
        'entity_id' => '6557',
        'id' => 2,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/*
',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'subject_specialists' => 'subject_specialists',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_twocol_9_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a44ff88-12c0-4c44-988c-e0eedde91b27';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => 'selector-name',
      'class' => '',
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
    $pane->uuid = '0a44ff88-12c0-4c44-988c-e0eedde91b27';
    $display->content['new-0a44ff88-12c0-4c44-988c-e0eedde91b27'] = $pane;
    $display->panels['left'][0] = 'new-0a44ff88-12c0-4c44-988c-e0eedde91b27';
    $pane = new stdClass();
    $pane->pid = 'new-8deb5419-28e5-41a6-87ae-c0db829122a4';
    $pane->panel = 'left';
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
    $display->panels['left'][1] = 'new-8deb5419-28e5-41a6-87ae-c0db829122a4';
    $pane = new stdClass();
    $pane->pid = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'subject_specialists';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/people',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '60',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
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
    $pane->uuid = 'a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $display->content['new-a3867681-2f6f-4fc7-afda-c33ae3d1062e'] = $pane;
    $display->panels['left'][2] = 'new-a3867681-2f6f-4fc7-afda-c33ae3d1062e';
    $pane = new stdClass();
    $pane->pid = 'new-33999787-0494-49a9-887b-26348570025c';
    $pane->panel = 'right';
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
    $display->panels['right'][0] = 'new-33999787-0494-49a9-887b-26348570025c';
    $pane = new stdClass();
    $pane->pid = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
    $pane->panel = 'right';
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
    $display->panels['right'][1] = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
    $pane = new stdClass();
    $pane->pid = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
    $pane->panel = 'right';
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
    $display->panels['right'][2] = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
    $pane = new stdClass();
    $pane->pid = 'new-93315735-e8e1-4b76-9db5-f95a6e162a2a';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'pul_logo_file',
        'image_link' => '',
      ),
      'context' => 'context_entity:node_1',
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
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_33';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collection Development Specialists Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Collection Dev Homepage ',
        'keyword' => 'colldev_home',
        'name' => 'entity:node',
        'entity_id' => '12505',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/people',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_onecol_12_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Collection Development';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-559f7312-f967-4483-8a3d-7463bee186ce';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][0] = 'new-559f7312-f967-4483-8a3d-7463bee186ce';
    $pane = new stdClass();
    $pane->pid = 'new-795314d9-f44a-49fd-b7d1-03db93f48506';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'colorbox_node_style' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'image_style' => 'pul_logo_file',
        'image_link' => '',
      ),
      'context' => 'context_entity:node_1',
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
  $handler->name = 'term_view_panel_context_10';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Collections Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second collection-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              7 => '7',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Collections',
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_9_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '215caaa8-45ae-4012-8c06-7ad718e5ebda';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_8';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Collection Development Department Taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Collection Development Home Page',
        'keyword' => 'coldev_home',
        'name' => 'entity:node',
        'entity_id' => '12505',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'selector_departments' => 'selector_departments',
              'selector_subject_areas' => 'selector_subject_areas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_twocol_9_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '98479510-2a50-44c0-9a8e-b23404efb73c';
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
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'context_entity:node_1',
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
