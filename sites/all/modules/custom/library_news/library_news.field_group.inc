<?php

/**
 * @file
 * library_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog|node|library_news_item|form';
  $field_group->group_name = 'group_catalog';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_authors',
      1 => 'field_call_number',
      2 => 'field_catalog_url',
      3 => 'field_full_title',
      4 => 'field_physical_description',
      5 => 'field_publisher',
      6 => 'field_credit',
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
  $field_groups['group_catalog|node|library_news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cd_acquistions|node|library_news_item|form';
  $field_group->group_name = 'group_cd_acquistions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collections Development',
    'weight' => '10',
    'children' => array(
      0 => 'field_acquisition_type',
      1 => 'field_material_access',
      2 => 'field_feat_collection',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Collections Development',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_cd_acquistions|node|library_news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_attachments|node|library_news_item|form';
  $field_group->group_name = 'group_news_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '9',
    'children' => array(
      0 => 'field_news_images',
      1 => 'field_news_file_attachemtns',
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
  $field_groups['group_news_attachments|node|library_news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_dates_locs|node|library_news_item|form';
  $field_group->group_name = 'group_news_dates_locs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates & Locations',
    'weight' => '8',
    'children' => array(
      0 => 'field_pul_event_date',
      1 => 'field_news_event_location',
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
  $field_groups['group_news_dates_locs|node|library_news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_details|node|library_news_item|form';
  $field_group->group_name = 'group_news_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_news_library_contact',
      1 => 'field_news_more_information',
      2 => 'field_news_rel_audiences',
      3 => 'field_tags',
      4 => 'field_news_category',
      5 => 'field_display_on_news_page',
      6 => 'field_news_libraries',
      7 => 'field_homepage_spotlight',
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
  $field_groups['group_news_details|node|library_news_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Catalog Details');
  t('Collections Development');
  t('Dates & Locations');
  t('News Details');

  return $field_groups;
}
