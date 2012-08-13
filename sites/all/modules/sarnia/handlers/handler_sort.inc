<?php

/**
 * Really basic sort handler for sorting Solr documents in Views.
 */
class SarniaViewsHandlerSort extends SearchApiViewsHandlerSort {

  public function option_definition() {
    $options = parent::option_definition();
    $options['solr_property'] = array('default' => NULL);
    return $options;
  }

  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['solr_property'] = array(
      '#type' => 'select',
      '#title' => t('Solr property'),
      '#options' => sarnia_index_get_options($this->definition['search_api_index'], 'getSortFields'),
      '#default_value' => $this->options['solr_property'],
    );
    sarnia_element_add_combobox($form['solr_property']);
  }

  public function query() {
    if (!empty($this->options['solr_property'])) {
      $this->real_field = $this->options['solr_property'];
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
