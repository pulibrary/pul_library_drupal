<?php

/**
 * Data type definition for a U.S. Social Security card number.
 */
class SensitiveDataTypeUsSocialSecurityCardNumber implements SensitiveDataTypeInterface {

  /**
   * {@inheritdoc}
   */
  public function getLabel() {
    return dt('U.S. Social Security card number');
  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {
    return dt('Search for data that looks like a U.S. Social Security number.');
  }

  /**
   * {@inheritdoc}
   */
  public static function searchForData($text) {
    $regex = '\b\d{3}-\d{2}-\d{4}\b';
    if (preg_match("/$regex/is", $text)) {
      return dt('U.S. social security card numbers');
    }
    else {
      return NULL;
    }
  }

}
