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
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collection Development Department Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
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
              'subject_specialists' => 'subject_specialists',
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
  $display->layout = 'omega_12_twocol_9_3';
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
    $pane->pid = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
    $pane->panel = 'left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
    $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
    $display->panels['left'][0] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
    $pane = new stdClass();
    $pane->pid = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $display->content['new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed'] = $pane;
    $display->panels['left'][1] = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane = new stdClass();
    $pane->pid = 'new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
    $display->content['new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1'] = $pane;
    $display->panels['left'][2] = 'new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a49bdc51-7b20-4b4b-994c-92974182fce1';
    $display->content['new-a49bdc51-7b20-4b4b-994c-92974182fce1'] = $pane;
    $display->panels['left'][3] = 'new-a49bdc51-7b20-4b4b-994c-92974182fce1';
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
  $display->hide_title = PANELS_TITLE_FIXED;
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
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/acquisitions
',
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
  $display->layout = 'omega_12_twocol_9_3';
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
    $pane->pid = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
    $pane->panel = 'left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
    $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
    $display->panels['left'][0] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
    $pane = new stdClass();
    $pane->pid = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $display->content['new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed'] = $pane;
    $display->panels['left'][1] = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane = new stdClass();
    $pane->pid = 'new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
    $display->content['new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1'] = $pane;
    $display->panels['left'][2] = 'new-487a02b9-f0d6-4f8a-867d-81c9887cc2d1';
    $pane = new stdClass();
    $pane->pid = 'new-3247c631-c788-4214-b10d-a3520a2aff6c';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'acquisitions_highlights';
    $pane->shown = TRUE;
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
    $display->panels['left'][3] = 'new-3247c631-c788-4214-b10d-a3520a2aff6c';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_31'] = $handler;

  return $export;
}
