<?php
/**
 * @file
 * Contains \SiteAudit\Report\Content.
 */

/**
 * Class SiteAuditReportContent.
 */
class SiteAuditReportContent extends SiteAuditReportAbstract {

  /**
   * Implements \SiteAudit\Report\Abstract\getLabel().
   */
  public function getLabel() {
    return dt('Content');
  }

}
