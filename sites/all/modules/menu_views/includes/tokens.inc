<?php

/**
 * @file
 * Token hooks for the menu_views module.
 */

/**
 * Implements hook_token_info().
 */
function menu_views_token_info() {
  $tokens['tokens']['menu-link']['node'] = array(
    'name' => t('Node'),
    'description' => t('The node of the menu link.'),
    'type' => 'node',
  );
  $tokens['tokens']['menu-link']['parent']['node'] = array(
    'name' => t('Node'),
    'description' => t('The node of the menu link\'s parent.'),
    'type' => 'node',
  );
  return $tokens;
}

/**
 * Implements hook_tokens().
 */
function menu_views_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();
  $node = FALSE;
  $parent = FALSE;
  // Menu link tokens.
  if ($type == 'menu-link' && !empty($data['menu-link'])) {
    $link = (array) $data['menu-link'];
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'node':
          $node = menu_get_object('node', 1, $link['link_path']);
          if ($node && $node->nid) {
            $title = $node->title;
            $replacements[$original] = $sanitize ? filter_xss($title) : $title;
          }
          else {
            $replacements[$original] = NULL;
          }
          break;
        case 'parent':
          if (isset($link['plid']) &&
            !empty($link['plid']) &&
            ($parent = menu_link_load($link['plid'])) &&
            ($node = menu_get_object('node', 1, $parent['link_path'])) &&
            $node->nid
          ) {
            $title = $node->title;
            $replacements[$original] = $sanitize ? filter_xss($title) : $title;
          }
          else {
            $replacements[$original] = NULL;
          }
          break;
      }
    }
    // Chained token relationships.
    if (($node_tokens = token_find_with_prefix($tokens, 'node')) &&
      $node = menu_get_object('node', 1, $link['link_path'])
    ) {
      $replacements += token_generate('node', $node_tokens, array('node' => $node), $options);
    }
    if (($parent_tokens = token_find_with_prefix($tokens, 'parent')) &&
      isset($link['plid']) &&
      !empty($link['plid']) &&
      ($parent = menu_link_load($link['plid'])) &&
      ($node = menu_get_object('node', 1, $parent['link_path'])) &&
      $node->nid
    ) {
      $replacements += token_generate('node', $parent_tokens, array('node' => $node), $options);
    }
  }
  return $replacements;
}

/**
 * Callback for human-readable token value replacements.
 */
function _menu_views_tokens_callback(&$replacements, $data, $options) {
  foreach ($replacements as $token => $value) {
    if ($options['human_readable']) {
      if (is_bool($value)) {
        $value = $value ? t('TRUE') : t('FALSE');
      }
      elseif (is_object($value)) {
        $value = t('Object');
      }
      elseif (is_array($value)) {
        $value = t('Array');
      }
      elseif (is_null($value)) {
        $value = t('NULL');
      }
      else {
        $value = (string) $value;
      }
      if ($value === '') {
        $value = t('NULL');
      }
    }
    $replacements[$token] = urlencode($value);
  }
}
