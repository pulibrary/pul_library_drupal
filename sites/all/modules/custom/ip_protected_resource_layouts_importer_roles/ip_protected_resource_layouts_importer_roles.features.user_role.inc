<?php

/**
 * @file
 * ip_protected_resource_layouts_importer_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ip_protected_resource_layouts_importer_roles_user_default_roles() {
  $roles = array();

  // Exported role: IP Resource Manager.
  $roles['IP Resource Manager'] = array(
    'name' => 'IP Resource Manager',
    'weight' => 23,
  );

  return $roles;
}
