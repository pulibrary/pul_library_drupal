<?php

/**
 * @file
 * library_news.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function library_news_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__story_image_center__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'story',
  );
  $export['image__story_image_center__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__story_image_left__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'story',
  );
  $export['image__story_image_left__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__story_image_right__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'story',
  );
  $export['image__story_image_right__file_field_image'] = $file_display;

  return $export;
}
