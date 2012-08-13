<?php

/**
 * Search service class using Solr server.
 */
class SarniaSolrService extends SearchApiSolrService {

  /**
   * Track explicitly disabled Search API features.
   */
  protected $disabled_features = array();

  /**
   * Explicitly disable a particular feature.
   * @see SarniaController::load()
   *
   * @param string $feature
   *   The name of a Search API feature.
   */
  public function disableFeature($feature) {
    $this->disabled_features[$feature] = $feature;
  }

  /**
   * This is called "unDisable" because there's no guarantee that the
   * SearchApiSolrService class supports a particular feature... even though it
   * probably does.
   *
   * @param string $feature
   *   The name of a Search API feature.
   */
  public function unDisableFeature($feature) {
    unset($this->disabled_features[$feature]);
  }

  /**
   * Check whether this particular service supports a Search API feature.
   *
   * @param string $feature
   *   The name of a Search API feature.
   *
   * @return boolean
   */
  public function supportsFeature($feature) {
    if (isset($this->disabled_features[$feature])) {
      return FALSE;
    }
    return parent::supportsFeature($feature);
  }

  /**
   * Create a list of all indexed field names mapped to their Solr field names.
   * The special fields "search_api_id" and "search_api_relevance" are also
   * included.
   */
  protected function getFieldNames(SearchApiIndex $index, $reset = FALSE) {
    $ret = array();

    // Initially, map property Solr field names to themselves.
    $sarnia_entity_info = sarnia_entity_type_load_by_index($index->machine_name);
    if (!empty($index->options['fields'])) {
      foreach (array_keys($index->options['fields']) as $f) {
        $ret[$f] = $f;
      }
    }

    // We have some special property names which may override Solr field names.
    //@TODO these probably shouldn't override.
    $ret = array_merge($ret, array(
      // local property name => solr doc property name
      'search_api_id' => 'is_search_api_id',
      'search_api_relevance' => 'score',
      'search_api_item_id' => $sarnia_entity_info['id_field'],
      'search_api_random' => 'random_' . rand(1, 200),
    ));

    // Let modules adjust the field mappings.
    drupal_alter('search_api_solr_field_mapping', $index, $ret);

    return $ret;
  }

  /**
   * Alter the query built by SearchApiSolrService::search().
   *
   * Sarnia needs to avoid making assumptions about the Solr configuration and
   * schema (solrconfig.xml and schema.xml) since the point is to read arbitrary
   * Solr cores.
   */
  protected function preQuery(array &$call_args, SearchApiQueryInterface $query) {
    // Remove the Search API index id filter.
    $index_id_filter = 'index_id:' . $query->getIndex()->machine_name;
    $call_args['params']['fq'] = array_diff($call_args['params']['fq'], array($index_id_filter));

    // Make sure that all fields, plus the score, are returned in Solr results.
    $call_args['params']['fl'] = array('*,score');

    // Explicitly specify the default query type, since the Solr core's
    // config.xml might specify any default.
    // @TODO Does qt assume a particular handler name/behavior configuration in
    //       the config.xml? Should we use the defType parameter instead? Or is
    //       there a point where we require a "standard" configuration?
    if (empty($call_args['params']['qt'])) {
      $call_args['params']['qt'] = 'dismax';
    }

    // Null queries should select everything. We can't make assumptions about
    // the default Solr query handler, so here we use standard syntax and
    // explicitly set the handler.
    if (empty($call_args['query'])) {
      $call_args['query'] = '*:*';
      $call_args['params']['qf'] = array();
      $call_args['params']['qt'] = 'standard';
    }

    // If we're using 'standard' Solr query syntax generated elsewhere, switch
    // specify the standard query parser.
    if ($query->getOption('parse mode') == 'direct'
        && $query->getOption('sarnia use raw keys') == TRUE) {
      $call_args['params']['qf'] = array();
      $call_args['params']['qt'] = 'standard';
    }
  }

  /**
   * Stash the results as loaded entities.
   */
  protected function postQuery(array &$results, SearchApiQueryInterface $query, Apache_Solr_Response $response) {
    parent::postQuery($results, $query, $response);
    $sarnia_entity_type = sarnia_entity_server_name_load($this->server->machine_name);
    entity_get_controller($sarnia_entity_type)->stash($results['results']);
  }

  /**
   * Return the facet field name corresponding to a normal Solr field name.
   *
   * For now, this is just the same field name. This method is necessary to
   * override SearchApiSolrService::getFacetField(), which prepends 'f_' to
   * field names beginning with 's'. If we need more nuance here than just the
   * displayable, non-fulltext fields, we could provide another 'filter' and use
   * SarniaSolrService::getFilteredFields() and SarniaSolrService::schemaApplyRules(),
   * the same way we do to map display fields to sort and filter fields.
   *
   * @see sarnia_facetapi_facet_info_alter()
   */
  protected function getFacetField($field) {
    return $field;
  }

  /**
   * Get metadata about fields in the Solr/Lucene index.
   *
   * @param boolean $reset
   *   Reload the cached data?
   */
  public function getFields($reset = FALSE) {
    $cid = 'search_api_solr:fields:' . $this->server->machine_name;

    // If the data hasn't been retrieved before and we aren't refreshing it, try
    // to get data from the cache.
    if (!isset($this->fields) && !$reset) {
      $cache = cache_get($cid);
      if (isset($cache->data)) {
        $this->fields = $cache->data;
      }
    }

    // If there was no data in the cache, or if we're refreshing the data,
    // connect to the Solr server, retrieve schema information, and cache it.
    if (!isset($this->fields) || $reset) {
      $this->connect();
      $this->fields = array();
      foreach ($this->solr->getFields() as $name => $info) {
        $this->fields[$name] = new SarniaSearchApiSolrField($info, $name);
      }
      cache_set($cid, $this->fields);
    }

    return $this->fields;
  }

  function getFulltextFields($reset = FALSE) {
    $fields = $this->getFilteredFields('fulltext', $reset);
    return $fields;
  }

  function getSortFields($reset = FALSE) {
    return $this->getFilteredFields('sort', $reset);
  }

  function getDisplayFields($reset = FALSE) {
    return $this->getFilteredFields('display', $reset);
  }

  function getFilterFields($reset = FALSE) {
    return $this->getFilteredFields('filter', $reset);
  }

  var $filteredFields;
  protected function getFilteredFields($filter, $reset = FALSE) {
    // If the data hasn't been retrieved before and we aren't refreshing it, try
    // to get data from the cache.
    $cid = "search_api_solr:fields:{$this->server->machine_name}:{$filter}";
    if (!isset($this->filteredFields[$filter]) && !$reset) {
      $cache = cache_get($cid);
      if (isset($cache->data)) {
        $this->filteredFields[$filter] = $cache->data;
      }
    }

    // If there was no data in the cache, or if we're refreshing the data,
    // filter the fields.
    if (!isset($this->filteredFields[$filter]) || $reset) {
      $this->filteredFields[$filter] = $this->_getFilteredFields($filter, $reset);

      // Apply Sarnia transformations, which should be customized to match
      // specific schema.xml files.
      $this->schemaApplyRules($this->filteredFields[$filter], $filter);
      drupal_alter('sarnia_solr_service_filter_fields', $this->filteredFields[$filter], $filter, $this);

      // Cache the filtered array.
      cache_set($cid, $this->filteredFields[$filter]);
    }

    return $this->filteredFields[$filter];
  }

  function _getFilteredFields($filter, $reset = FALSE) {
    $fields = array();

    // Use methods on the SolrField class for basic filtering.
    $filter_method = $this->getFieldFilterMethod($filter);
    if ($filter_method) {
      foreach ($this->getFields($reset) as $name => $field) {
        if ($field->{$filter_method}()) {
          $fields[$name] = $field;
        }
      }
    }

    return $fields;
  }

  protected function getFieldFilterMethod($filter) {
    $methods = array(
      'fulltext' => 'isFulltextSearchable',
      'sort' => 'isSortable',
      'display' => 'isStored',
      'filter' => 'isFilterable',
    );
    return $methods[$filter];
  }

  var $schema;
  function schemaApplyRules(&$fields, $filter) {
    $result_fields = array();
    $all_fields = $this->getFields();
    foreach ($fields as $name => $field) {
      $result_fields[$name] = $field;
      if ($rule = $this->schemaGetRule($field, $filter)) {
        if ($rule->effect == 'disable') {
          // Don't allow fulltext/filter/display/sort on this field.
          unset($result_fields[$name]);
        }
        elseif ($rule->effect == 'replace' && isset($rule->replacement)) {
          // Use this field as the fulltext/filter/display/sort for another field.
          $replacement = NULL;
          if ($rule->match_type == 'name') {
            $replacement = $rule->replacement;
          }
          elseif ($rule->match_type == 'dynamicBase') {
            $replacement = str_replace(trim($rule->match_value, '*'), trim($rule->replacement, '*'), $name);
          }
          if ($replacement && is_object($all_fields[$replacement])) {
            $result_fields[$replacement] = $field;
            unset($result_fields[$name]);
          }
        }
      }
    }
    ksort($result_fields);
    $fields = $result_fields;
  }

  function schemaGetRule($field, $filter) {
    if (!isset($this->schema)) {
      $this->schemaInit();
    }

    if (isset($this->schema[$filter])) {
      foreach ($this->schema[$filter] as $rule) {
        if ((!$rule->search_api_server || $rule->search_api_server == $this->server->machine_name)
            && (   ($rule->match_type == 'name' && $rule->match_value == $field->getName())
                || ($rule->match_type == 'dynamicBase' && $rule->match_value == $field->getDynamicBase())
                || ($rule->match_type == 'type' && $rule->match_value == $field->getType())
               )
           ) {
          return $rule;
        }
      }
    }

    return FALSE;
  }

  function schemaInit() {
    $this->schema = array();
    $conditions = array('search_api_server' => array('', $this->server->machine_name), 'enabled' => TRUE);
    $rules = module_invoke_all('sarnia_solr_service_schema', $conditions);
    drupal_alter('sarnia_solr_service_schema', $rules);

    foreach ($rules as $rule) {
      $this->schema[$rule->behavior][] = $rule;
    }
  }

  /**
   * Create a single search query string according to the given field, value
   * and operator.
   */
  protected function createFilterQuery($field, $value, $operator, $field_info) {
    $filter = parent::createFilterQuery($field, $value, $operator, $field_info);

    // Separate filters by wrapping each in parenthesis, rather than expecting
    // each filter value to be a single, quoted phrase.
    return "($filter)";
  }

  /**
   * Override SearchApiSolrService::formatFilterValue() because it relies on
   * SearchApiSolrConnection::phrase().
   *
   * @see SarniaSolrService::phrase()
   */
  protected function formatFilterValue($value, $type) {
    switch ($type) {
      case 'boolean':
        $value = $value ? 'true' : 'false';
        break;
      case 'date':
        $value = is_numeric($value) ? (int) $value : strtotime($value);
        if ($value === FALSE) {
          return 0;
        }
        $value = format_date($value, 'custom', self::SOLR_DATE_FORMAT, 'UTC');
        break;
    }

    return SarniaSolrService::phrase($value);
  }

  /**
   * Used instead of SearchApiSolrConnection::phrase, since the original
   * method's quoting makes it impossible to use wildcards or other quoting.
   *
   * This phrase escaping allows wildcards, AND and OR, and double quotes.
   */
  static public function phrase($value) {
    // Escape slashes.
    $value = str_replace('\\', '\\\\', $value);

    // Escape colons, parenthesis, brackets, and square brackets.
    // @see http://us3.php.net/preg_replace
    $value = preg_replace('/[:(){}\[\]]/', '\\\\\\0', $value);

    // Escape search operators or wildcards appearing at the beginning of the value.
    $value = preg_replace('/^(AND|OR|NOT|\*|[+-])/', '\\\\\\0', $value);

    // Escape unmatched double quotes.
    if (substr_count($value, '"') % 2 != 0) {
      $value = str_replace('"', '\\"', $value);
    }

    return $value;
  }

}
