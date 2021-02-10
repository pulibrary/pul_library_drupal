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
      'wysiwyg' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'valid_elements' => '@[class|id|style|title|dir],
img[src|width|height|alt|title|style],
a[href|target<_blank|title|id|name],
div[align<center?justify?left?right],
p[align<center?justify?left?right],
table[summary|align|colspan],
iframe[src|width|height|frameborder|allowfullscreen],
br,span,u,em,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,h2,h3,h4,h5,h6,thead,tbody,th,tr,td,sub,sup,pre',
          'allow_comments' => 0,
          'nofollow_policy' => 'whitelist',
          'nofollow_domains' => array(
            0 => 'library.princeton.edu',
          ),
          'style_color' => array(
            'color' => 'color',
            'background' => 'background',
            'background-color' => 'background-color',
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 0,
            'text-decoration' => 0,
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-bottom' => 'border-bottom',
            'border-width' => 'border-width',
            'border-top' => 0,
            'border-right' => 0,
            'border-left' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
            'border-radius' => 0,
          ),
          'style_dimension' => array(
            'height' => 'height',
            'width' => 'width',
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
          ),
          'style_positioning' => array(
            'overflow' => 'overflow',
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'float' => 'float',
            'clear' => 0,
            'display' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(),
          'rule_bypass_valid_classes' => 1,
          'rule_valid_ids' => array(),
          'rule_bypass_valid_ids' => 1,
          'rule_style_urls' => array(),
          'rule_bypass_style_urls' => 0,
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
      'caption_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_srcwhitelist' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'srcwhitelist_shwtxtfordisallowed' => 1,
          'srcwhitelist_imgsrc_allow_extrnl' => 1,
          'srcwhitelist_iframe_allow_elemnt' => 1,
          'srcwhitelist_iframe_bootstrpcomp' => 0,
          'srcwhitelist_iframesrc_whitelist' => array(),
          'srcwhitelist_video_src_whitelist' => array(
            0 => 'youtube.com',
            2 => 'vimeo.com',
            4 => 'kaltura.com',
            6 => 'princeton.edu',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
