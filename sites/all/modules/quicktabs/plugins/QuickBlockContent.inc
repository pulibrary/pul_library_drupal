<?php

/**
 * Class for tab content of type "block" - this is for rendering a block as tab
 * content.
 */
class QuickBlockContent extends QuickContent {

  public static function getType() {
    return 'block';
  }

  public function optionsForm($delta, $qt) {
    $tab = $this->settings;
    $form = array();
    $form['block']['bid'] = array(
      '#type' => 'select',
      '#options' => quicktabs_get_blocks(),
      '#default_value' => isset($tab['bid']) ? $tab['bid'] : '',
      '#title' => t('Select a block'),
    );
    $form['block']['hide_title'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide the title of this block'),
      '#default_value' => isset($tab['hide_title']) ? $tab['hide_title'] : 1,
    );
    return $form;
  }

  public function render($hide_empty = FALSE, $args = array()) {
    if ($this->rendered_content) {
      return $this->rendered_content;
    }
    $output = array();
    $item = $this->settings;
    if (!empty($args)) {
      // The args have been passed in from an ajax request.
      $qt_name = array_shift($args);
      list($item['bid'], $item['hide_title']) = $args;

      // Ensure the block is assigned to the requested quicktabs block. This test prevents
      // AJAX access to blocks that have not been added to an AJAX-enabled quicktabs block.
      $break = TRUE;
      $quicktabs = quicktabs_load($qt_name);
      // Ensure AJAX is enabled for the quicktabs block.
      if (!empty($quicktabs) && $quicktabs->ajax == 1) {
        // Ensure the requested tab has been added to the quicktabs block.
        foreach ($quicktabs->tabs as $quicktab) {
          if (isset($quicktab['bid']) && ($quicktab['bid'] == $item['bid'])) {
            $break = FALSE;
            break;
          }
        }
      }
      if ($break == TRUE) {
        if (!$hide_empty) {
          $output['#markup'] = theme('quicktabs_tab_access_denied', $item);
        }
        return $output;
      }
    }

    if (isset($item['bid'])) {
      if (module_exists('block')) {
        $pos = strpos($item['bid'], '_delta_');
        $module = drupal_substr($item['bid'], 0, $pos);
        $delta = drupal_substr($item['bid'], $pos + 7);

        // Make sure the user can access the block.
        if ($this->accessBlock($module, $delta)) {

          $block = block_load($module, $delta);
          $block->region = 'quicktabs_tabpage';

          if ($block_arr = _block_render_blocks(array($block))) {
            if ($item['hide_title']) {
              $block_arr["{$block->module}_{$block->delta}"]->subject = FALSE;
            }
            if (!empty($block_arr["{$block->module}_{$block->delta}"]->content)) {
              $build = _block_get_renderable_array($block_arr);
              $output = $build;
            }
          }
        }
        elseif (!$hide_empty) {
          $output['#markup'] = theme('quicktabs_tab_access_denied', $item);
        }
      }
      elseif (!$hide_empty) {
        $output['#markup'] = t('Block module is not enabled, cannot display content.');
      }
    }
    $this->rendered_content = $output;
    return $output;
  }

  public function getAjaxKeys() {
    return array('bid', 'hide_title');
  }

  public function getUniqueKeys() {
    return array('bid');
  }

  /**
   * Checks if the current user can access a block.
   */
  private function accessBlock($module, $delta) {
    // Get current user's rids.
    global $user;
    $rids = array_keys($user->roles);

    // Get authorized rids.
    $authorized_rids = db_select('block_role', 'br')
      ->fields('br', array('rid'))
      ->condition('module', $module, '=')
      ->condition('delta',  $delta,  '=')
      ->execute()
      ->fetchCol();

    // Return whether the user can access the block:
    // - Either all roles have access - no record in {block_role}
    // - Or only specific roles have access - in which case rids should match.
    return (count($authorized_rids) == 0)
      || (count(array_intersect($authorized_rids, $rids)) != 0);
  }
}

