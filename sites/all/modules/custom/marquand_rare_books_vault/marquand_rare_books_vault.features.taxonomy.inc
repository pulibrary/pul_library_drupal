<?php

/**
 * @file
 * marquand_rare_books_vault.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function marquand_rare_books_vault_taxonomy_default_vocabularies() {
  return array(
    'rare_book_subjects' => array(
      'name' => 'Rare Book Subjects',
      'machine_name' => 'rare_book_subjects',
      'description' => 'Subject Headings Attached to Rare Books',
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
    'rare_books_authors' => array(
      'name' => 'Rare Books Authors',
      'machine_name' => 'rare_books_authors',
      'description' => 'Authors of Rare Books',
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
