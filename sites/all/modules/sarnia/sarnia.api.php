<?php

/**
 * @file
 * A summary of API functions.
 *
 * Currently this is a list of funcitons which may be useful to developers
 * working on this module.
 *
 * Sarnia does not provide any hooks at this time.
 */

/**
 * Get a list of Solr fields for a particular Search API index.
 *
 * @param $index_machine_name
 *   String. The machine name of a Search API index.
 *
 * @param $filter_method
 *   NULL or string. If a string, the method of that name will be called on an
 *   instance of the SolrField class for each possible field. Especially useful
 *   are the values 'isPossibleKey', 'isSortable', and 'isIndexed'.
 *
 * @return
 *   An array of Solr fields, where the keys are Solr field names and the values
 *   are field labels. This array is suitable for use as a Forms API #options
 *   property.
 */
function sarnia_index_get_options($index_machine_name, $filter_method = NULL, $reset = FALSE) { ... }

/**
 * Get and cache a list of retrievable fields for a particular Search API index.
 *
 * @see sarnia_index_get_options()
 */
function sarnia_index_get_field_options($index_machine_name, $reset = FALSE) { ... }

/**
 * Get and cache a list of filterable fields for a particular Search API index.
 *
 * @see sarnia_index_get_options()
 */
function sarnia_index_get_filter_options($index_machine_name, $reset = FALSE) { ... }

/**
 * Get information about all Sarnia-provided entities.
 *
 * This function loads entity information using entity_get_info(), filters on
 * the entity controller class property, and returns just the bundle
 * information.
 *
 * @return
 *   An array whose keys are entity type names and values are entity bundle info
 *   arrays.
 */
function sarnia_entity_types($reset = FALSE) { ... }

/**
 * Load bundle information about a specific Sarnia entity type.
 *
 * This function is used as a menu wildcard loader, %sarnia_entity_type.
 * @see sarnia_menu()
 *
 * @param $machine_name
 *   String. The machine name of a Sarnia entity type.
 *
 * @return
 *   An array of bundle information, or FALSE if there is no Sarnia entity type
 *   with the given machine name.
 */
function sarnia_entity_type_load($machine_name) { ... }

/**
 * Load Sarnia entity type info given a Search API index machine name.
 *
 * This function works on the assumption that there will be a single Search API
 * index for a particular Sarnia entity type.
 *
 * @param $index_machine_name
 *   String. The machine name of a Search API index.
 *
 * @return
 *   An array of bundle information, or FALSE if there is no Sarnia entity type
 *   associated with the given Search API index.
 */
function sarnia_entity_type_load_by_index($index_machine_name) { ... }

/**
 * Get a Sarnia entity type machine name given a Search API server machine name.
 *
 * The fact that this function's name ends in '_load' is deceptive, since it
 * doesn't actually load entity type information or an entity. However, it is
 * used as a wildcard menu loader for Field UI administration paths.
 * @see sarnia_entity_info().
 *
 * This function works on the assumption that there will be a single Sarnia
 * entity type for a particular Search API server.
 *
 * @param $server_name
 *   String. The machine name of a Search API server.
 *
 * @return
 *  String. The machine name of a Sarnia entity type, or FALSE if there is no
 *  Sarnia entity type associated with the given Search API server.
 */
function sarnia_entity_server_name_load($server_name) { ... }

/**
 * Menu load callback; load a Sarnia entity.
 */
function sarnia_load($entity_id, $entity_type) { ... }

/**
 * Get the value of a Solr property from a 'sarnia' Solr document field.
 *
 * @param $entity
 *   A fully-loaded entity object.
 * @param $field
 *   A field info array.
 * @param $property_name
 *   The name of a Solr property to retrieve.
 *
 * @return
 *   An array containing values from Solr. Even the properties of single-value
 *   Solr fields are returned as an array.
 *
 * @see sarnia_field_formatter_view().
 */
function sarnia_field_get_property($entity, $field, $property_name) { ... }
