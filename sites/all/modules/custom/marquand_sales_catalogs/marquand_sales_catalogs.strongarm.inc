<?php

/**
 * @file
 * marquand_sales_catalogs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function marquand_sales_catalogs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_marquand_sales_catalog';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_marquand_sales_catalog';
  $strongarm->value = '[node:field_sc_date] - [node:field_sc_auction_house] - [node:field_sc_city]';
  $export['auto_entitylabel_pattern_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_marquand_sales_catalog';
  $strongarm->value = '';
  $export['auto_entitylabel_php_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_marquand_sales_catalog';
  $strongarm->value = '0';
  $export['comment_anonymous_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_marquand_sales_catalog';
  $strongarm->value = 1;
  $export['comment_default_mode_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_marquand_sales_catalog';
  $strongarm->value = '50';
  $export['comment_default_per_page_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_marquand_sales_catalog';
  $strongarm->value = 0;
  $export['comment_form_location_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_marquand_sales_catalog';
  $strongarm->value = '1';
  $export['comment_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_marquand_sales_catalog';
  $strongarm->value = '1';
  $export['comment_preview_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_marquand_sales_catalog';
  $strongarm->value = 0;
  $export['comment_subject_field_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_marquand_sales_catalog';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_marquand_sales_catalog';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_marquand_sales_catalog';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__marquand_sales_catalog';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_node__marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_marquand_sales_catalog';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_marquand_sales_catalog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_marquand_sales_catalog';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_marquand_sales_catalog';
  $strongarm->value = '1';
  $export['node_preview_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_marquand_sales_catalog';
  $strongarm->value = 0;
  $export['node_submitted_marquand_sales_catalog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_marquand_sales_catalog_pattern';
  $strongarm->value = 'marquand/catalogs/[node:nid]';
  $export['pathauto_node_marquand_sales_catalog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sales_catalog_auction_house_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sales_catalog_auction_house_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sales_catalog_city_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sales_catalog_city_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_marquand_sales_catalog';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_node_marquand_sales_catalog'] = $strongarm;

  return $export;
}
