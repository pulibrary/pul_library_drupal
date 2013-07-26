<?php
/**
 * @file
 * Themes the Office hours formatter and widget.
 *
 */

/**
 * Theme function for field formatter.
 */
function theme_office_hours_field_formatter_default($vars) {
  $days = $vars['days'];
  $settings = $vars['settings'];
  $daynames = $vars['daynames'];
  $open = $vars['open'];

  switch ($settings['hoursformat']) {
    case 2: $timeformat = 'H:i';   break; // 24hr with leading zero
    case 0: $timeformat = 'G:i';   break; // 24hr without leading zero
    case 1: $timeformat = 'g:i a'; break; // 12hr ampm without leading zero
  }

  $max_label_length = 3; // This is the minimum width for day labels. It is adjusted when adding new labels.
  $HTML_hours = '';
  $HTML_current_status = '';
  foreach ($days as $day => &$info) {
    // Format the label
    $label = $daynames[$info['startday']];
    $label .= !isset($info['endday']) ? '' : $settings['separator_grouped_days'] . $daynames[$info['endday']];
    $label .= $settings['separator_day_hours'];
    $max_label_length = max($max_label_length, drupal_strlen($label));

    // Format the time
    if (!$info['times']) {
      $times = filter_xss( t($settings['closedformat']) );
    }
    else {
      $times = array();
      foreach ($info['times'] as $block_times) {
        $times[] = theme(
                    'office_hours_time_range',
                    array(
                      'times'       => $block_times,
                      'format'      => $timeformat,
                      'separator'   => $settings['separator_hours_hours'],
                    )
                  );
      }
      $times = implode($settings['separator_more_hours'], $times);
    }

    $info['output_label'] = $label;
    $info['output_times'] = $times;
  }

  // Start the loop again, since only now we have the definitive $max_label_length.
  foreach ($days as $day => &$info) {
    // Remove unwanted lines.
    switch ($settings['showclosed']) {
      case 'all':
        break;
      case 'open':
        if (!isset($info['times'])) {
          continue 2;
        }
        break;
      case 'next':
        if (!$info['current'] && !$info['next']) {
          continue 2;
        }
        break;
      case 'none':
        continue 2;
        break;
    }

    // Generate HTML for Hours.
    $HTML_hours .= '<span class="oh-display">'
//             . '<span class="oh-display-label">'
               . '<span class="oh-display-label" style="width: ' . ($max_label_length * 0.60) . 'em; ">'
               . $info['output_label']
               . '</span>'
               . '<span class="oh-display-times oh-display-' . (!$info['times'] ? 'closed' : 'hours')
               . ($info['current'] ? ' oh-display-current' : '')
               . '">'
               . $info['output_times'] . $settings['separator_days']
               . '</span>'
               . '</span>';
  }

  $HTML_hours = '<span class="oh-wrapper' . ($settings['grouped'] ? ' oh-display-grouped' : '' ) . '">' .
                $HTML_hours .
                '</span>';

  // Generate HTML for CurrentStatus.
  if ($open) {
    $HTML_current_status = '<span class="oh-current-open">' . t($settings['current_status']['open_text']) . '</span>';
  }
  else {
    $HTML_current_status = '<span class="oh-current-closed">' . t($settings['current_status']['closed_text']) . '</span>';
  }

  switch ($settings['current_status']['position']) {
    case 'before':
      $HTML = $HTML_current_status . $HTML_hours;
      break;
    case 'after':
      $HTML = $HTML_hours . $HTML_current_status;
      break;
    case 'hide':
    default: // Not shown.
      $HTML = $HTML_hours;
      break;
  }

  return $HTML;
}

/**
 * Theme function for formatter: time ranges
 */
function theme_office_hours_time_range($vars = array()) {
  // Add default values to $vars if not set already.
  $vars += array(
    'times' => array(
      'start' => '',
      'end' => '',
    ),
    'format' => 'G:i',
    'separator' => ' - ',
  );

  $starttime = _office_hours_time_format($vars['times']['start'], $vars['format']);
  $endtime = _office_hours_time_format($vars['times']['end'], $vars['format']);
  if ($endtime == '0:00' || $endtime == '00:00') {
    $endtime = '24:00';
  }
  $result = $starttime . $vars['separator'] . $endtime;
  return $result;
}

/**
 * Theme function for widget: office hours block.
 */
function theme_office_hours_block($vars) {
  return $vars['element']['#children'];
}

/**
 * Theme function for widget: office hours selector element.
 */
function theme_office_hours_select($vars) {
  return $vars['element']['#children'];
}

/**
 * Theme function for widget: office_hours complete week.
 */
function theme_office_hours_week($variables) {
  $element = $variables['element'];
  $output = '';
  $table_id = drupal_html_id($element['#field_name'] . '_values');
  $required = !empty($element['#required']) ? theme('form_required_marker', $variables) : '';

  $header = array(
    array(
      'data' => '<label>' . t('!title: !required', array('!title' => $element['#title'], '!required' => $required)) . "</label>",
      'class' => array('field-label'),
    ),
  );
  $rows = array();
  foreach (element_children($element) as $key) {
    $rows[] = array(
      drupal_render($element[$key])
    );
  }

  $output = '<div class="form-item">';
  $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => $table_id, 'class' => array('field-multiple-table'))));
  $output .= $element['#description'] ? '<div class="description">' . $element['#description'] . '</div>' : '';
  $output .= '</div>';

  return $output;
}
