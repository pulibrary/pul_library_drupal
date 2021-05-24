<?php

/**
 * Determine the data types to analyze in checks.
 *
 * @return array
 *   The list of data types.
 */
function sensitive_data_data_types() {
  $data_types = array();
  $data_type_names = array(
    'CreditCardNumber',
    'UsSocialSecurityCardNumber',
  );

  foreach ($data_type_names as $data_type_name) {
    $base_class_name = 'SensitiveDataType';
    $class_name = $base_class_name . $data_type_name;
    $data_types[$data_type_name] = $class_name;

    if (!class_exists($class_name)) {
      require_once SENSITIVE_DATA_TYPE_BASE_PATH . "/$data_type_name.php";
    }
  }

  return $data_types;
}
