<?php
/**
 * @file
 * Implementation of Feeds mapping API for office_hours.
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 *
 * @see \Feeds\FeedsNodeProcessor::getMappingTargets()
 */
function office_hours_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {
    $info = field_info_field($name);
    if ($info['type'] == 'office_hours') {

      $targets[$name . ':day'] = array(
        'name' => $instance['label'] . ': Day',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The day for the @name field.',
          array('@name' => $instance['label'])),
        'real_target' => $name,
      );

      $targets[$name . ':hours'] = array(
        'name' => $instance['label'] . ': Hours',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The first set of hours for the @name field, if using start and end in 1 field.',
          array('@name' => $instance['label'])),
        'real_target' => $name,
      );
      $targets[$name . ':morehours'] = array(
        'name' => $instance['label'] . ': More hours',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The second set of hours for the @name field, if using start and end in 1 field.',
          array('@name' => $instance['label'])),
        'real_target' => $name,
      );

      $targets[$name . ':hours:start'] = array(
        'name' => $instance['label'] . ': Hours start',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The start date for the @name field. Also use if mapping both start and end.',
          array('@name' => $instance['label'])),
        'real_target' => $name,
      );
      $targets[$name . ':hours:end'] = array(
        'name' => $instance['label'] . ': Hours end',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The end date for the @name field.', array('@name' => $instance['label'])),
        'real_target' => $name,
      );

      $targets[$name . ':morehours:start'] = array(
        'name' => $instance['label'] . ': More hours start',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The start date for the @name field. Also use if mapping both start and end.',
          array('@name' => $instance['label'])),
        'real_target' => $name,
      );
      $targets[$name . ':morehours:end'] = array(
        'name' => $instance['label'] . ': More hours end',
        'callback' => 'office_hours_feeds_set_target',
        'description' => t('The end date for the @name field.', array('@name' => $instance['label'])),
        'real_target' => $name,
      );
    }
  }
}

/**
 * Implements hook_feeds_set_target().
 */
function office_hours_feeds_set_target($source, $entity, $target, $feed_element) {
  // Remember current Entity ID, Field name and day number.
  // Re-use them when the hours are set in another column.
  static $sv_vid = NULL;
  static $sv_field_name = NULL;
  static $sv_day = 0;

  if (is_array($feed_element)) {
    $feed_element = $feed_element[0];
  }

  // list($field_name, $sub_field, $start_end_field) = explode(':', $target, 3);
  $field = explode(':', $target, 3);
  $field_name      = isset($field[0]) ? $field[0] : '';
  $sub_field       = isset($field[1]) ? $field[1] : '';
  $start_end_field = isset($field[2]) ? $field[2] : '';

  switch ($sub_field) {
    case 'day':
      // If we enter a new entity, or another field within the same entity,
      // the field must be cleared. Else, we append the current field with the data.
      // Each OfficeHours-feeds line MUST have a day-column BEFORE any hours-columns;
      if ($entity->vid != $sv_vid || $field_name != $sv_field_name) {
        $sv_vid = $entity->vid;
        $sv_field_name = $field_name;

        $entity->{$field_name}[$entity->language] = array();
      }

      // Convert day to day number.
      // @todo: better way to process texts, perhaps only first 3 characters.
      // @todo: test for collaboration with Feeds Tamper.
      // @todo: support other first day of week.
      if (is_numeric($feed_element)) {
        // Day is passed as day number: sunday: 1->0; monday: 2->1; tuesday: 3->2; etc.
        $sv_day = ($feed_element - 1);
      }
      else {
        // Day is passed as text.
        switch (strtolower(substr($feed_element, 0, 3))) {
          case 'sun': // en
          case 'zon': // nl
          case 'søn': // da
            $sv_day = '0';
            break;

          case 'mon': // en
          case 'maa': // nl
          case 'man': // da
            $sv_day = '1';
            break;

          case 'tue':
          case 'din':
          case 'tir':
            $sv_day = '2';
            break;

          case 'wed':
          case 'woe':
          case 'ons':
            $sv_day = '3';
            break;

          case 'thu':
          case 'don':
          case 'tor':
            $sv_day = '4';
            break;

          case 'fri':
          case 'vri':
          case 'fre':
            $sv_day = '5';
            break;

          case 'sat':
          case 'zat':
          case 'lør':
            $sv_day = '6';
            break;
        }
      }
      break;

    case 'morehours':
      // Since we have unlimited bocks per day, there is no difference between
      // 'morehours' and 'hours'.
      // break;  // do not break, proceed with 'hours'
    case 'hours':
      // Open a new hours_block element.
      // Remove time delimiters & spaces: ' 10:00 - 18:00  ' --> '1000-1800'
      // The following is not sufficient to strip all unvisible characters,
      // therefor intval() is used later on.
      $feed_element = str_replace(' ', '', $feed_element);
      $feed_element = str_replace(':', '', $feed_element);
      $feed_element = str_replace('.', '', $feed_element);

      // Add the hours_block to the field.
      switch ($start_end_field) {
        case 'start':
          $hours_block['day'] = $sv_day;
          $hours_block['starthours'] = intval($feed_element);
          break;

        case 'end':
          $hours_block['day'] = $sv_day;
          $hours_block['endhours'] = intval($feed_element);
          break;

        default:
          // $feed_element contains both Start and End.
          list($hours_start, $hours_end) = explode('-', $feed_element, 2);
          $hours_block['day'] = $sv_day;
          $hours_block['starthours'] = intval($hours_start);
          $hours_block['endhours'] = intval($hours_end);
          break;
      }
      $entity->{$field_name}[$entity->language][] = $hours_block;

      break;

    default:
      watchdog('feeds office_hours', 'field %field element %element is not correct', array('%field' => '$sub_field', '%element' => $feed_element));
      break;
  }

  return $entity;
}
