<?php
/**
 * @file
 * Handles all form alters and submit functions for entityconnect.
 */

/**
 * Implements hook_field_attach_form().
 *
 * Here we attach a "Add" et "Edit" submit button
 * for each allowed entityreference field.
 */
function _entityconnect_field_attach_form($entity_type, $entity, &$form, &$form_state, $field_name, $field, $langcode = LANGUAGE_NONE, $instance, $filters = NULL) {
  if (!isset($form[$field_name])) {
    // Get the list of all parents element for the clicked button.
    $parents = (isset($form_state['clicked_button']['#parents'])) ? $form_state['clicked_button']['#parents'] : NULL;
    $strPath = _entityconnect_get_parents($parents);

    $input = "(isset(\$form" . $strPath . "['#language'])) ? \$language = " . "\$form" . $strPath . "['#language'] : \$language = NULL ;";
    eval($input);
    $input = "\$field_container = " . "&\$form" . $strPath . ";";
    eval($input);
    (isset($language)) ? $widget_container = &$field_container[$language] : $widget_container = $field_container;
  }
  else {
    // Set value with root level information.
    $language = $form[$field_name]['#language'];
    $field_container = &$form[$field_name];
    $widget_container = &$field_container[$language];
  }

  if (isset($widget_container['#field_parents'])) {
    foreach ($widget_container['#field_parents'] as $key1 => $parent) {
      if (!isset($parents)) {
        $parents = $parent;
      }
      else {
        $parents .= "-" . $parent;
      }
    }
  }

  $addbuttonallowed = $instance['entityconnect_unload_add'];
  $editbuttonallowed = $instance['entityconnect_unload_edit'];


  $field = field_info_field($field_name);
  // We get bundles referenced.
  if ($field['module'] == 'entityreference') {
    $entity_reference_info = entityreference_get_selection_handler($field);
    $entity_type = $entity_reference_info->field['settings']['target_type'];

    if (isset($entity_reference_info->field['settings']['handler_settings']['target_bundles'])) {
     $acceptable_types = $entity_reference_info->field['settings']['handler_settings']['target_bundles'];
    }
    else {
      $acceptable_types = $filters;
    }
  }
  elseif ($field['module'] == 'node_reference') {
    $entity_type = 'node';
    $acceptable_types = $field['settings']['referenceable_types'];
  }


  // We currently should separate Autocomplete widget from others default widget
  // because "Edit" button will not react well on multiple selected items.
  // Autocomplete widget has not #type value, so we are testing it
  // via $widget_container['#type'].
  // We also test if $widget_container['view'] is set to support
  // the widget provided by entityreference_view_widget module.
  if ((isset($widget_container['#type']) || isset($widget_container['view']))
          && user_access('entityconnect add button') && $addbuttonallowed == 0) {
    // Type is set, so only the Add button will be displayed.
    (isset($parents)) ? $parents : $parents = '';
    entityconnect_add_form_element_new($field_container, $language, $field_name, $parents, 'all', '', $instance, $entity_type, $acceptable_types);
  }
  else {
    // Type is not set, so multiple widgets.
    // We have to add some extra js for single value fields so we add a class to let the js know.
    $extra_class = (!isset($widget_container['#cardinality']) || $widget_container['#cardinality'] == 1) ? 'single-value' : '';
    foreach ($widget_container as $key => &$widget_element) {
      if (is_numeric($key)) {
        if (user_access('entityconnect add button') && $addbuttonallowed == 0) {
         (isset($parents)) ? $parents : $parents = '';
          entityconnect_add_form_element_new($widget_element, $language, $field_name, $parents, $key, $extra_class, $instance, $entity_type, $acceptable_types);
        }
        if (user_access('entityconnect edit button') && $editbuttonallowed == 0) {
          (isset($parents)) ? $parents : $parents = '';
          entityconnect_add_form_element_edit($widget_element, $language, $field_name, $parents, $key, $extra_class, $entity_type);
        }
      }
    }
  }
}

/**
 * Here we attach a "Add" submit button.
 */
function entityconnect_add_form_element_new(&$widget_element, $language, $field_name, $parents, $key, $extra_class, $instance, $entity_type, $acceptable_types = NULL) {
  $widget_element["add_entityconnect__{$field_name}_{$key}_{$parents}"] = array(
    '#type' => 'submit',
    '#limit_validation_errors' => array(),
    '#value' => t('New content'),
    '#name' => "add_entityconnect__{$field_name}_{$key}_{$parents}",
    '#prefix' => "<div class = 'entityconnect-add $extra_class'>",
    '#suffix' => '</div>',
    '#key' => $key,
    '#field' => $field_name,
    '#entity_type_target' => $entity_type,
    '#acceptable_types' => $acceptable_types,
    '#add_child' => TRUE,
    '#language' => $language,
    '#submit' => array('entityconnect_include_form', 'entityconnect_add_edit_button_submit'),
    '#weight' => -2,
    '#attached' => array(
      'js' => array(
        drupal_get_path('module', 'entityconnect') . "/theme/js/entityconnect.js",
      ),
      'css' => array(
        drupal_get_path('module', 'entityconnect') . "/theme/css/entityconnect.css",
      ),
    ),
  );
}

/**
 * Here we attach a "Edit" submit button.
 */
function entityconnect_add_form_element_edit(&$widget_element, $language, $field_name, $parents, $key, $extra_class, $entity_type) {
  $widget_element["edit_entityconnect__{$field_name}_{$key}_{$parents}"] = array(
    '#type' => 'submit',
    //'#limit_validation_errors' => array(array($field_name)),
    '#limit_validation_errors' => array(array()),
    '#value' => t('Edit content'),
    '#name' => "edit_entityconnect__{$field_name}_{$key}_{$parents}",
    '#prefix' => "<div class = 'entityconnect-edit $extra_class'>",
    '#suffix' => '</div>',
    '#key' => $key,
    '#field' => $field_name,
    '#entity_type_target' => $entity_type,
    '#add_child' => FALSE,
    '#language' => $language,
    '#submit' => array('entityconnect_include_form', 'entityconnect_add_edit_button_submit'),
    '#weight' => -2,
    '#attached' => array(
      'js' => array(
        drupal_get_path('module', 'entityconnect') . "/theme/js/entityconnect.js",
      ),
      'css' => array(
        drupal_get_path('module', 'entityconnect') . "/theme/css/entityconnect.css",
      ),
    ),
  );
}

/**
 * Call when a new entity is to be added or edited.
 *
 * We cache the current state and form
 * and redirect to the add or edit page with an append build_cached_id.
 */
function entityconnect_add_edit_button_submit(&$form, &$form_state) {

  $cache_id = "entityconnect-" . $form['#build_id'];
  $field = $form_state['clicked_button']['#field'];
  $key   = $form_state['clicked_button']['#key'];

  $entity_type = $form_state['clicked_button']['#entity_type_target'];
  $acceptable_types = $form_state['clicked_button']['#acceptable_types'];

  $field_info = field_info_field($field);

  // Get the list of all parents element for the clicked button.
  $parents = (isset($form_state['clicked_button']['#parents'])) ? $form_state['clicked_button']['#parents'] : NULL;
  $strPath = _entityconnect_get_parents($parents);

  if ($field_info['module'] == 'entityreference') {
    $input = "\$target_id = (isset(\$form_state['input']" . $strPath . "['target_id']))";
    $input .= "? \$form_state['input']" . $strPath . "['target_id']";
    $input .= ": 0;";
    eval($input);

    /**
    * TODO : Find the original problem of the entity connect use with
    * Field Collection.
    */
    if (!empty($target_id) && !intval($target_id)) {
      // Take "label (entity id)', match the id from parenthesis.
      if (preg_match("/.+\((\d+)\)/", $target_id, $matches)) {
        $target_id = $matches[1];
      }
    }
//    $entity_reference_info = entityreference_get_selection_handler($field_info);
//    $entity_type = $entity_reference_info->field['settings']['target_type'];
  }
  elseif ($field_info['module'] == 'node_reference') {
//    $entity_type = 'node';
    //$language = $form[$field]['#language'];
    $language = $form_state['clicked_button']['#language'];
    $target_id = isset($form_state['values'][$field][$language][$key]['nid'])
      ? $form_state['values'][$field][$language][$key]['nid'] : 0;
  }

  $data = array(
    'form'       => $form,
    'form_state' => $form_state,
    'dest'       => $_GET['q'],
    'field'      => $field,
    'field_info' => $field_info,
    'key'        => $key,
    'add_child'  => $form_state['clicked_button']['#add_child'],
    'target_id'  => $target_id,
    'target_entity_type' => $entity_type,
    'acceptable_types' => $acceptable_types,
//    'language'   => $language,
  );

  entityconnect_cache_set($cache_id, $data);

  unset($_GET['destination']);
  if ($data['add_child']) {
    $form_state['redirect'] = "admin/entityconnect/add/$cache_id";
  }
  else {
    if ($data['target_id']) {
      $form_state['redirect'] = "admin/entityconnect/edit/$cache_id";
    }// if()
  }// else()
}

/**
 * Sets submit button on child create form.
 *
 * On submiting of a child form we set:
 * the target_id in the cache entry
 * the rediect to our redirect page.
 */
function entityconnect_child_form_submit(&$form, &$form_state) {
  $cache_id = $form_state['values']['parent_build_cache_id'];

  if ($cache_id && ($cache = cache_get($cache_id))) {
    $data = $cache->data;
    $field = field_info_field($cache->data['field']);

    if ($field['module'] == 'entityreference') {
      $entity_reference_info = entityreference_get_selection_handler($field);
      $entity_type = $entity_reference_info->field['settings']['target_type'];
    }
    if ($field['module'] == 'node_reference') {
      $entity_type = 'node';
    }
    switch ($entity_type) {
      case 'node':
        $data['target_id'] = $form_state['values']['nid'];
        break;

      case 'user':
        $data['target_id'] = $form_state['values']['name'];
        break;

      case 'taxonomy_term':
        $data['target_id'] = $form_state['values']['tid'];
        break;

      case 'taxonomy_vocabulary':
        $data['target_id'] = $form_state['values']['vid'];
        break;

      default:
        break;
    }// switch()
    entityconnect_cache_set($cache_id, $data);
    $form_state['redirect'] = "admin/entityconnect/return/$cache_id";
  }// if()
}

/**
 * Sets the redirect to a admin/entityconnect/redirect page.
 */
function entityconnect_child_form_cancel(&$form, &$form_state) {
  $cache_id = $form_state['clicked_button']['#parent_build_cache_id'];
  if ($cache_id && ($cache = cache_get($cache_id))) {
    $form_state['redirect'] = "admin/entityconnect/return/$cache_id";
  }// if()
}

/**
 * Complete entityreference field on parent form with the target_id value.
 *
 * This is for when we return to the parent page
 * we find the cached form and form_state clean up the form_state a bit
 * and mark it to be rebuilt.
 *
 * If the cache as a target_id we set that in the input.
 */
function entityconnect_return_form_alter(&$form, &$form_state, $form_id, $cache_id, $cache) {
  if (!isset($form_state['#entityconnect_processed'])) {
    $form_state = $cache->data['form_state'];
    $form = $cache->data['form'];
    $form_state['submitted'] = FALSE;
    $form_state['rebuild'] = TRUE;
    $data = $cache->data;
    $parents = (isset($form_state['clicked_button']['#parents'])) ? $form_state['clicked_button']['#parents'] : NULL;

    unset($form_state['clicked_button']);
    unset($form_state['submit_handlers']);

    $strPath = _entityconnect_get_parents($parents);

    $input = "(isset(\$form" . $strPath . "['#language'])) ? \$language = " . "\$form" . $strPath . "['#language'] : \$language = NULL;";
    eval($input);
    $input = "\$field_container = " . "&\$form" . $strPath . ";";
    eval($input);
    (isset($language)) ? $widget_container = &$field_container[$language] : $widget_container = $field_container;
    (!isset($language)) ? $language = LANGUAGE_NONE : $language;
//    $language = $data['language'];
    if (isset($data['target_id']) && $form_state['rebuild'] === TRUE) {
      switch ($data['target_entity_type']) {
        case 'node':
          if ($data['target_id'] != 0 && $node = node_load($data['target_id'])) {
            $field_info = field_info_field($data['field']);
            if ($field_info['module'] == 'entityreference') {
              if (!isset($widget_container['#type'])) {
                $element['#default_value'] = $node->title;
                $element['#default_value'] .= ' (' . $node->nid . ')';
                _entityconnect_alter_form_state_input($form, $form_state, 'autocomplete', $strPath, $language, $element['#default_value']);
              }
              else {
                // Default value should have differents build function of the widget type.
                if ($widget_container['#type'] == 'textfield') { // Autocomplete tags style.
                  $element['#default_value'] = $node->title;
                  $element['#default_value'] .= ' (' . $node->nid . ')';
                  if (!empty ($widget_container['#value'])) {
                    $element['#default_value'] .= ', ' . $widget_container['#value'];
                  }
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
                elseif ($widget_container['#type'] == 'select') { // Select list.
                  if ($widget_container['#multiple'] == FALSE) {
                    $element['#default_value'] = $node->nid;
                    _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                    eval($input);
                  }
                  else {
                    $element['#default_value'] = $node->nid;
                    $element['#default_value'] = $widget_container['#value'] + array($element['#default_value'] => $element['#default_value']);
                    _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                  }
                }
                elseif ($widget_container['#type'] == 'radios') { // Radios widget.
                  $element['#default_value'] = $node->nid;
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
                elseif ($widget_container['#type'] == 'checkboxes') { // Checkboxes widget.
                    $element['#default_value'] = $node->nid;
                    $element['#default_value'] = $widget_container['#value'] + array($element['#default_value'] => $element['#default_value']);
                    _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
              }
            }
            if ($field_info['module'] == 'node_reference') {
              $element['#default_value'] = $node->nid;

              if (!is_array($form_state['input'][$data['field']][$language])) {
                $form_state['input'][$data['field']][$language] = array();
              }
              // Different processing if noderef is an autocomplete or a select.
              switch ($form[$data['field']][$language]['#type']) {
                case 'select':
                  $form_state['input'][$data['field']][$language] = $node->nid;
                  break;
                default:
                  // Use the autocomplete value so we are sure we validate.
                  $value =  node_reference_autocomplete_value($element, FALSE, $form_state);
                  $form_state['input'][$data['field']][$language][$data['key']]['nid'] = $value;
                  break;
              }
            }
          }
          break;

        case 'user':
          if (($data['target_id'] != NULL || $data['target_id'] != 0) && $user = user_load_by_name($data['target_id'])) {
            if (!isset($widget_container['#type'])) {
              $element['#default_value'] = $user->name;
              $element['#default_value'] .= ' (' . $user->uid . ')';
              _entityconnect_alter_form_state_input($form, $form_state, 'autocomplete', $strPath, $language, $element['#default_value']);
            }
            else {
              // Default value should have differents build function of the widget type.
              if ($widget_container['#type'] == 'textfield') { // Autocomplete tags style.
                $element['#default_value'] = $user->name;
                $element['#default_value'] .= ' (' . $user->uid . ')';
                if (!empty ($widget_container['#value'])) {
                  $element['#default_value'] .= ', ' . $widget_container['#value'];
                }
               _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'select') { // Select list.
                if ($widget_container['#multiple'] == FALSE) {
                  $element['#default_value'] = $user->uid;
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
                else {
                  $element['#default_value'] = $user->uid;
                  $element['#default_value'] = $widget_container['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
              }
              elseif ($widget_container['#type'] == 'radios') { // Radios widget.
                $element['#default_value'] = $user->uid;
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'checkboxes') { // Checkboxes widget.
                  $element['#default_value'] = $user->uid;
                  $element['#default_value'] = $form[$data['field']][$language]['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
            }
          }// if()
          break;

        case 'taxonomy_term':
          if (($data['target_id'] != NULL || $data['target_id'] != 0) && $term = taxonomy_term_load($data['target_id'])) {
            if (!isset($widget_container['#type'])) {
              $element['#default_value'] = $term->name;
              $element['#default_value'] .= ' (' . $term->tid . ')';
              _entityconnect_alter_form_state_input($form, $form_state, 'autocomplete', $strPath, $language, $element['#default_value']);
            }
            else {
              // Default value should have differents build function of the widget type.
              if ($widget_container['#type'] == 'textfield') { // Autocomplete tags style.
                $element['#default_value'] = $term->name;
                $element['#default_value'] .= ' (' . $term->tid . ')';
                if (!empty ($widget_container['#value'])) {
                  $element['#default_value'] .= ', ' . $widget_container['#value'];
                }
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'select') { // Select list.
                if ($widget_container['#multiple'] == FALSE) {
                  $element['#default_value'] = $term->tid;
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
                else {
                  $element['#default_value'] = $term->tid;
                  $element['#default_value'] = $widget_container['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
              }
              elseif ($widget_container['#type'] == 'radios') { // Radios widget.
                $element['#default_value'] = $term->tid;
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'checkboxes') { // Checkboxes widget.
                  $element['#default_value'] = $term->tid;
                  $element['#default_value'] = $form[$data['field']][$language]['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
            }
          }// if()
          break;

        case 'taxonomy_vocabulary':
          if (($data['target_id'] != NULL || $data['target_id'] != 0) && $vocabulary = taxonomy_vocabulary_load($data['target_id'])) {
            if (!isset($widget_container['#type'])) {
              $element['#default_value'] = $vocabulary->name;
              $element['#default_value'] .= ' (' . $vocabulary->vid . ')';
              _entityconnect_alter_form_state_input($form, $form_state, 'autocomplete', $strPath, $language, $element['#default_value']);
            }
            else {
              // Default value should have differents build function of the widget type.
              if ($widget_container['#type'] == 'textfield') { // Autocomplete tags style.
                $element['#default_value'] = $vocabulary->name;
                $element['#default_value'] .= ' (' . $vocabulary->vid . ')';
                if (!empty ($widget_container['#value'])) {
                  $element['#default_value'] .= ', ' . $widget_container['#value'];
                }
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'select') { // Select list.
                if ($widget_container['#multiple'] == FALSE) {
                  $element['#default_value'] = $vocabulary->vid;
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
                else {
                  $element['#default_value'] = $vocabulary->vid;
                  $element['#default_value'] = $widget_container['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
                }
              }
              elseif ($widget_container['#type'] == 'radios') { // Radios widget.
                $element['#default_value'] = $vocabulary->vid;
                _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
              elseif ($widget_container['#type'] == 'checkboxes') { // Checkboxes widget.
                  $element['#default_value'] = $vocabulary->vid;
                  $element['#default_value'] = $form[$data['field']][$language]['#value'] + array($element['#default_value'] => $element['#default_value']);
                  _entityconnect_alter_form_state_input($form, $form_state, 'others', $strPath, $language, $element['#default_value']);
              }
            }
          }// if()
          break;

        default:
          break;
      }// if()
    }// if()
    $form_state['#entityconnect_processed'] = TRUE;
    $form = drupal_rebuild_form($form_id, $form_state, $form);
  }// if()
}

/**
 * Wraps cache set.
 *
 * We can set the expire easily if needed.
 */
function entityconnect_cache_set($cid, $data) {
  return cache_set($cid, $data, 'cache', CACHE_PERMANENT);
}

/**
 * Alters child create form.
 *
 * We add a value field to hold the parent build_cache_id
 * then we add a cancel button that run entityconnect_child_form_cancel
 * and a new submit button.
 */
function entityconnect_child_form_alter(&$form, &$form_state, $form_id, $cache_id, $cache) {
  $form['parent_build_cache_id'] = array(
    '#type' => 'value',
    '#value' => $cache_id,
  );
  $form['actions']['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#submit' => array('entityconnect_include_form', 'entityconnect_child_form_cancel'),
    '#parent_build_cache_id' => $cache_id,
    '#limit_validation_errors' => array(),
    '#weight' => 20,
  );

  switch ($form_id) {
    case 'user_register_form':
      $form['actions']['submit']['#submit'][] = 'user_register_submit';
      break;

    case 'user_profile_form':
      $form['actions']['submit']['#submit'][] = 'user_profile_form_submit';
      break;

    case 'taxonomy_form_term':
      $form['actions']['submit']['#submit'][] = 'taxonomy_form_term_submit';
      break;

    case 'taxonomy_form_vocabulary':
      $form['actions']['submit']['#submit'][] = 'taxonomy_form_vocabulary_submit';
      break;

    default:
      break;
  }// switch()
  $form['actions']['submit']['#submit'][] = 'entityconnect_include_form';
  $form['actions']['submit']['#submit'][] = 'entityconnect_child_form_submit';
}

/**
 * Helper function to get path array build by parents of a field.
 *
 * @param type $parents
 * @return string
 */
function _entityconnect_get_parents($parents) {
  foreach ($parents as $key => $parent) {
    if (stripos($parent, 'add_entityconnect') === false
            && stripos($parent, 'edit_entityconnect') === false ) {
      if (isset($path)) {
        $path .= '[\'' . $parent . '\']';
      }
      else {
        $path = '[\'' . $parent . '\']';
      }
    }
  }
  return $path;
}

/**
 * Used to update the form state value of entityreference field
 * after adding a new entity.
 *
 * @param type $form
 * @param type $form_state
 * @param type $widget_type
 * @param type $strPath
 * @param type $language
 * @param type $element
 */
function _entityconnect_alter_form_state_input(&$form, &$form_state, $widget_type, $strPath, $language, $element) {
  $input = "\$form_state['input']";

  switch ($widget_type) {
    case 'autocomplete':
      $input .= $strPath;
      $input .= "['target_id']";
      $input .= " = \$element;";
      break;

    case 'others':
      $input .= $strPath;
      $input .= "['". $language . "']";
      $input .= " = \$element;";
      break;

    default:
      break;
  }

  eval($input);
}
