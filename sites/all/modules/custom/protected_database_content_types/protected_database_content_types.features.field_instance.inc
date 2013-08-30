<?php
/**
 * @file
 * protected_database_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function protected_database_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-cas_protected_db_resource-body'
  $field_instances['node-cas_protected_db_resource-body'] = array(
    'bundle' => 'cas_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Notes describing how to access resource.',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Access Note',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-cas_protected_db_resource-field_cas_db_form_setup'
  $field_instances['node-cas_protected_db_resource-field_cas_db_form_setup'] = array(
    'bundle' => 'cas_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional field containing form submission code.',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cas_db_form_setup',
    'label' => 'Form Setup',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-cas_protected_db_resource-field_cas_db_password'
  $field_instances['node-cas_protected_db_resource-field_cas_db_password'] = array(
    'bundle' => 'cas_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Password for resource. Use if no form can be constructed to auto login user to resource. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cas_db_password',
    'label' => 'DB Password',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-cas_protected_db_resource-field_cas_db_resource_url'
  $field_instances['node-cas_protected_db_resource-field_cas_db_resource_url'] = array(
    'bundle' => 'cas_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use if a form cannot be constructed to auto log user into resource. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cas_db_resource_url',
    'label' => 'Resource URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Access Resource',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-cas_protected_db_resource-field_cas_db_username'
  $field_instances['node-cas_protected_db_resource-field_cas_db_username'] = array(
    'bundle' => 'cas_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Shared username for the resource, if needed. Input this if no form can be constructed to auto login user to resource. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cas_db_username',
    'label' => 'DB Username',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-ip_protected_db_resource-body'
  $field_instances['node-ip_protected_db_resource-body'] = array(
    'bundle' => 'ip_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe any special steps or conditions tied to access the resource.',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Access Note',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-ip_protected_db_resource-field_ip_db_password'
  $field_instances['node-ip_protected_db_resource-field_ip_db_password'] = array(
    'bundle' => 'ip_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Password user must supply to access resource. Use if no form code can be constructed to auto login user to resource.',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ip_db_password',
    'label' => 'DB Password',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-ip_protected_db_resource-field_ip_db_resource_url'
  $field_instances['node-ip_protected_db_resource-field_ip_db_resource_url'] = array(
    'bundle' => 'ip_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use if no form can be constructed to auto login user into resource. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ip_db_resource_url',
    'label' => 'Resource URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Access Resource',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-ip_protected_db_resource-field_ip_db_username'
  $field_instances['node-ip_protected_db_resource-field_ip_db_username'] = array(
    'bundle' => 'ip_protected_db_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Username attached to the resource if one is available. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_description_only' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'overridden_title_in_lists' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ip_db_username',
    'label' => 'DB Username',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Note');
  t('DB Password');
  t('DB Username');
  t('Describe any special steps or conditions tied to access the resource.');
  t('Form Setup');
  t('Notes describing how to access resource.');
  t('Optional field containing form submission code.');
  t('Password for resource. Use if no form can be constructed to auto login user to resource. ');
  t('Password user must supply to access resource. Use if no form code can be constructed to auto login user to resource.');
  t('Resource URL');
  t('Shared username for the resource, if needed. Input this if no form can be constructed to auto login user to resource. ');
  t('Use if a form cannot be constructed to auto log user into resource. ');
  t('Use if no form can be constructed to auto login user into resource. ');
  t('Username attached to the resource if one is available. ');

  return $field_instances;
}
