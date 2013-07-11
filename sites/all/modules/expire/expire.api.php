<?php

/**
 * @file
 * API documentation for Cache Expiration module.
 */

/**
 * Provides possibility to flush pages for external cache storages.
 *
 * @param $urls
 *   List of absolute URLs that should be flushed.
 *
 * @param $wildcards
 *   Array with wildcards implementations.
 *   Indicates whether should be executed wildcard cache flush.
 *
 * @param $object_type
 *  Name of object type ('node', 'comment', 'user', etc).
 *
 * @param $object
 *   Object (node, comment, user, etc) for which expiration is executes.
 *
 * @see expire.api.inc
 */
function hook_expire_cache($urls, $wildcards, $object_type, $object) {
  foreach ($urls as $url) {
    $full_path = url($url, array('absolute' => TRUE));
    purge_urls($full_path, $wildcards);
  }
}

/**
 * Provides possibility to change urls before they are expired.
 *
 * @param $urls
 *   List of internal paths or absolute URLs that should be flushed.
 *
 * @param $object_type
 *  Name of object type ('node', 'comment', 'user', etc).
 *
 * @param $object
 *   Object (node, comment, user, etc) for which expiration is executes.
 *
 * @param $absolute_urls_passed
 *   Indicates whether absolute URLs or internal paths were passed.
 *
 * @see expire.api.inc
 */
function hook_expire_cache_alter($urls, $object_type, $object, $absolute_urls_passed) {
  if ($object_type == 'node' && !$absolute_urls_passed) {
    unset($urls['node-' . $object->nid]);
    $urls['example'] = 'custom_page/' . $object->uid . '/' . $object->nid;
  }
}
