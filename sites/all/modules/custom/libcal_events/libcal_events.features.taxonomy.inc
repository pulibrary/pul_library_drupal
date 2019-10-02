<?php

/**
 * @file
 * libcal_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function libcal_events_taxonomy_default_vocabularies() {
  return array(
    'lib_event_types' => array(
      'name' => 'Event Types',
      'machine_name' => 'lib_event_types',
      'description' => 'Types for the Events, Workshops, Trainings etc Content Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
