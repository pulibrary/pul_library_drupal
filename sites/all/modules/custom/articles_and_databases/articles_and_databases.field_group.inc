<?php
/**
 * @file
 * articles_and_databases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function articles_and_databases_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_access|node|database|form';
  $field_group->group_name = 'group_db_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '3',
    'children' => array(
      0 => 'field_db_access_note',
      1 => 'field_db_mobile_support',
      2 => 'field_db_on_campus_only',
      3 => 'field_db_restricted_access',
      4 => 'field_db_access_onsite',
      5 => 'field_db_location_access_note',
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
  $export['group_db_access|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_admininfo|node|database|form';
  $field_group->group_name = 'group_db_admininfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_db_voyager_id',
      1 => 'field_db_importid',
      2 => 'field_db_title_import_id',
      3 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Administrative Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_db_admininfo|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_copyright_access|node|database|default';
  $field_group->group_name = 'group_db_copyright_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Copyright & Access',
    'weight' => '4',
    'children' => array(
      0 => 'field_db_access_note',
      1 => 'field_db_copyright_information',
      2 => 'field_db_mobile_support',
      3 => 'field_db_location_access_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_db_copyright_access|node|database|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_display_otherurls|node|database|default';
  $field_group->group_name = 'group_db_display_otherurls';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '5',
    'children' => array(
      0 => 'field_db_alternative_urls',
      1 => 'field_db_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_db_display_otherurls|node|database|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_ezproxyifno|node|database|form';
  $field_group->group_name = 'group_db_ezproxyifno';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EZproxy Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_db_grp_member_of',
      1 => 'field_db_proxy_configuration',
      2 => 'field_db_use_proxy',
      3 => 'field_db_ezproxy_special',
      4 => 'field_db_shibboleth_enabled',
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
  $export['group_db_ezproxyifno|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_generalinfo|node|database|form';
  $field_group->group_name = 'group_db_generalinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database Information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_db_copyright_information',
      2 => 'field_db_display_active',
      3 => 'field_db_date_coverage',
      4 => 'field_db_short_description',
      5 => 'field_db_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Database Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'General Database Information',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_db_generalinfo|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_issue_status|node|database_issue|form';
  $field_group->group_name = 'group_db_issue_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue Status',
    'weight' => '5',
    'children' => array(
      0 => 'field_db_issue_date_reported',
      1 => 'field_db_issue_open_closed',
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
  $export['group_db_issue_status|node|database_issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_trial_info|node|database|form';
  $field_group->group_name = 'group_db_trial_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trial Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_db_is_trial',
      1 => 'field_db_trial_start_date',
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
  $export['group_db_trial_info|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_urlinfo|node|database|form';
  $field_group->group_name = 'group_db_urlinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URL Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_db_access_url',
      1 => 'field_db_alternative_urls',
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
  $export['group_db_urlinfo|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dboverride_admininfo|node|alternative_database_title|form';
  $field_group->group_name = 'group_dboverride_admininfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alternative_database_title';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_dboverride_title_import_id',
      1 => 'field_dboverride_dbmport_id',
      2 => 'path',
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
  $export['group_dboverride_admininfo|node|alternative_database_title|form'] = $field_group;

  return $export;
}
