<?php
/**
 * @file
 * Admin functions.
 */
/**
 * Admin Settings form.
 */
function entity_rules_admin_form($form, &$form_state) {
  $defaults = variable_get('entity_rules_settings', _entity_rules_get_default_settings());
  $entity_types = entity_get_info();
  foreach ($entity_types as $entity_type => $info) {
    if ($info['fieldable']) {
      $entity_options[$entity_type] = $info['label'];
    }
  }
  $form['entity_rules_settings'] = array(
    '#tree' => TRUE,
  );
  $form['entity_rules_settings']['entity_types'] = array(
    '#type' => 'checkboxes',
    '#title' => 'Enabled Types',
    '#options' => $entity_options,
    '#default_value' => array_filter($defaults['entity_types']),
  );

  $form = system_settings_form($form);
  // Must clear settings after new settings have been saved
  $form['#submit'][] = 'entity_rules_clear_type_settings';
  return $form;
}

/**
 * Page callback to list Rules that can invoked by Entity Types
 */
function entity_rules_list($rule_type) {
  RulesPluginUI::$basePath = "admin/config/workflow/entity_rules/{$rule_type}";
  $options = array('show plugin' => FALSE);

  $content['enabled']['title']['#markup'] = '<h3>' . t("Enabled Entity $rule_type Rules") . '</h3>';

  $conditions = array(
    'plugin' => array('and', 'or', 'rule', 'rule set', 'action set'),
    'active' => TRUE,
    'tags' => array("entity_rules_$rule_type"),
  );
  $content['enabled']['rules'] = RulesPluginUI::overviewTable($conditions, $options);
  $content['enabled']['rules']['#empty'] = t("There are no active Entity $rule_type rules.");

  $content['disabled']['title']['#markup'] = '<h3>' . t("Disabled Entity $rule_type rules") . '</h3>';

  $conditions['active'] = FALSE;
  $content['disabled']['rules'] = RulesPluginUI::overviewTable($conditions, $options);
  $content['disabled']['rules']['#empty'] = t("There are no disabled Entity $rule_type rules.");

  return $content;
}
/**
 * Page call back to list Rules for a bundle.
 * @param $op
 *   Operation
 * @param $entity_type
 * @param $bundle
 * @return
 *   Drupal renderable array for page.
 */
function entity_rules_type_op_rules($op, $entity_type, $bundle) {
  $op_name = ucfirst($op);
  $bundle_name = _entity_rules_get_bundle_name($entity_type, $bundle);
  $output['add_new'] = drupal_get_form('entity_rules_new_bundle_rule_form', $entity_type, $bundle_name, $op);
  // @todo Bring up to standards
  $output['heading'] = array(
    '#type' => 'markup',
    '#markup' => "<h3>Current Rules</h3>",
  );
  $output['links'] = array(
    '#theme' => 'links',
    '#links' => array(
      array(
        'title' => "Add new $op_name Rule",
        'href' => "admin/config/workflow/entity_rules/$op/add",
      ),
      array(
        'title' => "Manage $op_name Rules",
        'href' => "admin/config/workflow/entity_rules/$op",
      ),
    ),
    '#attributes' => array('class' => 'action-links'),
  );

  $output['existing'] = drupal_get_form('entity_rules_bundle_rules_form', $entity_type, $bundle_name, $op);
  return $output;
}
/**
 * Form for setting Rule parmeters for a Bundle
 * @todo clean this up and make it a TableDrag so you can re-order Rules
 */
function entity_rules_bundle_rules_form($form, &$form_state, $entity_type, $bundle, $op) {
  $var_name =  _entity_rules_get_var_name($entity_type, $bundle, $op);
  $rule_settings = variable_get($var_name, array());
  $show_tokens = FALSE;
  $component_types = _entity_rules_get_types_for_op($op);
  if (empty($rule_settings)) {
    $form['empty'] = array(
      '#type' => 'markup',
      '#markup' => t('There are currently no active rules'),
    );
    return $form;
  }
  $current_path = current_path();
  $length = strlen('entity-rules');
  $ends_with_rules = (substr($current_path, -$length) === 'entity-rules');
  if ($ends_with_rules) {
    $current_path .= '/create';
  }


  $form['setting_var_name'] = array(
    '#type' => 'value',
    '#value' => $var_name,
  );

  $form[$var_name]['#tree'] = TRUE;
  $rules = rules_config_load_multiple(array_keys($rule_settings));
  $weight = 0;
  foreach ($rule_settings as $rule_name => $rule_setting) {
    if (isset($rules[$rule_name])) {
      $form[$var_name][$rule_name]['name'] = array(
        '#type' => 'markup',
        '#markup' => $rules[$rule_name]->label
          . ' ' . l(t('edit'), "admin/config/workflow/entity_rules/$op/manage/{$rules[$rule_name]->id}"),
      );
      $vars = _entity_rules_get_extra_vars($rules[$rule_name], $op);
      if (!empty($vars)) {
        foreach ($vars as $param_name => $param_info) {
          $form[$var_name][$rule_name]['args'][$param_name] = array(
            '#type' => $param_info['type'] == 'boolean' ? 'checkbox' : 'textfield',
            '#title' => $param_info['label'],
            '#default_value' => isset($rule_setting['args'][$param_name]) ? $rule_setting['args'][$param_name] : NULL,
          );
        }


      }
      if (is_subclass_of($rules[$rule_name], 'RulesConditionContainer')) {
        $form[$var_name][$rule_name]['false_msg'] = array(
          '#type' => 'text_format',
          '#cols' => 15,
          '#rows' => 3,
          '#title' => t('Rule returns false message'),
          '#default_value' => isset($rule_setting['false_msg']['value']) ? $rule_setting['false_msg']['value'] : NULL,
          '#format' => isset($rule_setting['false_msg']['format']) ? $rule_setting['false_msg']['format'] : NULL,
          '#description' => t('This message will be displayed if this Rule evalutes to FALSE.'),
        );
        $show_tokens = TRUE;
      }

      $form[$var_name][$rule_name]['remove_link'] = array(
        '#markup' => l(t('Remove'), $current_path . '/remove/' . $rule_name),
      );
      $form[$var_name][$rule_name]['weight'] = array(
        '#type' => 'weight',
        '#title' => t('Weight'),
        '#default_value' => $weight++,
        '#delta' => 10,
        '#title-display' => 'invisible',
      );
    }
  }
  if ($show_tokens && module_exists('token')) {
    $form['tokens'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array($entity_type), // The token types that have specific context. Can be multiple token types like 'term' and/or 'user'
      '#global_types' => TRUE, // A boolean TRUE or FALSE whether to include 'global' context tokens like [current-user:*] or [site:*]. Defaults to TRUE.
      '#click_insert' => TRUE, // A boolean whether to include the 'Click this token to insert in into the the focused textfield' JavaScript functionality. Defaults to TRUE.
      '#dialog' => TRUE,
    );
  }
  $form['#theme'] = 'entity_rules_bundle_rules_form';
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Changes'),
  );
  return $form;
}
/**
 * Form Submit callback for entity_rules_bundle_rules_form
 *
 * Sort Rules settings according to weight
 */
function entity_rules_bundle_rules_form_submit($form, &$form_state) {

  $values = $form_state['values'];
  $var_name = $values['setting_var_name'];
  $rules_settings = $values[$var_name];
  uasort($rules_settings, 'drupal_sort_weight');
  variable_set($var_name, $rules_settings);
  drupal_set_message(t('Changes have been saved.'));
}
/**
 * Form callback that should current rules for a bundle and operation.
 *
 * @param $form
 * @param $form_state
 * @param $entity_type
 * @param $bundle
 * @param $op
 * @return
 *   Form array.
 */
function entity_rules_new_bundle_rule_form($form, &$form_state, $entity_type, $bundle, $op) {
  $var_name = _entity_rules_get_var_name($entity_type, $bundle, $op);
  $used_rules = variable_get($var_name, array());
  $rules = entity_rules_get_rule_options("entity_rules_$op", $entity_type);
  $rules = array_diff_key($rules, $used_rules);
  if (empty($rules)) {
    return array();
  }
  $form['bundle'] = array(
    '#type' => 'value',
    '#value' => $bundle,
  );
  $form['entity_op'] = array(
    '#type' => 'value',
    '#value' => $op,
  );
  $form['entity_type'] = array(
    '#type' => 'value',
    '#value' => $entity_type,
  );

  $form['rule'] = array(
    '#type' => 'select',
    '#title' => t('Add Rule'),
    '#options' => $rules,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  return $form;
}
/**
 * Form submit callback.
 *
 * Allows adding new rules to a bundle.
 * @param $form
 * @param $form_state
 */
function entity_rules_new_bundle_rule_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  $var_name = _entity_rules_get_var_name($values['entity_type'], $values['bundle'], $values['entity_op']);
  $value = variable_get($var_name, array());
  // @todo Should you be able to add the same Rule twice??
  $value[$values['rule']] = array(
    'args' => array(),
  );
  variable_set($var_name, $value);
}

/**
 * Gets Rules options for a select form element.
 * @param $tag
 *   Rule tag to filter on.
 * @param $entity_type
 * @return
 *   Array of key value pairs.
 */
function entity_rules_get_rule_options($tag, $entity_type) {
  $conditions = array(
    //'plugin' => $plugin_types,
    'active' => TRUE,
  );
  $entities = entity_load('rules_config', FALSE, $conditions);
  ksort($entities);
  $rules = array();
  foreach ($entities as $entity) {
    if (in_array($tag, $entity->tags)) {
      $vars = $entity->componentVariables();
      if (isset($vars['entity'])) {
        if ($vars['entity']['type'] == 'entity' || $vars['entity']['type'] == $entity_type) {
          $rules[$entity->name] = $entity->label;
        }
      }

    }
  }
  return $rules;
}
/**
 * Removes rule from a bundle and operation.
 *
 * @param $op
 * @param $entity_type
 * @param $bundle
 * @param $rule_name
 */
function entity_rules_type_op_rules_remove($op, $entity_type, $bundle, $rule_name) {
  $bundle_name = _entity_rules_get_bundle_name($entity_type, $bundle);
  $var_name = _entity_rules_get_var_name($entity_type, $bundle_name, $op);
  $value = variable_get($var_name, array());
  unset($value[$rule_name]);
  variable_set($var_name, $value);
  drupal_set_message(t('This rule has been removed.'));
  drupal_goto(str_replace("/remove/$rule_name", '', current_path()));
}
/**
 * Theme callback for the entity_rules_bundle_rules_form form.
 *
 * The theme callback will format the $form data structure into a table and
 * add our tabledrag functionality.  (Note that drupal_add_tabledrag should be
 * called from the theme layer, and not from a form declaration.  This helps
 * keep template files clean and readable, and prevents tabledrag.js from
 * being added twice accidently.
 *
 * @return
 *   The rendered tabledrag form
 */
function theme_entity_rules_bundle_rules_form($variables) {
  $form = $variables['form'];
  $have_false_msg = $have_args = FALSE;


  // Initialize the variable which will store our table rows.
  $rows = array();
  $output = '';
  if (!empty($form['setting_var_name'])) {
    $setting_var_name = $form['setting_var_name']['#value'];
    // Iterate over each element in our $form[$setting_var_name] array.
    foreach (element_children($form[$setting_var_name]) as $rule_name) {
      if (isset($form[$setting_var_name][$rule_name]['false_msg'])) {
        $have_false_msg = TRUE;
      }
      if (isset($form[$setting_var_name][$rule_name]['args'])) {
        $have_args = TRUE;
      }
    }
    foreach (element_children($form[$setting_var_name]) as $rule_name) {

      // Before we add our 'weight' column to the row, we need to give the
      // element a custom class so that it can be identified in the
      // drupal_add_tabledrag call.
      //
      // This could also have been done during the form declaration by adding
      // '#attributes' => array('class' => 'example-item-weight'),
      // directy to the 'weight' element in tabledrag_example_simple_form().
      $form[$setting_var_name][$rule_name]['weight']['#attributes']['class'] = array('rule-item-weight');

      // We are now ready to add each element of our $form data to the $rows
      // array, so that they end up as individual table cells when rendered
      // in the final table.  We run each element through the drupal_render()
      // function to generate the final html markup for that element.
      $row = array(
        'data' => array(
          // Add our 'name' column.
          drupal_render($form[$setting_var_name][$rule_name]['name']),
        ),
        'class' => array('draggable'),
      );
      if ($have_args) {
        $have_args = TRUE;
        // Add our 'description' column.
        $row['data'][] = drupal_render($form[$setting_var_name][$rule_name]['args']);
      }
      if ($have_false_msg) {
        // Add our 'return message' column.
        $row['data'][] = drupal_render($form[$setting_var_name][$rule_name]['false_msg']);
      }
      // Add our 'remove' column
      $row['data'][] = drupal_render($form[$setting_var_name][$rule_name]['remove_link']);
      // Add our 'weight' column.
      $row['data'][] = drupal_render($form[$setting_var_name][$rule_name]['weight']);

      $rows[] = $row;
    }

    // We now define the table header values.  Ensure that the 'header' count
    // matches the final column count for your table.
    $header = array(t('Name'));
    if ($have_args) {
      $header[] = t('Arguments');
    }
    if ($have_false_msg) {
      $header[] = t('Return Message');
    }

    $header[] = t('Remove');
    $header[] = t('Weight');

    // We also need to pass the drupal_add_tabledrag() function an id which will
    // be used to identify the <table> element containing our tabledrag form.
    // Because an element's 'id' should be unique on a page, make sure the value
    // you select is NOT the same as the form ID used in your form declaration.
    $table_id = 'items-table';

    // We can render our tabledrag table for output.
    $output = theme('table', array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array('id' => $table_id),
    ));
  }

  // And then render any remaining form elements (such as our submit button).
  $output .= drupal_render_children($form);

  if (!empty($table_id)) {
    drupal_add_tabledrag($table_id, 'order', 'sibling', 'rule-item-weight');
  }

  return $output;
}
