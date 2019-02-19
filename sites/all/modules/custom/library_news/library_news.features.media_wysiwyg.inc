<?php

/**
 * @file
 * library_news.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function library_news_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // Restricted view modes for image files.
  $media_wysiwyg['image_story_image_left_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_story_image_right_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_story_image_center_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
