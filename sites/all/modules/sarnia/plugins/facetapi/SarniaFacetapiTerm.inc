<?php

/**
 * @file
 * Term query type plugin for the Apache Solr adapter.
 */

/**
 * Plugin for "term" query types.
 */
class SarniaFacetapiTerm extends SearchApiFacetapiTerm implements FacetapiQueryTypeInterface {

  static public function getType() {
    return 'sarnia_term';
  }

  /**
   * Initializes the facet's build array.
   *
   * @return array
   *   The initialized render array.
   */
  public function build() {
    $facet = $this->adapter->getFacet($this->facet);
    // The current search per facet is stored in a static variable (during
    // initActiveFilters) so that we can retrieve it here and get the correct
    // current search for this facet.
    $search_ids = drupal_static('search_api_facetapi_active_facets', array());
    if (empty($search_ids[$facet['name']]) || !search_api_current_search($search_ids[$facet['name']])) {
      return array();
    }
    $search_id = $search_ids[$facet['name']];
    $search = search_api_current_search($search_id);
    $build = array();
    $results = $search[1];
    if (isset($results['search_api_facets']) && isset($results['search_api_facets'][$this->facet['field']])) {
      $values = $results['search_api_facets'][$this->facet['field']];
      foreach ($values as $value) {
        if ($value['count']) {
          $filter = $value['filter'];

          $build[$filter] = array(
            '#count' => $value['count'],
            '#markup' => trim($filter, '"[]'),
          );
        }
      }
    }
    return $build;
  }

}
