<?php
/**
 * @file
 * Contains \SiteAudit\Check\Extensions\Unused.
 */

class SiteAuditCheckExtensionsUnused extends SiteAuditCheckAbstract {
  /**
   * Implements \SiteAudit\Check\Abstract\getLabel().
   */
  public function getLabel() {
    return dt('Unused');
  }

  /**
   * Implements \SiteAudit\Check\Abstract\getDescription().
   */
  public function getDescription() {
    return dt('Detect unused projects that may be safe to delete from the codebase.');
  }

  /**
   * Implements \SiteAudit\Check\Abstract\getResultFail().
   */
  public function getResultFail() {}

  /**
   * Implements \SiteAudit\Check\Abstract\getResultInfo().
   */
  public function getResultInfo() {}

  /**
   * Implements \SiteAudit\Check\Abstract\getResultPass().
   */
  public function getResultPass() {
    return dt('All projects in the codebase are being utilized.');
  }

  /**
   * Implements \SiteAudit\Check\Abstract\getResultWarn().
   */
  public function getResultWarn() {
    $ret_val = dt('The following projects(s) are not in use:');

    if (drush_get_option('html')) {
      $ret_val = '<p>' . $ret_val . '</p>';
      $ret_val .= '<table class="table table-condensed">';
      $ret_val .= '<thead><tr><th>Name</th><th>Path</th></thead>';
      $ret_val .= '<tbody>';
      foreach ($this->registry['unused_projects'] as $project_name => $project_path) {
        $ret_val .= '<tr><td>' . $project_name . '</td><td>' . $project_path . '</td></tr>';
      }
      $ret_val .= '</tbody>';
      $ret_val .= '</table>';
    }
    else {
      foreach ($this->registry['unused_projects'] as $project_name => $project_path) {
        $ret_val .= PHP_EOL . str_repeat(' ', 6);
        $ret_val .= "- $project_name: $project_path";
      }
    }
    return $ret_val;
  }

  /**
   * Implements \SiteAudit\Check\Abstract\getAction().
   */
  public function getAction() {
    if ($this->score == SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_WARN) {
      return dt('Consider backing up, then removing the project(s) from your codebase.');
    }
  }

  /**
   * Implements \SiteAudit\Check\Abstract\calculateScore().
   */
  public function calculateScore() {
    $this->registry['unused_projects'] = array();

    $extensions = _unused_modules_get_modules_by_project();
    foreach ($extensions as $extension_data) {
      if (!$extension_data->project_has_enabled_modules) {
        $whitelisted_extensions = array(
          // Intentional stub.
          'views_export',
        );
        $whitelisted_paths = array(
          // Sample.
          'sites/all/modules/coder/coder_upgrade/tests/new/samples',
        );
        if (!in_array($extension_data->project, $whitelisted_extensions) && !in_array($extension_data->module_path, $whitelisted_paths)) {
          $this->registry['unused_projects'][$extension_data->project] = $extension_data->project_path;
        }
      }
    }

    if (!empty($this->registry['unused_projects'])) {
      ksort($this->registry['unused_projects']);
      return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_WARN;
    }

    return SiteAuditCheckAbstract::AUDIT_CHECK_SCORE_PASS;
  }
}
