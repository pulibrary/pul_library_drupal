<?php
/**
 * @file
 * library_hours.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_hours_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_displaygroup|node|library_hours|form';
  $field_group->group_name = 'group_displaygroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_hours';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupings',
    'weight' => '1',
    'children' => array(
      0 => 'field_cal_associated_library',
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
  $export['group_displaygroup|node|library_hours|form'] = $field_group;

  return $export;
}
