<?php
/**
 * @file
 * cdl_acqusition_highlights.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cdl_acqusition_highlights_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cdl_highlights_rel|node|acquisitions_highlights|form';
  $field_group->group_name = 'group_cdl_highlights_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'acquisitions_highlights';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link to Related Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_bibliographic_record',
      1 => 'field_specialist',
      2 => 'field_cdl_specialist_profile',
      3 => 'field_cdl_rel_database_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cdl-highlights-rel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cdl_highlights_rel|node|acquisitions_highlights|form'] = $field_group;

  return $export;
}
