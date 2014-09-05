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
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Subject Librarian Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second subject-librarian-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:user:user:field_puluser_sublibrarian',
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
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Subject Specialists',
    'panels_breadcrumbs_paths' => 'staff/specialists',
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
  $display->title = '%user:field_puluser_fname %user:field_puluser_lname';
  $display->uuid = 'b77daaab-bf6f-4968-8a9b-dcfac6c6ea24';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c49b02d8-3dcd-49ce-a97d-8aab0379a5d5';
    $display->content['new-c49b02d8-3dcd-49ce-a97d-8aab0379a5d5'] = $pane;
    $display->panels['first'][1] = 'new-c49b02d8-3dcd-49ce-a97d-8aab0379a5d5';
    $pane = new stdClass();
    $pane->pid = 'new-c1ab58cc-5aa6-4328-8192-c1fc14f87975';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'specialist_finder-subject_librarian_database_subjects';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%user:field_puluser_fname\'s %title',
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
    'title' => 'Staff Member Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second staff-member-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff',
    'panels_breadcrumbs_paths' => 'staff/directory',
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
  $display->title = '%user:field_puluser_fname %user:field_puluser_lname';
  $display->uuid = '5417b150-b4f8-4688-a71e-09254f596b22';
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
    $pane->configuration = array();
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
    $pane->pid = 'new-b359e695-40bd-4b24-bb12-d1c0e1465e69';
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
    $pane->uuid = 'b359e695-40bd-4b24-bb12-d1c0e1465e69';
    $display->content['new-b359e695-40bd-4b24-bb12-d1c0e1465e69'] = $pane;
    $display->panels['second'][0] = 'new-b359e695-40bd-4b24-bb12-d1c0e1465e69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}
