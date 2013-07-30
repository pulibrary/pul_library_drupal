<?php

/**
 * @file
 * Provides internal API for page cache flushes.
 */

class ExpireAPI {

  /**
   * Executes internal or external cache expiration.
   *
   * @param $urls
   *   List of internal or external urls that should be expired.
   *
   * @param $object_type
   *  Name of object type ('node', 'comment', 'user', etc).
   *
   * @param $object
   *   Object (node, comment, user, etc) for which expiration is executes.
   *
   * @param $absolute_urls_passed
   *   Indicates whether absolute URLs or internal paths were passed.
   */
  public static function executeExpiration($urls, $object_type = '', $object = NULL, $absolute_urls_passed = FALSE) {

    // Allow other modules to modify the list prior to expiring.
    drupal_alter('expire_cache', $urls, $object_type, $object, $absolute_urls_passed);

    // If was passed array with absolute URLs we should not do any job here.
    if ($absolute_urls_passed) {
      $wildcards = array();
      $absolute_urls = $urls;
    }
    else {
      list($absolute_urls, $wildcards) = self::convertToAbsoluteUrls($urls);
    }

    // Write some debug information.
    self::debugLog($absolute_urls, $wildcards, $object_type);

    $status = variable_get('expire_status', EXPIRE_STATUS_DISABLED);
    if ($status == EXPIRE_STATUS_ENABLED_INTERNAL) {
      self::executeInternalExpiration($absolute_urls, $wildcards);
    }
    elseif ($status == EXPIRE_STATUS_ENABLED_EXTERNAL) {
      self::executeExternalExpiration($absolute_urls, $wildcards, $object_type, $object);
    }
  }

  /**
   * Execute internal urls expiration.
   * Calls cache_clear_all().
   *
   * @param $urls
   *   List of absolute urls that should be flushed.
   *
   * @param $wildcards
   *   List of paths and its wildcard flushes.
   */
  protected static function executeInternalExpiration($urls, $wildcards) {
    foreach ($urls as $internal_path => $absolute_url) {

      // Check if wildcard is enabled for this URL.
      $wildcard = !empty($wildcards[$internal_path]);

      // Clear cached page data.
      cache_clear_all($absolute_url, 'cache_page', $wildcard);
    }
  }

  /**
   * Executes hook_cache_expire().
   *
   * It allows other modules to implement custom login for cache expiration.
   *
   * @param $urls
   *   List of absolute urls that should be flushed.
   *
   * @param $wildcards
   *   List of paths and its wildcard flushes.
   *
   * @param $object_type
   *  Name of object type ('node', 'comment', 'user', etc).
   *
   * @param $object
   *   Object (node, comment, user, etc) for which expiration is executes.
   */
  protected static function executeExternalExpiration($urls, $wildcards, $object_type, $object) {
    $modules = module_implements('expire_cache');
    foreach ($modules as $module) {
      module_invoke($module, 'expire_cache', $urls, $wildcards, $object_type, $object);
    }
  }

  /**
   * Find all taxonomy terms in node fields and build urls for them.
   *
   * @param $node
   *   Node object.
   *
   * @return array
   *   Term urls that should be flushed.
   */
  public static function expireNodeTermPages($node) {

    $terms = array();
    $field_info = field_info_fields();
    $field_instances = field_info_instances('node', $node->type);

    foreach ($field_instances as $name => $instance) {
      if ($field_info[$name]['type'] == 'taxonomy_term_reference') {
        $new_terms = field_get_items('node', $node, $name);
        if (is_array($new_terms) && !empty($new_terms)) {
          $terms = array_merge($new_terms, $terms);
        }
        $old_terms = isset($node->original) && !empty($node->original) ? field_get_items('node', $node->original, $name) : array();
        if (is_array($old_terms) && !empty($old_terms)) {
          $terms = array_merge($old_terms, $terms);
        }
      }
    }

    $urls = array();
    foreach ($terms as $term) {
      $urls['term-' . $term['tid']] = 'taxonomy/term/' . $term['tid'];
    }

    return $urls;
  }

  /**
   * Find all node references in node fields and build urls for them.
   *
   * @param $node
   *   Node object.
   *
   * @return array
   *   Node urls that should be flushed.
   */
  public static function expireNodeReferences($node) {

    $references = array();
    $field_info = field_info_fields();
    $field_instances = field_info_instances('node', $node->type);

    foreach ($field_instances as $name => $instance) {
      if ($field_info[$name]['type'] == 'node_reference') {
        $new_references = field_get_items('node', $node, $name);
        if (is_array($new_references) && !empty($new_references)) {
          $references = array_merge($new_references, $references);
        }
        $old_references = isset($node->original) && !empty($node->original) ? field_get_items('node', $node->original, $name) : array();
        if (is_array($old_references) && !empty($old_references)) {
          $references = array_merge($old_references, $references);
        }
      }
    }

    $urls = array();
    foreach ($references as $reference) {
      $urls['reference-' . $reference['nid']] = 'node/' . $reference['nid'];
    }

    return $urls;
  }

  /**
   * Create expiration urls for custom pages.
   *
   * @param $pages
   *   Unformated string from user input raw.
   *
   * @param $token_options
   *   Options for token replacements.
   *
   * @return array
   *   List of custom urls that should be flushed.
   */
  public static function expireCustomPages($pages, $token_options) {

    $urls = array();

    $pages = explode("\n", $pages);
    foreach ($pages as $index => $page) {
      $page = trim($page);
      if (!empty($page)) {

        // Replace only urls with tokens.
        if (token_scan($page)) {
          $page = token_replace($page, $token_options);
        }

        $urls['custom-' . $index] = $page;
      }
    }

    return $urls;
  }

  /**
   * Convert internal path to absolute URLs.
   *
   * @param $internal_paths
   *   Array of internal paths.
   *
   * @return array
   */
  protected static function convertToAbsoluteUrls($internal_paths) {

    $absolute_urls = array();
    $wildcards = array();

    foreach ($internal_paths as $path) {
      $wildcard = FALSE;

      // Every URL may contain |wildcard suffix, so we should check this.
      $path_parts = explode('|', $path);
      if (sizeof($path_parts) > 1 && $path_parts[sizeof($path_parts) - 1] == 'wildcard') {
        $wildcard = TRUE;
        array_pop($path_parts); // Remove 'wildcard' from path.
        $path = implode('|', $path_parts);
      }

      // Collect array with information about expired URLs and its wildcards.
      $absolute_urls[$path] = url($path, array('absolute' => TRUE));
      $wildcards[$path] = $wildcard;
    }

    return array($absolute_urls, $wildcards);
  }

  /**
   * Log debug information.
   *
   * @param $absolute_urls
   * @param $wildcards
   * @param $object_type
   */
  protected static function debugLog($absolute_urls, $wildcards, $object_type) {

    $debug = variable_get('expire_debug', EXPIRE_DEBUG_DISABLED);
    if (empty($debug)) {
      return;
    }

    $output_urls = array();
    foreach ($absolute_urls as $internal_path => $url) {
      $wildcard = !empty($wildcards[$internal_path]) ? 'true' : 'false';
      $output_urls[] = t('URL: @url', array('@url' => check_url($url)));
      $output_urls[] = t('Wildcard: @wildcard', array('@wildcard' => $wildcard));
      $output_urls[] = t('Expired object: @type', array('@type' => $object_type ? $object_type : '(none)'));
      $output_urls[] = '--------';
    }

    // Log debug message in watchdog.
    $message = t('Expiration was executed for the next URLs: !urls', array('!urls' => theme('item_list', array('items' => $output_urls))));
    watchdog('expire', $message, array(), WATCHDOG_DEBUG);

    // For development might be useful to print info on screen.
    if ($debug == EXPIRE_DEBUG_FULL) {
      drupal_set_message($message);
    }
  }

}
