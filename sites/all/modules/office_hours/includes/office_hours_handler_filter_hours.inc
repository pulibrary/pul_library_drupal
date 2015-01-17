<?php
/**
 * @file
 * Implements Views integration: hours filter
 */

/**
 * Adds an hours handler to the filter.
 */
class office_hours_handler_filter_hours extends views_handler_filter_numeric {

//  $no_single = TRUE;

//  var $always_multiple = TRUE;

  /**
   * Provide a select list for times.
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $field = field_info_field($this->real_field);
    // Get the valid hours. Date API doesn't provide a straight method for this.
    // TODO: add better selection and representation of hours,
    // using $field['settings'] and using/improving existing routines.
    //$hours = _office_hours_field_widget_hours($field['settings']);
    //$hours = drupal_map_assoc($hours); // $key == $value.

    $hours = _office_hours_show_ampm(date_hours('H', FALSE));
    $hours = drupal_map_assoc($hours); // $key == $value.

    // Make al text fields a select field.
    $hour_select = array(
      '#type' => 'select',
      '#size' => NULL,
      '#options' => $hours,
    );
    // if ($which == 'all').
    if (is_array($form['value']['value'])) {
      $form['value']['value'] = $hour_select + $form['value']['value'];
    } // elseif ($which == 'value').
    elseif ($form['value']['#type'] == 'textfield') {
      $form['value'] = $hour_select + $form['value'];
    }
    // if ($which == 'all' || $which == 'minmax').
    if (is_array($form['value']['min'])) {
      $form['value']['min'] = $hour_select + $form['value']['min'];
    }
    if (is_array($form['value']['max'])) {
      $form['value']['max'] = $hour_select + $form['value']['max'];
    }
  }

  /**
   * Add this filter to the query.
   *
   * todo: make this work. Take date_views_filter_handler ,
   * date_views_filter_handler_simple as examples.
   */
  function query() {
    return;
//    $this->ensure_my_table();
//    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $this->value, $this->operator);

/*
    switch ($this->operator) {
      case '<':
      case '<=':
      case '=':
      case '!=':
      case '>=':
      case '>':
        $this->value['starthours'] = $this->value['value'];
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $this->value, $this->operator);
        break;
      case 'between':
        break;
      case 'not between':
        break;
      case 'empty':
      case 'not empty':
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $this->value, $this->operator);
        break;
        break;
    }
*/
  }
}
