<?php

/**
 * Data type definition for a credit card number.
 */
class SensitiveDataTypeCreditCardNumber implements SensitiveDataTypeInterface {

  /**
   * {@inheritdoc}
   */
  public function getLabel() {
    return dt('Credit card number');
  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {
    return dt('Search for data that looks like a credit card number.');
  }

  /**
   * {@inheritdoc}
   */
  public static function searchForData($text) {
    $regex = '\b(\d-?){14,19}\b';
    if (preg_match("/$regex/is", $text) && self::validCreditCardNumber($text)) {
      return dt('credit card numbers');
    }
    else {
      return NULL;
    }
  }

  /**
   * Check if the number is a valid credit card number.
   *
   * @param string $number
   *   The number to check.
   *
   * @return bool
   *   TRUE if valid, FALSE if invalid.
   */
  public static function validCreditCardNumber($number) {
    // Strip any non-digits.
    $number = preg_replace('/\D/', '', $number);

    // Set the string length and parity.
    $number_length = strlen($number);
    $parity = $number_length % 2;

    // Loop through each digit and do the math.
    $total = 0;
    for ($i = 0; $i < $number_length; $i++) {
      $digit = $number[$i];
      // Multiply alternate digits by two.
      if ($i % 2 == $parity) {
        $digit *= 2;
        // If the sum is two digits, add them together.
        if ($digit > 9) {
          $digit -= 9;
        }
      }
      // Total up the digits.
      $total += $digit;
    }

    // If the total mod 10 equals 0, the number is valid.
    return ($total % 10 == 0) ? TRUE : FALSE;
  }

}
