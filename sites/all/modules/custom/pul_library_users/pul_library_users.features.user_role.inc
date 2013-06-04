<?php
/**
 * @file
 * pul_library_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pul_library_users_user_default_roles() {
  $roles = array();

  // Exported role: DMG Manager.
  $roles['DMG Manager'] = array(
    'name' => 'DMG Manager',
    'weight' => 6,
  );

  // Exported role: Library Staff Member.
  $roles['Library Staff Member'] = array(
    'name' => 'Library Staff Member',
    'weight' => 5,
  );

  // Exported role: Subject Specialist.
  $roles['Subject Specialist'] = array(
    'name' => 'Subject Specialist',
    'weight' => 7,
  );

  // Exported role: Web Author.
  $roles['Web Author'] = array(
    'name' => 'Web Author',
    'weight' => 4,
  );

  // Exported role: Web Manager.
  $roles['Web Manager'] = array(
    'name' => 'Web Manager',
    'weight' => 3,
  );

  return $roles;
}
