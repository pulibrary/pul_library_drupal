<?php
/**
 * @file
 * cdl_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cdl_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_30';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Collection Development Landing Page',
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
            'paths' => 'collections-and-collection-development',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'pul_landing_page' => 'pul_landing_page',
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
  $display->layout = 'pul_development_theme_12_threecol_3_6_3_stacked';
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
  $display->title = '%node:title';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41d81be0-3174-4294-bdc2-185194b5652a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'cdl_new_acq_spotlight',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41d81be0-3174-4294-bdc2-185194b5652a';
    $display->content['new-41d81be0-3174-4294-bdc2-185194b5652a'] = $pane;
    $display->panels['left'][0] = 'new-41d81be0-3174-4294-bdc2-185194b5652a';
    $pane = new stdClass();
    $pane->pid = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
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
      'override_title_text' => 'Collecting for Princeton',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c076ecca-83b9-4466-9ee3-5da77b8e934f';
    $display->content['new-c076ecca-83b9-4466-9ee3-5da77b8e934f'] = $pane;
    $display->panels['middle'][0] = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
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
    $pane->pid = 'new-6520f680-ac1a-490d-9222-d7597b4f3d27';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-1';
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
    $pane->uuid = '6520f680-ac1a-490d-9222-d7597b4f3d27';
    $display->content['new-6520f680-ac1a-490d-9222-d7597b4f3d27'] = $pane;
    $display->panels['top'][0] = 'new-6520f680-ac1a-490d-9222-d7597b4f3d27';
    $pane = new stdClass();
    $pane->pid = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pul_landing_page_title';
    $pane->shown = TRUE;
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
    $display->panels['top'][1] = 'new-1e5b12c3-e5de-4d7e-ba73-e688eaeb79ed';
    $pane = new stdClass();
    $pane->pid = 'new-85f01076-3188-439b-9c48-d32f147381b4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotlight_graphics-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '5031',
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
    $pane->uuid = '85f01076-3188-439b-9c48-d32f147381b4';
    $display->content['new-85f01076-3188-439b-9c48-d32f147381b4'] = $pane;
    $display->panels['top'][2] = 'new-85f01076-3188-439b-9c48-d32f147381b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85f01076-3188-439b-9c48-d32f147381b4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_30'] = $handler;

  return $export;
}
