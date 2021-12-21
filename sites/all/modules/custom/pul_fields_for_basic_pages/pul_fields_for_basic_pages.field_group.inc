<?php

/**
 * @file
 * pul_fields_for_basic_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_fields_for_basic_pages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_page_attachments|node|page|form';
  $field_group->group_name = 'group_basic_page_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_basic_page_files',
      1 => 'field_basic_page_images',
      2 => 'field_library_image',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-basic-page-attachments field-group-tab',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Attachments',
    ),
    'format_type' => 'tab',
    'label' => 'Attachments',
    'weight' => '3',
  );
  $field_groups['group_basic_page_attachments|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');

  return $field_groups;
}
