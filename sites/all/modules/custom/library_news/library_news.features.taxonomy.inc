<?php
/**
 * @file
 * library_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function library_news_taxonomy_default_vocabularies() {
  return array(
    'audiences' => array(
      'name' => 'Audiences',
      'machine_name' => 'audiences',
      'description' => 'Adds the audiences for the Information For sections.',
      'hierarchy' => '1',
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
