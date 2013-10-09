<?php
/**
 * @file
 * pul_libraries_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_libraries_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_address|node|libraries|form';
  $field_group->group_name = 'group_lib_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_loc_det';
  $field_group->data = array(
    'label' => 'Library Address',
    'weight' => '28',
    'children' => array(
      0 => 'field_address_1',
      1 => 'field_address_2',
      2 => 'field_city',
      3 => 'field_state',
      4 => 'field_zip',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-lib-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lib_address|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_contact|node|libraries|form';
  $field_group->group_name = 'group_lib_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '12',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_fax',
      2 => 'field_e_mail_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-lib-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lib_contact|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_hours|node|libraries|form';
  $field_group->group_name = 'group_lib_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '7',
    'children' => array(
      0 => 'field_lib_hours_code',
      1 => 'field_hours_calendar',
      2 => 'field_standard_hours',
      3 => 'field_summer_hours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-lib-hours field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lib_hours|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_links|node|libraries|form';
  $field_group->group_name = 'group_lib_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URLs and Paths',
    'weight' => '5',
    'children' => array(
      0 => 'field_library_homepage',
      1 => 'field_libs_cols_main_menu',
      2 => 'field_lib_main_menu_link',
      3 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-lib-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lib_links|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc_det|node|libraries|form';
  $field_group->group_name = 'group_loc_det';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Detail',
    'weight' => '13',
    'children' => array(
      0 => 'field_building',
      1 => 'group_lib_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-loc-det field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_loc_det|node|libraries|form'] = $field_group;

  return $export;
}
