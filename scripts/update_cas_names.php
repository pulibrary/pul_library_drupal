<?php

$users = entity_load('user');
$netids = array_keys($users);

//$library_staff_role = 5;
$undergraduate_role = 29;
foreach ($netids as $id) {
  $user = user_load($id);

  if (user_has_role($undergraduate_role, $user)) {
    if (empty($user->cas_name)) {
      $edit['cas_name'] = $user->name;
      user_save($user, $edit);
      drush_print("Adding CAS USERNAME:" . $user->name);
    }
  }
}
