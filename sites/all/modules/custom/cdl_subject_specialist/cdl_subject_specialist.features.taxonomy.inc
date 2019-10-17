<?php

/**
 * @file
 * cdl_subject_specialist.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cdl_subject_specialist_taxonomy_default_vocabularies() {
  return array(
    'selector_departments' => array(
      'name' => 'Selector Departments',
      'machine_name' => 'selector_departments',
      'description' => 'Departments of the Selectors',
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
    'selector_subject_areas' => array(
      'name' => 'Selector Subject Areas',
      'machine_name' => 'selector_subject_areas',
      'description' => 'Subject Areas for Selectors',
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
