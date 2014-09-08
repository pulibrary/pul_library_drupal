<?php
/**
 * @file
 * pul_information_for_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function pul_information_for_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Visitors Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second visitors-page',
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
              9 => '9',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            9 => array(
              147 => '147',
            ),
            7 => array(),
            18 => array(),
            12 => array(),
            10 => array(),
            17 => array(),
            14 => array(),
            8 => array(),
            19 => array(),
            15 => array(),
            13 => array(),
            16 => array(),
            4 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'five-four-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_top' => NULL,
      'middle_top' => NULL,
      'right_top' => NULL,
      'left_bottom' => NULL,
      'middle_bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a2d5196-4988-4400-9635-05f60b4d1168';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-133f4149-47b7-4a40-a7d7-cb60fce16e70';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-library-news-panel-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '133f4149-47b7-4a40-a7d7-cb60fce16e70';
    $display->content['new-133f4149-47b7-4a40-a7d7-cb60fce16e70'] = $pane;
    $display->panels['bottom'][0] = 'new-133f4149-47b7-4a40-a7d7-cb60fce16e70';
    $pane = new stdClass();
    $pane->pid = 'new-a405b8a1-03a5-4b23-9a9c-91a20d1f6243';
    $pane->panel = 'first';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6680',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'a405b8a1-03a5-4b23-9a9c-91a20d1f6243';
    $display->content['new-a405b8a1-03a5-4b23-9a9c-91a20d1f6243'] = $pane;
    $display->panels['first'][0] = 'new-a405b8a1-03a5-4b23-9a9c-91a20d1f6243';
    $pane = new stdClass();
    $pane->pid = 'new-ea729d9a-02d3-40d0-a57d-0f62731c4340';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6679',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'ea729d9a-02d3-40d0-a57d-0f62731c4340';
    $display->content['new-ea729d9a-02d3-40d0-a57d-0f62731c4340'] = $pane;
    $display->panels['second'][0] = 'new-ea729d9a-02d3-40d0-a57d-0f62731c4340';
    $pane = new stdClass();
    $pane->pid = 'new-09d3f737-f978-4b03-b4a7-04ada2cdb3ae';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-directions-parking-and-gene';
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
    $pane->uuid = '09d3f737-f978-4b03-b4a7-04ada2cdb3ae';
    $display->content['new-09d3f737-f978-4b03-b4a7-04ada2cdb3ae'] = $pane;
    $display->panels['third'][0] = 'new-09d3f737-f978-4b03-b4a7-04ada2cdb3ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_14';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Alumni Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second alumni-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            9 => array(
              148 => '148',
            ),
            7 => array(),
            18 => array(),
            12 => array(),
            10 => array(),
            17 => array(),
            14 => array(),
            8 => array(),
            19 => array(),
            15 => array(),
            13 => array(),
            16 => array(),
            4 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'five-four-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'bottom' => array(),
      'right' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'left_top' => array(),
      'middle_top' => array(),
      'right_top' => array(),
      'left_bottom' => array(),
      'middle_bottom' => array(),
      'right_bottom' => NULL,
      'right_side' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'stylizer',
    ),
    'style' => 'stylizer',
    'left_top' => array(
      'style' => 'stylizer',
    ),
    'middle_top' => array(
      'style' => 'stylizer',
    ),
    'right_top' => array(
      'style' => 'stylizer',
    ),
    'left_bottom' => array(
      'style' => 'stylizer',
    ),
    'middle_bottom' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '30e6ee01-1b4b-4fe9-b437-4d784c15a17a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fb614b27-5605-4e65-8409-45f7f8c4b57c';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-library-news-panel-pane ',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb614b27-5605-4e65-8409-45f7f8c4b57c';
    $display->content['new-fb614b27-5605-4e65-8409-45f7f8c4b57c'] = $pane;
    $display->panels['bottom'][0] = 'new-fb614b27-5605-4e65-8409-45f7f8c4b57c';
    $pane = new stdClass();
    $pane->pid = 'new-50c86b3d-dc4d-49bc-8fa9-add9d72de552';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-alumni---services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Alumni Services',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50c86b3d-dc4d-49bc-8fa9-add9d72de552';
    $display->content['new-50c86b3d-dc4d-49bc-8fa9-add9d72de552'] = $pane;
    $display->panels['first'][0] = 'new-50c86b3d-dc4d-49bc-8fa9-add9d72de552';
    $pane = new stdClass();
    $pane->pid = 'new-280cca95-286a-4e49-910c-77952f15ccaa';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-alumni---giving-back';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Giving Back',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '280cca95-286a-4e49-910c-77952f15ccaa';
    $display->content['new-280cca95-286a-4e49-910c-77952f15ccaa'] = $pane;
    $display->panels['first'][1] = 'new-280cca95-286a-4e49-910c-77952f15ccaa';
    $pane = new stdClass();
    $pane->pid = 'new-5c8ec765-0f0d-4c09-8ac6-b0f8df7d940c';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-directions-parking-and-gene';
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
    $pane->uuid = '5c8ec765-0f0d-4c09-8ac6-b0f8df7d940c';
    $display->content['new-5c8ec765-0f0d-4c09-8ac6-b0f8df7d940c'] = $pane;
    $display->panels['second'][0] = 'new-5c8ec765-0f0d-4c09-8ac6-b0f8df7d940c';
    $pane = new stdClass();
    $pane->pid = 'new-0663ceca-41ce-4861-9681-876c15aff9ee';
    $pane->panel = 'third';
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
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0663ceca-41ce-4861-9681-876c15aff9ee';
    $display->content['new-0663ceca-41ce-4861-9681-876c15aff9ee'] = $pane;
    $display->panels['third'][0] = 'new-0663ceca-41ce-4861-9681-876c15aff9ee';
    $pane = new stdClass();
    $pane->pid = 'new-0ae4ce93-cc6f-4ef7-8e57-5c2c65a6496e';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-alumni---returning';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Returning to the Libraries',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ae4ce93-cc6f-4ef7-8e57-5c2c65a6496e';
    $display->content['new-0ae4ce93-cc6f-4ef7-8e57-5c2c65a6496e'] = $pane;
    $display->panels['top'][0] = 'new-0ae4ce93-cc6f-4ef7-8e57-5c2c65a6496e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Faculty Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second faculty-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            9 => array(
              146 => '146',
            ),
            7 => array(),
            11 => array(),
            12 => array(),
            10 => array(),
            8 => array(),
            13 => array(),
            4 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'right' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Faculty and Staff';
  $display->uuid = '6139f262-8e71-43a8-840c-0de9c2a2eacf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa0e7813-9af9-45c5-8da7-d3112b81b813';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-library-news-panel-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa0e7813-9af9-45c5-8da7-d3112b81b813';
    $display->content['new-fa0e7813-9af9-45c5-8da7-d3112b81b813'] = $pane;
    $display->panels['bottom'][0] = 'new-fa0e7813-9af9-45c5-8da7-d3112b81b813';
    $pane = new stdClass();
    $pane->pid = 'new-e3247b47-0304-4565-b633-7466215e6e3d';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-services---faculty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Services',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3247b47-0304-4565-b633-7466215e6e3d';
    $display->content['new-e3247b47-0304-4565-b633-7466215e6e3d'] = $pane;
    $display->panels['first'][0] = 'new-e3247b47-0304-4565-b633-7466215e6e3d';
    $pane = new stdClass();
    $pane->pid = 'new-7ee66b38-1a19-4f62-bcca-d59be6124d21';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-practicalities';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Practicalities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ee66b38-1a19-4f62-bcca-d59be6124d21';
    $display->content['new-7ee66b38-1a19-4f62-bcca-d59be6124d21'] = $pane;
    $display->panels['first'][1] = 'new-7ee66b38-1a19-4f62-bcca-d59be6124d21';
    $pane = new stdClass();
    $pane->pid = 'new-32ca214b-6dcc-4318-ad9a-85930a41094b';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-research-curriculum-support';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Research & Curriculum Support',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32ca214b-6dcc-4318-ad9a-85930a41094b';
    $display->content['new-32ca214b-6dcc-4318-ad9a-85930a41094b'] = $pane;
    $display->panels['second'][0] = 'new-32ca214b-6dcc-4318-ad9a-85930a41094b';
    $pane = new stdClass();
    $pane->pid = 'new-82dcc534-5bb3-4b0f-a37b-e398e37c7dc1';
    $pane->panel = 'third';
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
    $pane->uuid = '82dcc534-5bb3-4b0f-a37b-e398e37c7dc1';
    $display->content['new-82dcc534-5bb3-4b0f-a37b-e398e37c7dc1'] = $pane;
    $display->panels['third'][0] = 'new-82dcc534-5bb3-4b0f-a37b-e398e37c7dc1';
    $pane = new stdClass();
    $pane->pid = 'new-869e62cb-4313-4115-aa63-c2273b67cd7b';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-shortcuts---faculty';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '869e62cb-4313-4115-aa63-c2273b67cd7b';
    $display->content['new-869e62cb-4313-4115-aa63-c2273b67cd7b'] = $pane;
    $display->panels['third'][1] = 'new-869e62cb-4313-4115-aa63-c2273b67cd7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Student Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second student-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            9 => array(
              145 => '145',
            ),
            7 => array(),
            11 => array(),
            12 => array(),
            10 => array(),
            8 => array(),
            13 => array(),
            4 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'right' => NULL,
      'left_top' => NULL,
      'middle_top' => NULL,
      'right_top' => NULL,
      'left_bottom' => NULL,
      'middle_bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e8a114f8-60c4-4378-b6c3-e0fddbec2f54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d7de9c09-6253-4720-8f4b-a0b6fb7fd724';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-library-news-panel-pane ',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7de9c09-6253-4720-8f4b-a0b6fb7fd724';
    $display->content['new-d7de9c09-6253-4720-8f4b-a0b6fb7fd724'] = $pane;
    $display->panels['bottom'][0] = 'new-d7de9c09-6253-4720-8f4b-a0b6fb7fd724';
    $pane = new stdClass();
    $pane->pid = 'new-431b6f38-5990-48d7-95ad-c69ee26d70a2';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-services---students';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Services',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '431b6f38-5990-48d7-95ad-c69ee26d70a2';
    $display->content['new-431b6f38-5990-48d7-95ad-c69ee26d70a2'] = $pane;
    $display->panels['first'][0] = 'new-431b6f38-5990-48d7-95ad-c69ee26d70a2';
    $pane = new stdClass();
    $pane->pid = 'new-aa29ca75-8a9d-4260-b653-81ab207f45b1';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-research-education---studen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Research Education',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa29ca75-8a9d-4260-b653-81ab207f45b1';
    $display->content['new-aa29ca75-8a9d-4260-b653-81ab207f45b1'] = $pane;
    $display->panels['first'][1] = 'new-aa29ca75-8a9d-4260-b653-81ab207f45b1';
    $pane = new stdClass();
    $pane->pid = 'new-d19c0b72-effd-463a-881b-82446fa5e3b8';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-practicalities---students';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Practicalities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd19c0b72-effd-463a-881b-82446fa5e3b8';
    $display->content['new-d19c0b72-effd-463a-881b-82446fa5e3b8'] = $pane;
    $display->panels['second'][0] = 'new-d19c0b72-effd-463a-881b-82446fa5e3b8';
    $pane = new stdClass();
    $pane->pid = 'new-4dd55745-485b-4ad6-a2c4-fa3389fcf141';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-student-shortcuts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'University Shortcuts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4dd55745-485b-4ad6-a2c4-fa3389fcf141';
    $display->content['new-4dd55745-485b-4ad6-a2c4-fa3389fcf141'] = $pane;
    $display->panels['second'][1] = 'new-4dd55745-485b-4ad6-a2c4-fa3389fcf141';
    $pane = new stdClass();
    $pane->pid = 'new-9c617025-7fba-4f50-9b4a-58f7f98b62eb';
    $pane->panel = 'third';
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
    $pane->uuid = '9c617025-7fba-4f50-9b4a-58f7f98b62eb';
    $display->content['new-9c617025-7fba-4f50-9b4a-58f7f98b62eb'] = $pane;
    $display->panels['third'][0] = 'new-9c617025-7fba-4f50-9b4a-58f7f98b62eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_7';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Library Staff Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second staff-landing-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '149',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '9',
            9 => array(
              149 => '149',
            ),
            7 => array(),
            18 => array(),
            12 => array(),
            10 => array(),
            17 => array(),
            14 => array(),
            8 => array(),
            15 => array(),
            13 => array(),
            16 => array(),
            4 => array(),
            1 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About',
    'panels_breadcrumbs_paths' => 'about',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_top' => NULL,
      'middle_top' => NULL,
      'right_top' => NULL,
      'left_bottom' => NULL,
      'middle_bottom' => NULL,
      'right_bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '641be85a-22e0-4c81-9edd-ec877bb27081';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b10c0f7-834f-4223-a47b-9cca1f9c2c8a';
    $pane->panel = 'first';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '7b10c0f7-834f-4223-a47b-9cca1f9c2c8a';
    $display->content['new-7b10c0f7-834f-4223-a47b-9cca1f9c2c8a'] = $pane;
    $display->panels['first'][0] = 'new-7b10c0f7-834f-4223-a47b-9cca1f9c2c8a';
    $pane = new stdClass();
    $pane->pid = 'new-071f305b-27b2-4d55-8688-2d8b1bb039e9';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-staff---departments-and-off';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Departments and Offices',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '071f305b-27b2-4d55-8688-2d8b1bb039e9';
    $display->content['new-071f305b-27b2-4d55-8688-2d8b1bb039e9'] = $pane;
    $display->panels['first'][1] = 'new-071f305b-27b2-4d55-8688-2d8b1bb039e9';
    $pane = new stdClass();
    $pane->pid = 'new-00d3d603-d902-40c9-a8b6-9119afe1b617';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-staff---pula';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'PULA',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '00d3d603-d902-40c9-a8b6-9119afe1b617';
    $display->content['new-00d3d603-d902-40c9-a8b6-9119afe1b617'] = $pane;
    $display->panels['first'][2] = 'new-00d3d603-d902-40c9-a8b6-9119afe1b617';
    $pane = new stdClass();
    $pane->pid = 'new-e1b74698-5d91-484c-a338-9ce45fe762ec';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-library-newsletters';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e1b74698-5d91-484c-a338-9ce45fe762ec';
    $display->content['new-e1b74698-5d91-484c-a338-9ce45fe762ec'] = $pane;
    $display->panels['first'][3] = 'new-e1b74698-5d91-484c-a338-9ce45fe762ec';
    $pane = new stdClass();
    $pane->pid = 'new-013b4be3-60bb-49f0-b2b8-26008ab4dcea';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-staff-support-and-requests';
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
    $pane->uuid = '013b4be3-60bb-49f0-b2b8-26008ab4dcea';
    $display->content['new-013b4be3-60bb-49f0-b2b8-26008ab4dcea'] = $pane;
    $display->panels['second'][0] = 'new-013b4be3-60bb-49f0-b2b8-26008ab4dcea';
    $pane = new stdClass();
    $pane->pid = 'new-9cbef97a-c397-4f4b-81e1-1e286395e428';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-staff---tools-and-utilities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Tools and Utilities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9cbef97a-c397-4f4b-81e1-1e286395e428';
    $display->content['new-9cbef97a-c397-4f4b-81e1-1e286395e428'] = $pane;
    $display->panels['second'][1] = 'new-9cbef97a-c397-4f4b-81e1-1e286395e428';
    $pane = new stdClass();
    $pane->pid = 'new-fe08fcee-3bfd-465e-9aad-bbd36f39e4fe';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-staff---assessment-data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Assessment Data',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe08fcee-3bfd-465e-9aad-bbd36f39e4fe';
    $display->content['new-fe08fcee-3bfd-465e-9aad-bbd36f39e4fe'] = $pane;
    $display->panels['second'][2] = 'new-fe08fcee-3bfd-465e-9aad-bbd36f39e4fe';
    $pane = new stdClass();
    $pane->pid = 'new-6be21293-f4c3-4c6c-9fbf-f9142eb65d44';
    $pane->panel = 'third';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
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
    $pane->uuid = '6be21293-f4c3-4c6c-9fbf-f9142eb65d44';
    $display->content['new-6be21293-f4c3-4c6c-9fbf-f9142eb65d44'] = $pane;
    $display->panels['third'][0] = 'new-6be21293-f4c3-4c6c-9fbf-f9142eb65d44';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_7'] = $handler;

  return $export;
}
