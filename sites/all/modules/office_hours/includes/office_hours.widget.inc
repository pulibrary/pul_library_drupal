<?php

/**
 * @file
 * Implements the office_hours widget.
 */

/**
 * Implements hook_field_widget_info().
 */
function office_hours_field_widget_info() {
  return array(
    'office_hours' => array(
      'label' => t('Office hours'),
      'field types' => array('office_hours'),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_form().
 *
 * Generates a set of time_block form-items.
 * N.B. when changing this function, be aware that it is also used in office_hours_field_settings_form().
 */
function office_hours_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  // Get field settings, to make it accessible for each element in other functions.
  $cardinality = $field['settings']['cardinality'];

  // Get the valid minutes, using Date API.
  $minutes = date_minutes('i', FALSE, $field['settings']['granularity']);
  $minutes = drupal_map_assoc($minutes);

  // Get the valid hours. Date API doesn't provide a straight method for this.
  $hours = _office_hours_field_widget_hours($field['settings']);
//  $hours = drupal_map_assoc($hours); // $key == $value.

  // Get the day names, ordered to match the first day of the week,
  // according to system settings.
  $daynames = date_week_days(TRUE);
  $first_day = variable_get('date_first_day', 0);

  // Create an indexed two level array of time blocks.
  // First level are day numbers. Second level contains field values arranged by daydelta.
  $indexed_days = array_fill_keys(array(0, 1, 2, 3, 4, 5, 6), array());
  foreach ($items as $index => $item) {
    $indexed_days[(int) $item['day']][] = $item;
  }
  $items = $indexed_days;

  // Build elements, sorted by first_day_of_week.
  $elements = array();
  $days = date_week_days_ordered(range(0, 6));
  foreach ($days as $index => $day) {
    // todo: theme_function clears values above cardinality. move it here.
    for ($daydelta = 0; $daydelta < max(2, $cardinality); $daydelta++) {
      $element['#type'] = 'office_hours_block';
      $element['#default_value'] = isset($items[$day][$daydelta]['starthours']) ? $items[$day][$daydelta] : NULL;
      $element['#day'] = $day;
      $element['#daydelta'] = $daydelta;
      $element['#dayname'] = $daynames[$day];
      $element['#field_settings'] = $field['settings'];
      $element['#field_settings']['#hours'] = $hours;
      $element['#field_settings']['#minutes'] = $minutes;

      $elements[] = $element;
    }
  }

  // Build multi element widget.
  $field_elements = array(
    '#theme' => 'office_hours_week',
    '#field_name' => $field['field_name'],
    '#title' => check_plain($instance['label']),
    '#required' => $instance['required'],
    '#description' => field_filter_xss($instance['description']),
  ) + $elements;

  return $field_elements;
}

/**
 * Implements hook_field_widget_error().
 *
 * This is necessary to show the errors thrown in hook_field_validate().
 */
function office_hours_field_widget_error($element, $error, $form, &$form_state) {
  form_error($element, $error['message']);
}
