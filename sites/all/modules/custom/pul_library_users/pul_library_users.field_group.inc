<?php
/**
 * @file
 * pul_library_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_library_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_puluser_basicinfo|user|user|form';
  $field_group->group_name = 'group_puluser_basicinfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_puluser_department',
      1 => 'field_puluser_displaytitle',
      2 => 'field_puluser_fname',
      3 => 'field_puluser_formalname',
      4 => 'field_puluser_library',
      5 => 'field_puluser_lname',
      6 => 'field_puluser_officialtitle',
      7 => 'field_puluser_division',
      8 => 'field_puluser_section',
      9 => 'field_puluser_short_title',
      10 => 'field_puluser_unit',
      11 => 'picture',
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
  $export['group_puluser_basicinfo|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_admininfo|user|user|form';
  $field_group->group_name = 'group_user_admininfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_puluser_dmgimport_id',
      1 => 'field_puluser_librarystaffid',
      2 => 'field_puluser_netid',
      3 => 'field_puluser_princetonid',
      4 => 'field_pul_user_staff_sort',
      5 => 'field_puluser_unit_sort',
      6 => 'field_puluser_department_sort',
      7 => 'field_puluser_divsect',
      8 => 'timezone',
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
  $export['group_user_admininfo|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_contact|user|user|form';
  $field_group->group_name = 'group_user_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_puluser_office',
      1 => 'field_puluser_phone_number',
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
  $export['group_user_contact|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_sublibrarian|user|user|form';
  $field_group->group_name = 'group_user_sublibrarian';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject Librarian Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_puluser_libguide_author_id',
      1 => 'field_puluser_sublibrarian',
      2 => 'field_puluser_appt_calendar',
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
  $export['group_user_sublibrarian|user|user|form'] = $field_group;

  return $export;
}
