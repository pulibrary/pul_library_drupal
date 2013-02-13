<?php
/**
 * @file
 * pul_collections_taxonomy.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_collections_taxonomy_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_sidebar_adds|taxonomy_term|collections|form';
  $field_group->group_name = 'group_col_sidebar_adds';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'collections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_col_contact',
      1 => 'field_col_sidebar_content',
      2 => 'field_col_libraries_held_in',
      3 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_col_sidebar_adds|taxonomy_term|collections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_urls_paths|taxonomy_term|collections|form';
  $field_group->group_name = 'group_col_urls_paths';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'collections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URLs and Paths',
    'weight' => '5',
    'children' => array(
      0 => 'field_collection_url',
      1 => 'field_col_custom_path',
      2 => 'field_libs_cols_main_menu',
      3 => 'field_col_main_menu_link',
      4 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_col_urls_paths|taxonomy_term|collections|form'] = $field_group;

  return $export;
}
