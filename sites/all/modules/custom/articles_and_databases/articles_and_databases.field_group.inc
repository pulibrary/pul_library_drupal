<?php

/**
 * @file
 * articles_and_databases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function articles_and_databases_field_group_info() {
  $field_groups = array();

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
    'children' => array(
      0 => 'field_db_access_note',
      1 => 'field_db_mobile_support',
      2 => 'field_db_on_campus_only',
      3 => 'field_db_access_onsite',
      4 => 'field_db_location_access_note',
      5 => 'field_db_restricted_access',
      6 => 'field_db_alumni_access',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-access field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Access',
    'weight' => '3',
  );
  $field_groups['group_db_access|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'field_db_voyager_id',
      1 => 'field_db_importid',
      2 => 'field_db_title_import_id',
      3 => 'field_db_suppressed',
      4 => 'path',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-admininfo field-group-tab',
        'description' => '',
        'required_fields' => 0,
      ),
      'label' => 'Administrative Info',
    ),
    'format_type' => 'tab',
    'label' => 'Administrative Info',
    'weight' => '6',
  );
  $field_groups['group_db_admininfo|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'field_db_access_note',
      1 => 'field_db_access_url',
      2 => 'field_db_copyright_information',
      3 => 'field_db_mobile_support',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-db-copyright-access field-group-fieldset',
        'description' => '',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Copyright & Access',
    'weight' => '1',
  );
  $field_groups['group_db_copyright_access|node|database|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_db_desc_group|node|database|default';
  $field_group->group_name = 'group_db_desc_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_db_date_coverage',
      2 => 'field_db_location_access_note',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-db-desc-group field-group-fieldset',
        'description' => '',
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Description',
    'weight' => '0',
  );
  $field_groups['group_db_desc_group|node|database|default'] = $field_group;

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
    'children' => array(
      0 => 'field_db_alternative_urls',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-db-display-otherurls field-group-fieldset',
        'description' => '',
      ),
      'label' => 'Links',
    ),
    'format_type' => 'fieldset',
    'label' => 'Links',
    'weight' => '2',
  );
  $field_groups['group_db_display_otherurls|node|database|default'] = $field_group;

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
    'children' => array(
      0 => 'field_db_grp_member_of',
      1 => 'field_db_proxy_configuration',
      2 => 'field_db_use_proxy',
      3 => 'field_db_ezproxy_special',
      4 => 'field_db_shibboleth_enabled',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-ezproxyifno field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'EZproxy Information',
    'weight' => '4',
  );
  $field_groups['group_db_ezproxyifno|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'body',
      1 => 'field_db_copyright_information',
      2 => 'field_db_date_coverage',
      3 => 'field_db_display_active',
      4 => 'field_db_keywords',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-db-generalinfo field-group-tab',
        'description' => 'General Database Information',
        'required_fields' => 1,
      ),
      'label' => 'Database Information',
    ),
    'format_type' => 'tab',
    'label' => 'Database Information',
    'weight' => '1',
  );
  $field_groups['group_db_generalinfo|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'field_db_issue_date_reported',
      1 => 'field_db_issue_open_closed',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-db-issue-status field-group-fieldset',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Issue Status',
    'weight' => '5',
  );
  $field_groups['group_db_issue_status|node|database_issue|form'] = $field_group;

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
    'children' => array(
      0 => 'field_db_is_trial',
      1 => 'field_db_trial_start_date',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-trial-info field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Trial Details',
    'weight' => '5',
  );
  $field_groups['group_db_trial_info|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'field_db_access_url',
      1 => 'field_db_alternative_urls',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-db-urlinfo field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'URL Information',
    'weight' => '2',
  );
  $field_groups['group_db_urlinfo|node|database|form'] = $field_group;

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
    'children' => array(
      0 => 'field_dboverride_dbmport_id',
      1 => 'field_dboverride_title_import_id',
      2 => 'path',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-dboverride-admininfo field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Administrative Info',
    'weight' => '6',
  );
  $field_groups['group_dboverride_admininfo|node|alternative_database_title|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_guides|taxonomy_term|database_subjects|form';
  $field_group->group_name = 'group_sub_guides';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'database_subjects';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subs_other_guides',
      1 => 'field_subs_primary_library_guide',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-sub-guides field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Library Guides',
    'weight' => '6',
  );
  $field_groups['group_sub_guides|taxonomy_term|database_subjects|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subs_display_flags|taxonomy_term|database_subjects|form';
  $field_group->group_name = 'group_subs_display_flags';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'database_subjects';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subs_browse_hide',
      1 => 'field_subs_hide_on_specialist',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-subs-display-flags field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Display Flags',
    'weight' => '2',
  );
  $field_groups['group_subs_display_flags|taxonomy_term|database_subjects|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subs_specialist_info|taxonomy_term|database_subjects|form';
  $field_group->group_name = 'group_subs_specialist_info';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'database_subjects';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subs_import_id',
      1 => 'field_subs_specialist',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-subs-specialist-info field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Subject Specialist Info',
    'weight' => '3',
  );
  $field_groups['group_subs_specialist_info|taxonomy_term|database_subjects|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subs_tier_one_list|taxonomy_term|database_subjects|form';
  $field_group->group_name = 'group_subs_tier_one_list';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'database_subjects';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subs_tier_one_resources',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-subs-tier-one-list field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Tier One Resource List',
    'weight' => '4',
  );
  $field_groups['group_subs_tier_one_list|taxonomy_term|database_subjects|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subs_tier_two_list|taxonomy_term|database_subjects|form';
  $field_group->group_name = 'group_subs_tier_two_list';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'database_subjects';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subs_tier_two_resources',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-subs-tier-two-list field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Tier Two Resource List',
    'weight' => '5',
  );
  $field_groups['group_subs_tier_two_list|taxonomy_term|database_subjects|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');
  t('Administrative Info');
  t('Copyright & Access');
  t('Database Information');
  t('Description');
  t('Display Flags');
  t('EZproxy Information');
  t('Issue Status');
  t('Library Guides');
  t('Links');
  t('Subject Specialist Info');
  t('Tier One Resource List');
  t('Tier Two Resource List');
  t('Trial Details');
  t('URL Information');

  return $field_groups;
}
