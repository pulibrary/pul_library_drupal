<?php

/**
 * Implements hook_field_formatter_info().
 */
function token_formatters_field_formatter_info() {
  $info['token_formatters_entity_reference'] = array(
    'label' => t('Tokenized text'),
    'description' => t('Display tokenized text as an optional link with tokenized destination.'),
    'field types' => array('entityreference'),
    'settings' => array(
      'text' => '[entity:label]',
      'link' => '[entity:url]',
      'check_access' => TRUE,
    ),
  );
  $info['token_formatters_node_reference'] = array(
    'label' => t('Tokenized text'),
    'description' => t('Display tokenized text as an optional link with tokenized destination.'),
    'field types' => array('node_reference'),
    'settings' => array(
      'text' => '[node:title]',
      'link' => 'node/[node:nid]',
      'check_access' => TRUE,
    ),
  );
  $info['token_formatters_user_reference'] = array(
    'label' => t('Tokenized text'),
    'description' => t('Display tokenized text as an optional link with tokenized destination.'),
    'field types' => array('user_reference'),
    'settings' => array(
      'text' => '[user:name]',
      'link' => 'user/[user:uid]',
      'check_access' => TRUE,
    ),
  );
  $info['token_formatters_term_reference'] = array(
    'label' => t('Tokenized text'),
    'description' => t('Display tokenized text as an optional link with tokenized destination.'),
    'field types' => array('taxonomy_term_reference'),
    'settings' => array(
      'text' => '[term:name]',
      'link' => 'taxonomy/term/[term:tid]',
      'check_access' => TRUE,
    ),
  );
  $info['token_formatters_file'] = array(
    'label' => t('Tokenized text'),
    'description' => t('Display tokenized text as an optional link with tokenized destination.'),
    'field types' => array('file', 'image'),
    'settings' => array(
      'text' => '[file:basename]',
      'link' => '[file:url]',
      'check_access' => TRUE,
    ),
  );

  return $info;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function token_formatters_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $element = array();
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  switch ($display['type']) {
    case 'token_formatters_entity_reference':
      $element += _token_formatters_field_formatter_settings_form($field['settings']['target_type'], $settings);
      break;
    case 'token_formatters_node_reference':
      $element += _token_formatters_field_formatter_settings_form('node', $settings);
      break;
    case 'token_formatters_user_reference':
      $element += _token_formatters_field_formatter_settings_form('user', $settings);
      break;
    case 'token_formatters_term_reference':
      $element += _token_formatters_field_formatter_settings_form('taxonomy_term', $settings);
      // Terms don't really have any form of access.
      $element['check_access']['#access'] = FALSE;
      break;
    case 'token_formatters_file':
      $element += _token_formatters_field_formatter_settings_form('file', $settings);
      // Access for files is provided by file_entity.
      $element['check_access']['#access'] = module_exists('file_entity');
      break;
  }

  return $element;
}

function _token_formatters_field_formatter_settings_form($entity_type, array $settings) {
  $token_type = token_get_entity_mapping('entity', $entity_type);
  $form['text'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to output'),
    '#default_value' => $settings['text'],
    '#description' => t('This field accepts tokens.'),
    '#element_validate' => array('token_element_validate'),
    '#token_types' => array($token_type, 'entity'),
    '#required' => TRUE,
  );
  $form['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link destination'),
    '#description' => t('Leave blank to output the text only not as a link. This field accepts tokens.'),
    '#default_value' => $settings['link'],
    '#element_validate' => array('token_element_validate'),
    '#token_types' => array($token_type, 'entity'),
  );
  $form['check_access'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check that the user has access to view the referenced items.'),
    '#default_value' => $settings['check_access'],
    '#description' => '<strong>' . t('Unchecking this option could lead to security issues. Use at your own risk.') . '</strong>',
  );
  return $form;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function token_formatters_field_formatter_settings_summary($field, $instance, $view_mode) {
  $summary = array();
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  switch ($display['type']) {
    case 'token_formatters_entity_reference':
    case 'token_formatters_node_reference':
    case 'token_formatters_user_reference':
    case 'token_formatters_term_reference':
    case 'token_formatters_file':
      $summary += _token_formatters_field_formatter_settings_summary($settings);
      break;
  }

  return implode('<br />', $summary);
}

function _token_formatters_field_formatter_settings_summary(array $settings) {
  $summary = array();
  $summary[] = t('Text: %text', array('%text' => trim($settings['text'])));
  if ($link = trim($settings['link'])) {
    $summary[] = t('Linked to %link', array('%link' => $link));
  }
  if (empty($settings['check_access'])) {
    $summary[] = '<strong>' . t('View access not checked.') . '</strong>';
  }
  return $summary;
}

/**
 * Implements hook_field_formatter_prepare_view().
 */
function token_formatters_field_formatter_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  $callback = '_token_formatters_field_formatter_prepare_view_' . $field['type'];
  if (function_exists($callback)) {
    $callback($entity_type, $entities, $field, $instances, $langcode, $items, $displays);
  }
  elseif (module_hook($field['module'], 'field_formatter_prepare_view')) {
    $callback = $field['module'] . '_field_formatter_prepare_view';
    $callback($entity_type, $entities, $field, $instances, $langcode, $items, $displays);
  }
}

/**
 * Duplicate of entityreference_field_formatter_prepare_view() that optionally checks view access.
 */
function _token_formatters_field_formatter_prepare_view_entityreference($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  $target_ids = array();

  // Collect every possible entity attached to any of the entities.
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      // Do not use !empty() here because this could be referencing an entity
      // with ID = 0 (anonymous user).
      if (isset($item['target_id'])) {
        $target_ids[] = $item['target_id'];
      }
    }
  }

  if ($target_ids) {
    $target_entities = entity_load($field['settings']['target_type'], $target_ids);
  }
  else {
    $target_entities = array();
  }

  // Iterate through the fieldable entities again to attach the loaded data.
  foreach ($entities as $id => $entity) {
    $rekey = FALSE;

    // Support an optional entity_access() check here.
    $check_access = $displays[$id]['type'] != 'token_formatters_entity_reference' || !empty($displays[$id]['settings']['check_access']);

    foreach ($items[$id] as $delta => $item) {
      // Check whether the referenced entity could be loaded and that the user has access to it.
      if (isset($target_entities[$item['target_id']]) && (!$check_access || entity_access('view', $field['settings']['target_type'], $target_entities[$item['target_id']]))) {
        // Replace the instance value with the term data.
        $items[$id][$delta]['entity'] = $target_entities[$item['target_id']];
      }
      // Otherwise, unset the instance value, since the entity does not exists or should not be accessible.
      else {
        unset($items[$id][$delta]);
        $rekey = TRUE;
      }
    }

    if ($rekey) {
      // Rekey the items array.
      $items[$id] = array_values($items[$id]);
    }
  }
}

/**
 * Duplicate of node_reference_field_formatter_prepare_view() that optionally checks view access.
 */
function _token_formatters_field_formatter_prepare_view_node_reference($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  $target_nids = array();

  // Collect every possible entity attached to any of the entities.
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      if (!empty($item['nid'])) {
        $target_nids[] = $item['nid'];
      }
    }
  }

  if ($target_nids) {
    $target_nodes = node_load_multiple($target_nids);
  }
  else {
    $target_nodes = array();
  }

  // Iterate through the fieldable entities again to attach the loaded data.
  foreach ($entities as $id => $entity) {
    $rekey = FALSE;

    // Support an optional entity_access() check here.
    $check_access = $displays[$id]['type'] != 'token_formatters_node_reference' || !empty($displays[$id]['settings']['check_access']);

    foreach ($items[$id] as $delta => $item) {
      // Check whether the referenced entity could be loaded and that the user has access to it.
      if (isset($target_nodes[$item['nid']]) && (!$check_access || $item['access'])) {
        // Replace the instance value with the node data.
        $items[$id][$delta]['node'] = $target_nodes[$item['nid']];
      }
      // Otherwise, unset the instance value, since the entity does not exists or should not be accessible.
      else {
        unset($items[$id][$delta]);
        $rekey = TRUE;
      }
    }

    if ($rekey) {
      // Rekey the items array.
      $items[$id] = array_values($items[$id]);
    }
  }
}

/**
 * Duplicate of user_reference_field_formatter_prepare_view() that optionally checks view access.
 */
function _token_formatters_field_formatter_prepare_view_user_reference($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  $target_uids = array();

  // Collect every possible entity attached to any of the entities.
  foreach ($entities as $id => $entity) {
    foreach ($items[$id] as $delta => $item) {
      // Do not use !empty() here because this could be referencing an entity
      // with ID = 0 (anonymous user).
      if (isset($item['uid'])) {
        $target_uids[] = $item['uid'];
      }
    }
  }

  if ($target_uids) {
    $target_users = user_load_multiple($target_uids);
  }
  else {
    $target_users = array();
  }

  // Iterate through the fieldable entities again to attach the loaded data.
  foreach ($entities as $id => $entity) {
    $rekey = FALSE;

    // Support an optional entity_access() check here.
    $check_access = $displays[$id]['type'] != 'token_formatters_user_reference' || !empty($displays[$id]['settings']['check_access']);

    foreach ($items[$id] as $delta => $item) {
      // Re-check access because user_reference does a half-ass job of it.
      $item['access'] = user_access('administer users') || (user_access('access user profiles') && !empty($target_users[$item['uid']]->status));

      // Check whether the referenced entity could be loaded and that the user has access to it.
      if (isset($target_users[$item['uid']]) && (!$check_access || $item['access'])) {
        // Replace the instance value with the user data.
        $items[$id][$delta]['user'] = $target_users[$item['uid']];
      }
      // Otherwise, unset the instance value, since the entity does not exists or should not be accessible.
      else {
        unset($items[$id][$delta]);
        $rekey = TRUE;
      }
    }

    if ($rekey) {
      // Rekey the items array.
      $items[$id] = array_values($items[$id]);
    }
  }
}

/**
 * Duplicate of user_reference_field_formatter_prepare_view() that optionally checks view access.
 */
function _token_formatters_field_formatter_prepare_view_file($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  // Iterate through the fieldable entities again to attach the loaded data.
  foreach ($entities as $id => $entity) {
    $rekey = FALSE;

    // Support an optional entity_access() check here.
    $check_access = $displays[$id]['type'] != 'token_formatters_file' || !empty($displays[$id]['settings']['check_access']);

    foreach ($items[$id] as $delta => $item) {
      // Re-check access because user_reference does a half-ass job of it.
      $item['access'] = function_exists('file_entity_access') ? file_entity_access('view', (object) $item) : TRUE;

      // Check whether the referenced entity could be loaded and that the user has access to it.
      if ($check_access && !$item['access']) {
        unset($items[$id][$delta]);
        $rekey = TRUE;
      }
    }

    if ($rekey) {
      // Rekey the items array.
      $items[$id] = array_values($items[$id]);
    }
  }
}

/**
 * Implements hook_field_formatter_view().
 */
function token_formatters_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $settings = $display['settings'];

  foreach ($items as $delta => $item) {
    switch ($display['type']) {
      case 'token_formatters_entity_reference':
        $element[$delta] = _token_formatters_field_formatter_view($field['settings']['target_type'], $item['entity'], $settings);
        break;
      case 'token_formatters_node_reference':
        $element[$delta] = _token_formatters_field_formatter_view('node', $item['node'], $settings);
        break;
      case 'token_formatters_user_reference':
        $element[$delta] = _token_formatters_field_formatter_view('user', $item['user'], $settings);
        break;
      case 'token_formatters_term_reference':
        $element[$delta] = _token_formatters_field_formatter_view('taxonomy_term', $item['taxonomy_term'], $settings);
        break;
      case 'token_formatters_file':
        $element[$delta] = _token_formatters_field_formatter_view('file', (object) $item, $settings);
        break;
    }
  }

  return $element;
}

function _token_formatters_field_formatter_view($entity_type, $entity, array $settings) {
  $element = array();

  $token_type = token_get_entity_mapping('entity', $entity_type);

  // Build the token data and options.
  $token_data = array(
    $token_type => $entity,
    'entity' => $entity,
    'entity_type' => $entity_type,
  );
  $token_options = array(
    // Tokens should be sanitized since we're only calling field_filter_xss()
    // instead of check_plain().
    'sanitize' => TRUE,
    'clear' => TRUE,
  );

  $text = token_replace(trim($settings['text']), $token_data, $token_options);
  if ($link = token_replace(trim($settings['link']), $token_data, $token_options)) {
    $parsed = drupal_parse_url($link);
    $element = array(
      '#type' => 'link',
      '#title' => field_filter_xss($text),
      '#href' => $parsed['path'],
      '#options' => array(
        'query' => $parsed['query'],
        'fragment' => $parsed['fragment'],
        'html' => TRUE,
      ),
    );
  }
  else {
    $element = array('#markup' => field_filter_xss($text));
  }

  return $element;
}
