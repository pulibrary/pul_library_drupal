<?php

/**
 * Get a list of Sarnia entity configurations without using entity APIs.
 * @see sarnia_entity_info()
 *
 * In most cases, field_info_bundles() is preferred, since it is part of Drupal
 * core APIs.
 * @see sarnia_entity_type_load()
 */
function _sarnia_entity_types($reset = FALSE) {
  $types = &drupal_static(__FUNCTION__);

  if (!isset($types) || $reset) {
    // Get information about Sarnia entity types from the database.
    $types = array();
    $types = db_query("SELECT label, machine_name, search_api_server, search_api_index, id_field FROM {sarnia_entity_type}")
      ->fetchAllAssoc('machine_name', PDO::FETCH_ASSOC);
  }

  return $types;
}

/**
 * Create or update a Sarnia entity type.
 */
function sarnia_entity_type_save($entity_type) {
  db_merge('sarnia_entity_type')
    ->key(array('machine_name' => $entity_type['machine_name']))
    ->fields(array(
      'label' => $entity_type['label'],
      'search_api_server' => $entity_type['search_api_server'],
      'search_api_index' => $entity_type['search_api_index'],
      'id_field' => $entity_type['id_field'],
    ))
    ->execute();

  // Add the sarnia field.
  $field = field_info_field('solr_document');
  $instance = field_info_instance($entity_type['machine_name'], 'solr_document', $entity_type['machine_name']);

  // Create the field if it doesn't already exist.
  if (empty($field)) {
    $field = array(
      'field_name' => 'solr_document',
      'type' => 'sarnia',
      'locked' => TRUE,
    );
    $field = field_create_field($field);
  }

  // Create the field instance if it doesn't already exist.
  if (empty($instance)) {
    $weight = -5;
    $instance = array(
      'field_name' => 'solr_document',
      'entity_type' => $entity_type['machine_name'],
      'bundle' => $entity_type['machine_name'],
      'label' => 'Solr Document',
      'widget_type' => 'sarnia_no_input',
      'widget' => array(),
      'required' => TRUE,
      'locked' => TRUE,
      'display' => array(),
    );
    field_create_instance($instance);
  }

  // Create a Search API Index for the Sarnia entity type, if one doesn't
  // already exist. The entity type and index will use matching machine names.
  if (! search_api_index_load($entity_type['machine_name'])) {
    $index = array(
      'name' => $entity_type['label'],
      'server' => $entity_type['search_api_server'],
      'machine_name' => $entity_type['machine_name'],
      'entity_type' => $entity_type['machine_name'],
      'item_type' => $entity_type['machine_name'],
      'enabled' => TRUE,
      'description' => 'This index is managed by the Sarnia module.',
      'options' => array(
        'cron_limit' => 0,
      ),
      'read_only' => 1,
    );
    search_api_index_insert($index);
  }

  // Reset the array returned by _sarnia_entity_types().
  drupal_static_reset('_sarnia_entity_types');
}

/**
 * Delete a Sarnia entity type.
 */
function sarnia_entity_type_delete($machine_name) {
  $entity_type = sarnia_entity_type_load($machine_name);

  // Delete the related Search API index, if it exists.
  if ($index = search_api_index_load($entity_type['search_api_index'])) {
    search_api_index_delete($index->machine_name);
  }

  // Delete any Field API fields on the entity type.
  field_attach_delete_bundle($machine_name, $machine_name);

  // Delete our record of the entity type.
  db_query("DELETE FROM {sarnia_entity_type} WHERE machine_name = :machine_name", array(':machine_name' => $machine_name));

  // Reset the array returned by _sarnia_entity_types().
  drupal_static_reset('_sarnia_entity_types');
}

/**
 * This form appears on a "Sarnia" tab on Search API server configuration pages.
 * It allows administrators to "enable sarnia" for a particular server; when
 * Sarnia is enabled for a Search API server, a Sarnia entity type is registered
 * and a Search API index is created.
 *
 * @see _sarnia_entity_manage_form_access(), sarnia_entity_manage_form_submit(), sarnia_entity_type_save(), search_api_index_insert()
 */
function sarnia_entity_manage_form($form, &$form_state, $server) {
  $form['server'] = array(
    '#type' => 'value',
    '#value' => $server,
  );

  // Look up the entity type for this server.
  $entity_type_exists = FALSE;
  if ($entity_type_machine_name = sarnia_entity_server_name_load($server->machine_name)) {
    $entity_type = sarnia_entity_type_load($entity_type_machine_name);
    $entity_type_exists = TRUE;
  }

  // sarnia_index_get_options() does the same thing, but expects an index
  // machine name, which we don't have at this point.
  $options = array();
  foreach ($server->getFields() as $key => $field) {
    if ($field->isPossibleKey()) {
      $options[$key] = $key . ' (' . $field->getType() . ')';
    }
  }

  if (!$entity_type_exists) {
    $form['info'] = array(
      '#type' => 'container',
    );
    $form['info']['info'] = array(
      '#markup' => '<h3>' . t('Would you like to enable an entity type based on data within this Solr core?') . '</h3>',
    );

    $form['id_field'] = array(
      '#type' => 'select',
      '#title' => t('ID field'),
      '#required' => TRUE,
      '#options' => $options,
      '#default_value' => (isset($entity_type['id_field']) ? $entity_type['id_field'] : key($options)),
      '#description' => t('Choose a field from the Solr core to use as ids for this entity type. This field should contain unique integer values. Only fields that are stored, not dynamic, and not multi-valued according to the Solr <code>schema.xml</code> may be used.'),
    );

    $form['enable'] = array(
      '#type' => 'submit',
      '#name' => 'enable',
      '#value' => t('Enable'),
    );
  }
  else {
    $form['info'] = array(
      '#type' => 'container',
    );
    $form['info']['info'] = array(
      '#markup' => '<h3>' . t('An entity based on data within this Solr core is enabled.') . '</h3>' .
        '<div><strong>' . t('Label') . ':</strong> ' . check_plain($entity_type['label']) . '</div>' .
        '<div><strong>' . t('Machine name') . ':</strong> ' . check_plain($entity_type['machine_name']) . '</div>' .
        '<div><strong>' . t('Search API server') . ':</strong> ' . check_plain($entity_type['search_api_server']) . '</div>' .
        '<div><strong>' . t('Search API index') . ':</strong> ' . check_plain($entity_type['search_api_index']) . '</div>' .
        '<div><strong>' . t('ID field') . ':</strong> ' . check_plain($options[$entity_type['id_field']]) . '</div>',
    );
    $form['delete_link'] = array(
      '#type' => 'container',
    );
    $form['delete_link']['delete_link'] = array(
      '#type' => 'link',
      '#title' => t('Delete this entity type.'),
      '#href' => 'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia/delete',
    );
  }

  return $form;
}

/**
 * Submit function. Creates a Sarnia entity type for a Search API server.
 * @see sarnia_entity_manage_form()
 */
function sarnia_entity_manage_form_submit($form, &$form_state) {
  $server = $form_state['values']['server'];
  if ($form_state['clicked_button']['#name'] == 'enable') {
    // Create a Sarnia entity type based on this Search API server.
    $entity_type = array(
      'label' => $server->name . ' (Sarnia index)',
      'machine_name' => 'sarnia_' . $server->machine_name,
      'search_api_server' => $server->machine_name,
      'search_api_index' => 'sarnia_' . $server->machine_name,
      'id_field' => $form_state['values']['id_field'],
    );
    sarnia_entity_type_save($entity_type);

    // Rebuild the entity info cache and the menus, so that tabs provided by the
    // Field UI module show up immediately.
    entity_info_cache_clear();
    menu_rebuild();

    // Tell the user what just happened.
    drupal_set_message(t('Created a Sarnia entity type and a Search API index for the %server_name server.', array('%server_name' => $server->name)));
  }
}

function sarnia_entity_delete_form($form, &$form_state, $server) {
  $form['server'] = array(
    '#type' => 'value',
    '#value' => $server,
  );

  return confirm_form($form,
    "Are you sure you want to delete the Sarnia entity type associated with this Search API server?",
    'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia/manage',
    "Deleting the entity type will also delete the associated Search API index, and any Drupal field data you have entered on the entities.",
    "Delete");
}

function sarnia_entity_delete_form_submit($form, &$form_state) {
  $server = $form_state['values']['server'];
  $entity_type_machine_name = sarnia_entity_server_name_load($server->machine_name);

  // Delete the entity type.
  sarnia_entity_type_delete($entity_type_machine_name);

  // Rebuild the entity info cache and the menus, so that tabs provided by the
  // Field UI module disappear immediately.
  entity_info_cache_clear();
  menu_rebuild();

  // Tell the user what just happened.
  drupal_set_message(t('Deleted the Sarnia entity type and a Search API index for the %server_name server.', array('%server_name' => $server->name)));
  $form_state['redirect'] = 'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia';
}

/**
 * UI to refresh the list of fields available from the Solr server.
 */
function sarnia_entity_cache_form($form, &$form_state, $server) {
  $form['server'] = array(
    '#type' => 'value',
    '#value' => $server,
  );

  return confirm_form($form,
    "Refresh the server field cache?",
    'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia/properties',
    "This will update the list of Solr properties available from this server. These Solr properties will be used to set the entity id field, and as the list of data available to Views handlers.",
    "Refresh");
}

/**
 * Submit function for the confirm form from sarnia_entity_cache_form().
 *
 * Runs SearchApiSolrService::getFields() with $reset = TRUE.
 */
function sarnia_entity_cache_form_submit($form, &$form_state) {
  $server = $form_state['values']['server'];
  $server->getFields(TRUE);

  // Tell the user what just happened.
  drupal_set_message(t('Refreshed the server field cache for the %server_name server.', array('%server_name' => $server->name)));
  $form_state['redirect'] = 'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia/properties';
}

function sarnia_entity_properties_form($form, &$form_state, $server) {
  $render = array();
  $render['refresh_link'] = array(
    '#type' => 'container',
  );
  $render['refresh_link']['refresh_link'] = array(
    '#type' => 'link',
    '#title' => t('Refresh server fields'),
    '#href' => 'admin/config/search/search_api/server/' . $server->machine_name . '/sarnia/cache',
  );
  $render['property_table'] = sarnia_entity_properties_table($server);
  return $render;
}

function sarnia_entity_properties_table($server, $fields = NULL) {
  if (!isset($fields)) {
    $fields = $server->getFields();
  }

  $header = array('Property name', 'DynamicBase', 'Type', 'Schema', 'Uses');
  $rows = array();
  $sort = array('bases' => array(), 'names' => array());

  $fulltext = $server->getFulltextFields();
  $filter = $server->getFilterFields();
  $sort = $server->getSortFields();
  $display = $server->getDisplayFields();

  foreach ($fields as $name => $field) {
    $base = $field->getDynamicBase();
    $row = array();
    $row[] = $name;
    $row[] = "<code>$base</code>";
    $row[] = $field->getType();
    $row[] = implode(', ', array_filter(array(
      ($field->isIndexed() ? 'indexed' : ''),
      ($field->isTokenized() ? 'tokenized' : ''),
      ($field->isStored() ? 'stored' : ''),
      ($field->isMultivalued() ? 'multivalued' : ''),
    )));
    $row[] = implode(', ', array_filter(array(
      (isset($fulltext[$name]) ? 'fulltext' : ''),
      (isset($filter[$name]) ? 'filter' : ''),
      (isset($sort[$name]) ? 'sort' : ''),
      (isset($display[$name]) ? 'display' : ''),
    )));
    $rows[$name] = array('data' => $row);

    // Sort by dynamic base, then by name.
    $sort['bases'][$name] = $base;
    $sort['names'][$name] = $name;
  }
  array_multisort($sort['bases'], $sort['names'], $rows);

  return array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
}
