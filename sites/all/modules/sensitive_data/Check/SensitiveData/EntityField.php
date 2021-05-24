<?php

/**
 * Sensitive data check for entity fields.
 */
class SiteAuditCheckSensitiveDataEntityField extends SiteAuditCheckAbstract {

  /**
   * {@inheritdoc}
   */
  public function getLabel() {
    return dt('Entity fields');
  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {
    return dt('Examine each field attached to an entity.');
  }

  /**
   * {@inheritdoc}
   */
  public function getResultFail() {}

  /**
   * {@inheritdoc}
   */
  public function getResultInfo() {
  }

  /**
   * {@inheritdoc}
   */
  public function getResultPass() {
    return dt('No sensitive data was detected.');
  }

  /**
   * {@inheritdoc}
   */
  public function getResultWarn() {
    $results = array();

    foreach ($this->registry['sensitive_data_entity_field'] as $data_type => $fields) {
      $results[] = dt('Fields that may contain !data_type: !field_names', array(
        '!data_type' => $data_type,
        '!field_names' => implode(', ', array_keys($fields)),
      ));
    }

    return implode('; ', $results);
  }

  /**
   * {@inheritdoc}
   */
  public function getAction() {
    if ($this->getScore() == SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_WARN) {
      return dt('Investigate the fields to discover if they actually do contain sensitive data.');
    }
  }

  /**
   * {@inheritdoc}
   */
  public function calculateScore() {
    // Only available in Drupal 7.22 and above.
    if (!function_exists('field_info_field_map')) {
      $this->abort;
      return;
    }

    $field_api_map = field_info_field_map();
    if (count($field_api_map) == 0) {
      $this->abort;
      return;
    }

    // Define the number of rows to retrieve at a time.
    $rows = 20;

    foreach (array_keys($field_api_map) as $field_name) {
      $field = field_info_field($field_name);
      $data_table = _field_sql_storage_tablename($field);
      $revision_table = _field_sql_storage_revision_tablename($field);
      $columns = array_keys($field['columns']);

      $tables = array();
      if ($data_table) {
        $tables[] = $data_table;
      }
      if ($revision_table) {
        $tables[] = $revision_table;
      }

      foreach ($tables as $table) {
        foreach ($columns as $column) {
          $row_count = 0;
          $column = _field_sql_storage_columnname($field_name, $column);

          $more_rows = TRUE;

          while ($more_rows) {
            $query = db_select($table, 't');
            $query->fields('t', array($column, 'entity_type', 'bundle'));
            $query->range($row_count, $rows);
            $result = $query->execute();

            while ($row = $result->fetchAssoc()) {
              if (isset($row[$column]) && $row[$column] != '') {
                foreach (sensitive_data_data_types() as $data_type_name => $data_type_class) {
                  /* @var $data_type_class SensitiveDataTypeInterface */
                  $analysis_result = $data_type_class::searchForData($row[$column]);
                  if ($analysis_result) {
                    $this->registry['sensitive_data_entity_field'][$analysis_result][$field_name] = TRUE;
                  }
                }
              }
            }

            if ($result->rowCount() > 0) {
              $row_count += $rows;
            }
            else {
              $more_rows = FALSE;
            }
          }
        }
      }
    }

    if (empty($this->registry['sensitive_data_entity_field'])) {
      return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_PASS;
    }
    return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_WARN;
  }

}
