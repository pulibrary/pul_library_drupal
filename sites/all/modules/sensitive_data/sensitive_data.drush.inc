<?php

define('SENSITIVE_DATA_BASE_PATH', __DIR__);
define('SENSITIVE_DATA_CHECK_BASE_PATH', SENSITIVE_DATA_BASE_PATH . '/Check/SensitiveData');
define('SENSITIVE_DATA_TYPE_BASE_PATH', SENSITIVE_DATA_BASE_PATH . '/DataType');

/**
 * Implements hook_drush_command().
 */
function sensitive_data_drush_command() {
  $items = array();

  $items['audit_sensitive_data'] = array(
    'description' => dt('Audit a site for potentially sensitive data.'),
    'aliases' => array('sensitive-data', 'asd'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'options' => site_audit_common_options(),
    'checks' => array(
      array(
        'name' => 'EntityField',
        'location' => SENSITIVE_DATA_CHECK_BASE_PATH . '/EntityField.php',
      ),
      array(
        'name' => 'WebformComponent',
        'location' => SENSITIVE_DATA_CHECK_BASE_PATH . '/WebformComponent.php',
      ),
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_command_alter().
 */
function sensitive_data_drush_command_alter(&$command) {
  if ($command['command'] == 'audit_all') {
    require_once SENSITIVE_DATA_BASE_PATH . '/sensitive_data.site_audit.inc';
    require_once SENSITIVE_DATA_BASE_PATH . '/DataType/Interface.php';

    $command['reports'][] = array(
      'name' => 'SensitiveData',
      'location' => SENSITIVE_DATA_BASE_PATH . '/Report/SensitiveData.php',
    );
  }
}

/**
 * Sensitive Data command validation.
 */
function drush_sensitive_data_audit_sensitive_data_validate() {
  return site_audit_version_check();
}

/**
 * Command callback for sensitive-data command.
 */
function drush_sensitive_data_audit_sensitive_data() {
  require_once SENSITIVE_DATA_BASE_PATH . '/sensitive_data.site_audit.inc';
  require_once SENSITIVE_DATA_BASE_PATH . '/Report/SensitiveData.php';
  require_once SENSITIVE_DATA_BASE_PATH . '/DataType/Interface.php';

  $report = new SiteAuditReportSensitiveData();
  $report->render();
}
