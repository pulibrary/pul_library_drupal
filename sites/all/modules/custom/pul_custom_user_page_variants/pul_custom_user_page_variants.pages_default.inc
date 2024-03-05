<?php

/**
 * @file
 * pul_custom_user_page_variants.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_custom_user_page_variants_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__standard_user';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 2;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:user_1',
          'name' => 'role',
          'not' => TRUE,
          'settings' => array(
            'rids' => array(
              0 => 5,
              1 => 6,
            ),
          ),
        ),
        1 => array(
          'context' => 'logged-in-user',
          'name' => 'context_exists',
          'not' => FALSE,
          'settings' => array(
            'exists' => '1',
          ),
        ),
      ),
    ),
    'code' => '404',
    'contexts' => array(),
    'destination' => '',
    'name' => 'standard_user',
    'relationships' => array(),
    'title' => 'Standard User',
  );
  $export['user_view__standard_user'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:user_1',
          'name' => 'entity_field_value:user:user:field_puluser_sublibrarian',
          'not' => FALSE,
          'settings' => array(
            'field_puluser_sublibrarian' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_puluser_sublibrarian_value' => '1',
          ),
        ),
        1 => array(
          'context' => 'argument_entity_id:user_1',
          'name' => 'role',
          'not' => FALSE,
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second subject-librarian-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff/specialists',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Subject Specialists',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Subject Librarian Page',
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
  $display->title = '%user:field_puluser_fname %user:field_puluser_lname';
  $display->uuid = 'b77daaab-bf6f-4968-8a9b-dcfac6c6ea24';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c9cab25c-4f50-4d4a-bb6b-bde8ca9c51de';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
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
  $pane->uuid = 'c9cab25c-4f50-4d4a-bb6b-bde8ca9c51de';
  $display->content['new-c9cab25c-4f50-4d4a-bb6b-bde8ca9c51de'] = $pane;
  $display->panels['first'][0] = 'new-c9cab25c-4f50-4d4a-bb6b-bde8ca9c51de';
  $pane = new stdClass();
  $pane->pid = 'new-b0384442-7087-47f4-928e-2affe25d0ff4';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Profile',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b0384442-7087-47f4-928e-2affe25d0ff4';
  $display->content['new-b0384442-7087-47f4-928e-2affe25d0ff4'] = $pane;
  $display->panels['first'][1] = 'new-b0384442-7087-47f4-928e-2affe25d0ff4';
  $pane = new stdClass();
  $pane->pid = 'new-c49b02d8-3dcd-49ce-a97d-8aab0379a5d5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c49b02d8-3dcd-49ce-a97d-8aab0379a5d5';
  $display->content['new-c49b02d8-3dcd-49ce-a97d-8aab0379a5d5'] = $pane;
  $display->panels['first'][2] = 'new-c49b02d8-3dcd-49ce-a97d-8aab0379a5d5';
  $pane = new stdClass();
  $pane->pid = 'new-f1b65798-1d29-46aa-b9b2-3f4bb6294707';
  $pane->panel = 'first';
  $pane->type = 'user_contact';
  $pane->subtype = 'user_contact';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'argument_entity_id:user_1',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 28,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:user_1',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = 'f1b65798-1d29-46aa-b9b2-3f4bb6294707';
  $display->content['new-f1b65798-1d29-46aa-b9b2-3f4bb6294707'] = $pane;
  $display->panels['first'][3] = 'new-f1b65798-1d29-46aa-b9b2-3f4bb6294707';
  $pane = new stdClass();
  $pane->pid = 'new-c1ab58cc-5aa6-4328-8192-c1fc14f87975';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'specialist_finder-subject_librarian_database_subjects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => '%title',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1ab58cc-5aa6-4328-8192-c1fc14f87975';
  $display->content['new-c1ab58cc-5aa6-4328-8192-c1fc14f87975'] = $pane;
  $display->panels['second'][0] = 'new-c1ab58cc-5aa6-4328-8192-c1fc14f87975';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'context' => 'argument_entity_id:user_1',
          'name' => 'role',
          'not' => FALSE,
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
        ),
        1 => array(
          'context' => 'argument_entity_id:user_1',
          'name' => 'entity_field_value:user:user:field_puluser_sublibrarian',
          'not' => FALSE,
          'settings' => array(
            'field_puluser_sublibrarian' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_puluser_sublibrarian_value' => array(
              0 => 1,
            ),
          ),
        ),
      ),
    ),
    'body_classes_to_add' => 'one-sidebar sidebar-second staff-member-page',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'panels_breadcrumbs_home' => 1,
    'panels_breadcrumbs_paths' => 'staff/directory',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff',
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Staff Member Page',
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
  $display->title = '%user:field_puluser_fname %user:field_puluser_lname';
  $display->uuid = '5417b150-b4f8-4688-a71e-09254f596b22';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-90274efb-afb5-4167-bf52-903fed2ad1d5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
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
  $pane->uuid = '90274efb-afb5-4167-bf52-903fed2ad1d5';
  $display->content['new-90274efb-afb5-4167-bf52-903fed2ad1d5'] = $pane;
  $display->panels['first'][0] = 'new-90274efb-afb5-4167-bf52-903fed2ad1d5';
  $pane = new stdClass();
  $pane->pid = 'new-77fcb19a-3943-48ba-a006-509b28cf7011';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '77fcb19a-3943-48ba-a006-509b28cf7011';
  $display->content['new-77fcb19a-3943-48ba-a006-509b28cf7011'] = $pane;
  $display->panels['first'][1] = 'new-77fcb19a-3943-48ba-a006-509b28cf7011';
  $pane = new stdClass();
  $pane->pid = 'new-41b8b990-51b0-4701-a477-5784db12973a';
  $pane->panel = 'first';
  $pane->type = 'user_contact';
  $pane->subtype = 'user_contact';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'argument_entity_id:user_1',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 28,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'argument_entity_id:user_1',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Contact %user:field-puluser-nick-name',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'contact',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '41b8b990-51b0-4701-a477-5784db12973a';
  $display->content['new-41b8b990-51b0-4701-a477-5784db12973a'] = $pane;
  $display->panels['first'][2] = 'new-41b8b990-51b0-4701-a477-5784db12973a';
  $pane = new stdClass();
  $pane->pid = 'new-f6c516c3-dec4-44bb-8b71-6f0265cf7532';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'specialist_finder-subject_librarian_database_subjects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Subjects',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f6c516c3-dec4-44bb-8b71-6f0265cf7532';
  $display->content['new-f6c516c3-dec4-44bb-8b71-6f0265cf7532'] = $pane;
  $display->panels['second'][0] = 'new-f6c516c3-dec4-44bb-8b71-6f0265cf7532';
  $pane = new stdClass();
  $pane->pid = 'new-b359e695-40bd-4b24-bb12-d1c0e1465e69';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help-menu';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b359e695-40bd-4b24-bb12-d1c0e1465e69';
  $display->content['new-b359e695-40bd-4b24-bb12-d1c0e1465e69'] = $pane;
  $display->panels['second'][1] = 'new-b359e695-40bd-4b24-bb12-d1c0e1465e69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}
