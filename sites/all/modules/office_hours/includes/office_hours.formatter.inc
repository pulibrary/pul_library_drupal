<?php

/**
 * @file
 * Implements the office_hours formatter.
 */

/**
 * Implements hook_field_formatter_info().
 */
function office_hours_field_formatter_info() {
  return array(
    'office_hours' => array(
      'label' => t('Office hours'),
      'field types' => array('office_hours'),
      'settings' => _office_hours_field_formatter_defaults(),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function office_hours_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = _office_hours_field_formatter_defaults($instance['display'][$view_mode]['settings']);
  $form = array();
/*
  // Find timezone fields, to be used in 'Current status'-option.
  $fields = field_info_instances( (isset($form['#entity_type']) ? $form['#entity_type'] : NULL), (isset($form['#bundle']) ? $form['#bundle'] : NULL));
  $timezone_fields = array();
  foreach ($fields as $field_name => $timezone_instance) {
    if ($field_name == $field['field_name']) {
      continue;
    }
    $timezone_field = field_read_field($field_name);

    if (in_array($timezone_field['type'], array('tzfield'))) {
      $timezone_fields[$timezone_instance['field_name']] = $timezone_instance['label'] . ' (' . $timezone_instance['field_name'] . ')';
    }
  }
  if ($timezone_fields) {
    $timezone_fields = array('' => '<None>') + $timezone_fields;
  }
 */

  // @TODO: The settings could go under the several 'core' settings,
  // as above in the implemented hook_FORMID_form_alter functions.
  $form = array(
    '#type' => 'fieldset',
    '#title' => t('Office hours formatter settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#weight' => 5,
  );

/*  // dec-2012: converted from checkbox to selectlist.
  $form['showclosed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show empty days'),
    '#required' => FALSE,
    '#default_value' => $settings['showclosed'],
    '#description' => t('Show empty days on the field.'),
  );
 */
  $form['showclosed'] = array(
    '#type' => 'select',
    '#title' => t('Number of days to show'),
    '#options' => array(
      'all' => t('Show all days'),
      'open' => t('Show only open days'),
      'next' => t('Show next open day'),
      'none' => t('Hide all days'),
    ),
    '#default_value' => $settings['showclosed'],
    '#description' => t('The days to show in the formatter. Useful in combination with the Current Status block.'),
  );
  // First day of week, copied from system.variable.inc.
  $form['date_first_day'] = array(
    '#type' => 'select',
    '#options' => date_week_days(TRUE),
    '#title' => t('First day of week'),
    '#default_value' => $settings['date_first_day'],
  );
  $form['daysformat'] = array(
    '#type' => 'select',
    '#title' => t('Day notation'),
    '#options' => array(
      'long' => t('long'),
      'short' => t('short'),
      'number' => t('number'),
      'none' => t('none'),
    ),
    '#default_value' => $settings['daysformat'],
  );
  $form['hoursformat'] = array(
    '#type' => 'select',
    '#title' => t('Hours format'),
    '#options' => array(
      2 => t('24 hrs') . ' (09:00)',
      0 => t('24 hrs') . ' (9:00)',
      1 => t('12 hrs') . ' (9:00 am)',
    ),
    '#default_value' => $settings['hoursformat'],
    '#required' => FALSE,
    '#description' => t('Format of the clock in the formatter.'),
  );
  $form['compress'] = array(
    '#title' => t('Compress all hours of a day into one set'),
    '#type' => 'checkbox',
    '#default_value' => $settings['compress'],
    '#description' => t('Even if more hours is allowed, you might want to show a compressed form. E.g.,  7:00-12:00, 13:30-19:00 becomes 7:00-19:00.'),
    '#required' => FALSE,
  );
  $form['grouped'] = array(
    '#title' => t('Group consecutive days with same hours into one set'),
    '#type' => 'checkbox',
    '#default_value' => $settings['grouped'],
    '#description' => t('E.g., Mon: 7:00-19:00; Tue: 7:00-19:00 becomes Mon-Tue: 7:00-19:00.'),
    '#required' => FALSE,
  );
  $form['closedformat'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Empty days notation'),
    '#default_value' => $settings['closedformat'],
    '#required' => FALSE,
    '#description' => t('Format of empty (closed) days. You can use translatable text and HTML in this field.'),
  );

  // Taken from views_plugin_row_fields.inc.
  $form['separator_days'] = array(
    '#title' => t('Separators'),
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => $settings['separator_days'],
    '#description' => t('This separator will be placed between the days. Use &#39&ltbr&gt&#39 to show each day on a new line.'),
  );
  $form['separator_grouped_days'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => $settings['separator_grouped_days'],
    '#description' => t('This separator will be placed between the labels of grouped days.'),
  );
  $form['separator_day_hours'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => $settings['separator_day_hours'],
    '#description' => t('This separator will be placed between the day and the hours.'),
  );
  $form['separator_hours_hours'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => $settings['separator_hours_hours'],
    '#description' => t('This separator will be placed between the hours of a day.'),
  );
  $form['separator_more_hours'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#default_value' => $settings['separator_more_hours'],
    '#description' => t('This separator will be placed between the hours and more_hours of a day.'),
  );

  // Show a 'Current status' option.
  $form['current_status'] = array(
    '#title' => t('Current status'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['current_status']['position'] = array(
    '#type' => 'select',
    '#title' => t('Current status position'),
    '#options' => array(
      'hide' => t('Hidden'),
      'before' => t('Before hours'),
      'after' => t('After hours'),
    ),
    '#default_value' => $settings['current_status']['position'],
    '#description' => t('Where should the current status be located?'),
  );
  $form['current_status']['open_text'] = array(
    '#title' => t('Formatting'),
    '#type' => 'textfield',
    '#size' => 40,
    '#default_value' => $settings['current_status']['open_text'],
    '#description' => t('Format of the message displayed when currently open. You can use translatable text and HTML in this field.'),
  );
  $form['current_status']['closed_text'] = array(
    '#type' => 'textfield',
    '#size' => 40,
    '#default_value' => $settings['current_status']['closed_text'],
    '#description' => t('Format of message displayed when currently closed. You can use translatable text and HTML in this field.'),
  );

/*
  if ($timezone_fields) {
    $form['timezone_field'] = array(
      '#type' => 'select',
      '#title' => t('Timezone') . ' ' . t('Field'),
      '#options' => $timezone_fields,
      '#default_value' => $settings['timezone_field'],
      '#description' => t('Should we use another field to set the timezone for these hours?'),
    );
  }
  else {
    $form['timezone_field'] = array(
      '#type' => 'hidden',
      '#value' => $settings['timezone_field'],
    );
  }
 */

  return $form;
}

/**
 * Implements hook_field_formatter_settings_summary().
 *
 * Returns a short summary for the current formatter settings of an instance.
 * @TODO: return more info, like the Date module does.
 */
function office_hours_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $formatter = $display['type'];
  $summary = array();

  $summary[] = t('Display Office hours in different formats.');

  return implode('<br />', $summary);
}

/**
 * Implements hook_field_formatter_view().
 *
 * Be careful: date_api uses PHP: 0=Sunday, and DateObject uses ISO: 1=Sunday.
 */
function office_hours_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  if (!$items) {
    return $element;
  }

  // Initialize formatter settings.
  $settings = _office_hours_field_formatter_defaults($display['settings']);

  // Initialize daynames, using date_api as key: 0=Sun - 6=Sat.
  switch ($settings['daysformat']) {
    case 'number':
      // ISO-8601 numerical representation.
      $daynames = range(1, 7);
      break;

    case 'none':
      $daynames = array_fill(0, 7, '');
      break;

    case 'long':
      $daynames = date_week_days(TRUE);
      break;

    case 'short':
    default:
      $daynames = date_week_days_abbr(TRUE, TRUE, 3);
      break;
  }

  // Initialize days and times, using date_api as key (0=Sun, 6-Sat)
  // Empty days are not yet present in $items, and are now added in $days.
  $days = array();
  for ($day = 0; $day < 7; $day++) {
    $days[$day] = array(
      'startday'    => $day,
      'endday'      => NULL,
      'times'       => NULL,
      'current'     => FALSE,
      'next'        => FALSE,
    );
  }

 // @TODO: support timezones.
  $timezone = NULL;

  // Avoid repetitive calculations, use static.
  // See http://drupal.org/node/1969956.
  // And even better, avoid the expensive DateObject.
  $today = (int) idate('w', $_SERVER['REQUEST_TIME']); // Get daynumber sun=0 - sat=6.
  $now = date('Gi', $_SERVER['REQUEST_TIME']); // 'Gi' format.

  $open = FALSE;
  $next = NULL;

  // Loop through all lines. Detect the current line and the open/closed status.
  // Convert the daynumber to (int) to get '0' for Sundays, not 'false'.
  foreach (element_children($items) as $key => $arraykey) {
    $el  = $items[$arraykey];

    // Calculate start and end times.
    $day = $el['day'];
    $start = _office_hours_time_to_mil($el['starthours']); // 'Gi' format.
    $end   = _office_hours_time_to_mil($el['endhours']); // 'Gi' format.

    $times = array(
      'start' => $start,
      'end' => $end,
    );
    $days[$day]['times'][] = $times;

    // Are we currently open? If not, when is the next time?
    // Remember: empty days are not in $items; they are present in $days.
    if ($day < $today) {
      // Initialize to first day of (next) week, in case we're closed
      // the rest of the week.
      if ($next === NULL) {
        $next = (int) $day;
      }
    }

    if ($day - $today == -1 || ($day - $today == 6)) {
      // We were open yesterday evening, check if we are still open.
      if ($start >= $end && $end >= $now) {
        $open = TRUE;
        $days[$day]['current'] = TRUE;
        $next = (int) $day;
      }
    }
    elseif ($day == $today) {
      if ($start <= $now) {
        // We were open today, check if we are still open.
        if (($start > $end)    // We are open until after midnight.
            || ($start == $end) // We are open 24hrs per day.
            || (($start < $end) && ($end > $now))) {// We have closed already.
          $open = TRUE;
          $days[$day]['current'] = TRUE;
          $next = (int) $day;
        }
        else {
          // We have already closed.
        }
      }
      else {
        // We will open later today.
        $next = (int) $day;
      }
    }
    elseif ($day > $today) {
      if ($next === NULL || $next < $today) {
        $next = (int) $day;
      }
    }
  }
  if ($next !== NULL) {
    $days[(int) $next]['next'] = TRUE;
  }

  // Reorder weekdays to match the first day of the week, using formatter settings;
  // $days = date_week_days_ordered($days);  //using variable_get('date_first_day');
  if ($settings['date_first_day'] > 0) {
    for ($i = 1; $i <= $settings['date_first_day']; $i++) {
      $last = array_shift($days);
      array_push($days, $last);
    }
  }

  // Check if we're compressing times. If so, combine lines of the same day into one.
  if ($settings['compress']) {
    foreach ($days as $day => &$info) {
      if (is_array($info['times'])) {
        // Initialize first block of the day.
        $day_times = $info['times'][0];
        // Compress other block in first block.
        foreach ($info['times'] as $index => $block_times) {
          $day_times['start'] = min($day_times['start'], $block_times['start']);
          $day_times['end']   = max($day_times['end'], $block_times['end']);
        }
        $info['times'] = array(0 => $day_times);
      }
    }
  }

  // Check if we're grouping days.
  if ($settings['grouped']) {
    for ($i = 0; $i < 7; $i++) {
      if ($i == 0) {
        $times = $days[$i]['times'];
      }
      elseif ($times != $days[$i]['times']) {
        $times = $days[$i]['times'];
      }
      else {
        // N.B. for 0=Sundays, we need to (int) the indices.
        $days[$i]['endday']   = $days[(int) $i]['startday'];
        $days[$i]['startday'] = $days[(int) $i - 1]['startday'];
        $days[$i]['current']  = $days[(int) $i]['current'] || $days[(int) $i - 1]['current'];
        $days[$i]['next']     = $days[(int) $i]['next'] || $days[(int) $i - 1]['next'];
        unset($days[(int) $i - 1]);
      }
    }
  }

  // Theme the result.
  $element[] = array(
    '#markup' => theme(
      'office_hours_field_formatter_default',
      array(
        'element'  => $items,
        'display'  => $display,
        'days'     => $days,
        'settings' => $settings,
        'daynames' => $daynames,
        'open'     => $open,
        'timezone' => $timezone,
      )
    ),
  );

  return $element;
}

function _office_hours_field_formatter_defaults($settings = array()) {
  // Assure all values are set. Append with missing values.
  $settings +=
    array(
      'daysformat' => 'long',
      'hoursformat' => 0, // '12'/'24'/'HH:mm',
      'compress' => FALSE,
      'grouped' => FALSE,
      'showclosed' => 'all',
      'closedformat' => 'Closed',   // The html-string for closed/empty days.
      'separator_days' => '<br />',
      'separator_grouped_days' => ' - ',
      'separator_day_hours' => ': ',
      'separator_hours_hours' => '-',
      'separator_more_hours' => ', ',
      'current_status' => array(
        'position' => 'hide',
        'open_text' => 'Currently open!',
        'closed_text' => 'Currently closed',
      ),
      'timezone_field' => '',
      'date_first_day' => variable_get('date_first_day', 0),
    );

  // Conversion from (old) checkbox to (new) selectlist.
  $settings['showclosed'] = ($settings['showclosed'] == '1') ? 'all' : $settings['showclosed'];
  $settings['showclosed'] = ($settings['showclosed'] == '0') ? 'open' : $settings['showclosed'];

  return $settings;
}
