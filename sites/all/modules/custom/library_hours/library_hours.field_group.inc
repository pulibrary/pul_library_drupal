<?php
/**
 * @file
 * library_hours.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_hours_field_group_info() {
  $field_groups = array();

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
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_open_hours',
      1 => 'field_hours_library_status',
      2 => 'field_hrs_lib_calendar',
      3 => 'field_pul_hours_label',
      4 => 'field_pul_hours_term',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-displaygroup field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');

  return $field_groups;
}
