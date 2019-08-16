<?php

/**
 * @file
 * research_data_service.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function research_data_service_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__research-data-services';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 42;
  $handler->conf = array(
    'title' => 'Research Data Services',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'firestone-library branch-libraries',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'libraries' => 'libraries',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'research-data',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'research-data-services',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Princeton Research Data Service';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__research-data-services';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-0433856f-e333-4938-b50c-c4429518ec4d';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'PRDS Stages',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="prds--stage"><h2 id="planning"><a href="/research-data/planning">Planning</a></h2><ul><li>Data Management Plans &amp; Data Sharing Plans<ul><li>How do I know what my funder requires?</li><li>How do I create one?</li></ul></li><li>What can I do now to make handling data easier later?</li><li>What data should I be planning to share, and how?</li><li>What are my options if I’m working with very large datasets?</li></ul><p><a href="/research-data/planning" class="more" id="lm1">Read More</a></p></div><div class="prds--stage"><h2 id="acquisition"><a href="/research-data/acquisition">Data Acquisition</a></h2><ul><li>What are data use agreements?</li><li>What should I be thinking of if I’m working with human subjects?</li><li>Data Security</li><li>Good practices for working with data</li><li>Finding datasets to work with</li></ul><p><a href="/research-data/acquisition" class="more" id="lm2">Read more</a></p></div><div class="prds--stage"><h2 id="analysis"><a href="/research-data/analysis">Analysis</a></h2><ul><li>What are Princeton’s Research Computing Resources?</li><li>How do I deal with large datasets?</li><li>What are some good options for sharing my active data with my collaborators?</li><li>Where can students get help with statistics?</li></ul><p><a href="/research-data/analysis" class="more" id="lm3">Read more</a></p></div><div class="prds--stage"><h2 id="dissemination"><a href="/research-data/dissemination">Publishing and Preservation</a></h2><ul><li>What are the advantages to publishing my data?</li><li>What does my publisher require?</li><li>How and where do I publish my dataset?</li><li>What’s a DOI?</li><li>What are my storage options if I don’t want to share my data publicly?</li></ul><p><a href="/research-data/dissemination" class="more" id="lm4">Read more</a></p></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prds--stages',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0433856f-e333-4938-b50c-c4429518ec4d';
  $display->content['new-0433856f-e333-4938-b50c-c4429518ec4d'] = $pane;
  $display->panels['middle'][1] = 'new-0433856f-e333-4938-b50c-c4429518ec4d';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Princeton Research Data Service',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->content['new-1bbb162e-5063-43cd-8dbf-37576edfd980'] = $pane;
  $display->panels['top'][0] = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane = new stdClass();
  $pane->pid = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---research-data-ser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $display->content['new-0e09b36a-4943-4207-bf73-e4ed247eea4d'] = $pane;
  $display->panels['top'][1] = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane = new stdClass();
  $pane->pid = 'new-a9084e35-0d91-4203-a09f-aa6d3da5b7c5';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'prdssearch_block-prdssearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a9084e35-0d91-4203-a09f-aa6d3da5b7c5';
  $display->content['new-a9084e35-0d91-4203-a09f-aa6d3da5b7c5'] = $pane;
  $display->panels['top'][2] = 'new-a9084e35-0d91-4203-a09f-aa6d3da5b7c5';
  $pane = new stdClass();
  $pane->pid = 'new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'libraries-panel_pane_4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Contact',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $display->content['new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba'] = $pane;
  $display->panels['top'][3] = 'new-8afb3002-1a34-41cb-80b6-d1ca48ce83ba';
  $pane = new stdClass();
  $pane->pid = 'new-bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_library_exterior_image';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $display->content['new-bde42932-4c55-4c02-8a1b-31cb7a62db06'] = $pane;
  $display->panels['top'][4] = 'new-bde42932-4c55-4c02-8a1b-31cb7a62db06';
  $pane = new stdClass();
  $pane->pid = 'new-af94629b-1fa5-4b38-940f-13b8febdbd97';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'PRDS - Director Pullquote',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><img src="https://library.princeton.edu/sites/default/files/hwcowles.jpg" alt="Portrait of Wind Cowles" style="max-height: 220px;"></p><p>Wind Cowles, PhD<br>Director, Princeton Research Data Service</p><blockquote style="font-size: 1.5em; font-weight: 500; margin: 0;">“As a former university researcher, I know all too well how many claims there are on people’s time and one of my main goals is to make sure that we make the process of data management as painless as possible.”</blockquote><p><a href="https://library.princeton.edu/news/general/2019-05-01/qa-wind-cowles-director-princeton-research-data-service">Q&amp;A with Wind Cowles</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'af94629b-1fa5-4b38-940f-13b8febdbd97';
  $display->content['new-af94629b-1fa5-4b38-940f-13b8febdbd97'] = $pane;
  $display->panels['top'][5] = 'new-af94629b-1fa5-4b38-940f-13b8febdbd97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__research-data-services'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__research-data-services-subpages-3-9-layout';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 44;
  $handler->conf = array(
    'title' => 'Research Data Services Subpages (3-9 layout)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'section-services branch-libraries',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'research-data/planning
research-data/planning/*
research-data/acquisition
research-data/acquisition/*
research-data/analysis
research-data/analysis/*
research-data/dissemination
research-data/dissemination/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'research-data-services-subpages-3-9-layout',
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Princeton Research Data Service';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__research-data-services-subpages-3-9-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2855073f-8706-4acc-8153-88763cb6e5d3';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-prds-stages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2855073f-8706-4acc-8153-88763cb6e5d3';
  $display->content['new-2855073f-8706-4acc-8153-88763cb6e5d3'] = $pane;
  $display->panels['first'][0] = 'new-2855073f-8706-4acc-8153-88763cb6e5d3';
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'second';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['second'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Princeton Research Data Service',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->content['new-1bbb162e-5063-43cd-8dbf-37576edfd980'] = $pane;
  $display->panels['top'][0] = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane = new stdClass();
  $pane->pid = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---research-data-ser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $display->content['new-0e09b36a-4943-4207-bf73-e4ed247eea4d'] = $pane;
  $display->panels['top'][1] = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane = new stdClass();
  $pane->pid = 'new-c655af12-82a6-431a-9363-b3848ee29ffd';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'prdssearch_block-prdssearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c655af12-82a6-431a-9363-b3848ee29ffd';
  $display->content['new-c655af12-82a6-431a-9363-b3848ee29ffd'] = $pane;
  $display->panels['top'][2] = 'new-c655af12-82a6-431a-9363-b3848ee29ffd';
  $pane = new stdClass();
  $pane->pid = 'new-1d8cd2b5-f04a-47a1-bd01-187af8b74d01';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'research-data/planning
research-data/planning/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Stage 1 Heading',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Stage 1: Planning</h3><p>Data management activities involved with developing and proposing a research project</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1d8cd2b5-f04a-47a1-bd01-187af8b74d01';
  $display->content['new-1d8cd2b5-f04a-47a1-bd01-187af8b74d01'] = $pane;
  $display->panels['top'][3] = 'new-1d8cd2b5-f04a-47a1-bd01-187af8b74d01';
  $pane = new stdClass();
  $pane->pid = 'new-2fdb74ba-4e5a-4e93-ac34-09cf6adeed42';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'research-data/acquisition
research-data/acquisition/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Stage 2 Heading',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Stage 2: Data Acquisition</h3><p>Resources for collecting new data, using existing data sets</p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2fdb74ba-4e5a-4e93-ac34-09cf6adeed42';
  $display->content['new-2fdb74ba-4e5a-4e93-ac34-09cf6adeed42'] = $pane;
  $display->panels['top'][4] = 'new-2fdb74ba-4e5a-4e93-ac34-09cf6adeed42';
  $pane = new stdClass();
  $pane->pid = 'new-a1ab4593-4c86-4683-af9f-51216c4ed61e';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'research-data/analysis
research-data/analysis/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Stage 3 Heading',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Stage 3: Analysis</h3><p>...</p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a1ab4593-4c86-4683-af9f-51216c4ed61e';
  $display->content['new-a1ab4593-4c86-4683-af9f-51216c4ed61e'] = $pane;
  $display->panels['top'][5] = 'new-a1ab4593-4c86-4683-af9f-51216c4ed61e';
  $pane = new stdClass();
  $pane->pid = 'new-c3eb97e2-3c0f-4e5e-a8ad-97570a153e72';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'research-data/dissemination
research-data/dissemination/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Stage 4 Heading',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Stage 4: Publishing and Preservation</h3><p>...</p>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c3eb97e2-3c0f-4e5e-a8ad-97570a153e72';
  $display->content['new-c3eb97e2-3c0f-4e5e-a8ad-97570a153e72'] = $pane;
  $display->panels['top'][6] = 'new-c3eb97e2-3c0f-4e5e-a8ad-97570a153e72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__research-data-services-subpages-3-9-layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__research-data-services-subpages-full-width-layout';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 43;
  $handler->conf = array(
    'title' => 'Research Data Services Subpages (Full width layout)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'section-services branch-libraries',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'research-data/about
research-data/why-rdm
research-data/calendar
research-data/workshops
research-data/faqs
research-data/info-sessions',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'research-data-services-subpages-full-width-layout',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Princeton Research Data Service';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__research-data-services-subpages-full-width-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $display->content['new-5e3798c4-d508-4e35-87b7-e4d99e69c402'] = $pane;
  $display->panels['middle'][0] = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $pane = new stdClass();
  $pane->pid = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'branch_library_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '41161',
    ),
    'override_title' => 1,
    'override_title_text' => 'Princeton Research Data Service',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bbb162e-5063-43cd-8dbf-37576edfd980';
  $display->content['new-1bbb162e-5063-43cd-8dbf-37576edfd980'] = $pane;
  $display->panels['top'][0] = 'new-1bbb162e-5063-43cd-8dbf-37576edfd980';
  $pane = new stdClass();
  $pane->pid = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-section---research-data-ser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $display->content['new-0e09b36a-4943-4207-bf73-e4ed247eea4d'] = $pane;
  $display->panels['top'][1] = 'new-0e09b36a-4943-4207-bf73-e4ed247eea4d';
  $pane = new stdClass();
  $pane->pid = 'new-8b840c62-51c0-45e0-9e68-f7d66baee930';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'prdssearch_block-prdssearch_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8b840c62-51c0-45e0-9e68-f7d66baee930';
  $display->content['new-8b840c62-51c0-45e0-9e68-f7d66baee930'] = $pane;
  $display->panels['top'][2] = 'new-8b840c62-51c0-45e0-9e68-f7d66baee930';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5e3798c4-d508-4e35-87b7-e4d99e69c402';
  $handler->conf['display'] = $display;
  $export['node_view__research-data-services-subpages-full-width-layout'] = $handler;

  return $export;
}
