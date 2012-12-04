<?php
/**
 * @file
 * Provides the Menu Views rule plugin for the Menu Position module.
 */

/**
 * Implements HOOK_menu_position_condition_PLUGIN().
 */
function menu_views_menu_position_condition_menu_views($variables) {
  // Always return true, the real work is done in the alter.
  return TRUE;
}

/**
 * Implements HOOK_menu_position_rule_PLUGIN_form().
 */
function menu_views_menu_position_rule_menu_views_form(&$form, &$form_state) {
  $variables = !empty($form_state['#menu-position-rule']['conditions']['menu_views']) ? $form_state['#menu-position-rule']['conditions']['menu_views'] : array();
  $form['conditions']['menu_views'] = array(
    '#type' => 'fieldset',
    '#title' => t('Menu Views'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'menu_views') . '/menu_position.menu_views.js'),
    ),
  );
  $form['conditions']['menu_views']['menu_views'] = array(
    '#type' => 'checkbox',
    '#title' => t('Process Menu Items'),
    '#default_value' => !empty($variables['menu_views']) ? $variables['menu_views'] : 0,
    '#description' => t('Apply this rule to allow Menu Views to process menu items.'),
    '#weight' => -20,
  );
  $form['#submit'][] = 'menu_views_menu_position_rule_menu_views_form_submit';
}

/**
 * Implements HOOK_menu_position_rule_PLUGIN_form_submit().
 */
function menu_views_menu_position_rule_menu_views_form_submit(&$form, &$form_state) {
  if (!empty($form_state['values']['menu_views'])) {
    if ($form_state['values']['menu_views']) {
      $variables = array(
        'menu_views' => $form_state['values']['menu_views'],
      );
      $form_state['values']['conditions']['menu_views'] = $variables;
    }
  }
}
