<?php
/**
 * @file
 * Provide views data and handlers for office_hours.module.
 *
 * @ingroup views_module_handlers
 */

/**
 * Implements hook_field_views_data_alter().
 */
function office_hours_field_views_data_alter(&$result, $field, $module) {
  if ($module == 'office_hours') {
    $field_name = $field['field_name'];

    foreach ($result as $key => &$field_data) {
      if (isset($field_data[$field_name])) {
        $field_data[$field_name . '_open']['group'] = $field_data[$field_name]['group'];
        $field_data[$field_name . '_open']['title'] = str_replace('field_', '', $field_name) . ' (' . $field_name . ':open)';
        $field_data[$field_name . '_open']['title short'] = str_replace('field_', '', $field_name) . ':open';
        $field_data[$field_name . '_open']['help'] = 'This is a filter for open/closed entities.';
        $field_data[$field_name . '_open']['aliases'] = isset($field_data[$field_name]['aliases']) ? $field_data[$field_name]['aliases'] : array();
        $field_data[$field_name . '_open']['filter'] = array(
          'field' => $field_name,
          'table' => $field_data[$field_name]['field']['table'],
          'handler' => 'office_hours_handler_filter_open',
          'field_name' => $field_data[$field_name]['field']['field_name'],
          'real field' => $field_data[$field_name]['field']['real field'],
          'entity_tables' => $field_data[$field_name]['field']['entity_tables'],
          'label' => t('Open now'),
          // 'type' => 'yes-no',
          // Use boolean_field = 1 instead of boolean_field <> 0 in WHERE statement.
          'use equal' => TRUE,
        );
        $field_data[$field_name . '_hours']['group'] = $field_data[$field_name]['group'];
        $field_data[$field_name . '_hours']['title'] = str_replace('field_', '', $field_name) . ' (' . $field_name . ':hours)';
        $field_data[$field_name . '_hours']['title short'] = str_replace('field_', '', $field_name) . ':hours';
        $field_data[$field_name . '_hours']['help'] = 'This is a filter for opening times.';
        $field_data[$field_name . '_hours']['aliases'] = isset($field_data[$field_name]['aliases']) ? $field_data[$field_name]['aliases'] : array();
        $field_data[$field_name . '_hours']['filter'] = array(
          'field' => $field_name,
          'table' => $field_data[$field_name]['field']['table'],
          'handler' => 'office_hours_handler_filter_hours',
          'field_name' => $field_data[$field_name]['field']['field_name'],
          'real field' => $field_data[$field_name]['field']['real field'],
          'entity_tables' => $field_data[$field_name]['field']['entity_tables'],
          'label' => t('Hours'),
          // Use boolean_field = 1 instead of boolean_field <> 0 in WHERE statement.
          'use equal' => TRUE,
        );
      }
    }
  }
}
