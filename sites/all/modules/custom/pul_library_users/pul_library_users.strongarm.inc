<?php
/**
 * @file
 * pul_library_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pul_library_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_departments_pattern';
  $strongarm->value = 'department/[term:name]';
  $export['pathauto_taxonomy_term_departments_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_division_pattern';
  $strongarm->value = 'division/[term:name]';
  $export['pathauto_taxonomy_term_division_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_section_pattern';
  $strongarm->value = 'section/[term:name]';
  $export['pathauto_taxonomy_term_section_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_unit_pattern';
  $strongarm->value = 'unit/[term:name]';
  $export['pathauto_taxonomy_term_unit_pattern'] = $strongarm;

  return $export;
}
