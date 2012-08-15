<?php

/**
 * Field handler for displaying Solr fields in Views.
 */
class SarniaViewsHandlerField extends views_handler_field {

  /**
   * This property is used by views_handler_field::render_text() without
   * without checking to see whether it's set, which throws errors.
   * @var
   */
  public $original_value = NULL;

  /**
   * A Sarnia entity bundle info array.
   * @var array
   */
  protected $sarnia_type_info;

  /**
   * Initialize the handler and load Sarnia entity type info.
   */
  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->sarnia_type_info = sarnia_entity_type_load_by_index($this->definition['search_api_index']);
  }

  /**
   * Provide a custom UI name for the field based on the Solr property.
   */
  function ui_name($short = FALSE) {
    if (!empty($this->options['ui_name'])) {
      $title = check_plain($this->options['ui_name']);
      return $title;
    }

    $title = ($short && isset($this->definition['title short'])) ? $this->definition['title short'] : $this->definition['title'];
    $title .= ': ' . $this->options['solr_property'];

    if (!$short) {
      $title = $this->definition['group'] . ': ' . $title;
    }

    return $title;
  }

  /**
   * Specify handler options, adding formatter-specific properties.
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['solr_property'] = array('default' => NULL);
    $options['formatter'] = array('default' => NULL);
    $options['settings'] = array('default' => array());

    $options['is_multivalue'] = array('default' => FALSE);
    $options['multivalue'] = array(
      'contains' => array(
        'count' => array('default' => 0),
        'list_type' => array('default' => 'ul'),
        'list_separator' => array('default' => ', '),
      ),
    );

    return $options;
  }

  /**
   * Build the handler configuration form.
   *
   * Adds a Solr property select dropdown, and summons up a formatter settings
   * form.
   *
   * @see views_handler_field_field::options_form()
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form_url = views_ui_build_form_url($form_state);

    $form['solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Solr property'),
      '#options' => sarnia_index_get_field_options($this->definition['search_api_index']),
      '#default_value' => $this->options['solr_property'],
      '#ajax' => array(
        'path' => $form_url,
      ),
      '#submit' => array('views_ui_config_item_form_submit_temporary'),
      '#executes_submit_callback' => TRUE,
    );
    sarnia_element_add_combobox($form['solr_property']);

    // Multivalue property settings
    $server = search_api_server_load($this->sarnia_type_info['search_api_server']);
    $solr_fields = $server->getFields();
    if (!empty($solr_fields[$this->options['solr_property']]) && $solr_fields[$this->options['solr_property']]->isMultivalued()) {
      $form['multivalue'] = array(
        '#type' => 'fieldset',
        '#tree' => TRUE,
        '#title' => t('Multivalue property settings'),
      );
      $form['multivalue']['count'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of values to display'),
        '#description' => t('Maximum number of field values to display. Leave this at 0 to display all values.'),
        '#default_value' => $this->options['multivalue']['count'],
        '#element_validate' => array('views_element_validate_integer'),
        '#size' => 5,
      );
      $form['multivalue']['list_type'] = array(
        '#type' => 'select',
        '#title' => t('List type'),
        '#options' => array(
          'ul' => 'Unordered list',
          'ol' => 'Ordered list',
          'separator' => 'Separator',
        ),
        '#default_value' => $this->options['multivalue']['list_type'],
      );
      $form['multivalue']['list_separator'] = array(
        '#type' => 'textfield',
        '#title' => t('Seperator'),
        '#default_value' => $this->options['multivalue']['list_separator'],
        '#states' => array(
          'visible' => array(
            'select[name="options[multivalue][list_type]"]' => array('value' => 'separator'),
          ),
        ),
      );
    }

    // Field formatter configuration, from
    // views/modules/field/views_handler_field_field.inc
    module_load_include('inc', 'views', 'modules/field/views_handler_field_field');
    $field = field_info_field($this->definition['field_name']);
    $formatters = array(t('- None -')) + _field_view_formatter_options($field['type']);
    $form['formatter'] = array(
      '#type' => 'select',
      '#title' => t('Formatter'),
      '#options' => $formatters,
      '#default_value' => $this->options['formatter'],
      '#ajax' => array(
        'path' => $form_url,
      ),
      '#submit' => array('views_ui_config_item_form_submit_temporary'),
      '#executes_submit_callback' => TRUE,
    );

    // Get the currently selected formatter.
    $format = $this->options['formatter'];
    $formatter = field_info_formatter_types($format);
    $settings = $this->options['settings'] + field_info_formatter_settings($format);

    // Provide an instance array for hook_field_formatter_settings_form(). This
    // mimics ctools_fields_fake_field_instance(), except it gets a real
    // instance since we know our entity type.
    $entity_type = $this->sarnia_type_info['machine_name'];
    $instance = field_info_instance($entity_type, $this->definition['field_name'], $entity_type);
    $instance['display']['_dummy'] = array(
      'type' => $formatter,
      'settings' => $settings,
    );

    // Store the settings in a '_dummy' view mode.
    $instance['display']['_dummy'] = array(
      'type' => $format,
      'settings' => $settings,
    );

    // Get the settings form.
    $settings_form = array('#value' => array());
    $function = (isset($formatter['module']) ? $formatter['module'] : '') . '_field_formatter_settings_form';
    if (function_exists($function)) {
      // views_handler_field_field.inc passes $form instead of array()
      $settings_form = $function($field, $instance, '_dummy', array(), $form_state);
      unset($settings_form['solr_property']);
    }
    $form['settings'] = $settings_form;
  }

  function options_submit(&$form, &$form_state) {
    parent::options_submit($form, $form_state);

    // Set a reasonable label if it is the first save and none was specified, or
    // if the the previous label matched the previous property name and has not
    // been changed.
    if ((!isset($this->options['solr_property']) && $form_state['values']['options']['label'] == $this->definition['title']) ||
        ($this->options['solr_property'] == $this->options['label'] && $this->options['label'] == $form_state['values']['options']['label'])) {
      $form_state['values']['options']['label'] = $form_state['values']['options']['solr_property'];
    }

    // Check whether the field we're saving is multivalue, so that we don't have
    // to check every single time we render the field.
    $server = search_api_server_load($this->sarnia_type_info['search_api_server']);
    $solr_fields = $server->getFields();
    $solr_property = $form_state['values']['options']['solr_property'];
    $form_state['values']['options']['is_multivalue'] = !empty($solr_fields[$solr_property]) && $solr_fields[$solr_property]->isMultivalued();
  }

  /**
   * Add this handler's data to the query.
   *
   * By default Solr returns all of the fields in a Solr doc. All that this
   * method needs to do is specify the field alias.
   */
  public function query() {
    $this->field_alias = $this->options['solr_property'];
  }

  /**
   * Load any entities that aren't present for use with field formatters, if
   * necessary.
   *
   * @param $results
   *   An array of views result objects.
   */
   function post_execute(&$results) {
    // Don't bother trying to load entities if the formatter doesn't need them.
    if (!empty($this->options['formatter'])) {
      // Get a list of unloaded entities.
      $ids = array();
      foreach ($results as $result_id => $result) {
        $entity_id = &$result->entity;
        if (!is_object($entity_id)) {
          $ids[$result_id] = $entity_id;
        }
      }
      // Load whatever unloaded entities we found.
      if (!empty($ids)) {
        $entities = entity_load($this->sarnia_type_info['machine_name'], array_values($ids));
        foreach ($ids as $result_id => $entity_id) {
          if ($entities[$entity_id]) {
            $results[$result_id]->entity = $entities[$entity_id];
          }
        }
      }
    }

    $this->item_key = 'item__' . $this->options['id'];
    foreach ($results as $row_id => $result) {
      $result->{$this->item_key} = $this->set_items($result, $row_id);
    }
  }

  /**
   * Fallback method to render the field.
   *
   * In general this should not be called anymore!
   *
   * @param $values
   *   The values retrieved from the database.
   */
  function render($values) {
    $output = '';
    $value = $this->get_value($values);

    if (is_array($value)) {
      $value = array_map(array($this, 'sanitize_value'), $value);
      $output = implode(' ', $value);
    }
    else {
      $output = $this->sanitize_value($value);
    }

    return $output;
  }

  /**
   * Extract the value of this field from the solr properties.
   *
   * @param $values
   *   An object containing all retrieved values.
   * @param $field
   *   Optional name of the field where the value is stored. Not used by this
   *   handler.
   *
   * @return
   *   An array of scalars, or a scalar.
   */
  public function get_value($values, $field = NULL) {
    if (!empty($values->_entity_properties[$this->options['solr_property']])) {
      return $values->_entity_properties[$this->options['solr_property']];
    }
    return NULL;
  }

  /**
   * Re-title tokens from Sarnia field handlers with their Solr property names.
   */
  function document_self_tokens(&$tokens) {
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      if ($handler instanceof SarniaViewsHandlerField) {
        $token_name = "[$field]";
        if (isset($tokens[$token_name]) && isset($handler->options['solr_property'])) {
          $tokens[$token_name] = $handler->admin_summary();
        }
      }
    }
  }

  /**
   * Check whether this field is sortable.
   */
  function click_sortable() {
    $name = $this->options['solr_property'];
    $server = search_api_server_load($this->sarnia_type_info['search_api_server']);
    $fields = $server->getSortFields();
    return isset($fields[$name]);
  }

  /**
   * Add a click sort to the query.
   */
  public function click_sort($order) {
    $this->query->sort($this->field_alias, $order);
  }

  /**
   * Extract the field values as an array of items.
   *
   * @param stdclass $values
   *   A views result.
   * @param $row_id
   *   Who knows. <-- @TODO
   *
   * @return array
   *   An array of item arrays. Each item array should contain two properties:
   *     'raw': an unfiltered value for use in tokens
   *     'rendered': sanitized rendered HTML for display
   */
  public function set_items($values, $row_id) {
    $items = array();

    $entity = $values->entity;
    $properties = $values->_entity_properties;
    $solr_property = $this->options['solr_property'];

    // Are we using a Field API field formatter, and is our entity loaded in the results?
    $id_field = $this->sarnia_type_info['id_field'];
    if (!empty($this->options['formatter']) && !empty($entity)) {
      // Build arguments for the Field API field formatter.
      $display = array(
        'type' => $this->options['formatter'],
        'settings' => $this->options['settings'] + array('solr_property' => $solr_property),
        'label' => 'hidden',
        // Pass the View object in the display so that fields can act on it.
        'views_view' => $this->view,
        'views_field' => $this,
        'views_row_id' => $entity->id, // @TODO In views_handler_field_field, this is called $row_id, but where does it come from?
      );
      $render_array = field_view_field($entity->type, $entity, $this->definition['field_name'], $display, LANGUAGE_NONE);

      // Extract the rendered field values from the render array.
      foreach (element_children($render_array) as $i) {
        $items[$i]['rendered'] = $render_array[$i];
        if (isset($render_array['#access'])) {
          $items[$i]['rendered']['#access'] = $render_array['#access'];
        }
        if ((!isset($items[$i]['rendered']['#access']) || $items[$i]['rendered']['#access']) && !empty($render_array['#items'][$i])) {
          $items[$i]['raw'] = $render_array['#items'][$i];
        }
      }
    }
    else {
      // Return an unprocessed value.
      $value = $this->get_value($values);
      if (is_array($value)) {
        foreach ($properties[$solr_property] as $value) {
          $items[] = array(
            'raw' => $value,
            'rendered' => $this->sanitize_value($value),
          );
        }
      }
      elseif (!empty($value)) {
        $items[] = array(
          'raw' => $properties[$solr_property],
          'rendered' => $this->sanitize_value($properties[$solr_property]),
        );
      }
    }

    // Trim the items based on the multivalue count setting, if present.
    if ($this->options['is_multivalue'] && $this->options['multivalue']['count'] > 0) {
      $items = array_slice($items, 0, $this->options['multivalue']['count']);
    }

    return $items;
  }

  public function get_items($values) {
    return $values->{$this->item_key};
  }

  /**
   * Render a single item.
   *
   * @param scalar $key
   *   The row number or row id (???)
   * @param array $item
   *   An array containing a 'raw' and a 'rendered' parameter. This is one item
   *   from the array returned by ::get_items().
   *
   * @return string
   *   Rendered content.
   */
  public function render_item($key, $item) {
    return $item['rendered'];
  }

  /**
   * Render a list of items.
   *
   * @param array $items
   *   A flat array of field items. Each value in this array is the output of
   *   the ::render_item() method.
   *
   * @return string
   *   Rendered content.
   */
  public function render_items($items) {
    $output = '';

    if (!empty($items)) {
      if (!$this->options['is_multivalue']) {
        $output = current($items);
      }
      elseif ($this->options['multivalue']['list_type'] == 'separator') {
        $output = implode(check_plain($this->options['multivalue']['list_separator']), $items);
      }
      else {
        $output = theme('item_list', array(
          'type' => $this->options['multivalue']['list_type'],
          'title' => NULL,
          'items' => $items,
        ));
      }
    }

    return $output;
  }

}
