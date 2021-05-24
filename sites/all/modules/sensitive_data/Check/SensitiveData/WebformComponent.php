<?php

/**
 * Sensitive data check for entity fields.
 */
class SiteAuditCheckSensitiveDataWebformComponent extends SiteAuditCheckAbstract {

  /**
   * {@inheritdoc}
   */
  public function getLabel() {
    return dt('Webform components');
  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {
    return dt('Examine components in a webform.');
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

    foreach ($this->registry['sensitive_data_webform_component'] as $data_type => $fields) {
      $results[] = dt('Components that may contain !data_type: !field_names', array(
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
      return dt('Investigate the webform components to discover if they actually do contain sensitive data.');
    }
  }

  /**
   * {@inheritdoc}
   */
  public function calculateScore() {
    // If Webform is not installed, abort.
    if (!module_exists('webform')) {
      $this->abort;
      return;
    }

    // Define the number of rows to retrieve at a time.
    $rows = 20;

    $more_rows = TRUE;

    $row_count = 0;
    while ($more_rows) {
      $query = db_select('webform_submitted_data', 'wsd');
      $query->leftJoin('webform_component', 'wc', 'wsd.cid = wc.cid');
      $query->fields('wsd', array('data'));
      $query->fields('wc', array('form_key'));

      $query->range($row_count, $rows);
      $result = $query->execute();

      while ($row = $result->fetchAssoc()) {
        if (isset($row['data']) && $row['data'] != '') {
          foreach (sensitive_data_data_types() as $data_type_name => $data_type_class) {
            /* @var $data_type_class SensitiveDataTypeInterface */
            $analysis_result = $data_type_class::searchForData($row['data']);
            if ($analysis_result) {
              $this->registry['sensitive_data_webform_component'][$analysis_result][$row['form_key']] = TRUE;
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

    if (empty($this->registry['sensitive_data_entity_field'])) {
      return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_PASS;
    }
    return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_WARN;
  }

}
