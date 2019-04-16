<?php

/**
 * @file
 * library_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function library_faq_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_attachments|node|frequently_asked_question|form';
  $field_group->group_name = 'group_faq_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '6',
    'children' => array(
      0 => 'field_basic_page_images',
      1 => 'field_basic_page_files',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-faq-attachments field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq_attachments|node|frequently_asked_question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_standard|node|frequently_asked_question|form';
  $field_group->group_name = 'group_standard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard Options',
    'weight' => '7',
    'children' => array(
      0 => 'path',
      1 => 'xmlsitemap',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-standard field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_standard|node|frequently_asked_question|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Standard Options');

  return $field_groups;
}
