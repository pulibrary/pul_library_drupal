<?php

/**
 * @file
 * Views argument handler for Solr document Ids.
 */

class SarniaViewsHandlerArgumentId extends SarniaViewsHandlerArgument {

  /**
   * For this handler, the solr_property option is hard-coded to the id field.
   */
  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->options['solr_property'] = $this->definition['solr_property'];
  }

  /**
   * Add an option to use a different solr property as the name of this
   * argument.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['name_solr_property'] = array('default' => $this->definition['solr_property']);
    return $options;
  }

  /**
   * Add a field to the options form to select a solr property to use as the
   * name of the argument.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Remove the 'solr_property' configuration from SarniaViewsHandlerArgument::options_form().
    unset($form['solr_property']);

    // Add the combobox for the title solr property above the 'title' field.
    $new_form = array();
    foreach (array_keys($form) as $key) {
      if ($key == 'title_enable') {
        $new_form['name_solr_property'] = array(
          '#type' => 'select',
          '#title' => t('Argument name solr property'),
          '#description' => t('Use a different solr property when overriding the argument title instead of the id.'),
          '#options' => sarnia_index_get_filter_options($this->definition['search_api_index']),
          '#default_value' => $this->options['name_solr_property'],
          '#fieldset' => 'argument_present',
        );
        sarnia_element_add_combobox($new_form['name_solr_property']);
      }
      $new_form[$key] = $form[$key];
    }
    $form = $new_form;
  }

  /**
   * If the name solr property is not the id, load the sarnia entity and extract
   * the name property.
   */
  public function title() {
    if (!empty($this->argument) && $this->options['name_solr_property'] != $this->definition['solr_property']) {
      // The query has not run yet, so we need to load the entity in order to
      // get a property from it.
      $entity_info = sarnia_entity_type_load_by_index($this->definition['search_api_index']);
      $entities = entity_load($entity_info['machine_name'], array($this->argument));

      // Extract the solr property value from the entity.
      if (!empty($entities[$this->argument])) {
        $values = sarnia_field_get_property($entities[$this->argument], array('field_name' => $this->name_field), $this->options['name_solr_property']);
        if (!empty($values)) {
          return check_plain(current($values));
        }
      }
    }

    // Default to returning just the argument.
    return check_plain($this->argument);
  }

  /**
   * Return a string representing this handler's name in the UI.
   *
   * Override SarniaViewsHandlerArgument::ui_name() with Views' default behavior.
   * @see views_handler::ui_name()
   */
  function ui_name($short = FALSE) {
    if (!empty($this->options['ui_name'])) {
      $title = check_plain($this->options['ui_name']);
      return $title;
    }
    $title = ($short && isset($this->definition['title short'])) ? $this->definition['title short'] : $this->definition['title'];
    return t('!group: !title', array('!group' => $this->definition['group'], '!title' => $title));
  }

}
