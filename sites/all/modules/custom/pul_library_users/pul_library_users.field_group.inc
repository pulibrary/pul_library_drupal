<?php

/**
 * @file
 * pul_library_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_library_users_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expert_profile|user|user|form';
  $field_group->group_name = 'group_expert_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_puluser_libguide_author_id',
      1 => 'field_puluser_sublibrarian',
      2 => 'field_expert_bio',
      3 => 'field_expert_subject_areas',
      4 => 'field_expert_departments',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-expert-profile field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Expert Profile',
    ),
    'format_type' => 'tab',
    'label' => 'Expert Profile',
    'weight' => '6',
  );
  $field_groups['group_expert_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_lib_info|user|user|form';
  $field_group->group_name = 'group_personal_lib_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_puluser_appt_calendar',
      1 => 'field_personal_lib_statement',
      2 => 'field_personal_lib_duties',
      3 => 'field_personal_lib_contacts',
      4 => 'field_current_personal_lib',
      5 => 'field_personal_lib_spec',
      6 => 'field__personal_lib_fun_fact',
      7 => 'field_personal_lib_class_year',
      8 => 'field_pl_residential_college',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Personal Librarian Information',
    'weight' => '4',
  );
  $field_groups['group_personal_lib_info|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_puluser_department',
      1 => 'field_puluser_displaytitle',
      2 => 'field_puluser_fname',
      3 => 'field_puluser_formalname',
      4 => 'field_puluser_lname',
      5 => 'field_puluser_officialtitle',
      6 => 'field_puluser_division',
      7 => 'field_puluser_section',
      8 => 'field_puluser_short_title',
      9 => 'field_puluser_unit',
      10 => 'field_puluser_nick_name',
      11 => 'field_puluser_middle_name',
      12 => 'picture',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-puluser-basicinfo field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Basic Info',
    'weight' => '1',
  );
  $field_groups['group_puluser_basicinfo|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_puluser_dmgimport_id',
      1 => 'field_puluser_librarystaffid',
      2 => 'field_puluser_netid',
      3 => 'field_puluser_princetonid',
      4 => 'field_pul_user_staff_sort',
      5 => 'field_puluser_unit_sort',
      6 => 'field_puluser_department_sort',
      7 => 'field_puluser_divsect',
      8 => 'field_puluser_temp_staff_record',
      9 => 'timezone',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-user-admininfo field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Administrative Info',
    'weight' => '3',
  );
  $field_groups['group_user_admininfo|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_puluser_office',
      1 => 'field_puluser_phone_number',
      2 => 'field_puluser_building_location',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-user-contact field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Contact Info',
    'weight' => '2',
  );
  $field_groups['group_user_contact|user|user|form'] = $field_group;

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
    'children' => array(),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-user-sublibrarian field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Subject Librarian Details',
    'weight' => '7',
  );
  $field_groups['group_user_sublibrarian|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrative Info');
  t('Basic Info');
  t('Contact Info');
  t('Expert Profile');
  t('Personal Librarian Information');
  t('Subject Librarian Details');

  return $field_groups;
}
