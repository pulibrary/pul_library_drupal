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
            'paths' => 'collections-and-collection-development',
            'visibility_setting' => '1',
          ),
        ),
        2 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'pul_landing_page' => 'pul_landing_page',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Collection Development Landing Page',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'naked',
    'style_settings' => array(
      'bottom' => NULL,
      'branding' => NULL,
      'content' => NULL,
      'default' => NULL,
      'first' => NULL,
      'footer' => NULL,
      'header' => NULL,
      'help' => NULL,
      'highlighted' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'navigation' => NULL,
      'right' => NULL,
      'second' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_30';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41d81be0-3174-4294-bdc2-185194b5652a';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '',
    'format' => 'full_html',
    'name' => 'cdl_new_acq_spotlight',
    'substitute' => TRUE,
    'title' => '',
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
  $display->panels['first'][0] = 'new-41d81be0-3174-4294-bdc2-185194b5652a';
  $pane = new stdClass();
  $pane->pid = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
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
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_spotlights_by_category-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '3779',
    ),
    'more_link' => 1,
    'override_title' => 1,
    'override_title_text' => 'News and Events',
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
  $display->panels['second'][0] = 'new-a977c0e3-d6cc-458b-9876-b1829eb2a3da';
  $pane = new stdClass();
  $pane->pid = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_spotlights_by_category-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
    'override_title' => 1,
    'override_title_text' => 'Library Exhibitions',
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
  $display->panels['second'][1] = 'new-205996bb-27dd-4446-9d2b-5299fbbe4d7d';
  $pane = new stdClass();
  $pane->pid = 'new-5d223fff-4316-4331-8440-b15d74d84da4';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pul_landing_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
    'label' => 'hidden',
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
  $pane->uuid = '5d223fff-4316-4331-8440-b15d74d84da4';
  $display->content['new-5d223fff-4316-4331-8440-b15d74d84da4'] = $pane;
  $display->panels['top'][0] = 'new-5d223fff-4316-4331-8440-b15d74d84da4';
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
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'cdl-menu',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '14eaf0cf-2012-4cdc-b734-115ad9518642';
  $display->content['new-14eaf0cf-2012-4cdc-b734-115ad9518642'] = $pane;
  $display->panels['top'][1] = 'new-14eaf0cf-2012-4cdc-b734-115ad9518642';
  $pane = new stdClass();
  $pane->pid = 'new-85f01076-3188-439b-9c48-d32f147381b4';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'spotlight_graphics-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => '5061',
    ),
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
  $pane->uuid = '85f01076-3188-439b-9c48-d32f147381b4';
  $display->content['new-85f01076-3188-439b-9c48-d32f147381b4'] = $pane;
  $display->panels['top'][2] = 'new-85f01076-3188-439b-9c48-d32f147381b4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-85f01076-3188-439b-9c48-d32f147381b4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_30'] = $handler;

  return $export;
}
