<?php

/**
 * @file
 * Office hours form elements and their theming and validation.
 *
 * This file is only included during the edit process to reduce memory usage.
 */

/**
 * Process an individual element.
 *
 * Build the form element. When creating a form using FAPI #process,
 * note that $element['#value'] is already set.
 */
function _office_hours_block_process($element, &$form_state, $form) {
  $element['#prefix'] = '';
  if ($element['#daydelta'] == 0) {
    // This is the first block, show the dayname.
    $label = t($element['#dayname']);
    $style = '';
    $element['#prefix'] .= '<div class="form-item office-hours-block" '. $style . '>';
  }
  elseif ($element['#field_settings']['cardinality'] == 1) {
    // This is the second cell and we're not showing it- better clear it (in case a value was entered before).
    // @todo: not used, since we check cardinality in widget_form. Keep this for later support of 'unlimited' (value -1).
    $label = '';
    $style = ' style = "display:none;"';

    $element['#value']['starthours'] = '';
    $element['#value']['endhours'] = '';
    $element['#prefix'] = "<div class='oh-hide'>";
  }
  elseif (isset($element['#value']['starthours'])) {
    // This is a following block with contents, so we show the times.
    $label = t('and');
    $style = '';
    $element['#prefix'] .= '<div class="form-item office-hours-block" '. $style . '>';
  }
  else {
    // This is an empty following block, so we show the 'add hours link'.
    $label = t('and');
    $style = 'style = "display:none;"';

    $link = l(t('Add more hours'), '', array('attributes' => array('class' => 'oh-add-more-link')));
    $element['#prefix'] .= $link;
    $element['#prefix'] .= '<div class="form-item office-hours-block" '. $style . '>';
  }
  $element['#prefix'] .= '<label>' . $label . '</label>';
  $element['#prefix'] .= '<div class="office-hours-block-hours">';

  $element['#suffix'] = '';
  $element['#suffix'] .= '</div>'; // from-until
  $element['#suffix'] .= !empty($element['#description']) ? '<div class="description">' . $element['#description'] . '</div>' : '';
  $element['#suffix'] .= '</div>'; // field_set-wrapper

  $element['day'] = array(
    '#type' => 'value',
    '#value' => $element['#day'],
  );
  $element['daydelta'] = array(
    '#type' => 'value',
    '#value' => $element['#daydelta'],
  );
  $element['starthours'] = array(
    '#type' => 'office_hours_select',
    '#prefix' => ' ' . t('from'),
    '#default_value' => isset($element['#value']['starthours']) ? $element['#value']['starthours'] : NULL ,
    '#field_settings' => $element['#field_settings'],
  ); 
  $element['endhours'] = array(
    '#type' => 'office_hours_select',
    '#prefix' => ' ' . t('until'),
    '#default_value' => isset($element['#value']['endhours']) ? $element['#value']['endhours'] : NULL,
    '#field_settings' => $element['#field_settings'],
  );

  return $element;
}

/**
 * Widget's value callback for office_hours_select element.
 * Takes the #default_value and dissects it in hours, minutes and ampm indicator.
 */
function _office_hours_select_value_callback($element, $input = FALSE, &$form_state) {
  // return array('hour' => $hour, 'minute' => $minute, 'ampm' => $ampm);
  return _office_hours_field_widget_time_parse($element['#default_value'], $element['#field_settings']['hoursformat']);
}

/**
 * Process the office_hours_select element.
 */
function _office_hours_select_process($element, &$form_state, $form) {
  $element['hours'] = array(
    '#type' => 'select',
    '#options' => $element['#field_settings']['#hours'],
    '#default_value' => $element['#value']['hour'],
  );
  $element['minutes'] = array(
    '#type' => 'select',
    '#options' => $element['#field_settings']['#minutes'],
    '#default_value' => $element['#value']['minute'],
  );
  if ($element['#field_settings']['hoursformat'] == 1) {
    $element['ampm'] = array(
      '#type' => 'select',
      '#options' => date_ampm(),
      '#default_value' => $element['#value']['ampm'],
    );
  }

  return $element;
}

/**
 * Validate the hours selector element.
 */
function _office_hours_select_validate($element, &$form_state) {
  $hours = $element['hours']['#value'];
  $minutes = ($element['minutes']['#value'] == 0) ? '00' : $element['minutes']['#value'];
  if ($element['#field_settings']['hoursformat'] == 1) { // 12 hrs format
    if ($element['ampm']['#value'] == 'pm' && $hours < 12) $hours += 12;
    if ($element['ampm']['#value'] == 'am' && $hours == 12) $hours = '00';
  }

  if ($hours != '' && $minutes != '') {
    form_set_value($element, (string)$hours . $minutes, $form_state);
  }
  else {
    form_set_value($element, '', $form_state);
  }
  if ($hours < 0 || $hours > 23) {
    form_error($element, t('Hours should be between 0 and 23.'));
  }
  if ($minutes < 0 || $minutes > 59) {
    form_error($element, t('Minutes should be between 0 and 59.'));
  }
}

/**
 * Implements a callback for _office_hours_elements()
 * which defines the 'office_hours_block' (day) and 'office_hours_select' (hour) elements.
 *
 * You can find the value in $element['#value'], but better in $form_state['values'],
 * which is set in _office_hours_select_validate().
 */
function _office_hours_block_validate($element, &$form_state) {
  $item = drupal_array_get_nested_value($form_state['values'], $element['#parents']);

  $error_text = '';
  $valhrs = $element['#field_settings']['valhrs'];
  $limitstart = $element['#field_settings']['limitstart'];
  $limitend = $element['#field_settings']['limitend'];
  if (!empty($item['starthours']) xor !empty($item['endhours']) ) {
    $error_text = 'Both Opening hours and Closing hours must be set.';
  }
  elseif ( ($valhrs) && ($item['starthours'] > $item['endhours']) ) {
    $error_text = 'Closing hours are earlier than Opening hours.';
  }
  elseif (!empty($limitstart) || !empty($limitend)) {
    $starthours = $item['starthours'];
    $endhours = $item['endhours'];
    if ( ($starthours && ($limitstart * 100) > $starthours) || ($endhours && ($limitend * 100) < $endhours) ) {
      $error_text = 'Hours are outside limits ( !start - !end ).'; 
    }
  }

  if ($error_text) {
    $weekdays = date_week_days(TRUE);
    $error_text  = t('!weekday: ' . $error_text,   
                     array('!weekday' => $element['#dayname'],
                           '!start' => $limitstart . ':00' ,
                           '!end' =>$limitend . ':00',
                    ));

    form_error($element, check_plain($error_text));
  }
}
