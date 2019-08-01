<?php

/**
 * @file
 * training_and_workshops.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function training_and_workshops_user_default_roles() {
  $roles = array();

  // Exported role: Training Editors.
  $roles['Training Editors'] = array(
    'name' => 'Training Editors',
    'weight' => 18,
  );

  return $roles;
}
