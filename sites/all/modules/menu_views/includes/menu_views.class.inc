<?php

/**
 * @file
 * Provides methods for attaching a view to a menu item.
 */

/**
 * Implements MenuViews() class.
 */
Class MenuViews {
  /**
   * Public Properties
   */
  public $name = FALSE;
  public $display = FALSE;
  public $arguments = '';
  public $mlid = 0;

  /**
   * Private Properties
  */
  private $options = FALSE;
  private $tree = FALSE;

  /**
   * Filters arguments and tokens for view argument.
   * Render a view inside a menu link.
   */
  public function tokenize_arguments($human_readable = FALSE) {
    $args = explode('/', $this->arguments);
    if (count($args) && $this->mlid) {
      $context['menu-link'] = menu_link_load($this->mlid);
      $options = array(
        'callback' => '_menu_views_tokens_callback',
        'clear' => TRUE,
        'human_readable' => $human_readable,
      );
      foreach ($args as $key => $arg) {
        $args[$key] = token_replace($arg, $context, $options);
      }
    }
    return implode('/', $args);
  }
  
  /**
   * Returns the parent string for where menu views is located in the form.
   */
  public function formParents() {
    return ($this->options && $this->tree ? 'options][' : '') . 'menu_views][';
  }

  public function load($form = array(), $form_state = array()) {
    $this->name = FALSE;
    $this->display = FALSE;
    $this->arguments = '';
    $this->mlid = 0;
    $this->tree = FALSE;
    // Setup the appropriate paths for each $form and $form_state variance.
    if (isset($form['options'])) {
      $this->options = $form['options'];
    }
    // Set the tree variable to reflect the #tree condition of $form['options'], required in case other modules alter the form.
    if (isset($form['options']['#tree'])) {
      $this->tree = $form['options']['#tree'];
    }
    $form_original_values = FALSE;
    if (isset($form['original_item']['#value']['options'])) {
      $form_original_values = $form['original_item']['#value']['options'];
    }
    $form_state_values = FALSE;
    if (isset($form_state['values'])) {
      $form_state_values = $this->tree && isset($form_state['values']['options']) ? $form_state['values']['options'] : $form_state['values'];
    }
    // Recurse through $form and $form_state for possible values for the current state of the attached view.
    $properties = array('name', 'display', 'arguments', 'mlid');
    foreach ($properties as $property) {
      // Check for submitted values in $form_state first.
      if ($form_state_values && isset($form_state_values['menu_views'][$property])) {
        $this->$property = $form_state_values['menu_views'][$property];
      }
      // Check for an existing attached view in the menu link item.
      elseif ($form_original_values && isset($form_original_values['menu_views'][$property])) {
        $this->$property = $form_original_values['menu_views'][$property];
      }
      // Check for a default form value.
      elseif ($this->options && isset($this->options['menu_views'][$property])) {
        $this->$property = $this->options['menu_views'][$property];
      }
    }
    $views = array_keys(views_get_enabled_views());
    if (!in_array($this->name, $views)) {
      $this->name = FALSE;
    }
    if ($this->name === FALSE) {
      $this->display = FALSE;
      $this->arguments = '';
    }
    else if ($this->display === FALSE) {
      $this->arguments = '';
    }
    return $this;
  }
}
