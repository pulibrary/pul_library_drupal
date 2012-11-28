<?php
/**
 * @file
 * pul_library_taxonomy.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_library_taxonomy_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours_summary|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_hours_summary';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours',
    'weight' => '6',
    'children' => array(
      0 => 'field_monday_hours',
      1 => 'field_summer_hours',
      2 => 'field_lib_hours_code',
      3 => 'field_lib_cal_hrs_rel',
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
  $export['group_hours_summary|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_campus_address|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_lib_campus_address';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_lib_location_detail';
  $field_group->data = array(
    'label' => 'Campus Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_campus_address_1',
      1 => 'field_campus_address_2',
      2 => 'field_campus_city',
      3 => 'field_campus_state',
      4 => 'field_campus_zip',
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
  $export['group_lib_campus_address|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_contact_info|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_lib_contact_info';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_e_mail_address',
      1 => 'field_fax',
      2 => 'field_phone',
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
  $export['group_lib_contact_info|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_location_detail|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_lib_location_detail';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Detail',
    'weight' => '4',
    'children' => array(
      0 => 'field_building_name',
      1 => 'field_campus_map_url',
      2 => 'group_lib_mailing_address',
      3 => 'group_lib_campus_address',
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
  $export['group_lib_location_detail|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_mailing_address|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_lib_mailing_address';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_lib_location_detail';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '4',
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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lib_mailing_address|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_paths_links|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_lib_paths_links';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URLs and Paths',
    'weight' => '3',
    'children' => array(
      0 => 'field_library_homepage',
      1 => 'field_libs_cols_main_menu',
      2 => 'field_lib_main_menu_link',
      3 => 'path',
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
  $export['group_lib_paths_links|taxonomy_term|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tax_listings|taxonomy_term|libraries|form';
  $field_group->group_name = 'group_tax_listings';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Listings',
    'weight' => '14',
    'children' => array(
      0 => 'field_assoc_collections',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tax_listings|taxonomy_term|libraries|form'] = $field_group;

  return $export;
}
