<?php
/**
 * @file
 * library_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_news_field_group_info() {
  $export = array();

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
    'weight' => '6',
    'children' => array(
      0 => 'field_news_images',
      1 => 'field_news_file_attachemtns',
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
  $export['group_news_attachments|node|library_news_item|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_pul_event_date',
      1 => 'field_news_event_location',
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
  $export['group_news_dates_locs|node|library_news_item|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_news_library_contact',
      1 => 'field_news_more_information',
      2 => 'field_news_rel_audiences',
      3 => 'field_tags',
      4 => 'field_news_category',
      5 => 'field_display_on_news_page',
      6 => 'field_news_libraries',
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
  $export['group_news_details|node|library_news_item|form'] = $field_group;

  return $export;
}
