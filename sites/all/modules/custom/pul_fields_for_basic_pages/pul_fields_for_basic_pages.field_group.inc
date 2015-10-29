<?php
/**
 * @file
 * pul_fields_for_basic_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_fields_for_basic_pages_field_group_info() {
  $export = array();

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
    'label' => 'Attachments',
    'weight' => '3',
    'children' => array(
      0 => 'field_basic_page_files',
      1 => 'field_basic_page_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Attachments',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-basic-page-attachments field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic_page_attachments|node|page|form'] = $field_group;

  return $export;
}
