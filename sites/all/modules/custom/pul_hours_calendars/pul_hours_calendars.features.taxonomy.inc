<?php
/**
 * @file
 * pul_hours_calendars.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pul_hours_calendars_taxonomy_default_vocabularies() {
  return array(
    'library_hours_calendars' => array(
      'name' => 'Library Hours Calendars',
      'machine_name' => 'library_hours_calendars',
      'description' => 'Official list of Calendars for Library Hours',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
