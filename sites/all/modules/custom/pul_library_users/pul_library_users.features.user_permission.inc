<?php

/**
 * @file
 * pul_library_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pul_library_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_current_personal_lib'.
  $permissions['create field_current_personal_lib'] = array(
    'name' => 'create field_current_personal_lib',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_personal_lib_contacts'.
  $permissions['create field_personal_lib_contacts'] = array(
    'name' => 'create field_personal_lib_contacts',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_personal_lib_duties'.
  $permissions['create field_personal_lib_duties'] = array(
    'name' => 'create field_personal_lib_duties',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_personal_lib_fun_fact'.
  $permissions['create field_personal_lib_fun_fact'] = array(
    'name' => 'create field_personal_lib_fun_fact',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_personal_lib_spec'.
  $permissions['create field_personal_lib_spec'] = array(
    'name' => 'create field_personal_lib_spec',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_personal_lib_statement'.
  $permissions['create field_personal_lib_statement'] = array(
    'name' => 'create field_personal_lib_statement',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pul_user_staff_sort'.
  $permissions['create field_pul_user_staff_sort'] = array(
    'name' => 'create field_pul_user_staff_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_appt_calendar'.
  $permissions['create field_puluser_appt_calendar'] = array(
    'name' => 'create field_puluser_appt_calendar',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_building_location'.
  $permissions['create field_puluser_building_location'] = array(
    'name' => 'create field_puluser_building_location',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_department'.
  $permissions['create field_puluser_department'] = array(
    'name' => 'create field_puluser_department',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_department_sort'.
  $permissions['create field_puluser_department_sort'] = array(
    'name' => 'create field_puluser_department_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_displaytitle'.
  $permissions['create field_puluser_displaytitle'] = array(
    'name' => 'create field_puluser_displaytitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_division'.
  $permissions['create field_puluser_division'] = array(
    'name' => 'create field_puluser_division',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_divsect'.
  $permissions['create field_puluser_divsect'] = array(
    'name' => 'create field_puluser_divsect',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_dmgimport_id'.
  $permissions['create field_puluser_dmgimport_id'] = array(
    'name' => 'create field_puluser_dmgimport_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_fname'.
  $permissions['create field_puluser_fname'] = array(
    'name' => 'create field_puluser_fname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_formalname'.
  $permissions['create field_puluser_formalname'] = array(
    'name' => 'create field_puluser_formalname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_libguide_author_id'.
  $permissions['create field_puluser_libguide_author_id'] = array(
    'name' => 'create field_puluser_libguide_author_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_librarystaffid'.
  $permissions['create field_puluser_librarystaffid'] = array(
    'name' => 'create field_puluser_librarystaffid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_lname'.
  $permissions['create field_puluser_lname'] = array(
    'name' => 'create field_puluser_lname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_middle_name'.
  $permissions['create field_puluser_middle_name'] = array(
    'name' => 'create field_puluser_middle_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_netid'.
  $permissions['create field_puluser_netid'] = array(
    'name' => 'create field_puluser_netid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_nick_name'.
  $permissions['create field_puluser_nick_name'] = array(
    'name' => 'create field_puluser_nick_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_office'.
  $permissions['create field_puluser_office'] = array(
    'name' => 'create field_puluser_office',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_officialtitle'.
  $permissions['create field_puluser_officialtitle'] = array(
    'name' => 'create field_puluser_officialtitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_phone_number'.
  $permissions['create field_puluser_phone_number'] = array(
    'name' => 'create field_puluser_phone_number',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_princetonid'.
  $permissions['create field_puluser_princetonid'] = array(
    'name' => 'create field_puluser_princetonid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_section'.
  $permissions['create field_puluser_section'] = array(
    'name' => 'create field_puluser_section',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_short_title'.
  $permissions['create field_puluser_short_title'] = array(
    'name' => 'create field_puluser_short_title',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_sublibrarian'.
  $permissions['create field_puluser_sublibrarian'] = array(
    'name' => 'create field_puluser_sublibrarian',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_temp_staff_record'.
  $permissions['create field_puluser_temp_staff_record'] = array(
    'name' => 'create field_puluser_temp_staff_record',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_unit'.
  $permissions['create field_puluser_unit'] = array(
    'name' => 'create field_puluser_unit',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puluser_unit_sort'.
  $permissions['create field_puluser_unit_sort'] = array(
    'name' => 'create field_puluser_unit_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_personal_lib'.
  $permissions['edit field_current_personal_lib'] = array(
    'name' => 'edit field_current_personal_lib',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_personal_lib_contacts'.
  $permissions['edit field_personal_lib_contacts'] = array(
    'name' => 'edit field_personal_lib_contacts',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_personal_lib_duties'.
  $permissions['edit field_personal_lib_duties'] = array(
    'name' => 'edit field_personal_lib_duties',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_personal_lib_fun_fact'.
  $permissions['edit field_personal_lib_fun_fact'] = array(
    'name' => 'edit field_personal_lib_fun_fact',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_personal_lib_spec'.
  $permissions['edit field_personal_lib_spec'] = array(
    'name' => 'edit field_personal_lib_spec',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_personal_lib_statement'.
  $permissions['edit field_personal_lib_statement'] = array(
    'name' => 'edit field_personal_lib_statement',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pul_user_staff_sort'.
  $permissions['edit field_pul_user_staff_sort'] = array(
    'name' => 'edit field_pul_user_staff_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_appt_calendar'.
  $permissions['edit field_puluser_appt_calendar'] = array(
    'name' => 'edit field_puluser_appt_calendar',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_building_location'.
  $permissions['edit field_puluser_building_location'] = array(
    'name' => 'edit field_puluser_building_location',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_department'.
  $permissions['edit field_puluser_department'] = array(
    'name' => 'edit field_puluser_department',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_department_sort'.
  $permissions['edit field_puluser_department_sort'] = array(
    'name' => 'edit field_puluser_department_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_displaytitle'.
  $permissions['edit field_puluser_displaytitle'] = array(
    'name' => 'edit field_puluser_displaytitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_division'.
  $permissions['edit field_puluser_division'] = array(
    'name' => 'edit field_puluser_division',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_divsect'.
  $permissions['edit field_puluser_divsect'] = array(
    'name' => 'edit field_puluser_divsect',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_dmgimport_id'.
  $permissions['edit field_puluser_dmgimport_id'] = array(
    'name' => 'edit field_puluser_dmgimport_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_fname'.
  $permissions['edit field_puluser_fname'] = array(
    'name' => 'edit field_puluser_fname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_formalname'.
  $permissions['edit field_puluser_formalname'] = array(
    'name' => 'edit field_puluser_formalname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_libguide_author_id'.
  $permissions['edit field_puluser_libguide_author_id'] = array(
    'name' => 'edit field_puluser_libguide_author_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Author' => 'Web Author',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_librarystaffid'.
  $permissions['edit field_puluser_librarystaffid'] = array(
    'name' => 'edit field_puluser_librarystaffid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_lname'.
  $permissions['edit field_puluser_lname'] = array(
    'name' => 'edit field_puluser_lname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_middle_name'.
  $permissions['edit field_puluser_middle_name'] = array(
    'name' => 'edit field_puluser_middle_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_netid'.
  $permissions['edit field_puluser_netid'] = array(
    'name' => 'edit field_puluser_netid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_nick_name'.
  $permissions['edit field_puluser_nick_name'] = array(
    'name' => 'edit field_puluser_nick_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_office'.
  $permissions['edit field_puluser_office'] = array(
    'name' => 'edit field_puluser_office',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_officialtitle'.
  $permissions['edit field_puluser_officialtitle'] = array(
    'name' => 'edit field_puluser_officialtitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_phone_number'.
  $permissions['edit field_puluser_phone_number'] = array(
    'name' => 'edit field_puluser_phone_number',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_princetonid'.
  $permissions['edit field_puluser_princetonid'] = array(
    'name' => 'edit field_puluser_princetonid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_section'.
  $permissions['edit field_puluser_section'] = array(
    'name' => 'edit field_puluser_section',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_short_title'.
  $permissions['edit field_puluser_short_title'] = array(
    'name' => 'edit field_puluser_short_title',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_sublibrarian'.
  $permissions['edit field_puluser_sublibrarian'] = array(
    'name' => 'edit field_puluser_sublibrarian',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Author' => 'Web Author',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_temp_staff_record'.
  $permissions['edit field_puluser_temp_staff_record'] = array(
    'name' => 'edit field_puluser_temp_staff_record',
    'roles' => array(
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_unit'.
  $permissions['edit field_puluser_unit'] = array(
    'name' => 'edit field_puluser_unit',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puluser_unit_sort'.
  $permissions['edit field_puluser_unit_sort'] = array(
    'name' => 'edit field_puluser_unit_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_personal_lib'.
  $permissions['edit own field_current_personal_lib'] = array(
    'name' => 'edit own field_current_personal_lib',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_personal_lib_contacts'.
  $permissions['edit own field_personal_lib_contacts'] = array(
    'name' => 'edit own field_personal_lib_contacts',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_personal_lib_duties'.
  $permissions['edit own field_personal_lib_duties'] = array(
    'name' => 'edit own field_personal_lib_duties',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_personal_lib_fun_fact'.
  $permissions['edit own field_personal_lib_fun_fact'] = array(
    'name' => 'edit own field_personal_lib_fun_fact',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_personal_lib_spec'.
  $permissions['edit own field_personal_lib_spec'] = array(
    'name' => 'edit own field_personal_lib_spec',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_personal_lib_statement'.
  $permissions['edit own field_personal_lib_statement'] = array(
    'name' => 'edit own field_personal_lib_statement',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pul_user_staff_sort'.
  $permissions['edit own field_pul_user_staff_sort'] = array(
    'name' => 'edit own field_pul_user_staff_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_appt_calendar'.
  $permissions['edit own field_puluser_appt_calendar'] = array(
    'name' => 'edit own field_puluser_appt_calendar',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_building_location'.
  $permissions['edit own field_puluser_building_location'] = array(
    'name' => 'edit own field_puluser_building_location',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_department'.
  $permissions['edit own field_puluser_department'] = array(
    'name' => 'edit own field_puluser_department',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_department_sort'.
  $permissions['edit own field_puluser_department_sort'] = array(
    'name' => 'edit own field_puluser_department_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_displaytitle'.
  $permissions['edit own field_puluser_displaytitle'] = array(
    'name' => 'edit own field_puluser_displaytitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_division'.
  $permissions['edit own field_puluser_division'] = array(
    'name' => 'edit own field_puluser_division',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_divsect'.
  $permissions['edit own field_puluser_divsect'] = array(
    'name' => 'edit own field_puluser_divsect',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_dmgimport_id'.
  $permissions['edit own field_puluser_dmgimport_id'] = array(
    'name' => 'edit own field_puluser_dmgimport_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_fname'.
  $permissions['edit own field_puluser_fname'] = array(
    'name' => 'edit own field_puluser_fname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_formalname'.
  $permissions['edit own field_puluser_formalname'] = array(
    'name' => 'edit own field_puluser_formalname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_libguide_author_id'.
  $permissions['edit own field_puluser_libguide_author_id'] = array(
    'name' => 'edit own field_puluser_libguide_author_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Author' => 'Web Author',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_librarystaffid'.
  $permissions['edit own field_puluser_librarystaffid'] = array(
    'name' => 'edit own field_puluser_librarystaffid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_lname'.
  $permissions['edit own field_puluser_lname'] = array(
    'name' => 'edit own field_puluser_lname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_middle_name'.
  $permissions['edit own field_puluser_middle_name'] = array(
    'name' => 'edit own field_puluser_middle_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_netid'.
  $permissions['edit own field_puluser_netid'] = array(
    'name' => 'edit own field_puluser_netid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_nick_name'.
  $permissions['edit own field_puluser_nick_name'] = array(
    'name' => 'edit own field_puluser_nick_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_office'.
  $permissions['edit own field_puluser_office'] = array(
    'name' => 'edit own field_puluser_office',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_officialtitle'.
  $permissions['edit own field_puluser_officialtitle'] = array(
    'name' => 'edit own field_puluser_officialtitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_phone_number'.
  $permissions['edit own field_puluser_phone_number'] = array(
    'name' => 'edit own field_puluser_phone_number',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_princetonid'.
  $permissions['edit own field_puluser_princetonid'] = array(
    'name' => 'edit own field_puluser_princetonid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_section'.
  $permissions['edit own field_puluser_section'] = array(
    'name' => 'edit own field_puluser_section',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_short_title'.
  $permissions['edit own field_puluser_short_title'] = array(
    'name' => 'edit own field_puluser_short_title',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_sublibrarian'.
  $permissions['edit own field_puluser_sublibrarian'] = array(
    'name' => 'edit own field_puluser_sublibrarian',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Author' => 'Web Author',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_temp_staff_record'.
  $permissions['edit own field_puluser_temp_staff_record'] = array(
    'name' => 'edit own field_puluser_temp_staff_record',
    'roles' => array(
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_unit'.
  $permissions['edit own field_puluser_unit'] = array(
    'name' => 'edit own field_puluser_unit',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puluser_unit_sort'.
  $permissions['edit own field_puluser_unit_sort'] = array(
    'name' => 'edit own field_puluser_unit_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_personal_lib'.
  $permissions['view field_current_personal_lib'] = array(
    'name' => 'view field_current_personal_lib',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_personal_lib_contacts'.
  $permissions['view field_personal_lib_contacts'] = array(
    'name' => 'view field_personal_lib_contacts',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'Undergraduate Student' => 'Undergraduate Student',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_personal_lib_duties'.
  $permissions['view field_personal_lib_duties'] = array(
    'name' => 'view field_personal_lib_duties',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'Undergraduate Student' => 'Undergraduate Student',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_personal_lib_fun_fact'.
  $permissions['view field_personal_lib_fun_fact'] = array(
    'name' => 'view field_personal_lib_fun_fact',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_personal_lib_spec'.
  $permissions['view field_personal_lib_spec'] = array(
    'name' => 'view field_personal_lib_spec',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'Undergraduate Student' => 'Undergraduate Student',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_personal_lib_statement'.
  $permissions['view field_personal_lib_statement'] = array(
    'name' => 'view field_personal_lib_statement',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'Undergraduate Student' => 'Undergraduate Student',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pul_user_staff_sort'.
  $permissions['view field_pul_user_staff_sort'] = array(
    'name' => 'view field_pul_user_staff_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_appt_calendar'.
  $permissions['view field_puluser_appt_calendar'] = array(
    'name' => 'view field_puluser_appt_calendar',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_building_location'.
  $permissions['view field_puluser_building_location'] = array(
    'name' => 'view field_puluser_building_location',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_department'.
  $permissions['view field_puluser_department'] = array(
    'name' => 'view field_puluser_department',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_department_sort'.
  $permissions['view field_puluser_department_sort'] = array(
    'name' => 'view field_puluser_department_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_displaytitle'.
  $permissions['view field_puluser_displaytitle'] = array(
    'name' => 'view field_puluser_displaytitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_division'.
  $permissions['view field_puluser_division'] = array(
    'name' => 'view field_puluser_division',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_divsect'.
  $permissions['view field_puluser_divsect'] = array(
    'name' => 'view field_puluser_divsect',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_dmgimport_id'.
  $permissions['view field_puluser_dmgimport_id'] = array(
    'name' => 'view field_puluser_dmgimport_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_fname'.
  $permissions['view field_puluser_fname'] = array(
    'name' => 'view field_puluser_fname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_formalname'.
  $permissions['view field_puluser_formalname'] = array(
    'name' => 'view field_puluser_formalname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_libguide_author_id'.
  $permissions['view field_puluser_libguide_author_id'] = array(
    'name' => 'view field_puluser_libguide_author_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_librarystaffid'.
  $permissions['view field_puluser_librarystaffid'] = array(
    'name' => 'view field_puluser_librarystaffid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_lname'.
  $permissions['view field_puluser_lname'] = array(
    'name' => 'view field_puluser_lname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_middle_name'.
  $permissions['view field_puluser_middle_name'] = array(
    'name' => 'view field_puluser_middle_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_netid'.
  $permissions['view field_puluser_netid'] = array(
    'name' => 'view field_puluser_netid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_nick_name'.
  $permissions['view field_puluser_nick_name'] = array(
    'name' => 'view field_puluser_nick_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_office'.
  $permissions['view field_puluser_office'] = array(
    'name' => 'view field_puluser_office',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_officialtitle'.
  $permissions['view field_puluser_officialtitle'] = array(
    'name' => 'view field_puluser_officialtitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_phone_number'.
  $permissions['view field_puluser_phone_number'] = array(
    'name' => 'view field_puluser_phone_number',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_princetonid'.
  $permissions['view field_puluser_princetonid'] = array(
    'name' => 'view field_puluser_princetonid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_section'.
  $permissions['view field_puluser_section'] = array(
    'name' => 'view field_puluser_section',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_short_title'.
  $permissions['view field_puluser_short_title'] = array(
    'name' => 'view field_puluser_short_title',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_sublibrarian'.
  $permissions['view field_puluser_sublibrarian'] = array(
    'name' => 'view field_puluser_sublibrarian',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_temp_staff_record'.
  $permissions['view field_puluser_temp_staff_record'] = array(
    'name' => 'view field_puluser_temp_staff_record',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_unit'.
  $permissions['view field_puluser_unit'] = array(
    'name' => 'view field_puluser_unit',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puluser_unit_sort'.
  $permissions['view field_puluser_unit_sort'] = array(
    'name' => 'view field_puluser_unit_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_personal_lib'.
  $permissions['view own field_current_personal_lib'] = array(
    'name' => 'view own field_current_personal_lib',
    'roles' => array(
      'Undergraduate Student' => 'Undergraduate Student',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_personal_lib_contacts'.
  $permissions['view own field_personal_lib_contacts'] = array(
    'name' => 'view own field_personal_lib_contacts',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_personal_lib_duties'.
  $permissions['view own field_personal_lib_duties'] = array(
    'name' => 'view own field_personal_lib_duties',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_personal_lib_fun_fact'.
  $permissions['view own field_personal_lib_fun_fact'] = array(
    'name' => 'view own field_personal_lib_fun_fact',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_personal_lib_spec'.
  $permissions['view own field_personal_lib_spec'] = array(
    'name' => 'view own field_personal_lib_spec',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_personal_lib_statement'.
  $permissions['view own field_personal_lib_statement'] = array(
    'name' => 'view own field_personal_lib_statement',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Personal Librarian' => 'Personal Librarian',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pul_user_staff_sort'.
  $permissions['view own field_pul_user_staff_sort'] = array(
    'name' => 'view own field_pul_user_staff_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_appt_calendar'.
  $permissions['view own field_puluser_appt_calendar'] = array(
    'name' => 'view own field_puluser_appt_calendar',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_building_location'.
  $permissions['view own field_puluser_building_location'] = array(
    'name' => 'view own field_puluser_building_location',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_department'.
  $permissions['view own field_puluser_department'] = array(
    'name' => 'view own field_puluser_department',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_department_sort'.
  $permissions['view own field_puluser_department_sort'] = array(
    'name' => 'view own field_puluser_department_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_displaytitle'.
  $permissions['view own field_puluser_displaytitle'] = array(
    'name' => 'view own field_puluser_displaytitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_division'.
  $permissions['view own field_puluser_division'] = array(
    'name' => 'view own field_puluser_division',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_divsect'.
  $permissions['view own field_puluser_divsect'] = array(
    'name' => 'view own field_puluser_divsect',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_dmgimport_id'.
  $permissions['view own field_puluser_dmgimport_id'] = array(
    'name' => 'view own field_puluser_dmgimport_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_fname'.
  $permissions['view own field_puluser_fname'] = array(
    'name' => 'view own field_puluser_fname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_formalname'.
  $permissions['view own field_puluser_formalname'] = array(
    'name' => 'view own field_puluser_formalname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_libguide_author_id'.
  $permissions['view own field_puluser_libguide_author_id'] = array(
    'name' => 'view own field_puluser_libguide_author_id',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_librarystaffid'.
  $permissions['view own field_puluser_librarystaffid'] = array(
    'name' => 'view own field_puluser_librarystaffid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_lname'.
  $permissions['view own field_puluser_lname'] = array(
    'name' => 'view own field_puluser_lname',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_middle_name'.
  $permissions['view own field_puluser_middle_name'] = array(
    'name' => 'view own field_puluser_middle_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_netid'.
  $permissions['view own field_puluser_netid'] = array(
    'name' => 'view own field_puluser_netid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_nick_name'.
  $permissions['view own field_puluser_nick_name'] = array(
    'name' => 'view own field_puluser_nick_name',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_office'.
  $permissions['view own field_puluser_office'] = array(
    'name' => 'view own field_puluser_office',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_officialtitle'.
  $permissions['view own field_puluser_officialtitle'] = array(
    'name' => 'view own field_puluser_officialtitle',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_phone_number'.
  $permissions['view own field_puluser_phone_number'] = array(
    'name' => 'view own field_puluser_phone_number',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_princetonid'.
  $permissions['view own field_puluser_princetonid'] = array(
    'name' => 'view own field_puluser_princetonid',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_section'.
  $permissions['view own field_puluser_section'] = array(
    'name' => 'view own field_puluser_section',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_short_title'.
  $permissions['view own field_puluser_short_title'] = array(
    'name' => 'view own field_puluser_short_title',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_sublibrarian'.
  $permissions['view own field_puluser_sublibrarian'] = array(
    'name' => 'view own field_puluser_sublibrarian',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_temp_staff_record'.
  $permissions['view own field_puluser_temp_staff_record'] = array(
    'name' => 'view own field_puluser_temp_staff_record',
    'roles' => array(
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_unit'.
  $permissions['view own field_puluser_unit'] = array(
    'name' => 'view own field_puluser_unit',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puluser_unit_sort'.
  $permissions['view own field_puluser_unit_sort'] = array(
    'name' => 'view own field_puluser_unit_sort',
    'roles' => array(
      'Library HR Manager' => 'Library HR Manager',
      'Web Manager' => 'Web Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
