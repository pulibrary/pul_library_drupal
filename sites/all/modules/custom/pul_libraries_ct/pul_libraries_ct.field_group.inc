<?php

/**
 * @file
 * pul_libraries_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pul_libraries_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branch_image|node|libraries|form';
  $field_group->group_name = 'group_branch_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_library_image',
      1 => 'field_library_exterior_image',
      2 => 'field_library_interior_image',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-branch-image field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Branding',
    'weight' => '14',
  );
  $field_groups['group_branch_image|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branch_spotlight|node|libraries|form';
  $field_group->group_name = 'group_branch_spotlight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_branch_spotlight_item',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-branch-spotlight field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Spotlight',
    'weight' => '13',
  );
  $field_groups['group_branch_spotlight|node|libraries|form'] = $field_group;

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
    'children' => array(
      0 => 'field_address_1',
      1 => 'field_address_2',
      2 => 'field_city',
      3 => 'field_state',
      4 => 'field_zip',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-lib-address field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Library Address',
    ),
    'format_type' => 'tab',
    'label' => 'Library Address',
    'weight' => '29',
  );
  $field_groups['group_lib_address|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_amenities|node|libraries|form';
  $field_group->group_name = 'group_lib_amenities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_amenities',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-lib-amenities field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Amenities',
    'weight' => '10',
  );
  $field_groups['group_lib_amenities|node|libraries|form'] = $field_group;

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
    'children' => array(
      0 => 'field_phone',
      1 => 'field_fax',
      2 => 'field_e_mail_address',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-lib-contact field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Contact Information',
    'weight' => '8',
  );
  $field_groups['group_lib_contact|node|libraries|form'] = $field_group;

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
    'children' => array(
      0 => 'field_lib_hours_code',
      1 => 'field_hours_calendar',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-lib-hours field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Hours',
    'weight' => '6',
  );
  $field_groups['group_lib_hours|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lib_internal_links|node|libraries|form';
  $field_group->group_name = 'group_lib_internal_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_branch_featured_resources',
      1 => 'field_branch_quick_link',
      2 => 'field_branch_external_links',
      3 => 'field_section_library_promotion',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-lib-internal-links field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Internal Links',
    'weight' => '11',
  );
  $field_groups['group_lib_internal_links|node|libraries|form'] = $field_group;

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
    'children' => array(
      0 => 'field_library_homepage',
      1 => 'field_libs_cols_main_menu',
      2 => 'field_lib_main_menu_link',
      3 => 'path',
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
    'label' => 'URLs and Paths',
    'weight' => '7',
  );
  $field_groups['group_lib_links|node|libraries|form'] = $field_group;

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
    'children' => array(
      0 => 'field_building',
      1 => 'field_library_floorplan_link',
      2 => 'group_lib_address',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-loc-det field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Location Detail',
    'weight' => '9',
  );
  $field_groups['group_loc_det|node|libraries|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pul_dash_attachments|node|libraries|form';
  $field_group->group_name = 'group_pul_dash_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'libraries';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_basic_page_files',
      1 => 'field_basic_page_images',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-pul-dash-attachments field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Attachments',
    'weight' => '12',
  );
  $field_groups['group_pul_dash_attachments|node|libraries|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Amenities');
  t('Attachments');
  t('Branding');
  t('Contact Information');
  t('Hours');
  t('Internal Links');
  t('Library Address');
  t('Location Detail');
  t('Spotlight');
  t('URLs and Paths');

  return $field_groups;
}
