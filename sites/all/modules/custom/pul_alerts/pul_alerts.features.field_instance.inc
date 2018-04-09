<?php
/**
 * @file
 * pul_alerts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pul_alerts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-homepage_alert-field_emergency_alert_blurb'.
  $field_instances['node-homepage_alert-field_emergency_alert_blurb'] = array(
    'bundle' => 'homepage_alert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text you wish to appear on the alert banner. Be clear and concise.  ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'content_body_mode' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_emergency_alert_blurb',
    'label' => 'Site-wide Alert Message',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-homepage_alert-field_emergency_alert_dates'.
  $field_instances['node-homepage_alert-field_emergency_alert_dates'] = array(
    'bundle' => 'homepage_alert',
    'deleted' => 0,
    'description' => 'Date range during which the message should appear on the homepage. ',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'content_body_mode' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_emergency_alert_dates',
    'label' => 'Emergency Alert Dates',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-homepage_alert-field_emergency_alert_level'.
  $field_instances['node-homepage_alert-field_emergency_alert_level'] = array(
    'bundle' => 'homepage_alert',
    'default_value' => array(
      0 => array(
        'value' => 'info',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'brief_faq_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'content_body_mode' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'node',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 3,
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
    'field_name' => 'field_emergency_alert_level',
    'label' => 'Emergency Alert Level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date range during which the message should appear on the homepage. ');
  t('Emergency Alert Dates');
  t('Emergency Alert Level');
  t('Site-wide Alert Message');
  t('Text you wish to appear on the alert banner. Be clear and concise.  ');

  return $field_instances;
}
