<?php
/**
 * @file
 * pul_featured_link_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pul_featured_link_type_taxonomy_default_vocabularies() {
  return array(
    'featured_pul_link_categories' => array(
      'name' => 'Featured Link Categories',
      'machine_name' => 'featured_pul_link_categories',
      'description' => 'Collections of Featured Pul Links. Used Primarily on Splash Pages',
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
