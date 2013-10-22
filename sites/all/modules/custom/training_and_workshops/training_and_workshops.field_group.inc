<?php
/**
 * @file
 * training_and_workshops.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function training_and_workshops_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lewis_rooms|entityform|lewis_library_room_reservations|form';
  $field_group->group_name = 'group_lewis_rooms';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'lewis_library_room_reservations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Available Study Rooms',
    'weight' => '7',
    'children' => array(
      0 => 'field_lewis_sm_rooms',
      1 => 'field_lewis_lg_rooms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-lewis-rooms field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lewis_rooms|entityform|lewis_library_room_reservations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lewis_scheduling|entityform|lewis_library_room_reservations|form';
  $field_group->group_name = 'group_lewis_scheduling';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'lewis_library_room_reservations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '10',
    'children' => array(
      0 => 'field_lewis_rr_dtime',
      1 => 'field_lewis_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lewis-scheduling field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lewis_scheduling|entityform|lewis_library_room_reservations|form'] = $field_group;

  return $export;
}
