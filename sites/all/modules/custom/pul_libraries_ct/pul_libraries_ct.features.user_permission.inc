<?php
/**
 * @file
 * pul_libraries_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pul_libraries_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_libs_cols_main_menu'.
  $permissions['create field_libs_cols_main_menu'] = array(
    'name' => 'create field_libs_cols_main_menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_libs_cols_main_menu'.
  $permissions['edit field_libs_cols_main_menu'] = array(
    'name' => 'edit field_libs_cols_main_menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_libs_cols_main_menu'.
  $permissions['edit own field_libs_cols_main_menu'] = array(
    'name' => 'edit own field_libs_cols_main_menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_libs_cols_main_menu'.
  $permissions['view field_libs_cols_main_menu'] = array(
    'name' => 'view field_libs_cols_main_menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_libs_cols_main_menu'.
  $permissions['view own field_libs_cols_main_menu'] = array(
    'name' => 'view own field_libs_cols_main_menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
