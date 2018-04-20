<?php
/**
 * @file
 * mendel_periodicals.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mendel_periodicals_taxonomy_default_vocabularies() {
  return array(
    'mendel_periodical_location' => array(
      'name' => 'Mendel Periodical Location',
      'machine_name' => 'mendel_periodical_location',
      'description' => '',
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
