<?php
/**
 * @file
 * pul_fields_for_basic_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pul_fields_for_basic_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_basic_page_files'
  $field_instances['node-page-field_basic_page_files'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Files (PDF, MS Office Documents, .txt) that you wish to attach or link to within the text of your document. Use "Page Images" for any graphics or photos you want to include. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_basic_page_files',
    'label' => 'Page Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls xlsx doc docx ppt pptx sav',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'caption_from_title' => 1,
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'link',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__flexslider_full' => 0,
          'colorbox__large' => 0,
          'colorbox__library-news' => 0,
          'colorbox__medium' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_flexslider_full' => 0,
          'image_large' => 0,
          'image_library-news' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'link' => 'link',
        ),
        'insert_width' => '',
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-page-field_basic_page_images'
  $field_instances['node-page-field_basic_page_images'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Images you wish to attach to  or embed on this page. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_basic_page_images',
    'label' => 'Page Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 1,
        'insert' => 1,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 'image',
          'image_flexslider_full' => 0,
          'image_large' => 'image_large',
          'image_library-news' => 0,
          'image_medium' => 'image_medium',
          'image_thumbnail' => 'image_thumbnail',
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Files (PDF, MS Office Documents, .txt) that you wish to attach or link to within the text of your document. Use "Page Images" for any graphics or photos you want to include. ');
  t('Images you wish to attach to  or embed on this page. ');
  t('Page Files');
  t('Page Images');

  return $field_instances;
}
