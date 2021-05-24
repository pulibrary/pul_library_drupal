<?php

class SiteAuditReportSensitiveData extends SiteAuditReportAbstract {

  /**
   * {@inheritdoc}
   */
  public function getLabel() {
    return dt('Sensitive data');
  }

}
