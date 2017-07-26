<?php
/**
 * @file
 * pul_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function pul_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: branch_image_branding.
  $styles['branch_image_branding'] = array(
    'label' => 'Branch Image Branding',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 265,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_callout.
  $styles['homepage_callout'] = array(
    'label' => 'Homepage_callout',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 260,
          'height' => 160,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news-image.
  $styles['news-image'] = array(
    'label' => 'news-image',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 145,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile-photo.
  $styles['profile-photo'] = array(
    'label' => 'profile-photo',
    'effects' => array(
      5 => array(
        'name' => 'image_style_quality',
        'data' => array(
          'quality' => 100,
        ),
        'weight' => -10,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
