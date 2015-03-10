<?php
/**
 * @file
 * pul_econ_library_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pul_econ_library_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_econ_library_company_directories';
  $strongarm->value = '0';
  $export['comment_anonymous_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_econ_library_stock_exchange_hold';
  $strongarm->value = '0';
  $export['comment_anonymous_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_econ_lib_central_bank_holdings';
  $strongarm->value = '0';
  $export['comment_anonymous_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_econ_working_papers';
  $strongarm->value = '0';
  $export['comment_anonymous_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_econ_library_company_directories';
  $strongarm->value = 1;
  $export['comment_default_mode_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_econ_library_stock_exchange_hold';
  $strongarm->value = 1;
  $export['comment_default_mode_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_econ_lib_central_bank_holdings';
  $strongarm->value = 1;
  $export['comment_default_mode_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_econ_working_papers';
  $strongarm->value = 1;
  $export['comment_default_mode_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_econ_library_company_directories';
  $strongarm->value = '50';
  $export['comment_default_per_page_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_econ_library_stock_exchange_hold';
  $strongarm->value = '50';
  $export['comment_default_per_page_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_econ_lib_central_bank_holdings';
  $strongarm->value = '50';
  $export['comment_default_per_page_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_econ_working_papers';
  $strongarm->value = '50';
  $export['comment_default_per_page_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_econ_library_company_directories';
  $strongarm->value = '1';
  $export['comment_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_econ_library_stock_exchange_hold';
  $strongarm->value = '1';
  $export['comment_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_econ_lib_central_bank_holdings';
  $strongarm->value = '1';
  $export['comment_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_econ_working_papers';
  $strongarm->value = '1';
  $export['comment_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_econ_library_company_directories';
  $strongarm->value = 1;
  $export['comment_form_location_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_econ_library_stock_exchange_hold';
  $strongarm->value = 1;
  $export['comment_form_location_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_econ_lib_central_bank_holdings';
  $strongarm->value = 1;
  $export['comment_form_location_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_econ_working_papers';
  $strongarm->value = 1;
  $export['comment_form_location_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_econ_library_company_directories';
  $strongarm->value = '1';
  $export['comment_preview_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_econ_library_stock_exchange_hold';
  $strongarm->value = '1';
  $export['comment_preview_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_econ_lib_central_bank_holdings';
  $strongarm->value = '1';
  $export['comment_preview_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_econ_working_papers';
  $strongarm->value = '1';
  $export['comment_preview_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_econ_library_company_directories';
  $strongarm->value = 1;
  $export['comment_subject_field_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_econ_library_stock_exchange_hold';
  $strongarm->value = 1;
  $export['comment_subject_field_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_econ_lib_central_bank_holdings';
  $strongarm->value = 1;
  $export['comment_subject_field_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_econ_working_papers';
  $strongarm->value = 1;
  $export['comment_subject_field_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__econ_library_company_directories';
  $strongarm->value = array(
    'view_modes' => array(
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
        'feeds' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__econ_library_stock_exchange_hold';
  $strongarm->value = array(
    'view_modes' => array(
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
        'feeds' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__econ_lib_central_bank_holdings';
  $strongarm->value = array(
    'view_modes' => array(
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__econ_working_papers';
  $strongarm->value = array(
    'view_modes' => array(
      'featured_link_url' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_econ_library_company_directories';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_econ_library_stock_exchange_hold';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_econ_lib_central_bank_holdings';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_econ_working_papers';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_econ_library_company_directories';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_econ_library_stock_exchange_hold';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_econ_lib_central_bank_holdings';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_econ_working_papers';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_econ_library_company_directories';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_econ_library_stock_exchange_hold';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_econ_lib_central_bank_holdings';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_econ_working_papers';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_econ_library_company_directories';
  $strongarm->value = '1';
  $export['node_preview_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_econ_library_stock_exchange_hold';
  $strongarm->value = '1';
  $export['node_preview_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_econ_lib_central_bank_holdings';
  $strongarm->value = '1';
  $export['node_preview_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_econ_working_papers';
  $strongarm->value = '1';
  $export['node_preview_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_econ_library_company_directories';
  $strongarm->value = 0;
  $export['node_submitted_econ_library_company_directories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_econ_library_stock_exchange_hold';
  $strongarm->value = 0;
  $export['node_submitted_econ_library_stock_exchange_hold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_econ_lib_central_bank_holdings';
  $strongarm->value = 0;
  $export['node_submitted_econ_lib_central_bank_holdings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_econ_working_papers';
  $strongarm->value = 0;
  $export['node_submitted_econ_working_papers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_econ_working_papers_pattern';
  $strongarm->value = 'econ/papers/[node:nid]';
  $export['pathauto_node_econ_working_papers_pattern'] = $strongarm;

  return $export;
}
