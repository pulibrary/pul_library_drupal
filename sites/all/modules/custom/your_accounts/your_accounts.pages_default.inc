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
  $handler->weight = 18;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'context' => 'empty',
          'name' => 'path_visibility',
          'not' => FALSE,
          'settings' => array(
            'paths' => 'accounts',
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
    'title' => 'Your Accounts',
  );
  $display = new panels_display();
  $display->layout = 'three-three-three-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'default' => NULL,
      'first' => NULL,
      'fourth' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'right' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
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
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Review and renew material you’ve borrowed</li><li>View information about library requests, fines and blocks</li><li>Find out more about <a href="https://library.princeton.edu/services/privileges/circulation-policies">circulation policies</a></li></ul><div class="service-connect-btn"><a href="https://catalog.princeton.edu/account" target="_blank">Access Your Library Account</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Library Account',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'library-account',
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
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Register for access to special collections reading rooms</li><li>Request and check the status of manuscripts, archives &amp; rare books</li><li>Find out more about <a href="https://blogs.princeton.edu/research-account/" target="_blank">research accounts</a></li></ul><div class="service-connect-btn"><a href="https://library.princeton.edu/aeon/" target="_blank">Access Your Research Account</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Special Collections',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'aeon',
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
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Request and check the status of material requested from other Borrow Direct partner libraries</li><li>Find out more about <a href="https://library.princeton.edu/services/borrowdirect">Borrow Direct</a></li></ul><div class="service-connect-btn"><a href="https://catalog.princeton.edu/borrow-direct" target="_blank">Access Borrow Direct</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Borrow Direct',
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'borrow-direct',
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
    'body' => '<ul style="list-style-type: disc; margin-left: 1em; margin-bottom: 1.5em;"><li>Request, renew and check the status of material requested from other libraries</li><li>Find out more about <a href="https://library.princeton.edu/services/interlibrary-services">Interlibrary Loan</a>&nbsp;and <a href="https://library.princeton.edu/services/article-express">Article Express</a></li></ul><div class="service-connect-btn"><a href="https://lib-illiad.princeton.edu/illiad/illiad.dll" target="_blank">Access Interlibrary Loan and Article Express</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'Interlibrary Loan & Article Express',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => '',
    'css_id' => 'illiad',
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
  $pane->uuid = 'e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $display->content['new-e93b178e-f40e-463c-9efa-757e7a5ac9ca'] = $pane;
  $display->panels['top'][0] = 'new-e93b178e-f40e-463c-9efa-757e7a5ac9ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_14062ca0-e681-4fdc-8b86-4c1c47a6e506'] = $handler;

  return $export;
}
