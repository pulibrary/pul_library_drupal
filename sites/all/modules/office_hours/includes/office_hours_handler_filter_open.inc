<?php

/**
 * @file
 * Implements Views integration: filter 'open now'.
 */
class office_hours_handler_filter_open extends views_handler_filter_in_operator {

  function construct() {
    parent::construct();
    $this->value_title = t('Open now');
  }

  function get_value_options() {
    if (isset($this->value_options)) {
      return $this->value_options;
    }

    // Use bitcode keys, for better analysis in post_execute().
    $this->value_options = array(
      1 => t('Open now'),
      2 => t('Open today'),
      4 => t('Already Closed'),
      8 => t('Closed today'),
    );

    return $this->value_options;
  }

  function expose_options() {
    parent::expose_options();
    $this->options['expose']['day'] = FALSE;
  }

  function expose_form(&$form, &$form_state) {
    parent::expose_form($form, $form_state);
    $form['expose']['day'] = array(
      '#type' => 'checkbox',
      '#title' => t('Limit list to selected items'),
      '#description' => t('If checked, the only items presented to the user will be the ones selected here.'),
      '#default_value' => !empty($this->options['expose']['day']), // safety
    );
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['value']['default'] = array();

    return $options;
  }

  /**
   * Provides inclusive/exclusive matching.
   */
//  function operator_options($which = 'title') {
//  }

  /*
    function operators() {
      $operators = parent::operators();

      // Allow swithcing between boolean_operator and in_operator
      if (isset($operators['in'])) {
        $operators['in']['title'] = t('Is open on one of the following days');
        $operators['in']['short'] = t('open');
        $operators['not in']['title'] = t('Is closed on one of the following days');
        $operators['not in']['short'] = t('closed');
      }

      return $operators;
    }
  */

  function query() {
    // This empty query is needed to avoid the code from parent.

    // Adding below line seems better, but replicates each entity with +1 hours blocks.
    // $this->ensure_my_table();
  }

  function post_execute(&$values) {
    // A filter in query() might be quicker, but this is easier to write.
    if (!empty($values)) {

      $operators = $this->value;  // in_operator = multivalue.
      if ($operators == array() || $operators == 'All' || $operators == 'all') {
        return;
      }

      // Copied from office_hours.module.
      $today = (int)idate('w', $_SERVER['REQUEST_TIME']); // Get daynumber sun=0 - sat=6.
      $now = date('Gi', $_SERVER['REQUEST_TIME']); // 'Gi' format.

      foreach ($values as $key => &$object) {

        // For now, ony for nodes...
        // For now, only for status 'today'...
        $entity_type = 'node';
        $entity_id = $object->nid;

//      $entity_type = $object->{$this->aliases['entity_type']};
        if (empty($this->definition['is revision'])) {
          $revision_id = FALSE;
//        $entity_id = $object->{$this->field_alias};
        } else {
          $revision_id = $object->{$this->field_alias};
//        $entity_id = $object->{$this->aliases['entity_id']};
        }

        $entities = entity_load($entity_type, array($entity_id));
        $entity = array_pop($entities);

        if ($entity) {
          // 1 => t('Open now'),
          // 2 => t('Open today'),
          // 4 => t('Closed now'),
          // 8 => t('Closed today'),
          $bitstatus = 0;
          // Loop over the translations of the field.
          foreach ($entity->{$this->real_field} as $item) {
            unset($record);
            foreach ($item as $langcode => $record) {
              if ($record['day'] == $today && $record['starthours'] <= $now && $record['endhours'] >= $now) {
                // Store is open at this moment.
                $status = 'open_now';
                $bitstatus = $bitstatus | 1; // => t('Open now');
                $bitstatus = $bitstatus | 2; // => t('Open today');
              }
              elseif ($record['day'] == $today && $record['starthours'] >= $now) {
                // Store is open later today.
                $bitstatus = $bitstatus | 2; // => t('Open today');
              }
              elseif ($record['day'] == $today) {
                // Already/still closed.
                $bitstatus = 4; // => t('Closed now, was open')
              }
            }
          }
          if (!$bitstatus) {
            // Store is never open today.
            $bitstatus = $bitstatus | 8; // => t('Closed today');
          }

          // Remove object from result.
          $selected = FALSE;
          foreach($operators as $bitcode) {
            if ($bitstatus & $bitcode) {
              $selected = TRUE;
            }
          }
          if (!$selected) {
            unset($values[$key]);
          }
        }
      }
    }
  }

}
