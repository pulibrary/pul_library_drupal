<?php
/**
 * @file
 * microforms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function microforms_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_23';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Microforms Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second page-microforms subsite',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'microforms',
        'keyword' => 'microforms',
        'name' => 'entity:node',
        'entity_id' => '7954',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/microforms*
collections/microforms/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
Microforms',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_threecol_3_6_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '36ad30a2-dc53-4225-874a-28dba493236f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2569cf90-7b85-47f9-a182-3e335be2761b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2569cf90-7b85-47f9-a182-3e335be2761b';
    $display->content['new-2569cf90-7b85-47f9-a182-3e335be2761b'] = $pane;
    $display->panels['left'][0] = 'new-2569cf90-7b85-47f9-a182-3e335be2761b';
    $pane = new stdClass();
    $pane->pid = 'new-cb90cd62-4435-4c1f-8672-b1d6cad8509d';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb90cd62-4435-4c1f-8672-b1d6cad8509d';
    $display->content['new-cb90cd62-4435-4c1f-8672-b1d6cad8509d'] = $pane;
    $display->panels['left'][1] = 'new-cb90cd62-4435-4c1f-8672-b1d6cad8509d';
    $pane = new stdClass();
    $pane->pid = 'new-f2d5b202-67fd-43b4-aced-ce40c047df0d';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f2d5b202-67fd-43b4-aced-ce40c047df0d';
    $display->content['new-f2d5b202-67fd-43b4-aced-ce40c047df0d'] = $pane;
    $display->panels['left'][2] = 'new-f2d5b202-67fd-43b4-aced-ce40c047df0d';
    $pane = new stdClass();
    $pane->pid = 'new-358df03f-7c1f-4349-bce6-89d648be0e57';
    $pane->panel = 'middle';
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
    $pane->uuid = '358df03f-7c1f-4349-bce6-89d648be0e57';
    $display->content['new-358df03f-7c1f-4349-bce6-89d648be0e57'] = $pane;
    $display->panels['middle'][0] = 'new-358df03f-7c1f-4349-bce6-89d648be0e57';
    $pane = new stdClass();
    $pane->pid = 'new-8874debf-b075-4c66-a148-e960d6004133';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3708',
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
    $pane->uuid = '8874debf-b075-4c66-a148-e960d6004133';
    $display->content['new-8874debf-b075-4c66-a148-e960d6004133'] = $pane;
    $display->panels['right'][0] = 'new-8874debf-b075-4c66-a148-e960d6004133';
    $pane = new stdClass();
    $pane->pid = 'new-df859910-1bcb-46cb-a394-39c9c5c31a7c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3708',
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
    $pane->uuid = 'df859910-1bcb-46cb-a394-39c9c5c31a7c';
    $display->content['new-df859910-1bcb-46cb-a394-39c9c5c31a7c'] = $pane;
    $display->panels['right'][1] = 'new-df859910-1bcb-46cb-a394-39c9c5c31a7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2569cf90-7b85-47f9-a182-3e335be2761b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_23'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_25';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Microforms Staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second page-microforms subsite',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'microforms',
        'keyword' => 'microforms',
        'name' => 'entity:node',
        'entity_id' => '7954',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/microforms*
collections/microforms/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'work_group' => 'work_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
Microforms',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_threecol_3_6_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ce3b332f-d3fb-43f4-a967-8797b1295eed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01f524e3-0975-4cec-886a-f58747bffab1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01f524e3-0975-4cec-886a-f58747bffab1';
    $display->content['new-01f524e3-0975-4cec-886a-f58747bffab1'] = $pane;
    $display->panels['left'][0] = 'new-01f524e3-0975-4cec-886a-f58747bffab1';
    $pane = new stdClass();
    $pane->pid = 'new-39497f82-8062-4a9b-b5a2-75b81988f9ff';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '39497f82-8062-4a9b-b5a2-75b81988f9ff';
    $display->content['new-39497f82-8062-4a9b-b5a2-75b81988f9ff'] = $pane;
    $display->panels['left'][1] = 'new-39497f82-8062-4a9b-b5a2-75b81988f9ff';
    $pane = new stdClass();
    $pane->pid = 'new-fd6a9e03-e430-4351-a229-fc334f235a68';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fd6a9e03-e430-4351-a229-fc334f235a68';
    $display->content['new-fd6a9e03-e430-4351-a229-fc334f235a68'] = $pane;
    $display->panels['left'][2] = 'new-fd6a9e03-e430-4351-a229-fc334f235a68';
    $pane = new stdClass();
    $pane->pid = 'new-bdfc4a72-3aba-41c4-a76f-29dc8a39dfe7';
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
    $pane->uuid = 'bdfc4a72-3aba-41c4-a76f-29dc8a39dfe7';
    $display->content['new-bdfc4a72-3aba-41c4-a76f-29dc8a39dfe7'] = $pane;
    $display->panels['middle'][0] = 'new-bdfc4a72-3aba-41c4-a76f-29dc8a39dfe7';
    $pane = new stdClass();
    $pane->pid = 'new-e987f159-85da-445c-aaea-b2c5fc9f0886';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11513',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e987f159-85da-445c-aaea-b2c5fc9f0886';
    $display->content['new-e987f159-85da-445c-aaea-b2c5fc9f0886'] = $pane;
    $display->panels['middle'][1] = 'new-e987f159-85da-445c-aaea-b2c5fc9f0886';
    $pane = new stdClass();
    $pane->pid = 'new-1892b0e3-dfe0-41e1-a5b3-a8b9d375f7e7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3708',
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
    $pane->uuid = '1892b0e3-dfe0-41e1-a5b3-a8b9d375f7e7';
    $display->content['new-1892b0e3-dfe0-41e1-a5b3-a8b9d375f7e7'] = $pane;
    $display->panels['right'][0] = 'new-1892b0e3-dfe0-41e1-a5b3-a8b9d375f7e7';
    $pane = new stdClass();
    $pane->pid = 'new-2dc168b0-c4bc-44aa-bfda-33aa8e48bc1f';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar_details-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3708',
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
    $pane->uuid = '2dc168b0-c4bc-44aa-bfda-33aa8e48bc1f';
    $display->content['new-2dc168b0-c4bc-44aa-bfda-33aa8e48bc1f'] = $pane;
    $display->panels['right'][1] = 'new-2dc168b0-c4bc-44aa-bfda-33aa8e48bc1f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01f524e3-0975-4cec-886a-f58747bffab1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_25'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_26';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Microforms Newspaper Individual Title',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar sidebar-second page-microforms subsite',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'microforms',
        'keyword' => 'microforms',
        'name' => 'entity:node',
        'entity_id' => '7954',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/microforms*
collections/microforms/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'microforms_newspapers' => 'microforms_newspapers',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Collections
Microforms
Newspapers',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms
collections/microforms/newspapers',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul_development_theme_12_threecol_3_6_3_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Newspaper on Microfilm - %node:title';
  $display->uuid = '6cc6c375-eac9-43b2-9b54-f9082e5b906c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a795f23-e4a1-4d99-8807-439dcf78ec2f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a795f23-e4a1-4d99-8807-439dcf78ec2f';
    $display->content['new-5a795f23-e4a1-4d99-8807-439dcf78ec2f'] = $pane;
    $display->panels['left'][0] = 'new-5a795f23-e4a1-4d99-8807-439dcf78ec2f';
    $pane = new stdClass();
    $pane->pid = 'new-cf3dea83-4797-4dd8-86b2-5b01cbdf2a43';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf3dea83-4797-4dd8-86b2-5b01cbdf2a43';
    $display->content['new-cf3dea83-4797-4dd8-86b2-5b01cbdf2a43'] = $pane;
    $display->panels['left'][1] = 'new-cf3dea83-4797-4dd8-86b2-5b01cbdf2a43';
    $pane = new stdClass();
    $pane->pid = 'new-1d91b41f-657e-4b31-b8c8-8519fdddd796';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '1d91b41f-657e-4b31-b8c8-8519fdddd796';
    $display->content['new-1d91b41f-657e-4b31-b8c8-8519fdddd796'] = $pane;
    $display->panels['middle'][0] = 'new-1d91b41f-657e-4b31-b8c8-8519fdddd796';
    $pane = new stdClass();
    $pane->pid = 'new-3253d7d4-35b1-4936-9b40-d1d328fe29f4';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->uuid = '3253d7d4-35b1-4936-9b40-d1d328fe29f4';
    $display->content['new-3253d7d4-35b1-4936-9b40-d1d328fe29f4'] = $pane;
    $display->panels['right'][0] = 'new-3253d7d4-35b1-4936-9b40-d1d328fe29f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_26'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_27';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Microforms Student Assistant Manual',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-sidebar page-microforms subsite',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'microforms',
        'keyword' => 'microforms',
        'name' => 'entity:node',
        'entity_id' => '7954',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'collections/microforms*
collections/microforms/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Collections
Microforms',
    'panels_breadcrumbs_paths' => '/collections
/collections/microforms',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_3_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ac9faabb-feaa-450f-a132-c598bc405a6f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d15d228-a784-4853-9c41-e5c152f12831';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d15d228-a784-4853-9c41-e5c152f12831';
    $display->content['new-7d15d228-a784-4853-9c41-e5c152f12831'] = $pane;
    $display->panels['left'][0] = 'new-7d15d228-a784-4853-9c41-e5c152f12831';
    $pane = new stdClass();
    $pane->pid = 'new-7dbd5562-9787-428b-8a8e-6b1c7a0d6f44';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7dbd5562-9787-428b-8a8e-6b1c7a0d6f44';
    $display->content['new-7dbd5562-9787-428b-8a8e-6b1c7a0d6f44'] = $pane;
    $display->panels['left'][1] = 'new-7dbd5562-9787-428b-8a8e-6b1c7a0d6f44';
    $pane = new stdClass();
    $pane->pid = 'new-0a6525b0-c359-4112-9f9a-78d8d3e8a948';
    $pane->panel = 'right';
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
    $pane->uuid = '0a6525b0-c359-4112-9f9a-78d8d3e8a948';
    $display->content['new-0a6525b0-c359-4112-9f9a-78d8d3e8a948'] = $pane;
    $display->panels['right'][0] = 'new-0a6525b0-c359-4112-9f9a-78d8d3e8a948';
    $pane = new stdClass();
    $pane->pid = 'new-e3b16504-92dc-4ee7-b73b-e94e759a5924';
    $pane->panel = 'right';
    $pane->type = 'node_book_nav';
    $pane->subtype = 'node_book_nav';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e3b16504-92dc-4ee7-b73b-e94e759a5924';
    $display->content['new-e3b16504-92dc-4ee7-b73b-e94e759a5924'] = $pane;
    $display->panels['right'][1] = 'new-e3b16504-92dc-4ee7-b73b-e94e759a5924';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_27'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_20';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Microforms Foreign Newspapers by Country',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              26 => '26',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
Microforms
Newspapers',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms
collections/microforms/newspapers',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_3_9';
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
  $display->uuid = 'c425fa51-02c1-40b9-9eac-d2802a7b9426';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-019ac7e5-18aa-4511-af5e-f91af19c226c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '019ac7e5-18aa-4511-af5e-f91af19c226c';
    $display->content['new-019ac7e5-18aa-4511-af5e-f91af19c226c'] = $pane;
    $display->panels['left'][0] = 'new-019ac7e5-18aa-4511-af5e-f91af19c226c';
    $pane = new stdClass();
    $pane->pid = 'new-285d4dfe-2bd9-4cfa-89d8-07797d41b7ef';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->uuid = '285d4dfe-2bd9-4cfa-89d8-07797d41b7ef';
    $display->content['new-285d4dfe-2bd9-4cfa-89d8-07797d41b7ef'] = $pane;
    $display->panels['left'][1] = 'new-285d4dfe-2bd9-4cfa-89d8-07797d41b7ef';
    $pane = new stdClass();
    $pane->pid = 'new-7a7ebea1-c262-4534-8572-00991afd637e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7a7ebea1-c262-4534-8572-00991afd637e';
    $display->content['new-7a7ebea1-c262-4534-8572-00991afd637e'] = $pane;
    $display->panels['left'][2] = 'new-7a7ebea1-c262-4534-8572-00991afd637e';
    $pane = new stdClass();
    $pane->pid = 'new-5ebed262-c502-4413-84a4-ed03d98489c8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms_states_and_countries-panel_pane_1';
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
    $pane->uuid = '5ebed262-c502-4413-84a4-ed03d98489c8';
    $display->content['new-5ebed262-c502-4413-84a4-ed03d98489c8'] = $pane;
    $display->panels['right'][0] = 'new-5ebed262-c502-4413-84a4-ed03d98489c8';
    $pane = new stdClass();
    $pane->pid = 'new-feba4ed8-2a5c-4945-a12c-3885104743ce';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
      ),
      'override_title' => 1,
      'override_title_text' => '%term:name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'feba4ed8-2a5c-4945-a12c-3885104743ce';
    $display->content['new-feba4ed8-2a5c-4945-a12c-3885104743ce'] = $pane;
    $display->panels['right'][1] = 'new-feba4ed8-2a5c-4945-a12c-3885104743ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_20'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_21';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Microforms Newspapers - US',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'subsite',
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
              26 => '26',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '26',
            9 => array(),
            18 => array(),
            12 => array(),
            10 => array(),
            17 => array(),
            24 => array(),
            14 => array(),
            20 => array(),
            19 => array(),
            15 => array(),
            21 => array(),
            25 => array(),
            26 => array(
              4502 => '4502',
            ),
            27 => array(),
            23 => array(),
            4 => array(),
            13 => array(),
            16 => array(),
            1 => array(),
            22 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
Microforms
Newspapers',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms
collections/microforms/newspapers',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_3_9';
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
  $display->uuid = '2222a87d-0954-4d57-b606-29caa7c86a0f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7bb52a23-3e6d-43f8-867c-4356161543ef';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7bb52a23-3e6d-43f8-867c-4356161543ef';
    $display->content['new-7bb52a23-3e6d-43f8-867c-4356161543ef'] = $pane;
    $display->panels['left'][0] = 'new-7bb52a23-3e6d-43f8-867c-4356161543ef';
    $pane = new stdClass();
    $pane->pid = 'new-412bb5e0-8b06-444a-857e-9aa2a132fb0f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->uuid = '412bb5e0-8b06-444a-857e-9aa2a132fb0f';
    $display->content['new-412bb5e0-8b06-444a-857e-9aa2a132fb0f'] = $pane;
    $display->panels['left'][1] = 'new-412bb5e0-8b06-444a-857e-9aa2a132fb0f';
    $pane = new stdClass();
    $pane->pid = 'new-bc3f9b1f-e07a-47fe-951e-a565790778db';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bc3f9b1f-e07a-47fe-951e-a565790778db';
    $display->content['new-bc3f9b1f-e07a-47fe-951e-a565790778db'] = $pane;
    $display->panels['left'][2] = 'new-bc3f9b1f-e07a-47fe-951e-a565790778db';
    $pane = new stdClass();
    $pane->pid = 'new-b9f7571b-9033-4adb-b047-8a67d57a4c8a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms_states_and_countries-panel_pane_2';
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
    $pane->uuid = 'b9f7571b-9033-4adb-b047-8a67d57a4c8a';
    $display->content['new-b9f7571b-9033-4adb-b047-8a67d57a4c8a'] = $pane;
    $display->panels['right'][0] = 'new-b9f7571b-9033-4adb-b047-8a67d57a4c8a';
    $pane = new stdClass();
    $pane->pid = 'new-b2f2ad71-ee54-409e-92c4-e057ff7cf859';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '',
      ),
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
    $pane->uuid = 'b2f2ad71-ee54-409e-92c4-e057ff7cf859';
    $display->content['new-b2f2ad71-ee54-409e-92c4-e057ff7cf859'] = $pane;
    $display->panels['right'][1] = 'new-b2f2ad71-ee54-409e-92c4-e057ff7cf859';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_21'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_22';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Microforms Newspapers - By State',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'subsite',
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
              27 => '27',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
Microforms
Newspapers',
    'panels_breadcrumbs_paths' => 'collections
collections/microforms
collections/microforms/newspapers',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_3_9';
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
  $display->uuid = '4f5e0a71-29b9-4733-bab5-96d317611b95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-860ca796-6e30-438f-b6ed-bfc028fe378e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '860ca796-6e30-438f-b6ed-bfc028fe378e';
    $display->content['new-860ca796-6e30-438f-b6ed-bfc028fe378e'] = $pane;
    $display->panels['left'][0] = 'new-860ca796-6e30-438f-b6ed-bfc028fe378e';
    $pane = new stdClass();
    $pane->pid = 'new-bde5542d-1861-4757-b4c8-14395018abf4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->uuid = 'bde5542d-1861-4757-b4c8-14395018abf4';
    $display->content['new-bde5542d-1861-4757-b4c8-14395018abf4'] = $pane;
    $display->panels['left'][1] = 'new-bde5542d-1861-4757-b4c8-14395018abf4';
    $pane = new stdClass();
    $pane->pid = 'new-7b01b9b1-93a1-484c-8b80-46885979b5a4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b01b9b1-93a1-484c-8b80-46885979b5a4';
    $display->content['new-7b01b9b1-93a1-484c-8b80-46885979b5a4'] = $pane;
    $display->panels['left'][2] = 'new-7b01b9b1-93a1-484c-8b80-46885979b5a4';
    $pane = new stdClass();
    $pane->pid = 'new-8b1aef4c-9115-4682-b491-a5e1297922a4';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms_states_and_countries-panel_pane_2';
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
    $pane->uuid = '8b1aef4c-9115-4682-b491-a5e1297922a4';
    $display->content['new-8b1aef4c-9115-4682-b491-a5e1297922a4'] = $pane;
    $display->panels['right'][0] = 'new-8b1aef4c-9115-4682-b491-a5e1297922a4';
    $pane = new stdClass();
    $pane->pid = 'new-997524df-e45a-4745-bd4b-e931da54ea28';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
      ),
      'override_title' => 1,
      'override_title_text' => '%term:name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '997524df-e45a-4745-bd4b-e931da54ea28';
    $display->content['new-997524df-e45a-4745-bd4b-e931da54ea28'] = $pane;
    $display->panels['right'][1] = 'new-997524df-e45a-4745-bd4b-e931da54ea28';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-bde5542d-1861-4757-b4c8-14395018abf4';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_6';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'title' => 'Microforms Newspaper - By City',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'subsite',
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
              25 => '25',
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
  $display->layout = 'omega_12_twocol_3_9';
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
  $display->uuid = 'f7e13ab9-26dd-4f2c-b2e7-6d57bfea4790';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94af2c8f-16f3-4231-9d19-f6cebfbfd03c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94af2c8f-16f3-4231-9d19-f6cebfbfd03c';
    $display->content['new-94af2c8f-16f3-4231-9d19-f6cebfbfd03c'] = $pane;
    $display->panels['left'][0] = 'new-94af2c8f-16f3-4231-9d19-f6cebfbfd03c';
    $pane = new stdClass();
    $pane->pid = 'new-ea7f50ab-8fc7-49ff-81c6-d50cf37c9fdb';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->uuid = 'ea7f50ab-8fc7-49ff-81c6-d50cf37c9fdb';
    $display->content['new-ea7f50ab-8fc7-49ff-81c6-d50cf37c9fdb'] = $pane;
    $display->panels['left'][1] = 'new-ea7f50ab-8fc7-49ff-81c6-d50cf37c9fdb';
    $pane = new stdClass();
    $pane->pid = 'new-3d1f2899-53bf-4e94-b193-7c5f86a28960';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3d1f2899-53bf-4e94-b193-7c5f86a28960';
    $display->content['new-3d1f2899-53bf-4e94-b193-7c5f86a28960'] = $pane;
    $display->panels['left'][2] = 'new-3d1f2899-53bf-4e94-b193-7c5f86a28960';
    $pane = new stdClass();
    $pane->pid = 'new-af7b9bf6-50be-41ff-b046-5e67b5321c81';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms_states_and_countries-panel_pane_3';
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
    $pane->uuid = 'af7b9bf6-50be-41ff-b046-5e67b5321c81';
    $display->content['new-af7b9bf6-50be-41ff-b046-5e67b5321c81'] = $pane;
    $display->panels['right'][0] = 'new-af7b9bf6-50be-41ff-b046-5e67b5321c81';
    $pane = new stdClass();
    $pane->pid = 'new-9fb7d37d-a021-4791-a1b6-0177dce315c1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
      ),
      'override_title' => 1,
      'override_title_text' => '%term:name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9fb7d37d-a021-4791-a1b6-0177dce315c1';
    $display->content['new-9fb7d37d-a021-4791-a1b6-0177dce315c1'] = $pane;
    $display->panels['right'][1] = 'new-9fb7d37d-a021-4791-a1b6-0177dce315c1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ea7f50ab-8fc7-49ff-81c6-d50cf37c9fdb';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_6'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function microforms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'microforms_newspapers';
  $page->task = 'page';
  $page->admin_title = 'Microforms Newspapers';
  $page->admin_description = '';
  $page->path = 'collections/microforms/newspapers';
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
  $handler->name = 'page_microforms_newspapers_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'microforms_newspapers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Newspapers on Microfilm',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'subsite',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_3_9';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Newspapers on Microfilm';
  $display->uuid = '4dac11a0-28e9-4ccc-8eaa-90e10b3f8d91';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d6b6642-32dc-4531-8e69-c249dd7c7c39';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-microforms';
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
      'css_class' => 'left-col-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d6b6642-32dc-4531-8e69-c249dd7c7c39';
    $display->content['new-1d6b6642-32dc-4531-8e69-c249dd7c7c39'] = $pane;
    $display->panels['left'][0] = 'new-1d6b6642-32dc-4531-8e69-c249dd7c7c39';
    $pane = new stdClass();
    $pane->pid = 'new-b7844933-2b0c-430a-a56d-5d742fc4a3f3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-collections-and-ti';
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
    $pane->uuid = 'b7844933-2b0c-430a-a56d-5d742fc4a3f3';
    $display->content['new-b7844933-2b0c-430a-a56d-5d742fc4a3f3'] = $pane;
    $display->panels['left'][1] = 'new-b7844933-2b0c-430a-a56d-5d742fc4a3f3';
    $pane = new stdClass();
    $pane->pid = 'new-3c2e4d0a-ac4a-418e-b5b4-36ac23c25a9e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-selected-research-guides';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c2e4d0a-ac4a-418e-b5b4-36ac23c25a9e';
    $display->content['new-3c2e4d0a-ac4a-418e-b5b4-36ac23c25a9e'] = $pane;
    $display->panels['left'][2] = 'new-3c2e4d0a-ac4a-418e-b5b4-36ac23c25a9e';
    $pane = new stdClass();
    $pane->pid = 'new-9838d4aa-295e-4c32-856e-3bdcabfaa9dc';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms_states_and_countries-panel_pane_1';
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
    $pane->uuid = '9838d4aa-295e-4c32-856e-3bdcabfaa9dc';
    $display->content['new-9838d4aa-295e-4c32-856e-3bdcabfaa9dc'] = $pane;
    $display->panels['right'][0] = 'new-9838d4aa-295e-4c32-856e-3bdcabfaa9dc';
    $pane = new stdClass();
    $pane->pid = 'new-ab0b1526-4f55-4174-a1cf-a0b45523fcae';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'microforms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '',
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
    $pane->uuid = 'ab0b1526-4f55-4174-a1cf-a0b45523fcae';
    $display->content['new-ab0b1526-4f55-4174-a1cf-a0b45523fcae'] = $pane;
    $display->panels['right'][1] = 'new-ab0b1526-4f55-4174-a1cf-a0b45523fcae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d6b6642-32dc-4531-8e69-c249dd7c7c39';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['microforms_newspapers'] = $page;

  return $pages;

}
