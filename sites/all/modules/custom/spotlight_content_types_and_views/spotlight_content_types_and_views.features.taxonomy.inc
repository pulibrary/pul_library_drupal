<?php

/**
 * @file
 * spotlight_content_types_and_views.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function spotlight_content_types_and_views_taxonomy_default_vocabularies() {
  return array(
    'pul_spotlight_tags' => array(
      'name' => 'Spotlight Tags',
      'machine_name' => 'pul_spotlight_tags',
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
