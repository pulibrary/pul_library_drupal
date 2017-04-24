<?php
/**
 * @file
 * staff_announcements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_announcements_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_staff_announcement_pdf'.
  $permissions['create field_staff_announcement_pdf'] = array(
    'name' => 'create field_staff_announcement_pdf',
    'roles' => array(
      'Newsletter Editor' => 'Newsletter Editor',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_staff_announcement_pdf'.
  $permissions['edit field_staff_announcement_pdf'] = array(
    'name' => 'edit field_staff_announcement_pdf',
    'roles' => array(
      'Newsletter Editor' => 'Newsletter Editor',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_staff_announcement_pdf'.
  $permissions['edit own field_staff_announcement_pdf'] = array(
    'name' => 'edit own field_staff_announcement_pdf',
    'roles' => array(
      'Newsletter Editor' => 'Newsletter Editor',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_staff_announcement_pdf'.
  $permissions['view field_staff_announcement_pdf'] = array(
    'name' => 'view field_staff_announcement_pdf',
    'roles' => array(
      'Library Staff Member' => 'Library Staff Member',
      'Newsletter Editor' => 'Newsletter Editor',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_staff_announcement_pdf'.
  $permissions['view own field_staff_announcement_pdf'] = array(
    'name' => 'view own field_staff_announcement_pdf',
    'roles' => array(
      'Newsletter Editor' => 'Newsletter Editor',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
