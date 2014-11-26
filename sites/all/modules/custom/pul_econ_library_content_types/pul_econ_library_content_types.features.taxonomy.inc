<?php
/**
 * @file
 * pul_econ_library_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pul_econ_library_content_types_taxonomy_default_vocabularies() {
  return array(
    'econ_lib_cdir_covers' => array(
      'name' => 'Econ Library Company Directories Covers',
      'machine_name' => 'econ_lib_cdir_covers',
      'description' => 'Econ Library Company Directories Covers',
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
    'econ_library_stock_exchange_holdings_binding_colors' => array(
      'name' => 'Econ Library Stock Exchange Holdings Binding Colors',
      'machine_name' => 'econ_library_stock_exchange_holdings_binding_colors',
      'description' => 'Econ Library Stock Exchange Holdings Binding Colors',
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
    'econ_library_stock_exchange_holdings_binding_frequency' => array(
      'name' => 'Econ Library Stock Exchange Holdings Binding Frequency',
      'machine_name' => 'econ_library_stock_exchange_holdings_binding_frequency',
      'description' => 'Econ Library Stock Exchange Holdings Binding Frequency',
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
    'econ_library_stock_exchange_holdings_country' => array(
      'name' => 'Econ Library Stock Exchange Holdings Country',
      'machine_name' => 'econ_library_stock_exchange_holdings_country',
      'description' => 'Econ Library Stock Exchange Holdings Country',
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
    'econ_library_stock_exchange_holdings_exchange' => array(
      'name' => 'Econ Library Stock Exchange Holdings Exchange',
      'machine_name' => 'econ_library_stock_exchange_holdings_exchange',
      'description' => 'Econ Library Stock Exchange Holdings Exchange',
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
    'econlib_wp_publishers' => array(
      'name' => 'Econlib WP Publishers',
      'machine_name' => 'econlib_wp_publishers',
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
