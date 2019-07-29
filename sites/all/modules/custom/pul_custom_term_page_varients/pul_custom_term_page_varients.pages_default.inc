<?php

/**
 * @file
 * pul_custom_term_page_varients.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_custom_term_page_varients_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_11';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Division Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second division-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              17 => '17',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name';
  $display->uuid = '4782a871-057c-4f0b-ada5-b600655ad8f4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_11';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebab68b8-bb5b-4514-9f97-6539f18de59e';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_by_division-panel_pane_1';
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
  $pane->uuid = 'ebab68b8-bb5b-4514-9f97-6539f18de59e';
  $display->content['new-ebab68b8-bb5b-4514-9f97-6539f18de59e'] = $pane;
  $display->panels['first'][0] = 'new-ebab68b8-bb5b-4514-9f97-6539f18de59e';
  $pane = new stdClass();
  $pane->pid = 'new-f5eff9be-3585-40b2-afb4-a07be492b697';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'staff_department_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = 'f5eff9be-3585-40b2-afb4-a07be492b697';
  $display->content['new-f5eff9be-3585-40b2-afb4-a07be492b697'] = $pane;
  $display->panels['second'][0] = 'new-f5eff9be-3585-40b2-afb4-a07be492b697';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_12';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Section Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second section-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              16 => '16',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name';
  $display->uuid = '4444e940-d5ab-4f8b-b92f-f7c86c59743f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_12';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b569e29d-e0cb-4626-be09-35b7a0a04f23';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_by_section-panel_pane_1';
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
  $pane->uuid = 'b569e29d-e0cb-4626-be09-35b7a0a04f23';
  $display->content['new-b569e29d-e0cb-4626-be09-35b7a0a04f23'] = $pane;
  $display->panels['first'][0] = 'new-b569e29d-e0cb-4626-be09-35b7a0a04f23';
  $pane = new stdClass();
  $pane->pid = 'new-faeefe8e-e325-4925-91de-e6c73286b88d';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'staff_department_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = 'faeefe8e-e325-4925-91de-e6c73286b88d';
  $display->content['new-faeefe8e-e325-4925-91de-e6c73286b88d'] = $pane;
  $display->panels['second'][0] = 'new-faeefe8e-e325-4925-91de-e6c73286b88d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_18';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Unit Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second section-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              22 => '22',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name';
  $display->uuid = 'c90fd5e5-2a25-4003-a56e-9ce4efbf97cd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_18';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c6f68c16-d3b5-4d1a-9acb-edd38ea3cda1';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'unit_listings-panel_pane_1';
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
  $pane->uuid = 'c6f68c16-d3b5-4d1a-9acb-edd38ea3cda1';
  $display->content['new-c6f68c16-d3b5-4d1a-9acb-edd38ea3cda1'] = $pane;
  $display->panels['first'][0] = 'new-c6f68c16-d3b5-4d1a-9acb-edd38ea3cda1';
  $pane = new stdClass();
  $pane->pid = 'new-04388150-0cd8-44cc-8830-d564a291633a';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'staff_department_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = '04388150-0cd8-44cc-8830-d564a291633a';
  $display->content['new-04388150-0cd8-44cc-8830-d564a291633a'] = $pane;
  $display->panels['second'][0] = 'new-04388150-0cd8-44cc-8830-d564a291633a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Database Subject Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second subject-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              12 => '12',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Databases
Subjects',
    'panels_breadcrumbs_paths' => 'research/databases
research/databases/subjects',
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
      'first' => NULL,
      'second' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'e5b08669-7e91-4a3b-bb97-e6fbff85a4f2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fb5e6244-4a2d-4ad7-898f-9d12c566d92c';
  $pane->panel = 'first';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'token',
    'context' => 'argument_term_1',
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
  $pane->uuid = 'fb5e6244-4a2d-4ad7-898f-9d12c566d92c';
  $display->content['new-fb5e6244-4a2d-4ad7-898f-9d12c566d92c'] = $pane;
  $display->panels['first'][0] = 'new-fb5e6244-4a2d-4ad7-898f-9d12c566d92c';
  $pane = new stdClass();
  $pane->pid = 'new-569ce340-e89c-4e01-9032-f90895189364';
  $pane->panel = 'first';
  $pane->type = 'term_list';
  $pane->subtype = 'term_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title' => NULL,
    'type' => 'child',
    'list_type' => 'ul',
    'path' => 'taxonomy/term',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Sub-Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '569ce340-e89c-4e01-9032-f90895189364';
  $display->content['new-569ce340-e89c-4e01-9032-f90895189364'] = $pane;
  $display->panels['first'][1] = 'new-569ce340-e89c-4e01-9032-f90895189364';
  $pane = new stdClass();
  $pane->pid = 'new-66e2f239-2dbe-44f1-94cf-bdcd4c117033';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-panel_pane_1';
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
  $pane->uuid = '66e2f239-2dbe-44f1-94cf-bdcd4c117033';
  $display->content['new-66e2f239-2dbe-44f1-94cf-bdcd4c117033'] = $pane;
  $display->panels['first'][2] = 'new-66e2f239-2dbe-44f1-94cf-bdcd4c117033';
  $pane = new stdClass();
  $pane->pid = 'new-9294b2b0-7d5a-4254-ae75-1f35eb08d762';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-panel_pane_2';
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
  $pane->uuid = '9294b2b0-7d5a-4254-ae75-1f35eb08d762';
  $display->content['new-9294b2b0-7d5a-4254-ae75-1f35eb08d762'] = $pane;
  $display->panels['first'][3] = 'new-9294b2b0-7d5a-4254-ae75-1f35eb08d762';
  $pane = new stdClass();
  $pane->pid = 'new-57775f75-13d1-4e8b-a495-dbfe1bf35e04';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'term',
        'settings' => array(
          'vid' => '12',
          28 => array(),
          9 => array(),
          18 => array(),
          12 => array(
            3761 => '3761',
          ),
          10 => array(),
          17 => array(),
          45 => array(),
          46 => array(),
          47 => array(),
          48 => array(),
          34 => array(),
          40 => array(),
          35 => array(),
          41 => array(),
          36 => array(),
          42 => array(),
          37 => array(),
          43 => array(),
          38 => array(),
          44 => array(),
          39 => array(),
          24 => array(),
          14 => array(),
          20 => array(),
          29 => array(),
          33 => array(),
          19 => array(),
          15 => array(),
          21 => array(),
          25 => array(),
          26 => array(),
          27 => array(),
          23 => array(),
          4 => array(),
          13 => array(),
          16 => array(),
          31 => array(),
          32 => array(),
          30 => array(),
          1 => array(),
          22 => array(),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Research Account',
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Register for access to special collections reading rooms</li><li>Request and check the status of manuscripts, archives &amp; rare books</li><li>Find out more about <a href="https://blogs.princeton.edu/research-account/" target="_blank">research accounts</a></li></ul><div class="service-connect-btn"><a href="https://libweb10.princeton.edu/aeon/" target="_blank">Access Your Research Account</a></div>',
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
  $pane->uuid = '57775f75-13d1-4e8b-a495-dbfe1bf35e04';
  $display->content['new-57775f75-13d1-4e8b-a495-dbfe1bf35e04'] = $pane;
  $display->panels['second'][0] = 'new-57775f75-13d1-4e8b-a495-dbfe1bf35e04';
  $pane = new stdClass();
  $pane->pid = 'new-9d3c2f9f-cfaf-4dde-bb43-3fce334030ba';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-panel_pane_3';
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
  $pane->uuid = '9d3c2f9f-cfaf-4dde-bb43-3fce334030ba';
  $display->content['new-9d3c2f9f-cfaf-4dde-bb43-3fce334030ba'] = $pane;
  $display->panels['second'][1] = 'new-9d3c2f9f-cfaf-4dde-bb43-3fce334030ba';
  $pane = new stdClass();
  $pane->pid = 'new-1a063e4d-94c7-4fc4-8f84-2332c660b3af';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'tier_one_resources-lib_guides_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:taxonomy_term:database_subjects:field_subs_primary_library_guide',
        'settings' => array(
          'field_subs_primary_library_guide' => array(
            'und' => array(
              0 => array(
                'url' => '',
              ),
            ),
          ),
          'field_subs_primary_library_guide_url' => array(
            0 => array(
              'url' => '',
            ),
          ),
          'field_subs_primary_library_guide_title' => array(
            0 => array(
              'url' => '',
            ),
          ),
          'field_subs_primary_library_guide_attributes' => array(
            0 => array(
              'url' => '',
            ),
          ),
        ),
        'context' => 'argument_term_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'path' => '',
    'override_title' => 0,
    'override_title_text' => '%term:field_subs_primary_library_guide',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1a063e4d-94c7-4fc4-8f84-2332c660b3af';
  $display->content['new-1a063e4d-94c7-4fc4-8f84-2332c660b3af'] = $pane;
  $display->panels['second'][2] = 'new-1a063e4d-94c7-4fc4-8f84-2332c660b3af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_9';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Department Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second single-department-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              10 => '10',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Staff Directory
Departments',
    'panels_breadcrumbs_paths' => 'staff/directory
staff/departments',
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
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'd0033f30-f3ae-4b54-b37d-aeecd61aaf1b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e0811a06-7c80-4037-b2cc-6f1a74982ad1';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department_list-panel_pane_1';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'links--decorate',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0811a06-7c80-4037-b2cc-6f1a74982ad1';
  $display->content['new-e0811a06-7c80-4037-b2cc-6f1a74982ad1'] = $pane;
  $display->panels['first'][0] = 'new-e0811a06-7c80-4037-b2cc-6f1a74982ad1';
  $pane = new stdClass();
  $pane->pid = 'new-782b5582-3f2f-4031-87b3-424369c87251';
  $pane->panel = 'second';
  $pane->type = 'views';
  $pane->subtype = 'staff_department_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = '782b5582-3f2f-4031-87b3-424369c87251';
  $display->content['new-782b5582-3f2f-4031-87b3-424369c87251'] = $pane;
  $display->panels['second'][0] = 'new-782b5582-3f2f-4031-87b3-424369c87251';
  $pane = new stdClass();
  $pane->pid = 'new-3a19a198-e6c4-4672-a28f-e43d319e4179';
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
  $pane->uuid = '3a19a198-e6c4-4672-a28f-e43d319e4179';
  $display->content['new-3a19a198-e6c4-4672-a28f-e43d319e4179'] = $pane;
  $display->panels['second'][1] = 'new-3a19a198-e6c4-4672-a28f-e43d319e4179';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_9'] = $handler;

  return $export;
}
