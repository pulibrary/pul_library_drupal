<?php

/**
 * @file
 * staff_sms_alerts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function staff_sms_alerts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_sms_sign_up';
  $page->task = 'page';
  $page->admin_title = 'Staff SMS Sign Up';
  $page->admin_description = '';
  $page->path = 'staff/sms-alerts';
  $page->access = array(
    'logic' => 'and',
    'settings' => NULL,
    'type' => 'none',
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
  $handler->name = 'page_staff_sms_sign_up__panel';
  $handler->task = 'page';
  $handler->subtask = 'staff_sms_sign_up';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '44118',
        'id' => 1,
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Panel',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sign-Up for SMS Alerts (Staff Only)';
  $display->uuid = 'a709edc6-d271-47f8-9e36-b13063412217';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_sms_sign_up__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4e392a37-6ea9-4e16-b92b-6847e76fe0e7';
  $pane->panel = 'first';
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
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Sign-Up for SMS Alerts (Staff Only)',
    'body' => '<p>Please <a href="/user">log in</a> to view this form.</p>',
    'format' => 'pul_editor_html',
    'name' => 'login_site',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4e392a37-6ea9-4e16-b92b-6847e76fe0e7';
  $display->content['new-4e392a37-6ea9-4e16-b92b-6847e76fe0e7'] = $pane;
  $display->panels['first'][0] = 'new-4e392a37-6ea9-4e16-b92b-6847e76fe0e7';
  $pane = new stdClass();
  $pane->pid = 'new-88f7058b-ceac-4cc0-83b6-cfd3a020a19d';
  $pane->panel = 'first';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '88f7058b-ceac-4cc0-83b6-cfd3a020a19d';
  $display->content['new-88f7058b-ceac-4cc0-83b6-cfd3a020a19d'] = $pane;
  $display->panels['first'][1] = 'new-88f7058b-ceac-4cc0-83b6-cfd3a020a19d';
  $pane = new stdClass();
  $pane->pid = 'new-d0355f5e-8de6-4107-9988-3a18f86cd186';
  $pane->panel = 'first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'logged-in-user',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
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
  $pane->uuid = 'd0355f5e-8de6-4107-9988-3a18f86cd186';
  $display->content['new-d0355f5e-8de6-4107-9988-3a18f86cd186'] = $pane;
  $display->panels['first'][2] = 'new-d0355f5e-8de6-4107-9988-3a18f86cd186';
  $pane = new stdClass();
  $pane->pid = 'new-54788d27-c356-46cf-b414-13ad6592846d';
  $pane->panel = 'first';
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
            0 => 5,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
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
  $pane->uuid = '54788d27-c356-46cf-b414-13ad6592846d';
  $display->content['new-54788d27-c356-46cf-b414-13ad6592846d'] = $pane;
  $display->panels['first'][3] = 'new-54788d27-c356-46cf-b414-13ad6592846d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_sms_sign_up'] = $page;

  return $pages;

}
