<?php

/**
 * Faux menu router, since this admin page is nested too deeply in the menu.
 */
function sarnia_schema_page($search_api_server, $behavior = NULL) {
  if (in_array($behavior, array('display', 'filter', 'fulltext', 'sort'))) {
    return drupal_get_form('sarnia_schema_rule_form', $search_api_server, $behavior);
  }
  else {
    return sarnia_schema_rule_list($search_api_server);
  }
}

function sarnia_schema_rule_list($search_api_server) {
  $render = array();

  $render['help'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t("This section can help configure the behavior of your Solr properties. Because the behavior of Solr properties is determined by a particular Solr core's <code>schema.xml</code> file, a particular Solr setup may customize property names, dynamic bases for aggregation, or property type names.") . '</p>'
      . '<p>' . t("Configuration on this page is not necessary; Sarnia can determine which properties are technically available for display, filter search, fulltext search, or sort. However, if you find that some properties are available to Sarnia Views handlers in the Views UI where they do not make sense, configuring the schema rules can help refine properties' behavior.") . '</p>'
      . '<p>' . t("Properties may be disabled, or may be replaced with another property. Disabling a property is useful for things like preventing sorting on fulltext search fields (which yield unpredicatble sort orders) or preventing the display of aggregated fields; replacing a property allows you to associate a sortable property with a displayable property, which makes click-sorting available on Views fields. These adjustments are not relevant to the end user, but they may be useful for sitebuilders working with Views who are not intimately familiar with the particulars of Solr.") . '</p>'
      . '<p>' . t("Sarnia comes with a basic set of rules which support some <code>schema.xml</code> conventions. These may be removed or overridden for a particular Search API server.") . '</p>',
  );

  $behavior_labels = array(
    'display' => t('display'),
    'filter' => t('filter search'),
    'fulltext' => t('fulltext search'),
    'sort' => t('sort'),
  );

  // Generate sections for each behavior.
  foreach ($behavior_labels as $key => $label) {
    $render[$key]['list'] = array(
      '#title' => ucfirst($label),
      '#theme' => 'item_list',
      '#items' => array(),
    );
  }

  // Generate a text description for each rule, and place the rule in a behavior section.
  $rules = sarnia_sarnia_solr_service_schema(array(
    'search_api_server' => array('', $search_api_server->machine_name),
    'enabled' => TRUE,
  ));
  foreach ($rules as $rule) {
    $render[$rule->behavior]['list']['#items'][] = _sarnia_get_rule_text($rule);
  }

  // Add a 'more details' link to each section.
  foreach (element_children($render) as $key) {
    $render[$key]['list']['#items'][] = l(t('more details'), 'admin/config/search/search_api/server/' . $search_api_server->machine_name . '/sarnia/schema/' . $key);
  }

  return $render;
}

/**
 * Administration form for rules.
 *
 * Administrators can use this form to add, delete, reorder, and
 * update the properties of rules.
 */
function sarnia_schema_rule_form($form, &$form_state, $search_api_server, $behavior) {
  drupal_set_title(t('!behavior Rules', array('!behavior' => ucfirst(_sarnia_get_behavior_label($behavior)))));

  $form['search_api_server'] = array(
    '#type' => 'value',
    '#value' => $search_api_server->machine_name,
  );

  $form['rules'] = array(
    '#tree' => TRUE,
  );

  // Get a list of existing rules.
  $rules = sarnia_sarnia_solr_service_schema(array(
    'search_api_server' => array('', $search_api_server->machine_name),
    'behavior' => $behavior,
    'enabled' => array(TRUE, FALSE),
  ));

  // Add a blank rule to the end of the list.
  $rules[] = (object) array(
    'id' => NULL,
    'search_api_server' => NULL,
    'behavior' => $behavior,
    'match_type' => NULL,
    'match_value' => NULL,
    'effect' => NULL,
    'replacement' => NULL,
    'enabled' => TRUE,
    'delete' => NULL,
  );

  // Built a template set of form elements for configuring one rule.
  $rule_form = array();
  $rule_form['rule'] = array(
    '#type' => 'value',
    '#value' => NULL,
  );
  $rule_form['id'] = array(
    '#type' => 'value',
    '#value' => NULL,
  );
  $rule_form['search_api_server'] = array(
    '#type' => 'checkbox',
    '#title' => t('This server only'),
    '#title_display' => 'invisible',
    '#return_value' => $search_api_server->machine_name,
  );
  $rule_form['behavior'] = array(
    '#type' => 'value',
    '#value' => $behavior,
  );
  $rule_form['match_type'] = array(
    '#type' => 'select',
    '#title' => t('Match Solr fields by...'),
    '#title_display' => 'invisible',
    '#options' => drupal_map_assoc(array(
      'name',
      'dynamicBase',
      'type',
    )),
  );
  $rule_form['match_value'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Match value'),
    '#title_display' => 'invisible',
  );
  $rule_form['effect'] = array(
    '#type' => 'select',
    '#title' => t('Rule effect'),
    '#title_display' => 'invisible',
    '#options' => drupal_map_assoc(array(
      'disable',
      'replace',
    )),
  );
  $rule_form['replacement'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Replacement'),
    '#title_display' => 'invisible',
  );
  $rule_form['enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#title_display' => 'invisible',
  );
  $rule_form['delete'] = array(
    '#type' => 'checkbox',
    '#title' => t('Delete'),
    '#title_display' => 'invisible',
  );

  // Generate a set of form elements for each rule.
  $colors = array();
  foreach ($rules as $index => $rule) {
    $form['rules'][$index] = $rule_form;

    // Set default values for this rule.
    $form['rules'][$index]['rule']['#value'] = $rule;
    $form['rules'][$index]['id']['#value'] = $rule->id;
    $form['rules'][$index]['search_api_server']['#default_value'] = ($rule->search_api_server == $search_api_server->machine_name);
    $form['rules'][$index]['match_type']['#default_value'] = $rule->match_type;
    $form['rules'][$index]['match_value']['#default_value'] = $rule->match_value;
    $form['rules'][$index]['effect']['#default_value'] = $rule->effect;
    $form['rules'][$index]['replacement']['#default_value'] = $rule->replacement;
    $form['rules'][$index]['replacement']['#states'] = array(
      'visible' => array(
        ":input[name='rules[$index][effect]']" => array('value' => 'replace'),
      ),
    );
    $form['rules'][$index]['enabled']['#default_value'] = $rule->enabled;
    $form['rules'][$index]['delete']['#default_value'] = FALSE;

    // Display the form element titles for the new rule row.
    if (!$rule->id) {
      foreach ($form['rules'][$index] as &$element) {
        if (isset($element['#title_display'])) {
          unset($element['#title_display']);
        }
      }
      $form['rules'][$index]['delete']['#access'] = FALSE;
      $form['rules'][$index]['match_type']['#options'] = array('' => '') + $form['rules'][$index]['match_type']['#options'];
      $form['rules'][$index]['effect']['#options'] = array('' => '') + $form['rules'][$index]['effect']['#options'];
      $form['rules'][$index]['enabled'] = array(
        '#type' => 'value',
        '#value' => TRUE,
      );
    }
    elseif ($rule->enabled) {
      // Putting an inline CSS style here is gross, but it allows us to generate
      // a range of colors and associate them over the two tables.
      $colors[$rule->id] = 'background: hsl(' . ((count($colors) * 80) % 360) . ', 100%, 90%);';
      $form['rules'][$index]['#sarnia_rule_color'] = $colors[$rule->id];
    }

  }

  // Add a save button directly below the rule configuration form.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  // Add a table of Solr properties that these rules may be applied to.
  $form['property_table_info'] = array(
    '#type' => 'container',
  );
  $form['property_table_info'] = array(
    '#markup' => '<p>' . t("The following reference table shows a list of Solr properties eligible for @behavior. If a rule matches a particular property, it's effect is listed in the far-right column color-coded to match the table of rules above. Only one rule may match a property, and rules match in the order listed (first by name, then by dynamicBase, and last by type).", array('@behavior' => _sarnia_get_behavior_label($behavior))) . '</p>',
  );
  module_load_include('inc', 'sarnia', 'sarnia.entities');
  $fields = $search_api_server->_getFilteredFields($behavior);
  $form['property_table'] = sarnia_entity_properties_table($search_api_server, $fields);
  array_pop($form['property_table']['#header']);
  array_pop($form['property_table']['#header']);
  $form['property_table']['#header'][] = 'Rule effect';
  foreach ($form['property_table']['#rows'] as $name => $row) {
    $rule = $search_api_server->schemaGetRule($fields[$name], $behavior);
    array_pop($form['property_table']['#rows'][$name]['data']);
    array_pop($form['property_table']['#rows'][$name]['data']);
    if ($rule) {
      $color = $colors[$rule->id];
      $form['property_table']['#rows'][$name]['data'][] = "<span style='{$color}' title='Rule ID {$rule->id}'>{$rule->effect}</span>";
      $form['property_table']['#rows'][$name]['class'][] = 'sarnia-has-schema-rule';
    }
    else {
      $form['property_table']['#rows'][$name]['data'][] = '--';
    }
  }

  return $form;
}

/**
 * Transforms the rules administration form into a table.
 */
function theme_sarnia_schema_rule_form($variables) {
  $form = $variables['form'];

  $columns = array(
    'enabled',
    'search_api_server',
    'match_type',
    'match_value',
    'effect',
    'replacement',
    'delete',
  );

  $header = array();
  $rows = array();
  $stripe = TRUE;

  foreach (element_children($form['rules']) as $i) {
    $element = &$form['rules'][$i];
    $stripe = !$stripe;

    // New rule title.
    if (!$element['rule']['#value']->id) {
      $row = array(
        'data' => array(),
        'no_striping' => TRUE,
        'class' => array(($stripe ? 'odd' : 'even')),
      );
      $row['data'][] = array(
        'data' => '<strong>' . t('Add a new rule:') . '</strong>',
        'colspan' => count($columns),
      );
      $rows[] = $row;
    }

    // Rule form as row.
    $row = array(
      'data' => array(),
      'no_striping' => TRUE,
      'class' => array(($stripe ? 'odd' : 'even')),
    );
    foreach ($columns as $col) {
      $row['data'][$col] = drupal_render($element[$col]);
      if (empty($header[$col])) {
        $header[$col] = isset($element[$col]['#title']) ? $element[$col]['#title'] : '';
      }
    }

    $row['data']['search_api_server'] = array(
      'data' => $row['data']['search_api_server'],
      'width' => '20px',
    );

    $rows[] = $row;

    // Rule description text.
    if ($element['rule']['#value']->id) {
      $row = array(
        'data' => array('', ''),
        'no_striping' => TRUE,
        'class' => array(($stripe ? 'odd' : 'even')),
      );
      $color = isset($element['#sarnia_rule_color']) ? $element['#sarnia_rule_color'] : '';
      $row['data'][] = array(
        'data' => "<span style='$color' title='Rule ID " . $element['rule']['#value']->id . "'><em>" . _sarnia_get_rule_text($element['rule']['#value']) . '</em></span>',
        'colspan' => count($columns) - 1,
      );
      $rows[] = $row;
    }
  }

  $output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'sarnia-schema-rules')));
  $output .= drupal_render_children($form);

  return $output;
}

function sarnia_schema_rule_form_validate($form, &$form_state) {
  $non_empty = array(
    'match_type' => t('Match type'),
    'match_value' => t('Match value'),
    'effect' => t('Rule effect'),
  );
  foreach ($form_state['values']['rules'] as $i => $values) {
    if (_sarnia_schema_rule_is_changed($values['rule'], $values)) {
      // Don't allow empty values in rules.
      foreach ($non_empty as $key => $label) {
        if (empty($values[$key])) {
          form_set_error("rules][$i][$key", t('!label cannot be empty.', array('!label' => $label)));
        }
      }

      // Disallow 'effect' == 'replace' when 'match_type' == 'type'
      if ($values['match_type'] == 'type' && $values['effect'] = 'replace') {
        form_set_error("rules][$i][effect", t("The 'replace' effect can only be used when matching on 'name' and 'dynamicBase'."));
      }

      // Require a 'replace' value when 'effect' == 'replace'
      if ($values['effect'] == 'replace' && empty($values['replacement'])) {
        form_set_error("rules][$i][replacement", t("When using a 'replace' rule, a value must be provided in the 'replacement' field."));
      }
    }
  }
}

/**
 * Form submit handler for sarnia schema rule administration.
 */
function sarnia_schema_rule_form_submit($form, &$form_state) {
  $changes = FALSE;

  foreach ($form_state['values']['rules'] as $values) {
    // The "this server only" checkbox will return either a server name or 0.
    if (!$values['search_api_server']) {
      $values['search_api_server'] = '';
    }

    // If the "delete" checkbox was checked, delete the rule.
    if (!empty($values['delete'])) {
      // delete rule
      db_delete('sarnia_solr_service_schema')
        ->condition('id', $values['id'])
        ->execute();
      drupal_set_message(t('Rule %rule has been deleted.', array('%rule' => $values['id'])));
    }
    // Otherwise, check whether the rule changed and create or update the record.
    elseif (_sarnia_schema_rule_is_changed($values['rule'], $values)) {
      $changes = TRUE;
      if (!empty($values['id'])) {
        drupal_write_record('sarnia_solr_service_schema', $values, 'id');
      }
      else {
        drupal_write_record('sarnia_solr_service_schema', $values);
      }
    }
  }

  if ($changes) {
    drupal_set_message(t('Your changes have been saved.'));
  }
}

function _sarnia_schema_rule_is_changed($rule, $form_values) {
  foreach ($form_values as $key => $value) {
    if (property_exists($rule, $key) && $rule->{$key} != $value) {
      return TRUE;
    }
  }
  return FALSE;
}

function _sarnia_get_rule_text($rule) {
  $replacements = array(
    '@effect' => $rule->effect,
    '@behavior' => _sarnia_get_behavior_label($rule->behavior),
    '@match_type' => $rule->match_type,
    '@match_value' => $rule->match_value,
    '@replacement' => $rule->replacement,
  );
  if ($rule->effect == 'disable') {
    return t("@effect @behavior when property @match_type = @match_value", $replacements);
  }
  elseif ($rule->effect == 'replace') {
    return t("use properties where @match_type = @match_value to @behavior properties where @match_type = @replacement", $replacements);
  }
}

function _sarnia_get_behavior_label($behavior) {
  $behavior_labels = array(
    'display' => t('display'),
    'filter' => t('filter search'),
    'fulltext' => t('fulltext search'),
    'sort' => t('sort'),
  );
  return isset($behavior_labels[$behavior]) ? $behavior_labels[$behavior] : NULL;
}
