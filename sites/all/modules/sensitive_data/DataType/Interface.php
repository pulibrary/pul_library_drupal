<?php

/**
 * Interface for data types.
 */
interface SensitiveDataTypeInterface {

  /**
   * Get the label for the data type.
   *
   * @return string
   *   Human-readable label.
   */
  public function getLabel();

  /**
   * Get the description for the data type.
   *
   * @return string
   *   The description.
   */
  public function getDescription();

  /**
   * Search for the data type.
   *
   * @param string $text
   *   The text to search.
   *
   * @return string|null
   *   The result of the search.
   */
  public static function searchForData($text);

}
