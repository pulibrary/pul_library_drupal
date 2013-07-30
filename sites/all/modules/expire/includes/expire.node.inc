<?php

/**
 * @file
 * Provides class that expires nodes.
 */

class ExpireNode implements ExpireInterface {

  /**
   * Executes expiration actions for node.
   *
   * @param $node
   *   Node object.
   *
   * @param $action
   *   Action that has been executed.
   *
   * @param $skip_action_check
   *   Shows whether should we check executed action or just expire node.
   */
  function expire($node, $action, $skip_action_check = FALSE) {

    if (empty($node->nid) || empty($node->type)) {
      return;
    }

    // See if cache settings was overridden for this node type.
    $settings_overridden = variable_get('expire_node_override_defaults_' . $node->type);

    $variable_suffix = '';
    if (!empty($settings_overridden)) {
      // If page cache settings was overridden for this node type we
      // should add "_[NODE-TYPE]" to every variable name we use here.
      $variable_suffix = '_' . $node->type;
    }

    $enabled_actions = variable_get('expire_node_actions' . $variable_suffix, array());
    $enabled_actions = array_filter($enabled_actions);

    // Stop further expiration if executed action is not selected by admin.
    if (!in_array($action, $enabled_actions) && !$skip_action_check) {
      return;
    }

    $expire_urls = array();

    // Expire front page.
    $expire_front_page = variable_get('expire_node_front_page' . $variable_suffix, EXPIRE_NODE_FRONT_PAGE);
    if ($expire_front_page) {
      $expire_urls['front'] = '<front>';
    }

    // Expire node page.
    $expire_node_page = variable_get('expire_node_node_page' . $variable_suffix, EXPIRE_NODE_NODE_PAGE);
    if ($expire_node_page) {
      $expire_urls['node-' . $node->nid] = 'node/' . $node->nid;
    }

    // Expire taxonomy term pages.
    $expire_term_pages = variable_get('expire_node_term_pages' . $variable_suffix, EXPIRE_NODE_TERM_PAGES);
    if (module_exists('taxonomy') && $expire_term_pages) {
      $urls = ExpireAPI::expireNodeTermPages($node);
      $expire_urls = array_merge($expire_urls, $urls);
    }

    // Expire node reference's pages.
    $expire_node_references = variable_get('expire_node_reference_pages' . $variable_suffix, EXPIRE_NODE_REFERENCE_PAGES);
    if (module_exists('node_reference') && $expire_node_references) {
      $urls = ExpireAPI::expireNodeReferences($node);
      $expire_urls = array_merge($expire_urls, $urls);
    }

    // Expire custom pages.
    $expire_custom = variable_get('expire_node_custom' . $variable_suffix, EXPIRE_NODE_CUSTOM);
    if ($expire_custom) {
      $pages = variable_get('expire_node_custom_pages' . $variable_suffix);
      $urls = ExpireAPI::expireCustomPages($pages, array('node' => $node));
      $expire_urls = array_merge($expire_urls, $urls);
    }

    // Flush page cache for expired urls.
    if (!empty($expire_urls)) {
      ExpireAPI::executeExpiration($expire_urls, 'node', $node);
    }
  }

  /**
   * @todo: Refactor and implement some day.
   *
   * Finds parent, siblings and children of the menu item. UGLY CODE...
   *
   * @param array $menu
   *  Output from menu_tree_all_data().
   *
   * @param bool $found
   *  Signal for when the needle was found in the menu array.
   *  Set TRUE to get entire menu.
   *
   * @param string $needle
   *  Name of menu link. Example 'node/21'.
   *
   * @param bool $first
   *  Keep track of the first call; this is a recursive function.
   *
   * @param bool &$found_global
   *  Used to signal the parent item was found in one of it's children.
   *
   * @param bool &$menu_out
   *  Output array of parent, siblings and children menu links.
   *
   * @return array
   */
  private function getMenuStructure($menu, $found, $needle, $first, &$found_global, &$menu_out) {
    // Set Defaults
    $found = !is_null($found) ? $found : TRUE;
    $needle = !is_null($needle) ? $needle : '';
    $first = !is_null($first) ? $first : TRUE;
    $found_global = FALSE;
    $menu_out = !is_null($menu_out) ? $menu_out : array();

    // Get Siblings
    foreach ($menu as $item) {
      if ($item['link']['hidden'] == 0 && $item['link']['page_callback'] != '' && ($item['link']['link_path'] == $needle || $found)) {
        $menu_out[] = $item['link']['link_path'];
        $found = TRUE;
      }
    }
    // Get Children
    foreach ($menu as $item) {
      if ($item['link']['hidden'] != 0) {
        continue;
      }
      if ($item['link']['page_callback'] != '' && ($item['link']['link_path'] == $needle || $found)) {
        $menu_out[] = $item['link']['link_path'];
        $found = TRUE;
      }
      // Get Grandkids
      if (!empty($item['below'])) {
        $sub_menu = array();
        foreach ($item['below'] as $below) {
          if ($below['link']['hidden'] == 0) {
            $sub_menu[] = $below;
          }
        }
        expire_get_menu_structure($sub_menu, $needle, $found, FALSE, $found_global, $menu_out);
        $structure[$item['link']['link_path']][] = $sub_menu;
        if ($item['link']['page_callback'] != '' && $found_global) {
          // Get Parent of kid
          $menu_out[] = $item['link']['link_path'];
        }
      }
      else {
        $structure[$item['link']['link_path']] = '';
      }
    }

    // Clean up
    if (isset($structure)) {
      if (is_array($structure)) {
        $structure = array_unique($structure);
      }
    }
    else {
      $structure = array();
    }
    $found_global = $found;
    if ($first) {
      if (isset($menu_out) && is_array($menu_out)) {
        $menu_out = array_unique($menu_out);
        sort($menu_out);
        return $menu_out;
      }
      else {
        return array();
      }
    }
    else {
      return $structure;
    }
  }

}
