<?php

/**
 * @file
 * library_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function library_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_homepage_spotlight'.
  $permissions['create field_homepage_spotlight'] = array(
    'name' => 'create field_homepage_spotlight',
    'roles' => array(
      'News Editor' => 'News Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_homepage_spotlight'.
  $permissions['edit field_homepage_spotlight'] = array(
    'name' => 'edit field_homepage_spotlight',
    'roles' => array(
      'News Editor' => 'News Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_homepage_spotlight'.
  $permissions['edit own field_homepage_spotlight'] = array(
    'name' => 'edit own field_homepage_spotlight',
    'roles' => array(
      'News Editor' => 'News Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_homepage_spotlight'.
  $permissions['view field_homepage_spotlight'] = array(
    'name' => 'view field_homepage_spotlight',
    'roles' => array(
      'News Editor' => 'News Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_homepage_spotlight'.
  $permissions['view own field_homepage_spotlight'] = array(
    'name' => 'view own field_homepage_spotlight',
    'roles' => array(
      'News Editor' => 'News Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
