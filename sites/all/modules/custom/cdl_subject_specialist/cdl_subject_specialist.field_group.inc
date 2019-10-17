<?php

/**
 * @file
 * cdl_subject_specialist.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cdl_subject_specialist_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sel_profile_bio|node|subject_specialists|form';
  $field_group->group_name = 'group_sel_profile_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_specialists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biographical Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_job_title',
      2 => 'field_last_name_first_name',
      3 => 'field_library_directory_profile',
      4 => 'field_sel_first_name',
      5 => 'field_sel_last_name',
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
  $field_groups['group_sel_profile_bio|node|subject_specialists|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sel_profile_location|node|subject_specialists|form';
  $field_group->group_name = 'group_sel_profile_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_specialists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_office_location',
      1 => 'field_sel_office_directions',
      2 => 'field_sel_pul_library',
      3 => 'field_telephone',
      4 => 'field_sel_office_hours',
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
  $field_groups['group_sel_profile_location|node|subject_specialists|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sel_profile_other|node|subject_specialists|form';
  $field_group->group_name = 'group_sel_profile_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_specialists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '5',
    'children' => array(
      0 => 'field_collections_assistants',
      1 => 'field_department',
      2 => 'field_e_mail',
      3 => 'field_library',
      4 => 'field_profile_image',
      5 => 'field_subject_databases',
      6 => 'field_subject_specialities',
      7 => 'field_subjects',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sel-profile-other field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sel_profile_other|node|subject_specialists|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sel_profile_topics|node|subject_specialists|form';
  $field_group->group_name = 'group_sel_profile_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subject_specialists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics, Areas, Subjects',
    'weight' => '4',
    'children' => array(
      0 => 'field_collecting_policies_spec',
      1 => 'field_research_guides_websites',
      2 => 'field_sel_library_department',
      3 => 'field_selector_subject_areas',
      4 => 'field_subject_area',
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
  $field_groups['group_sel_profile_topics|node|subject_specialists|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Biographical Information');
  t('Location Information');
  t('Other');
  t('Topics, Areas, Subjects');

  return $field_groups;
}
