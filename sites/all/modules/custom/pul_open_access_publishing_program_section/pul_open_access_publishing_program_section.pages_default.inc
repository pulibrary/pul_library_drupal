<?php

/**
 * @file
 * pul_open_access_publishing_program_section.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_open_access_publishing_program_section_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__the-pul-open-access-publishing-program';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 39;
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
            'paths' => 'services/open-access-publishing-program',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'firestone-library branch-libraries section-services',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'the-pul-open-access-publishing-program',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'The PUL Open Access Publishing Program',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
  $display->title = 'The PUL Open Access Publishing Program';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__the-pul-open-access-publishing-program';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ee86201c-11f9-4b67-b485-fb92e64b1d7e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---open-access-publi';
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
  $pane->uuid = 'ee86201c-11f9-4b67-b485-fb92e64b1d7e';
  $display->content['new-ee86201c-11f9-4b67-b485-fb92e64b1d7e'] = $pane;
  $display->panels['first'][0] = 'new-ee86201c-11f9-4b67-b485-fb92e64b1d7e';
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
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-d363e170-3948-41dd-b100-afef392b9a52';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '44096',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'POAPP Projects',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd363e170-3948-41dd-b100-afef392b9a52';
  $display->content['new-d363e170-3948-41dd-b100-afef392b9a52'] = $pane;
  $display->panels['second'][0] = 'new-d363e170-3948-41dd-b100-afef392b9a52';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '44096',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'The PUL Open Access Publishing Program',
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
  $export['node_view__the-pul-open-access-publishing-program'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__the-pul-open-access-publishing-program-subpages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 40;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/open-access-publishing-program/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'firestone-library branch-libraries section-services',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'name' => 'the-pul-open-access-publishing-program-subpages',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'The PUL Open Access Publishing Program - Subpages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
  $display->title = 'The PUL Open Access Publishing Program';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__the-pul-open-access-publishing-program-subpages';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-72586f49-1c25-408d-bb22-59c23f855092';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---open-access-publi';
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
  $pane->uuid = '72586f49-1c25-408d-bb22-59c23f855092';
  $display->content['new-72586f49-1c25-408d-bb22-59c23f855092'] = $pane;
  $display->panels['first'][0] = 'new-72586f49-1c25-408d-bb22-59c23f855092';
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
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-d3380b45-8cab-4a65-9562-d9ed512c7259';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
      1 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/open-access-publishing-program/journal-proposal-form',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<p>The PUL OA Publishing Program is available to Princeton faculty, researchers, students and staff.</p><p>To submit an OA journal proposal, please login.</p>',
    'format' => 'pul_editor_html',
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
  $pane->uuid = 'd3380b45-8cab-4a65-9562-d9ed512c7259';
  $display->content['new-d3380b45-8cab-4a65-9562-d9ed512c7259'] = $pane;
  $display->panels['middle'][1] = 'new-d3380b45-8cab-4a65-9562-d9ed512c7259';
  $pane = new stdClass();
  $pane->pid = 'new-34df807d-ce9e-48e5-b6ba-4c8b42cc95f4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
      ),
      1 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/open-access-publishing-program/journal-proposal-form',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '34df807d-ce9e-48e5-b6ba-4c8b42cc95f4';
  $display->content['new-34df807d-ce9e-48e5-b6ba-4c8b42cc95f4'] = $pane;
  $display->panels['middle'][2] = 'new-34df807d-ce9e-48e5-b6ba-4c8b42cc95f4';
  $pane = new stdClass();
  $pane->pid = 'new-66a70b7b-4256-4e5e-b536-50638cad7613';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '66a70b7b-4256-4e5e-b536-50638cad7613';
  $display->content['new-66a70b7b-4256-4e5e-b536-50638cad7613'] = $pane;
  $display->panels['middle'][3] = 'new-66a70b7b-4256-4e5e-b536-50638cad7613';
  $pane = new stdClass();
  $pane->pid = 'new-afc8ffed-c0bc-4b24-b4f7-165b3e8172d3';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_features-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '44096',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'POAPP Projects',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'afc8ffed-c0bc-4b24-b4f7-165b3e8172d3';
  $display->content['new-afc8ffed-c0bc-4b24-b4f7-165b3e8172d3'] = $pane;
  $display->panels['second'][0] = 'new-afc8ffed-c0bc-4b24-b4f7-165b3e8172d3';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '44096',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'The PUL Open Access Publishing Program',
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
  $export['node_view__the-pul-open-access-publishing-program-subpages'] = $handler;

  return $export;
}
