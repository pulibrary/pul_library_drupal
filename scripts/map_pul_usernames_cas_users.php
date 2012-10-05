<?php

$user_query = new EntityFieldQuery();
$pul_library_staff = $user_query->entityCondition('entity_type', 'user')
  ->propertyOrderBy('name')
  ->addMetaData('account', user_load(1))
  ->execute();
  
foreach($pul_library_staff['user'] as $user) {
  $user_data = user_load($user->uid);
  //drush_print($user_data->name); 
  $cas_data_for_user = db_select('cas_user', 'c')
    ->condition('uid', $user->uid, '=')
    ->countQuery()->execute()->fetchfield();
  if($cas_data_for_user) {
    drush_print("Cas account already exists for " . $user_data->name);
  } elseif ($user->uid == 1 || $user->uid == 0) {
    drush_print("skipping reserved accounts");
  } else {
    $insert = db_insert('cas_user')
      ->fields(array(
        'cas_name' => $user_data->name,
        'uid' => $user->uid,
      ))
      ->execute();
      if($insert) {
        drush_print("Create cas account for " . $user_data->name);
      }
      
  }

  //print_r($cas_data_for_user);  
}

drush_print(count($pul_library_staff['user']));
