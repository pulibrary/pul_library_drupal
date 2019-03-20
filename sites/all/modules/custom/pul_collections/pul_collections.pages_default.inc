<?php

/**
 * @file
 * pul_collections.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_collections_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_22';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Collections Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar second-sidebar collections',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User Details',
        'keyword' => 'user_details',
        'name' => 'entity_from_field:field_col_contact-node-node',
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
              'collection' => 'collection',
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
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4b9e7c71-db48-45d4-a90d-ed1070244517';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_22';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3c16eb1f-a904-43d8-84c0-3843ff8771fc';
  $pane->panel = 'first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '3c16eb1f-a904-43d8-84c0-3843ff8771fc';
  $display->content['new-3c16eb1f-a904-43d8-84c0-3843ff8771fc'] = $pane;
  $display->panels['first'][0] = 'new-3c16eb1f-a904-43d8-84c0-3843ff8771fc';
  $pane = new stdClass();
  $pane->pid = 'new-d20480b3-04ad-4d82-91e7-08676c5a8d1c';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'collections-panel_pane_2';
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
  $pane->uuid = 'd20480b3-04ad-4d82-91e7-08676c5a8d1c';
  $display->content['new-d20480b3-04ad-4d82-91e7-08676c5a8d1c'] = $pane;
  $display->panels['second'][0] = 'new-d20480b3-04ad-4d82-91e7-08676c5a8d1c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Collections Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second collections-home-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/collections',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections',
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c634c1fa-1b93-4a27-b422-784694f10549';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e3e1ea5e-c477-48ea-b8f3-dc429154e0dd';
  $pane->panel = 'first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3e1ea5e-c477-48ea-b8f3-dc429154e0dd';
  $display->content['new-e3e1ea5e-c477-48ea-b8f3-dc429154e0dd'] = $pane;
  $display->panels['first'][0] = 'new-e3e1ea5e-c477-48ea-b8f3-dc429154e0dd';
  $pane = new stdClass();
  $pane->pid = 'new-360eeb91-4170-405f-a50e-ce6d061eb2e3';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Contacts',
    'title' => 'Contact Collection Development',
    'body' => '<p>Collection Development Department<br />B-18-M Firestone Library<br />One Washington Road<br />Princeton University<br />Princeton, NJ 08544<br />T: 609-258-6668<br />F: 609-258-6950</p>',
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
  $pane->uuid = '360eeb91-4170-405f-a50e-ce6d061eb2e3';
  $display->content['new-360eeb91-4170-405f-a50e-ce6d061eb2e3'] = $pane;
  $display->panels['second'][0] = 'new-360eeb91-4170-405f-a50e-ce6d061eb2e3';
  $pane = new stdClass();
  $pane->pid = 'new-8340a921-36e3-4085-8142-243fa8a8efe3';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '6557',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8340a921-36e3-4085-8142-243fa8a8efe3';
  $display->content['new-8340a921-36e3-4085-8142-243fa8a8efe3'] = $pane;
  $display->panels['second'][1] = 'new-8340a921-36e3-4085-8142-243fa8a8efe3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function pul_collections_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'collections';
  $page->task = 'page';
  $page->admin_title = 'Collections';
  $page->admin_description = '';
  $page->path = 'collections';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_collections_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'collections';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Collections Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second page-collections',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collections';
  $display->uuid = '9e6f270b-b188-4f37-9a76-1b42287a7398';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_collections_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d0444490-3b38-489d-8410-4387a52714b8';
  $pane->panel = 'first';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '5493',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
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
  $pane->uuid = 'd0444490-3b38-489d-8410-4387a52714b8';
  $display->content['new-d0444490-3b38-489d-8410-4387a52714b8'] = $pane;
  $display->panels['first'][0] = 'new-d0444490-3b38-489d-8410-4387a52714b8';
  $pane = new stdClass();
  $pane->pid = 'new-8578843b-27f2-4922-8a7f-9eebda0aea10';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'collections-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8578843b-27f2-4922-8a7f-9eebda0aea10';
  $display->content['new-8578843b-27f2-4922-8a7f-9eebda0aea10'] = $pane;
  $display->panels['first'][1] = 'new-8578843b-27f2-4922-8a7f-9eebda0aea10';
  $pane = new stdClass();
  $pane->pid = 'new-a65c1d87-153a-45cb-ac80-f8731cb0ec57';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_3';
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
  $pane->uuid = 'a65c1d87-153a-45cb-ac80-f8731cb0ec57';
  $display->content['new-a65c1d87-153a-45cb-ac80-f8731cb0ec57'] = $pane;
  $display->panels['second'][0] = 'new-a65c1d87-153a-45cb-ac80-f8731cb0ec57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collections'] = $page;

  return $pages;

}
