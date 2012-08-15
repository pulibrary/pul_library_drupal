<?php

/**
 * Really basic filter handler for filtering Solr documents in Views.
 *
 * @TODO Deal with different field types.
 */
class SarniaViewsHandlerFilter extends SearchApiViewsHandlerFilter {

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

  /**
   * By default Solr returns all of the fields in a Solr doc. All that this
   * method needs to do is specify the field alias.
   */
  public function query() {
    $this->real_field = $this->options['solr_property'];
    parent::query();
  }

  public function admin_summary() {
    return check_plain($this->options['solr_property']) . ' ' . parent::admin_summary();
  }

}
