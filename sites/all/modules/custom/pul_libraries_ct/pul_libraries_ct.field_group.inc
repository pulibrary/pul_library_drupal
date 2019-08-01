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
    'label' => 'Branding',
    'weight' => '14',
    'children' => array(
      0 => 'field_library_image',
      1 => 'field_library_exterior_image',
      2 => 'field_library_interior_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-branch-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
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
    'label' => 'Spotlight',
    'weight' => '13',
    'children' => array(
      0 => 'field_branch_spotlight_item',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-branch-spotlight field-group-tab',
        'required_fields' => 1,
      ),
    ),
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
      'label' => 'Library Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-lib-address field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
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
    'label' => 'Amenities',
    'weight' => '10',
    'children' => array(
      0 => 'field_amenities',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lib-amenities field-group-tab',
        'required_fields' => 1,
      ),
    ),
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
    'label' => 'Contact Information',
    'weight' => '8',
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
    'label' => 'Hours',
    'weight' => '6',
    'children' => array(
      0 => 'field_lib_hours_code',
      1 => 'field_hours_calendar',
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
    'label' => 'Internal Links',
    'weight' => '11',
    'children' => array(
      0 => 'field_branch_featured_resources',
      1 => 'field_branch_quick_link',
      2 => 'field_branch_external_links',
      3 => 'field_section_library_promotion',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lib-internal-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
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
    'label' => 'URLs and Paths',
    'weight' => '7',
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
    'label' => 'Location Detail',
    'weight' => '9',
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
    'label' => 'Attachments',
    'weight' => '12',
    'children' => array(
      0 => 'field_basic_page_files',
      1 => 'field_basic_page_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pul-dash-attachments field-group-tab',
        'required_fields' => 1,
      ),
    ),
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
