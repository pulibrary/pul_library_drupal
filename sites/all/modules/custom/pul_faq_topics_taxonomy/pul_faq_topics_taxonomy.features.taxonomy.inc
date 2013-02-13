<?php
/**
 * @file
 * pul_faq_topics_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pul_faq_topics_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'faq_topics' => array(
      'name' => 'FAQ Topics',
      'machine_name' => 'faq_topics',
      'description' => 'Topics for FAQ - Sub topics included',
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
