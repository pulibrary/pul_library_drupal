<?php

/**
 * Extend the logic around Solr field schema information.
 */
class SarniaSearchApiSolrField extends SearchApiSolrField {

  /**
   * @var string
   *   The name of the field.
   */
   protected $name;

  /**
   * Constructor.
   *
   * @param stdClass $field
   *   A field object from Solr's "Luke" servlet.
   */
  public function __construct($field, $name = NULL) {
    $this->field = $field;
    $this->name = $name;
  }

  /**
   * Get the name of the Solr field.
   *
   * @return string
   *   The name of the Solr field.
   */
  public function getName() {
    return $this->name;
  }

  /**
   * Determine whether this field may be suitable for use as a key field.
   *
   * Unfortunately, it seems like the best way to find an actual uniqueKey field
   * according to Solr is to examine the Solr core's schema.xml.
   *
   * @return boolean
   *   Whether the field is suitable for use as a key.
   */
  public function isPossibleKey() {
    return !$this->getDynamicBase()
      && $this->isStored()
      && !$this->isMultivalued();
  }

  /**
   * Determine whether a field is suitable for sorting.
   *
   * In order for a field to yield useful sorted results in Solr, it must be
   * indexed and not multivalued. If a sort field is tokenized, the tokenization
   * must yield only one token; multiple tokens can result in unpredictable sort
   * ordering. Unfortunately, there's no way to check whether a particular field
   * contains values with multiple tokens.
   *
   * @return boolean
   *   Whether the field might be suitable for sorting.
   */
  public function isSortable() {
    return $this->isIndexed()
      && !$this->isMultivalued();
  }

  /**
   * Determine whether a field is suitable for fulltext search.
   *
   * Some fields are tokenized for sort and contain a single, all lowercase
   * value. These fields are not suitable for fulltext search, but there is no
   * general way to tell them apart from fields that are tokenized into multiple
   * terms.
   *
   * @see SearchApiSolrField::isSortable()
   *
   * @return boolean
   *   Whether the field might be suitable for fulltext search.
   */
  public function isFulltextSearchable() {
    return $this->isIndexed()
      && $this->isTokenized();
  }

  /**
   * Determine whether a field is suitable for filtering (non-fulltext, case sensitive search).
   *
   * When searching on this type of field, only full, exact values will match.
   *
   * @return boolean
   *   Whether the field might be suitable for filtering.
   */
  public function isFilterable() {
    return $this->isIndexed()
      && !$this->isTokenized();
  }

}
