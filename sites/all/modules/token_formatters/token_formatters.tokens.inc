<?php

/**
 * Implements hook_token_info().
 */
function token_formatters_token_info() {
  $info['types']['entity'] = array(
    'name' => t('Entity'),
    'description' => t('Tokens related to generic entities.'),
  );
  $info['tokens']['entity']['id'] = array(
    'name' => t('ID'),
    'description' => t('The ID of the entity'),
  );
  $info['tokens']['entity']['label'] = array(
    'name' => t('Label'),
    'description' => t('The label of the entity.'),
  );
  $info['tokens']['entity']['url'] = array(
    'name' => t('URL'),
    'description' => t('The URL of the entity.'),
    'type' => 'url',
  );

  return $info;
}

/**
 * Implememnts hook_tokens().
 */
function token_formatters_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }

  $sanitize = !empty($options['sanitize']);

  if ($type == 'entity' && !empty($data['entity_type']) && !empty($data['entity'])) {
    $entity = $data['entity'];
    $entity_type = $data['entity_type'];

    foreach ($tokens as $name => $original) {
      // Prevent tokensn like [entity:url] from getting a replacement value
      // when the entity type already has a token with the same name. For
      // example, [file:url].
      if (!empty($data['token_type']) && token_get_info($data['token_type'], $name)) {
        continue;
      }

      switch ($name) {
        case 'id':
          list($id) = entity_extract_ids($entity_type, $entity);
          $replacements[$original] = $sanitize ? check_plain($id) : $id;
          break;

        case 'label':
          $label = entity_label($entity_type, $entity);
          $replacements[$original] = $sanitize ? check_plain($label) : $label;
          break;

        case 'url':
          if ($uri = entity_uri($entity_type, $entity)) {
            $replacements[$original] = url($uri['path'], $uri['options'] + $url_options);
          }
          break;
      }
    }

    // Chained token relationships.
    if ($url_tokens = token_find_with_prefix($tokens, 'url')) {
      if ($uri = entity_uri($entity_type, $entity)) {
        $replacements += token_generate('url', $url_tokens, $uri, $options);
      }
    }
  }

  return $replacements;
}
