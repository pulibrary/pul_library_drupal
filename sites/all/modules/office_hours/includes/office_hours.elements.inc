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
  $element['#suffix'] = '';

  $blocks_per_day = $element['#field_settings']['cardinality'];
  $daydelta = $element['#daydelta'];

  if ($daydelta == 0) {
    // This is the first block, show the dayname.
    $label = t($element['#dayname'], array(), array('context' => 'day_name') );
    $label_style = '';
    $block_style = '';
  }
  elseif ($daydelta >= $blocks_per_day) {
    // In case the number of blocks per day was lowered by admin, this element
    // may have a value. Better clear it (in case a value was entered before).
    // The value will be removed upon the next 'Save' action.
    $label = '';
    $label_style = '';
    // The following style is only needed if js isn't working.
    $block_style = 'style = "display:none;"';

    $element['#value']['starthours'] = '';
    $element['#value']['endhours'] = '';
    // The following class is the trigger for js to hide the row. 
    $element['#prefix'] .= "<div class='oh-hide'>";
    $element['#suffix'] .= '</div>';
  }
  elseif (!empty($element['#value']['starthours'])) {
    // This is a following block with contents, so we show the times.
    $label = t('and');
    $label_style = 'style = "text-align:right;"';
    $block_style = '';
  }
  else {
    // This is an empty following block, so we show the 'add hours' js-link.
    $label = t('and');
    $label_style = 'style = "text-align:right;"';
    $block_style = 'style = "display:none;"';

    // Using 'Add more' instead of 'Add more hours' enables automatic translation.
    $link = l(t('Add more'), '', array('attributes' => array('class' => 'oh-add-more-link')));
    $element['#prefix'] .= $link;
  }
  $element['#prefix'] .= '<div class="form-item office-hours-block" ' . $block_style . '>';
  $element['#prefix'] .= '<label '. $label_style. '>' . $label . '</label>';

  // Show a 'Clear this line' js-link to each element.
  // Use 'Remove', which has lots of translations.
  $clear_link = l(t('Remove'), '', array('attributes' => array('class' => 'oh-clear-link')));
  $element['#suffix'] .= '<div>' . $clear_link . '</div>';

  $element['#suffix'] .= '</div>'; // class="form-item office-hours-block ".

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
    // Using capitals enables automatic translation. mb_strtolower also converts 'À' to 'à'.
    '#prefix' => mb_strtolower( t('From', array('context' => 'office_hours')) ),
    '#default_value' => isset($element['#value']['starthours']) ? $element['#value']['starthours'] : NULL ,
    '#field_settings' => $element['#field_settings'],
  );
  $element['endhours'] = array(
    '#type' => 'office_hours_select',
    // Using capitals enables automatic translation. mb_strtolower also converts 'À' to 'à'.
    '#prefix' => mb_strtolower( t('To', array('context' => 'office_hours')) ),
    '#default_value' => isset($element['#value']['endhours']) ? $element['#value']['endhours'] : NULL,
    '#field_settings' => $element['#field_settings'],
  );

  return $element;
}

/**
 * Callback for office_hours_select element.
 *
 * Takes the #default_value and dissects it in hours, minutes and ampm indicator.
 */
function _office_hours_select_value_callback($element, $input = FALSE, &$form_state) {
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
  if ($element['#field_settings']['hoursformat'] == 1) {
    // 12 hrs format.
    if ($element['ampm']['#value'] == 'pm' && $hours < 1200) {
      $hours += 1200;
    }
    if ($element['ampm']['#value'] == 'am' && $hours == 1200) {
      $hours = '0000';
    }
  }

  if ($hours != '' && $minutes != '') {
    form_set_value($element, (string) $hours + $minutes, $form_state);
  }
  else {
    form_set_value($element, '', $form_state);
  }
  if ($hours < 0000 || $hours > 2300) {
    form_error($element, t('Hours should be between 0 and 23.', array(), array('office_hours')));
  }
  if ($minutes < 0 || $minutes > 59) {
    form_error($element, t('Minutes should be between 0 and 59.', array(), array('office_hours')));
  }
}

/**
 * Implements a callback for _office_hours_elements().
 *
 * For 'office_hours_block' (day) and 'office_hours_select' (hour) elements.
 * You can find the value in $element['#value'], but better in $form_state['values'],
 * which is set in _office_hours_select_validate().
 */
function _office_hours_block_validate($element, &$form_state) {
  $item = drupal_array_get_nested_value($form_state['values'], $element['#parents']);

  $error_text = '';
  $valhrs = $element['#field_settings']['valhrs'];
  $limitstart = $element['#field_settings']['limitstart'];
  $limitend = $element['#field_settings']['limitend'];
  if (!empty($item['starthours']) xor !empty($item['endhours'])) {
    $error_text = 'Both Opening hours and Closing hours must be set.';
  }
  elseif ($valhrs && ($item['starthours'] > $item['endhours'])) {
    $error_text = 'Closing hours are earlier than Opening hours.';
  }
  elseif (!empty($limitstart) || !empty($limitend)) {
    $starthours = $item['starthours'];
    $endhours = $item['endhours'];
    if (($starthours && $limitstart > $starthours) || ($endhours && $limitend < $endhours)) {
      $error_text = 'Hours are outside limits ( !start - !end ).';
    }
  }

  if ($error_text) {
    $error_text = t($element['#dayname'], array(), array('context' => 'day_name') )
                . ': '
                . t($error_text,
                    array(
                      '!start' => _office_hours_time_to_24hr($limitstart),
                      '!end' => _office_hours_time_to_24hr($limitend),
                    ),
                    array('context' => 'office_hours')
                  );
    form_error($element, check_plain($error_text));
  }
}
