<?php
/**
 * @file
 * pul_editor_html_profile.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pul_editor_html_profile_filter_default_formats() {
  $formats = array();

  // Exported format: Editor HTML.
  $formats['pul_editor_html'] = array(
    'format' => 'pul_editor_html',
    'name' => 'Editor HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <table> <thead> <tbody> <tr> <td> <img> <div> <h2> <h3> <h4> <h5> <h6> <span><p id class><iframe><br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter_paragraph_fix' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'replace' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => 20,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
