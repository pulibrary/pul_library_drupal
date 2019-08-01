<?php

/**
 * @file
 * research_data_service.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function research_data_service_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__research-data-services';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 42;
  $handler->conf = array(
    'title' => 'Research Data Services',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'firestone-library branch-libraries',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
            'paths' => 'prds',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'research-data-services',
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
  $display->title = 'Princeton Research Data Service';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__research-data-services';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---research-data-ser';
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
  $pane->uuid = '0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $display->content['new-0e09b36a-4943-4207-bf73-e4ed247eea4d'] = $pane;
  $display->panels['first'][0] = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane = new stdClass();
  $pane->pid = 'new-dd004e53-5269-4da1-8232-9649a066cc22';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comin Soon PRDS',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul><li>Featured resources</li><li>Workshops</li><li>Managing Your Data</li><li>Curating Your Data</li><li>Retaining Your Data</li><li>Storing Your Data Repositories</li><li>Related articles</li><li>Helpful links</li></ul>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dd004e53-5269-4da1-8232-9649a066cc22';
  $display->content['new-dd004e53-5269-4da1-8232-9649a066cc22'] = $pane;
  $display->panels['first'][1] = 'new-dd004e53-5269-4da1-8232-9649a066cc22';
  $pane = new stdClass();
  $pane->pid = 'new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Contact',
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
  $pane->uuid = '8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $display->content['new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba'] = $pane;
  $display->panels['first'][2] = 'new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $pane = new stdClass();
  $pane->pid = 'new-bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $display->content['new-bde42932-4c55-4c02-8a1b-31cb7a62db06'] = $pane;
  $display->panels['first'][3] = 'new-bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-af94629b-1fa5-4b38-940f-13b8febdbd97';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'PRDS - Director Pullquote',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><img src="https://library.princeton.edu/sites/default/files/hwcowles.jpg" alt="Portrait of Wind Cowles" style="max-height: 220px;"></p><p>Wind Cowles, PhD<br>Director, Princeton Research Data Service</p><blockquote style="font-size: 1.5em; font-weight: 500; margin: 0;">“As a former university researcher, I know all too well how many claims there are on people’s time and one of my main goals is to make sure that we make the process of data management as painless as possible.”</blockquote><p><a href="https://library.princeton.edu/news/general/2019-05-01/qa-wind-cowles-director-princeton-research-data-service">Q&amp;A with Wind Cowles</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af94629b-1fa5-4b38-940f-13b8febdbd97';
  $display->content['new-af94629b-1fa5-4b38-940f-13b8febdbd97'] = $pane;
  $display->panels['second'][0] = 'new-af94629b-1fa5-4b38-940f-13b8febdbd97';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Princeton Research Data Service',
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
  $pane->uuid = '1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->content['new-1bbb162e-5063-43cd-8dbf-37576edfd980'] = $pane;
  $display->panels['top'][0] = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__research-data-services'] = $handler;

  return $export;
}
