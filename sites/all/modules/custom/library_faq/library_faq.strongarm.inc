<?php
/**
 * @file
 * library_faq.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_faq_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_frequently_asked_question_pattern';
  $strongarm->value = 'help/question/[node:nid]';
  $export['pathauto_node_frequently_asked_question_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faq_topics_pattern';
  $strongarm->value = 'faq/[term:parent]/[term:name]';
  $export['pathauto_taxonomy_term_faq_topics_pattern'] = $strongarm;

  return $export;
}
