<?php

/**
 * @file
 * pul_personal_librarian.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pul_personal_librarian_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'personal_librarian_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Personal Librarian Landing Page';
  $page->admin_description = '';
  $page->path = 'personal-librarian';
  $page->access = array(
    'logic' => 'or',
    'plugins' => array(),
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
  $handler->name = 'page_personal_librarian_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'personal_librarian_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(
      0 => array(
        'id' => 1,
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
      ),
    ),
    'css' => '',
    'css_id' => '',
    'name' => 'panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(
      0 => array(
        'context' => 'context_user_1',
        'delta' => 0,
        'id' => 1,
        'identifier' => 'User from User (on User: Personal Librarian [field_current_personal_lib])',
        'keyword' => 'user_2',
        'name' => 'entity_from_field:field_current_personal_lib-user-user',
      ),
    ),
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
  $display->title = 'Personal Librarian Program';
  $display->uuid = '4aecc312-f9a7-4b8e-8f9d-d2200268def4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_personal_librarian_landing_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6b2b5cab-2d40-49cd-9ba9-98f1c3034996';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'cas-login';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'context_user_1',
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
    'override_title_heading' => 'h3',
    'override_title_text' => 'Find Your Personal Librarian',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b2b5cab-2d40-49cd-9ba9-98f1c3034996';
  $display->content['new-6b2b5cab-2d40-49cd-9ba9-98f1c3034996'] = $pane;
  $display->panels['first'][0] = 'new-6b2b5cab-2d40-49cd-9ba9-98f1c3034996';
  $pane = new stdClass();
  $pane->pid = 'new-a71b1f2c-9d49-476e-b523-f541508b1764';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_profile-panel_pane_5';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'context_user_1',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 28,
          ),
        ),
      ),
    ),
  );
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
  $pane->uuid = 'a71b1f2c-9d49-476e-b523-f541508b1764';
  $display->content['new-a71b1f2c-9d49-476e-b523-f541508b1764'] = $pane;
  $display->panels['first'][1] = 'new-a71b1f2c-9d49-476e-b523-f541508b1764';
  $pane = new stdClass();
  $pane->pid = 'new-8ed48f19-0d72-457f-86a8-e2a05227e3c8';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'pul_personal_librarian-panel_pane_2';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'context_user_1',
        'name' => 'role',
        'not' => FALSE,
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 28,
            2 => 29,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'personal-librarian',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8ed48f19-0d72-457f-86a8-e2a05227e3c8';
  $display->content['new-8ed48f19-0d72-457f-86a8-e2a05227e3c8'] = $pane;
  $display->panels['first'][2] = 'new-8ed48f19-0d72-457f-86a8-e2a05227e3c8';
  $pane = new stdClass();
  $pane->pid = 'new-ba7b0d5f-d7dd-4231-ae38-e5cc486a3beb';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'context_user_1',
        'name' => 'role',
        'not' => TRUE,
        'settings' => array(
          'rids' => array(
            0 => 29,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Personal Librarian Header',
    'body' => '<p>Navigating the rich resources at Princeton University Library can be challenging for new students, so in fall ’17 we launched a “Personal Librarian” program that pairs every Princeton undergraduate with a friendly library expert. Your Personal Librarian will help you navigate the library system, get started with research, point you to subject experts, and answer any questions you might have!</p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
    'title' => 'About Princeton’s Personal Librarian Program',
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
  $pane->uuid = 'ba7b0d5f-d7dd-4231-ae38-e5cc486a3beb';
  $display->content['new-ba7b0d5f-d7dd-4231-ae38-e5cc486a3beb'] = $pane;
  $display->panels['first'][3] = 'new-ba7b0d5f-d7dd-4231-ae38-e5cc486a3beb';
  $pane = new stdClass();
  $pane->pid = 'new-02511eb4-69f0-4142-9f56-45db77d5a8eb';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'pul_personal_librarian-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'context' => 'context_user_1',
        'name' => 'role',
        'not' => TRUE,
        'settings' => array(
          'rids' => array(
            0 => 29,
          ),
        ),
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'personal-librarians',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '02511eb4-69f0-4142-9f56-45db77d5a8eb';
  $display->content['new-02511eb4-69f0-4142-9f56-45db77d5a8eb'] = $pane;
  $display->panels['first'][4] = 'new-02511eb4-69f0-4142-9f56-45db77d5a8eb';
  $pane = new stdClass();
  $pane->pid = 'new-4d8d0104-ea02-4df2-a8b2-be5e87b481ff';
  $pane->panel = 'second';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-personal-librarian-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'Ask Us!',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d8d0104-ea02-4df2-a8b2-be5e87b481ff';
  $display->content['new-4d8d0104-ea02-4df2-a8b2-be5e87b481ff'] = $pane;
  $display->panels['second'][0] = 'new-4d8d0104-ea02-4df2-a8b2-be5e87b481ff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-02511eb4-69f0-4142-9f56-45db77d5a8eb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['personal_librarian_landing_page'] = $page;

  return $pages;

}
