<?php
/**
 * @file
 * your_accounts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function your_accounts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 16;
  $handler->conf = array(
    'title' => 'Your Accounts',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Calendar',
        'keyword' => 'cal',
        'name' => 'entity_from_field:field_hours_calendar-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Building',
        'keyword' => 'building',
        'name' => 'entity_from_field:field_building-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'accounts',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-three-three-three-stacked';
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
      'third' => NULL,
      'fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed7ae6e8-9a5e-407a-a37d-6cff957def0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-86ef2308-a19a-43c8-b787-0c8441ed8171';
  $pane->panel = 'first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Library Account',
    'title' => 'Library Account',
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Review and renew material you’ve borrowed</li><li>View information about library requests, fines and blocks</li><li>Find out more about <a href="http://library.princeton.edu/services/privileges/circulation-policies">circulation policies</a></li></ul><div class="service-connect-btn"><a href="https://catalog.princeton.edu/cgi-bin/Pwebrecon.cgi?DB=local&amp;PAGE=pbLogon" target="_blank">Access Your Library Account</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'library-account',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86ef2308-a19a-43c8-b787-0c8441ed8171';
  $display->content['new-86ef2308-a19a-43c8-b787-0c8441ed8171'] = $pane;
  $display->panels['first'][0] = 'new-86ef2308-a19a-43c8-b787-0c8441ed8171';
  $pane = new stdClass();
  $pane->pid = 'new-9b24626d-83e3-4b5c-86a6-829f1bc88789';
  $pane->panel = 'fourth';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Aeon',
    'title' => 'Special Collections',
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Register for access to special collections reading rooms</li><li>Request and check the status of manuscripts, archives &amp; rare books</li><li>Find out more about <a href="https://blogs.princeton.edu/research-account/" target="_blank">research accounts</a></li></ul><div class="service-connect-btn"><a href="https://library.princeton.edu/aeon/" target="_blank">Access Your Research Account</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'aeon',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9b24626d-83e3-4b5c-86a6-829f1bc88789';
  $display->content['new-9b24626d-83e3-4b5c-86a6-829f1bc88789'] = $pane;
  $display->panels['fourth'][0] = 'new-9b24626d-83e3-4b5c-86a6-829f1bc88789';
  $pane = new stdClass();
  $pane->pid = 'new-68eceaba-7889-4bca-8996-261512af5e70';
  $pane->panel = 'second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'BorrowDirect',
    'title' => 'Borrow Direct',
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Request and check the status of material requested from other Borrow Direct partner libraries</li><li>Find out more about <a href="http://library.princeton.edu/services/borrowdirect">Borrow Direct</a></li></ul><div class="service-connect-btn"><a href="https://pulsearch.princeton.edu/borrow-direct" target="_blank">Access Borrow Direct</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'borrow-direct',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68eceaba-7889-4bca-8996-261512af5e70';
  $display->content['new-68eceaba-7889-4bca-8996-261512af5e70'] = $pane;
  $display->panels['second'][0] = 'new-68eceaba-7889-4bca-8996-261512af5e70';
  $pane = new stdClass();
  $pane->pid = 'new-c817df9b-58e2-419b-81d0-6cb5459b8b7e';
  $pane->panel = 'third';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'ILLiad',
    'title' => 'Interlibrary Loan & Article Express',
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Request, renew and check the status of material requested from other libraries</li><li>Find out more about <a href="https://library.princeton.edu/services/interlibrary-services">Interlibrary Loan</a>&nbsp;and <a href="https://library.princeton.edu/services/article-express">Article Express</a></li></ul><div class="service-connect-btn"><a href="https://lib-illiad.princeton.edu/illiad/illiad.dll" target="_blank">Access Interlibrary Loan and Article Express</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'illiad',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c817df9b-58e2-419b-81d0-6cb5459b8b7e';
  $display->content['new-c817df9b-58e2-419b-81d0-6cb5459b8b7e'] = $pane;
  $display->panels['third'][0] = 'new-c817df9b-58e2-419b-81d0-6cb5459b8b7e';
  $pane = new stdClass();
  $pane->pid = 'new-e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $pane->panel = 'top';
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
  $pane->uuid = 'e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $display->content['new-e93b178e-f40e-463c-9efa-757e7a5ac9ca'] = $pane;
  $display->panels['top'][0] = 'new-e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506'] = $handler;

  return $export;
}
