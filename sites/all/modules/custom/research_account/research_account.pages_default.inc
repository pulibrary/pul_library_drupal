<?php

/**
 * @file
 * research_account.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function research_account_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__research-account';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 24;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/research-account
services/research-account/*',
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
    'name' => 'research-account',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Research Account',
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
  $display->title = 'Special Collections Research Account';
  $display->uuid = '4991b3f8-f0d6-443f-8126-703c8368e731';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__research-account';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1ff92944-a994-4674-8773-f051e1ae2328';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-research-account';
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
  $pane->uuid = '1ff92944-a994-4674-8773-f051e1ae2328';
  $display->content['new-1ff92944-a994-4674-8773-f051e1ae2328'] = $pane;
  $display->panels['first'][0] = 'new-1ff92944-a994-4674-8773-f051e1ae2328';
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
  $display->panels['middle'][0] = 'new-c076ecca-83b9-4466-9ee3-5da77b8e934f';
  $pane = new stdClass();
  $pane->pid = 'new-699cfb0b-2f61-4efd-ae35-4574a4f6c402';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Aeon Login',
    'body' => '<h2>Account Login</h2><form action="https://library.princeton.edu/aeon/aeon.dll" method="post" name="LogonPU"><input type="hidden" name="AeonForm" value="Logon"><div id="logonform"><label for="username"> <span class="field"> <span class="bold">Princeton NetID</span> </span> <input id="username" class="f-name" tabindex="0" type="text" name="Username"> </label> <label for="password"> <span class="field"> <span class="bold">Password</span> </span> <input id="password" class="f-name" tabindex="0" type="password" name="Password"></label><input tabindex="0" type="submit" name="SubmitButton" value="Logon to Aeon"></div></form><h3 class="login_field" style="margin-top: 1em;">First-Time User?</h3><div class="login_field"><ul><li>Princeton NetID Holders sign in with your ID and Password in the form above</li><li>Non Princeton Patrons: <a href="https://library.princeton.edu/aeon/aeon.dll?Action=10&amp;Form=79">Register</a></li></ul></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'links--decorate',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '699cfb0b-2f61-4efd-ae35-4574a4f6c402';
  $display->content['new-699cfb0b-2f61-4efd-ae35-4574a4f6c402'] = $pane;
  $display->panels['second'][0] = 'new-699cfb0b-2f61-4efd-ae35-4574a4f6c402';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__research-account'] = $handler;

  return $export;
}
