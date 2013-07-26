<?php

/**
 * @file
 * Provides class that expires users.
 */

class ExpireUser implements ExpireInterface {

  /**
   * Executes expiration actions for user.
   *
   * @param $user
   *   User object.
   *
   * @param $action
   *   Action that has been executed.
   *
   * @param $skip_action_check
   *   Shows whether should we check executed action or just expire node.
   */
   function expire($user, $action, $skip_action_check = FALSE) {

    if (empty($user->uid)) {
      return;
    }

    $enabled_actions = variable_get('expire_user_actions', array());
    $enabled_actions = array_filter($enabled_actions);

     // Stop further expiration if executed action is not selected by admin.
    if (!in_array($action, $enabled_actions) && !$skip_action_check) {
      return;
    }

    $expire_urls = array();

    // Expire front page.
    $expire_front_page = variable_get('expire_user_front_page', EXPIRE_USER_FRONT_PAGE);
    if ($expire_front_page) {
      $expire_urls['front'] = '<front>';
    }

    // Expire user page.
    $expire_user_page = variable_get('expire_user_user_page', EXPIRE_USER_USER_PAGE);
    if ($expire_user_page) {
      $expire_urls['user-' . $user->uid] = 'user/' . $user->uid;
    }

    // Expire custom pages.
    $expire_custom = variable_get('expire_user_custom', EXPIRE_USER_CUSTOM);
    if ($expire_custom) {
      $pages = variable_get('expire_user_custom_pages');
      $urls = ExpireAPI::expireCustomPages($pages, array('user' => $user));
      $expire_urls = array_merge($expire_urls, $urls);
    }

    // Flush page cache for expired urls.
    if (!empty($expire_urls)) {
      ExpireAPI::executeExpiration($expire_urls, 'user', $user);
    }
  }

}
