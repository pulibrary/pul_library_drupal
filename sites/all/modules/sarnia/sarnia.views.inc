<?php

/**
 * Implements hook_field_views_data().
 */
function sarnia_field_views_data($field) {
  $data = array();

  $field_name = $field['field_name'];
  foreach (array_keys($field['bundles']) as $type_name) {
    if ($entity_type = sarnia_entity_type_load($type_name)) {
      $key = 'search_api_index_' . $entity_type['search_api_index'];
      $instance = field_info_instance($type_name, $field_name, $type_name);

      $data[$key]['table']['base']['defaults']['field'] = 'id';
      $data[$key][$field_name] = array(
        'title' => 'Data',
        'help' => t('Display properties from the %server Sarnia configuration.', array('%server' => $entity_type['search_api_server'])),
        'search_api_index' => $entity_type['search_api_index'],
        'argument' => array(
          'handler' => 'SarniaViewsHandlerArgument',
          'field_name' => $field_name,
          'search_api_index' => $entity_type['search_api_index'],
        ),
        'field' => array(
          'handler' => 'SarniaViewsHandlerField',
          'field_name' => $field_name,
          'search_api_index' => $entity_type['search_api_index'],
        ),
        'filter' => array(
          'handler' => 'SarniaViewsHandlerFilter',
          'field_name' => $field_name,
          'search_api_index' => $entity_type['search_api_index'],
        ),
        'sort' => array(
          'handler' => 'SarniaViewsHandlerSort',
          'field_name' => $field_name,
          'search_api_index' => $entity_type['search_api_index'],
        ),
      );
    }
  }

  return $data;
}

/**
 * Implement hook_views_data().
 *
 * Use a Sarnia-specific argument handler for the id field on views of Sarnia
 * entities.
 */
function sarnia_views_data_alter(&$data) {
  $entity_types = sarnia_entity_types();
  foreach ($entity_types as $entity_info) {
    $views_table = 'search_api_index_' . $entity_info['machine_name'];
    $data[$views_table]['table']['group'] = $entity_info['label'];
    if (!empty($data[$views_table]['id']['argument'])) {
      $data[$views_table]['id']['argument']['handler'] = 'SarniaViewsHandlerArgumentId';
      $data[$views_table]['id']['argument']['field_name'] = 'solr_document';
      $data[$views_table]['id']['argument']['solr_property'] = $entity_info['id_field'];
      $data[$views_table]['id']['argument']['search_api_index'] = $entity_info['search_api_index'];

      $data[$views_table]['id']['argument']['name table'] = $views_table;
      $data[$views_table]['id']['argument']['name field'] = 'solr_document';
    }

    $entity_views_table = 'views_entity_' . $entity_info['machine_name'];
    $data[$entity_views_table]['rendered_entity']['title'] = t('Debug output');
    $data[$entity_views_table]['rendered_entity']['help'] = t('Output a dump of all data recieved via Sarnia.');
  }
}
