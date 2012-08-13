<?php

/**
 * Really basic filter handler for filtering Solr documents in Views.
 *
 * @TODO Deal with different field types.
 */
class SarniaViewsHandlerFilter extends SearchApiViewsHandlerFilter {

  /**
   * Provide a list of options for the operator form.
   *
   * There is a patch in the Search API issue queue that adds the 'is null' and
   * 'is not null' operators to the Search API Views filter handler; if that
   * patch is committed, this method can be removed.
   * @see http://drupal.org/node/1318904#comment-5817206
   */
  public function operator_options() {
    $options = parent::operator_options();
    $options['IS NULL'] = t('Is null');
    $options['IS NOT NULL'] = t('Is not null');
    return $options;
  }

  /**
   * Specifies the options this handler uses.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['solr_property'] = array('default' => NULL);
    $options['solr_property_expose'] = array('default' => FALSE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    if ($this->can_expose()) {
      $form['solr_property_expose'] = array(
        '#type' => 'checkbox',
        '#title' => t('Expose Solr property selection'),
        '#description' => t('Allow the user to choose the Solr property.'),
        '#default_value' => $this->options['solr_property_expose'],
        '#states' => array(
          'enabled' => array(':input[name="options[expose][use_operator]"]' => array('checked' => TRUE)),
        ),
      );
    }
  }

  public function operator_form(&$form, &$form_state) {
    parent::operator_form($form, $form_state);
    if ($this->options['solr_property_expose'] || (isset($form_state['form_id']) && $form_state['form_id'] == 'views_ui_config_item_form')) {
      $form['solr_property'] = array(
        '#type' => 'select',
        '#title' => t('Solr property'),
        '#options' => sarnia_index_get_filter_options($this->definition['search_api_index']),
        '#default_value' => $this->options['solr_property'],
      );
      sarnia_element_add_combobox($form['solr_property']);
    }
  }

  function options_submit(&$form, &$form_state) {
    parent::options_submit($form, $form_state);

    // Set a reasonable label if it is the first save and none was specified, or
    // if the the previous label matched the previous property name and has not
    // been changed.
    $values = &$form_state['values']['options'];
    $default_title = 'Solr property';
    if ((!isset($this->options['solr_property']) && $values['expose']['label'] == $default_title) ||
        ($this->options['solr_property'] == $this->options['expose']['label'] && $this->options['expose']['label'] == $values['expose']['label'])) {
      $values['expose']['label'] = $values['solr_property'];
    }
  }

  /**
   * By default Solr returns all of the fields in a Solr doc. All that this
   * method needs to do is specify the field alias.
   */
  public function query() {
    $this->real_field = $this->options['solr_property'];
    // Handle the custom 'is null' and 'is not null' operators.
    // @see SarniaViewsHandlerFilter::operator_options()
    // @see http://drupal.org/node/1318904#comment-5817206
    switch ($this->operator) {
      case 'IS NULL':
        $this->query->condition($this->real_field, NULL, '=', $this->options['group']);
        break;
      case 'IS NOT NULL':
        $this->query->condition($this->real_field, NULL, '!=', $this->options['group']);
        break;

      default:
        parent::query();
    }
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

}
