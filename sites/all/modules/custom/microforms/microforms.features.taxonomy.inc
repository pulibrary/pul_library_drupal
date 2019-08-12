<?php

/**
 * @file
 * microforms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function microforms_taxonomy_default_vocabularies() {
  return array(
    'newspaper_cities' => array(
      'name' => 'Newspaper Cities',
      'machine_name' => 'newspaper_cities',
      'description' => 'Cities specifically for the Newspapers Content Type for Microforms',
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
    'newspaper_countries' => array(
      'name' => 'Newspaper Countries',
      'machine_name' => 'newspaper_countries',
      'description' => 'Countries specifically for the Newspapers Content Type for Microforms',
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
    'newspaper_us_states' => array(
      'name' => 'Newspaper US States',
      'machine_name' => 'newspaper_us_states',
      'description' => 'US States specifically for the Newspapers Content Type for Microforms',
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
