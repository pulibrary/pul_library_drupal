<?php

/**
 * @file
 * pul_sub_section_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_sub_section_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -36;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'committee/letc
committee/letc/*',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second individual-committee-landing-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => 'letc-home-page',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff
staff/committees
staff/committees/letc',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff
Committees
Letc
',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Committee Landing Page - LETC',
  );
  $display = new panels_display();
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fc3a851f-574c-42a5-a1f1-a107b54a81eb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_12';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f96d6376-7a37-4cb0-87fb-d0e2bf0a439a';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_committee_introduction';
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
  $pane->uuid = 'f96d6376-7a37-4cb0-87fb-d0e2bf0a439a';
  $display->content['new-f96d6376-7a37-4cb0-87fb-d0e2bf0a439a'] = $pane;
  $display->panels['first'][0] = 'new-f96d6376-7a37-4cb0-87fb-d0e2bf0a439a';
  $pane = new stdClass();
  $pane->pid = 'new-78abdbc2-2440-4d47-8be2-276c23b0bfce';
  $pane->panel = 'first';
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
  $pane->uuid = '78abdbc2-2440-4d47-8be2-276c23b0bfce';
  $display->content['new-78abdbc2-2440-4d47-8be2-276c23b0bfce'] = $pane;
  $display->panels['first'][1] = 'new-78abdbc2-2440-4d47-8be2-276c23b0bfce';
  $pane = new stdClass();
  $pane->pid = 'new-44d80168-dd29-40ec-a741-da09bbb7c5df';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_wterms_member_list';
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
    'override_title' => 0,
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
  $pane->uuid = '44d80168-dd29-40ec-a741-da09bbb7c5df';
  $display->content['new-44d80168-dd29-40ec-a741-da09bbb7c5df'] = $pane;
  $display->panels['first'][2] = 'new-44d80168-dd29-40ec-a741-da09bbb7c5df';
  $pane = new stdClass();
  $pane->pid = 'new-af641978-5439-42e6-a449-3aedac8a1fad';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'af641978-5439-42e6-a449-3aedac8a1fad';
  $display->content['new-af641978-5439-42e6-a449-3aedac8a1fad'] = $pane;
  $display->panels['first'][3] = 'new-af641978-5439-42e6-a449-3aedac8a1fad';
  $pane = new stdClass();
  $pane->pid = 'new-2f82e031-aeb3-4839-b884-dad5ebad5843';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2f82e031-aeb3-4839-b884-dad5ebad5843';
  $display->content['new-2f82e031-aeb3-4839-b884-dad5ebad5843'] = $pane;
  $display->panels['first'][4] = 'new-2f82e031-aeb3-4839-b884-dad5ebad5843';
  $pane = new stdClass();
  $pane->pid = 'new-2509f382-5a5a-449a-9686-c8e9a1602381';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2509f382-5a5a-449a-9686-c8e9a1602381';
  $display->content['new-2509f382-5a5a-449a-9686-c8e9a1602381'] = $pane;
  $display->panels['first'][5] = 'new-2509f382-5a5a-449a-9686-c8e9a1602381';
  $pane = new stdClass();
  $pane->pid = 'new-207076ef-c8aa-4bfa-938f-d998a0deed17';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '207076ef-c8aa-4bfa-938f-d998a0deed17';
  $display->content['new-207076ef-c8aa-4bfa-938f-d998a0deed17'] = $pane;
  $display->panels['first'][6] = 'new-207076ef-c8aa-4bfa-938f-d998a0deed17';
  $pane = new stdClass();
  $pane->pid = 'new-53305f6e-e583-43da-aabc-91e54af4fb45';
  $pane->panel = 'first';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '53305f6e-e583-43da-aabc-91e54af4fb45';
  $display->content['new-53305f6e-e583-43da-aabc-91e54af4fb45'] = $pane;
  $display->panels['first'][7] = 'new-53305f6e-e583-43da-aabc-91e54af4fb45';
  $pane = new stdClass();
  $pane->pid = 'new-7bbc463c-ba87-43d4-a95d-48ed56016543';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_staff_with_terms';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter' => 'field_collection_view',
    'formatter_settings' => array(
      'add' => 'Add',
      'delete' => 'Delete',
      'description' => 1,
      'edit' => 'Edit',
      'view_mode' => 'full',
    ),
    'label' => 'title',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7bbc463c-ba87-43d4-a95d-48ed56016543';
  $display->content['new-7bbc463c-ba87-43d4-a95d-48ed56016543'] = $pane;
  $display->panels['first'][8] = 'new-7bbc463c-ba87-43d4-a95d-48ed56016543';
  $pane = new stdClass();
  $pane->pid = 'new-e2135caa-6fab-4e62-8f97-212f5be38338';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-letc-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'e2135caa-6fab-4e62-8f97-212f5be38338';
  $display->content['new-e2135caa-6fab-4e62-8f97-212f5be38338'] = $pane;
  $display->panels['second'][0] = 'new-e2135caa-6fab-4e62-8f97-212f5be38338';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f96d6376-7a37-4cb0-87fb-d0e2bf0a439a';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -34;
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
              'library_committee' => 'library_committee',
              'library_committee_with_terms' => 'library_committee_with_terms',
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second individual-committee-landing-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 1,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff
staff/committees',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff
Committees',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Committee Landing Page',
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
  $display->uuid = '80cac8e2-951a-4239-aec4-d01ffd77b3ac';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_14';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-89df55cd-df19-4c25-8115-569e8acbeff1';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_committee_introduction';
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
  $pane->uuid = '89df55cd-df19-4c25-8115-569e8acbeff1';
  $display->content['new-89df55cd-df19-4c25-8115-569e8acbeff1'] = $pane;
  $display->panels['first'][0] = 'new-89df55cd-df19-4c25-8115-569e8acbeff1';
  $pane = new stdClass();
  $pane->pid = 'new-e0426a83-c73b-4aff-acdf-d04a4980a9d3';
  $pane->panel = 'first';
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
  $pane->uuid = 'e0426a83-c73b-4aff-acdf-d04a4980a9d3';
  $display->content['new-e0426a83-c73b-4aff-acdf-d04a4980a9d3'] = $pane;
  $display->panels['first'][1] = 'new-e0426a83-c73b-4aff-acdf-d04a4980a9d3';
  $pane = new stdClass();
  $pane->pid = 'new-6a3816bf-739a-4a09-8b82-8b28149dbabd';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_wterms_member_list';
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
    'override_title' => 0,
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
  $pane->uuid = '6a3816bf-739a-4a09-8b82-8b28149dbabd';
  $display->content['new-6a3816bf-739a-4a09-8b82-8b28149dbabd'] = $pane;
  $display->panels['first'][2] = 'new-6a3816bf-739a-4a09-8b82-8b28149dbabd';
  $pane = new stdClass();
  $pane->pid = 'new-ecb60e00-991f-43c0-9548-f4b8485e97b8';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ecb60e00-991f-43c0-9548-f4b8485e97b8';
  $display->content['new-ecb60e00-991f-43c0-9548-f4b8485e97b8'] = $pane;
  $display->panels['first'][3] = 'new-ecb60e00-991f-43c0-9548-f4b8485e97b8';
  $pane = new stdClass();
  $pane->pid = 'new-59011208-60d4-40da-9ae4-38888b7eb49e';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '59011208-60d4-40da-9ae4-38888b7eb49e';
  $display->content['new-59011208-60d4-40da-9ae4-38888b7eb49e'] = $pane;
  $display->panels['first'][4] = 'new-59011208-60d4-40da-9ae4-38888b7eb49e';
  $pane = new stdClass();
  $pane->pid = 'new-32c7385e-aae6-4eee-9d59-7cce74da0d6b';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '32c7385e-aae6-4eee-9d59-7cce74da0d6b';
  $display->content['new-32c7385e-aae6-4eee-9d59-7cce74da0d6b'] = $pane;
  $display->panels['first'][5] = 'new-32c7385e-aae6-4eee-9d59-7cce74da0d6b';
  $pane = new stdClass();
  $pane->pid = 'new-213c9501-77dd-49b5-9b3e-ef3de8403ef9';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_staff_committees-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '213c9501-77dd-49b5-9b3e-ef3de8403ef9';
  $display->content['new-213c9501-77dd-49b5-9b3e-ef3de8403ef9'] = $pane;
  $display->panels['first'][6] = 'new-213c9501-77dd-49b5-9b3e-ef3de8403ef9';
  $pane = new stdClass();
  $pane->pid = 'new-7edaba90-58a3-40cb-838d-bff7ce313004';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '7edaba90-58a3-40cb-838d-bff7ce313004';
  $display->content['new-7edaba90-58a3-40cb-838d-bff7ce313004'] = $pane;
  $display->panels['second'][0] = 'new-7edaba90-58a3-40cb-838d-bff7ce313004';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-89df55cd-df19-4c25-8115-569e8acbeff1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_16';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'staff/hr',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second human-resources',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Human Resources',
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'left' => NULL,
      'left_bottom' => NULL,
      'left_top' => NULL,
      'middle_bottom' => NULL,
      'middle_top' => NULL,
      'right' => NULL,
      'right_top' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Human Resources';
  $display->uuid = '228d12b9-1ad9-406f-9665-f54c6882f4e5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_16';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9abc5179-9bd1-4a48-9993-a17f0264996e';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'body' => '<h2><a href="https://www.princeton.edu/hr">Job Opportunities</a></h2>',
    'format' => 'full_html',
    'substitute' => 1,
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
  $pane->uuid = '9abc5179-9bd1-4a48-9993-a17f0264996e';
  $display->content['new-9abc5179-9bd1-4a48-9993-a17f0264996e'] = $pane;
  $display->panels['first'][0] = 'new-9abc5179-9bd1-4a48-9993-a17f0264996e';
  $pane = new stdClass();
  $pane->pid = 'new-6b0c3e3d-011d-4948-80a3-f151b2cae89d';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hr---policies-and-procedure';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Policies and Procedures',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6b0c3e3d-011d-4948-80a3-f151b2cae89d';
  $display->content['new-6b0c3e3d-011d-4948-80a3-f151b2cae89d'] = $pane;
  $display->panels['first'][1] = 'new-6b0c3e3d-011d-4948-80a3-f151b2cae89d';
  $pane = new stdClass();
  $pane->pid = 'new-87ac5aa8-29dc-4eb8-8de2-99380fbf1d12';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hr---staff-development-and-';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Staff Development and Training',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87ac5aa8-29dc-4eb8-8de2-99380fbf1d12';
  $display->content['new-87ac5aa8-29dc-4eb8-8de2-99380fbf1d12'] = $pane;
  $display->panels['first'][2] = 'new-87ac5aa8-29dc-4eb8-8de2-99380fbf1d12';
  $pane = new stdClass();
  $pane->pid = 'new-fa4f4267-fefc-4c07-ab6f-c8eda47c0623';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'HR Forms',
    'body' => '<h2>HR Forms</h2>',
    'format' => 'full_html',
    'substitute' => 1,
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
  $pane->uuid = 'fa4f4267-fefc-4c07-ab6f-c8eda47c0623';
  $display->content['new-fa4f4267-fefc-4c07-ab6f-c8eda47c0623'] = $pane;
  $display->panels['second'][0] = 'new-fa4f4267-fefc-4c07-ab6f-c8eda47c0623';
  $pane = new stdClass();
  $pane->pid = 'new-6a6f79be-e3d3-4871-9791-e741adc3ea8d';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-human-resources---forms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<h3>For Support Staff:</h3>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a6f79be-e3d3-4871-9791-e741adc3ea8d';
  $display->content['new-6a6f79be-e3d3-4871-9791-e741adc3ea8d'] = $pane;
  $display->panels['second'][1] = 'new-6a6f79be-e3d3-4871-9791-e741adc3ea8d';
  $pane = new stdClass();
  $pane->pid = 'new-365a6888-2833-40bd-94c2-8a924eb0cafd';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hr-forms---professional-tec';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<h3>For Professional/Technical Staff:</h3>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '365a6888-2833-40bd-94c2-8a924eb0cafd';
  $display->content['new-365a6888-2833-40bd-94c2-8a924eb0cafd'] = $pane;
  $display->panels['second'][2] = 'new-365a6888-2833-40bd-94c2-8a924eb0cafd';
  $pane = new stdClass();
  $pane->pid = 'new-036f8a24-893e-44ec-8953-dc172617f160';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hr-forms---dean-of-faculty-';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<h3>For Dean of Faculty Staff:</h3>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '036f8a24-893e-44ec-8953-dc172617f160';
  $display->content['new-036f8a24-893e-44ec-8953-dc172617f160'] = $pane;
  $display->panels['second'][3] = 'new-036f8a24-893e-44ec-8953-dc172617f160';
  $pane = new stdClass();
  $pane->pid = 'new-c476ed5e-8ecc-4660-8c50-a109aab9bbd5';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-hr-forms---other';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<h3>Other Forms:</h3>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c476ed5e-8ecc-4660-8c50-a109aab9bbd5';
  $display->content['new-c476ed5e-8ecc-4660-8c50-a109aab9bbd5'] = $pane;
  $display->panels['second'][4] = 'new-c476ed5e-8ecc-4660-8c50-a109aab9bbd5';
  $pane = new stdClass();
  $pane->pid = 'new-06554a06-43a2-4c9f-b04f-7ff950d4c11e';
  $pane->panel = 'top';
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
  $pane->uuid = '06554a06-43a2-4c9f-b04f-7ff950d4c11e';
  $display->content['new-06554a06-43a2-4c9f-b04f-7ff950d4c11e'] = $pane;
  $display->panels['top'][0] = 'new-06554a06-43a2-4c9f-b04f-7ff950d4c11e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6b0c3e3d-011d-4948-80a3-f151b2cae89d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_16'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_19';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'libraries/firestone/floor-plans',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second firestone-maps',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Firestone Floor Plans',
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
  $display->uuid = '1dd4674f-46e0-4ba2-af13-07d64d4ff6c6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_19';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-93042562-aff9-4f29-af40-45ef84ae36b9';
  $pane->panel = 'first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 0,
    'links' => 1,
    'no_extras' => 1,
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
  $pane->uuid = '93042562-aff9-4f29-af40-45ef84ae36b9';
  $display->content['new-93042562-aff9-4f29-af40-45ef84ae36b9'] = $pane;
  $display->panels['first'][0] = 'new-93042562-aff9-4f29-af40-45ef84ae36b9';
  $pane = new stdClass();
  $pane->pid = 'new-401ac666-8def-479b-824c-9361686808f2';
  $pane->panel = 'second';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 0,
    'links' => 0,
    'nid' => '7517',
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
  $pane->uuid = '401ac666-8def-479b-824c-9361686808f2';
  $display->content['new-401ac666-8def-479b-824c-9361686808f2'] = $pane;
  $display->panels['second'][0] = 'new-401ac666-8def-479b-824c-9361686808f2';
  $pane = new stdClass();
  $pane->pid = 'new-74243b20-35ef-4534-a79f-a5736fc0ab68';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'current_floor_plan_files-panel_pane_1';
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
  $pane->uuid = '74243b20-35ef-4534-a79f-a5736fc0ab68';
  $display->content['new-74243b20-35ef-4534-a79f-a5736fc0ab68'] = $pane;
  $display->panels['second'][1] = 'new-74243b20-35ef-4534-a79f-a5736fc0ab68';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-93042562-aff9-4f29-af40-45ef84ae36b9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_19'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_38';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'help/contact-us',
            'visibility_setting' => '1',
          ),
        ),
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'ask-us',
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
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Contact Us',
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'fifth' => NULL,
      'first' => NULL,
      'fourth' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Ask Us';
  $display->uuid = 'a45ed0f5-324b-4807-be19-798d59f6bf66';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_38';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ec7d10d9-7f2c-495e-9955-33cfc65ddb44';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Email reference turnaround',
    'body' => '<p>We usually respond within 24 hours (M-F).</p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
    'title' => 'Email Us',
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
  $pane->uuid = 'ec7d10d9-7f2c-495e-9955-33cfc65ddb44';
  $display->content['new-ec7d10d9-7f2c-495e-9955-33cfc65ddb44'] = $pane;
  $display->panels['first'][0] = 'new-ec7d10d9-7f2c-495e-9955-33cfc65ddb44';
  $pane = new stdClass();
  $pane->pid = 'new-14544546-0c76-4300-9aec-2d4fe66879fc';
  $pane->panel = 'first';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '14544546-0c76-4300-9aec-2d4fe66879fc';
  $display->content['new-14544546-0c76-4300-9aec-2d4fe66879fc'] = $pane;
  $display->panels['first'][1] = 'new-14544546-0c76-4300-9aec-2d4fe66879fc';
  $pane = new stdClass();
  $pane->pid = 'new-c47aef78-fdae-483f-bc3c-e45fe79ae4d1';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-32';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Chat Live with a Librarian',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c47aef78-fdae-483f-bc3c-e45fe79ae4d1';
  $display->content['new-c47aef78-fdae-483f-bc3c-e45fe79ae4d1'] = $pane;
  $display->panels['second'][0] = 'new-c47aef78-fdae-483f-bc3c-e45fe79ae4d1';
  $pane = new stdClass();
  $pane->pid = 'new-c65450eb-3ff3-417f-aad8-ccf9b7489c71';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ask-us';
  $pane->shown = FALSE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c65450eb-3ff3-417f-aad8-ccf9b7489c71';
  $display->content['new-c65450eb-3ff3-417f-aad8-ccf9b7489c71'] = $pane;
  $display->panels['second'][1] = 'new-c65450eb-3ff3-417f-aad8-ccf9b7489c71';
  $pane = new stdClass();
  $pane->pid = 'new-48b25ef7-d14a-484c-921b-789884da7534';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-30';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Chat Live',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '48b25ef7-d14a-484c-921b-789884da7534';
  $display->content['new-48b25ef7-d14a-484c-921b-789884da7534'] = $pane;
  $display->panels['second'][2] = 'new-48b25ef7-d14a-484c-921b-789884da7534';
  $pane = new stdClass();
  $pane->pid = 'new-ae6322dc-50c2-40d7-beeb-e9b3320e1a98';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-31';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Quick Answers',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ae6322dc-50c2-40d7-beeb-e9b3320e1a98';
  $display->content['new-ae6322dc-50c2-40d7-beeb-e9b3320e1a98'] = $pane;
  $display->panels['second'][3] = 'new-ae6322dc-50c2-40d7-beeb-e9b3320e1a98';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_38'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_39';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/resource-sharing
services/borrowdirect
services/borrowdirect/*
services/interlibrary-services
services/article-express
services/article-express/*
services/interlibrary-services
services/interlibrary-services/lender-fees',
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
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'services',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Services',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Resource Sharing Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '84f30929-d4ab-4235-86f7-66eff0c19ec6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_39';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ff67fb4b-c64b-4e0d-bf86-7ffbaa0c9a0c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-resource-sharing-services';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'ff67fb4b-c64b-4e0d-bf86-7ffbaa0c9a0c';
  $display->content['new-ff67fb4b-c64b-4e0d-bf86-7ffbaa0c9a0c'] = $pane;
  $display->panels['first'][0] = 'new-ff67fb4b-c64b-4e0d-bf86-7ffbaa0c9a0c';
  $pane = new stdClass();
  $pane->pid = 'new-5fa52051-7d21-4008-93ed-c14e35b65fca';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/borrowdirect
services/interlibrary-services/lender-fees',
          'visibility_setting' => '0',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Contact Document Delivery',
    'body' => '<p>ILSBorr@princeton.edu</p><p>609.258.3272</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Contact',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5fa52051-7d21-4008-93ed-c14e35b65fca';
  $display->content['new-5fa52051-7d21-4008-93ed-c14e35b65fca'] = $pane;
  $display->panels['first'][1] = 'new-5fa52051-7d21-4008-93ed-c14e35b65fca';
  $pane = new stdClass();
  $pane->pid = 'new-94479efa-d58a-4f4b-a6f4-d6e4062ddb13';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/borrowdirect',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Borrow Direct Contact Info',
    'body' => '<p>bdirect@princeton.edu</p><p>609.258.7469</p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Contact',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94479efa-d58a-4f4b-a6f4-d6e4062ddb13';
  $display->content['new-94479efa-d58a-4f4b-a6f4-d6e4062ddb13'] = $pane;
  $display->panels['first'][2] = 'new-94479efa-d58a-4f4b-a6f4-d6e4062ddb13';
  $pane = new stdClass();
  $pane->pid = 'new-b0dd3cb3-c163-45c5-8c41-0c2a308b5081';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/interlibrary-services/lender-fees',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'ILL Lender Info',
    'body' => '<p class="p1"><span class="s1"><a href="mailto:ilslend@princeton.edu">ilslend@princeton.edu</a></span></p><p class="p1">609-258-3327</p><p class="p1"><span class="s1">&nbsp;</span></p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Contact Information',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b0dd3cb3-c163-45c5-8c41-0c2a308b5081';
  $display->content['new-b0dd3cb3-c163-45c5-8c41-0c2a308b5081'] = $pane;
  $display->panels['first'][3] = 'new-b0dd3cb3-c163-45c5-8c41-0c2a308b5081';
  $pane = new stdClass();
  $pane->pid = 'new-1948ea29-663a-4677-94b1-f12e397811e4';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'id' => '',
    'link' => 0,
    'markup' => 'h1',
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
  $pane->uuid = '1948ea29-663a-4677-94b1-f12e397811e4';
  $display->content['new-1948ea29-663a-4677-94b1-f12e397811e4'] = $pane;
  $display->panels['middle'][0] = 'new-1948ea29-663a-4677-94b1-f12e397811e4';
  $pane = new stdClass();
  $pane->pid = 'new-1b92c087-f776-458a-aa4d-0e1a2038fdcc';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 0,
    'links' => 0,
    'no_extras' => 1,
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
  $pane->uuid = '1b92c087-f776-458a-aa4d-0e1a2038fdcc';
  $display->content['new-1b92c087-f776-458a-aa4d-0e1a2038fdcc'] = $pane;
  $display->panels['middle'][1] = 'new-1b92c087-f776-458a-aa4d-0e1a2038fdcc';
  $pane = new stdClass();
  $pane->pid = 'new-c453ea2e-61ed-43ea-a078-1c9b0c6361eb';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-20';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/borrowdirect
services/borrowdirect/*
',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Connect ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c453ea2e-61ed-43ea-a078-1c9b0c6361eb';
  $display->content['new-c453ea2e-61ed-43ea-a078-1c9b0c6361eb'] = $pane;
  $display->panels['second'][0] = 'new-c453ea2e-61ed-43ea-a078-1c9b0c6361eb';
  $pane = new stdClass();
  $pane->pid = 'new-6fb8db51-0435-4b87-a6b2-1ebd4cddb956';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-33';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/article*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'ArticleExpress<span class="icon-article-express--small-after"></',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6fb8db51-0435-4b87-a6b2-1ebd4cddb956';
  $display->content['new-6fb8db51-0435-4b87-a6b2-1ebd4cddb956'] = $pane;
  $display->panels['second'][1] = 'new-6fb8db51-0435-4b87-a6b2-1ebd4cddb956';
  $pane = new stdClass();
  $pane->pid = 'new-5b8a8ac6-e26d-48d1-ae74-5a59dce9797f';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-18';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/interlibrary*',
          'visibility_setting' => '1',
        ),
      ),
      1 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => TRUE,
        'settings' => array(
          'paths' => 'services/interlibrary-services/lender-fees',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Login to ILS/Article Express',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5b8a8ac6-e26d-48d1-ae74-5a59dce9797f';
  $display->content['new-5b8a8ac6-e26d-48d1-ae74-5a59dce9797f'] = $pane;
  $display->panels['second'][2] = 'new-5b8a8ac6-e26d-48d1-ae74-5a59dce9797f';
  $pane = new stdClass();
  $pane->pid = 'new-d61876e9-d6de-46dc-a97d-3361ae1af816';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-21';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/interlibrary-services/lender-fees',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd61876e9-d6de-46dc-a97d-3361ae1af816';
  $display->content['new-d61876e9-d6de-46dc-a97d-3361ae1af816'] = $pane;
  $display->panels['second'][3] = 'new-d61876e9-d6de-46dc-a97d-3361ae1af816';
  $pane = new stdClass();
  $pane->pid = 'new-f361fe55-c4b4-4107-baeb-229e63ccb2bd';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-19';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/resource-sharing',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Contact Information',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f361fe55-c4b4-4107-baeb-229e63ccb2bd';
  $display->content['new-f361fe55-c4b4-4107-baeb-229e63ccb2bd'] = $pane;
  $display->panels['second'][4] = 'new-f361fe55-c4b4-4107-baeb-229e63ccb2bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1b92c087-f776-458a-aa4d-0e1a2038fdcc';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_39'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -43;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/pumagic/*',
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
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Map and Geospatial Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Maps and Geospatial Information Center';
  $display->uuid = 'f3b6c856-4a30-4f7a-a54e-c61369e3e5fd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-31784385-9394-4357-b69a-ea0bde9047df';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-map-and-geospatial---main-m';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '31784385-9394-4357-b69a-ea0bde9047df';
  $display->content['new-31784385-9394-4357-b69a-ea0bde9047df'] = $pane;
  $display->panels['first'][0] = 'new-31784385-9394-4357-b69a-ea0bde9047df';
  $pane = new stdClass();
  $pane->pid = 'new-c0d3e414-5fb8-4545-b91b-af64964a1777';
  $pane->panel = 'second';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 0,
    'links' => 1,
    'no_extras' => 1,
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
  $pane->uuid = 'c0d3e414-5fb8-4545-b91b-af64964a1777';
  $display->content['new-c0d3e414-5fb8-4545-b91b-af64964a1777'] = $pane;
  $display->panels['second'][0] = 'new-c0d3e414-5fb8-4545-b91b-af64964a1777';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_40';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/reserves
services/reserves/*
services/privileges
services/privileges/*
services/access
services/access/*',
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
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'services',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Services',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Library Privileges Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '18e728fd-55f3-445e-9726-f9e8c7632600';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_40';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a2444132-eb00-4ed3-a801-b86d209c0ce9';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-privileges';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'a2444132-eb00-4ed3-a801-b86d209c0ce9';
  $display->content['new-a2444132-eb00-4ed3-a801-b86d209c0ce9'] = $pane;
  $display->panels['first'][0] = 'new-a2444132-eb00-4ed3-a801-b86d209c0ce9';
  $pane = new stdClass();
  $pane->pid = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 1,
    'links' => 1,
    'no_extras' => 1,
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
  $pane->uuid = '4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $display->content['new-4034f21f-2466-4a4a-8412-1c6f2882ccff'] = $pane;
  $display->panels['middle'][0] = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $pane = new stdClass();
  $pane->pid = 'new-31d36910-3344-4700-8aab-462c13c37309';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'block-17';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/reserves
services/reserves/*',
          'visibility_setting' => '1',
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Submit Requests',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '31d36910-3344-4700-8aab-462c13c37309';
  $display->content['new-31d36910-3344-4700-8aab-462c13c37309'] = $pane;
  $display->panels['second'][0] = 'new-31d36910-3344-4700-8aab-462c13c37309';
  $pane = new stdClass();
  $pane->pid = 'new-183fce29-5c58-4faf-b242-ece452fb0130';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'empty',
        'name' => 'path_visibility',
        'not' => FALSE,
        'settings' => array(
          'paths' => 'services/reserves
services/reserves/*
',
          'visibility_setting' => '0',
        ),
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->uuid = '183fce29-5c58-4faf-b242-ece452fb0130';
  $display->content['new-183fce29-5c58-4faf-b242-ece452fb0130'] = $pane;
  $display->panels['second'][1] = 'new-183fce29-5c58-4faf-b242-ece452fb0130';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4034f21f-2466-4a4a-8412-1c6f2882ccff';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_40'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_41';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'services/technology/*
services/technology',
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
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Technology Handbook Book Pages',
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '43e07d24-85f4-4e73-8f69-ad643e442322';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_41';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-24063e01-17a2-4638-9ed7-43f9b9f67db9';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-computers-technology';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '24063e01-17a2-4638-9ed7-43f9b9f67db9';
  $display->content['new-24063e01-17a2-4638-9ed7-43f9b9f67db9'] = $pane;
  $display->panels['first'][0] = 'new-24063e01-17a2-4638-9ed7-43f9b9f67db9';
  $pane = new stdClass();
  $pane->pid = 'new-765760b0-8dc1-44b6-8bfd-e5a29f9a4bf5';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'identifier' => '',
    'leave_node_title' => 0,
    'link' => 0,
    'links' => 1,
    'no_extras' => 1,
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
  $pane->uuid = '765760b0-8dc1-44b6-8bfd-e5a29f9a4bf5';
  $display->content['new-765760b0-8dc1-44b6-8bfd-e5a29f9a4bf5'] = $pane;
  $display->panels['middle'][0] = 'new-765760b0-8dc1-44b6-8bfd-e5a29f9a4bf5';
  $pane = new stdClass();
  $pane->pid = 'new-9111215d-d15c-4744-b5e5-7ea95701acba';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '9111215d-d15c-4744-b5e5-7ea95701acba';
  $display->content['new-9111215d-d15c-4744-b5e5-7ea95701acba'] = $pane;
  $display->panels['second'][0] = 'new-9111215d-d15c-4744-b5e5-7ea95701acba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_41'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_42';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'staff/systems_office
staff/systems_office/*',
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
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Systems Office Templates',
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35807daf-972f-44a4-963a-db85aed80e3a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_42';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a2eca9fb-7f27-4734-b285-741e0a5d39e4';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-issues-and-requests';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'a2eca9fb-7f27-4734-b285-741e0a5d39e4';
  $display->content['new-a2eca9fb-7f27-4734-b285-741e0a5d39e4'] = $pane;
  $display->panels['first'][0] = 'new-a2eca9fb-7f27-4734-b285-741e0a5d39e4';
  $pane = new stdClass();
  $pane->pid = 'new-f04bf58c-4617-41d0-b286-d99679c37c88';
  $pane->panel = 'second';
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
  $pane->uuid = 'f04bf58c-4617-41d0-b286-d99679c37c88';
  $display->content['new-f04bf58c-4617-41d0-b286-d99679c37c88'] = $pane;
  $display->panels['second'][0] = 'new-f04bf58c-4617-41d0-b286-d99679c37c88';
  $pane = new stdClass();
  $pane->pid = 'new-56f86fe7-8a7c-48aa-b22b-a526def838ae';
  $pane->panel = 'second';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '56f86fe7-8a7c-48aa-b22b-a526def838ae';
  $display->content['new-56f86fe7-8a7c-48aa-b22b-a526def838ae'] = $pane;
  $display->panels['second'][1] = 'new-56f86fe7-8a7c-48aa-b22b-a526def838ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a2eca9fb-7f27-4734-b285-741e0a5d39e4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_42'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -44;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'collections/pumagic/staff',
            'visibility_setting' => '1',
          ),
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'entity_id' => '5509',
        'id' => 1,
        'identifier' => 'Content',
        'keyword' => 'node_2',
        'name' => 'entity:node',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 0,
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'pipeline' => 'standard',
    'relationships' => array(
      0 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => '0',
        'id' => 1,
        'identifier' => 'Content from Content (on Content: Members [field_workgroup_members])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_workgroup_members-node-node',
      ),
    ),
    'title' => 'Map and Geospatial Staff',
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Map and Geospatial Information Center';
  $display->uuid = '495ba16d-a550-444a-a921-4eb2de964b55';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-af13c319-07bd-4f91-8538-af47188823dd';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-map-and-geospatial---main-m';
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
  $pane->uuid = 'af13c319-07bd-4f91-8538-af47188823dd';
  $display->content['new-af13c319-07bd-4f91-8538-af47188823dd'] = $pane;
  $display->panels['first'][0] = 'new-af13c319-07bd-4f91-8538-af47188823dd';
  $pane = new stdClass();
  $pane->pid = 'new-ac1f533f-0080-4b77-a371-889850e3dcca';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '5509',
    ),
    'override_title' => 1,
    'override_title_text' => 'Staff',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac1f533f-0080-4b77-a371-889850e3dcca';
  $display->content['new-ac1f533f-0080-4b77-a371-889850e3dcca'] = $pane;
  $display->panels['second'][0] = 'new-ac1f533f-0080-4b77-a371-889850e3dcca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -37;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'argument_entity_id:node_1',
          'name' => 'node_type',
          'not' => FALSE,
          'settings' => array(
            'type' => array(
              'work_group' => 'work_group',
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
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(
      0 => array(
        'context' => 'argument_entity_id:node_1',
        'delta' => '0',
        'id' => 1,
        'identifier' => 'Content from Content (on Content: Members [field_workgroup_members])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_workgroup_members-node-node',
      ),
    ),
    'title' => 'Working Group',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f196fa37-e78c-4748-a323-fd282e814358';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4955c6c5-a2fa-446d-8ed6-b74a4bd17a49';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'workgroup-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4955c6c5-a2fa-446d-8ed6-b74a4bd17a49';
  $display->content['new-4955c6c5-a2fa-446d-8ed6-b74a4bd17a49'] = $pane;
  $display->panels['middle'][0] = 'new-4955c6c5-a2fa-446d-8ed6-b74a4bd17a49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}
