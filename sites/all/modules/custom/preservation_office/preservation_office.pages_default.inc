<?php

/**
 * @file
 * preservation_office.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function preservation_office_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__preservation-office';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 27;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'preservation
preservation/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'preservation-office',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Preservation Office',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->storage_id = 'node_view__preservation-office';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a1074aab-b6da-4097-8455-c575d60f5a62';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-preservation-office';
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
  $pane->uuid = 'a1074aab-b6da-4097-8455-c575d60f5a62';
  $display->content['new-a1074aab-b6da-4097-8455-c575d60f5a62'] = $pane;
  $display->panels['first'][0] = 'new-a1074aab-b6da-4097-8455-c575d60f5a62';
  $pane = new stdClass();
  $pane->pid = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $pane->panel = 'second';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $display->content['new-c076ecca-83b9-4466-9ee3-5da77b8e934f'] = $pane;
  $display->panels['second'][0] = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
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
      'image_style' => 'branch_image_branding',
    ),
    'label' => 'hidden',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Preservation Office',
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__preservation-office'] = $handler;

  return $export;
}
