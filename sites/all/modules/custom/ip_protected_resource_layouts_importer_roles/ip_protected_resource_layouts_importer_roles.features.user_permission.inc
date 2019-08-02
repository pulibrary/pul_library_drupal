<?php

/**
 * @file
 * ip_protected_resource_layouts_importer_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ip_protected_resource_layouts_importer_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ip_protected_db_resource content'.
  $permissions['create ip_protected_db_resource content'] = array(
    'name' => 'create ip_protected_db_resource content',
    'roles' => array(
      'DMG Manager' => 'DMG Manager',
      'IP Resource Manager' => 'IP Resource Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ip_protected_db_resource content'.
  $permissions['delete any ip_protected_db_resource content'] = array(
    'name' => 'delete any ip_protected_db_resource content',
    'roles' => array(
      'IP Resource Manager' => 'IP Resource Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ip_protected_db_resource content'.
  $permissions['delete own ip_protected_db_resource content'] = array(
    'name' => 'delete own ip_protected_db_resource content',
    'roles' => array(
      'DMG Manager' => 'DMG Manager',
      'IP Resource Manager' => 'IP Resource Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ip_protected_db_resource content'.
  $permissions['edit any ip_protected_db_resource content'] = array(
    'name' => 'edit any ip_protected_db_resource content',
    'roles' => array(
      'DMG Manager' => 'DMG Manager',
      'IP Resource Manager' => 'IP Resource Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ip_protected_db_resource content'.
  $permissions['edit own ip_protected_db_resource content'] = array(
    'name' => 'edit own ip_protected_db_resource content',
    'roles' => array(
      'DMG Manager' => 'DMG Manager',
      'IP Resource Manager' => 'IP Resource Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
