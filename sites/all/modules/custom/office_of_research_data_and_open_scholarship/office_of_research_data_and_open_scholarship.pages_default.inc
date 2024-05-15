<?php

/**
 * @file
 * office_of_research_data_and_open_scholarship.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function office_of_research_data_and_open_scholarship_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__office-of-research-data-and-open-scholarship';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 41;
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
            'paths' => 'rdos',
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
    'name' => 'office-of-research-data-and-open-scholarship',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Office of Research Data and Open Scholarship',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
  $display->title = 'Office of Research Data and Open Scholarship';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__office-of-research-data-and-open-scholarship';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-97b5a645-7b85-4162-a947-c6bc641992ce';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-office-of-research-data-and';
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
  $pane->uuid = '97b5a645-7b85-4162-a947-c6bc641992ce';
  $display->content['new-97b5a645-7b85-4162-a947-c6bc641992ce'] = $pane;
  $display->panels['first'][0] = 'new-97b5a645-7b85-4162-a947-c6bc641992ce';
  $pane = new stdClass();
  $pane->pid = 'new-45b1222f-ecec-4075-af38-9323c23f356f';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Consultation RDOS',
    'body' => '<script type="text/javascript">// <![CDATA[
jQuery.getScript("https://api3.libcal.com/js/myscheduler.min.js", function() {
    jQuery("#mysched_0").LibCalMySched({iid: 771, lid: 387, gid: 8429, uid: 0, width: 560, height: 680, title: \'Make an Appointment - \', domain: \'https://api3.libcal.com\'});
});
// ]]></script><button id="mysched_0">Make a consultation appointment</button>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '45b1222f-ecec-4075-af38-9323c23f356f';
  $display->content['new-45b1222f-ecec-4075-af38-9323c23f356f'] = $pane;
  $display->panels['first'][1] = 'new-45b1222f-ecec-4075-af38-9323c23f356f';
  $pane = new stdClass();
  $pane->pid = 'new-7251adb8-64a4-418b-974d-6d891a70f394';
  $pane->panel = 'second';
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
  $pane->uuid = '7251adb8-64a4-418b-974d-6d891a70f394';
  $display->content['new-7251adb8-64a4-418b-974d-6d891a70f394'] = $pane;
  $display->panels['second'][0] = 'new-7251adb8-64a4-418b-974d-6d891a70f394';
  $pane = new stdClass();
  $pane->pid = 'new-08acf324-b334-4cf3-93f9-04e38b1e19a4';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '08acf324-b334-4cf3-93f9-04e38b1e19a4';
  $display->content['new-08acf324-b334-4cf3-93f9-04e38b1e19a4'] = $pane;
  $display->panels['second'][1] = 'new-08acf324-b334-4cf3-93f9-04e38b1e19a4';
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
    'override_title_text' => 'Architecture Library',
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
  $export['node_view__office-of-research-data-and-open-scholarship'] = $handler;

  return $export;
}
