<?php

/**
 * @file
 * Provides a per-view setting to enable templates.
 */

/**
 * Implements hook_fullcalendar_option_info().
 */
function fullcalendar_tpl_fullcalendar_option_info() {
  return array(
    'fullcalendar_tpl' => array(
      'name' => t('Template'),
    ),
  );
}

/**
 * Implements hook_fullcalendar_option_definition().
 */
function fullcalendar_tpl_fullcalendar_option_definition() {
  $options['fullcalendar_tpl']['contains'] = array(
    'fullcalendar_tpl' => array(
      'default' => FALSE,
      'bool' => TRUE,
    ),
  );
  return $options;
}

/**
 * Implements hook_fullcalendar_options_form().
 */
function fullcalendar_tpl_fullcalendar_options_form(&$form, &$form_state, &$view) {
  $form['fullcalendar_tpl']['fullcalendar_tpl'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow old-style fullcalendar.tpl.php files'),
    '#description' => t('FullCalendar no longer uses template files by default, add extra processing to enable them. Disabling this will improve performance.'),
    '#default_value' => $view->options['fullcalendar_tpl']['fullcalendar_tpl'],
    '#data_type' => 'bool',
  );
}
