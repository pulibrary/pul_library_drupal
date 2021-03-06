<?php

/**
 * @file
 * cdl_pane_fragments.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function cdl_pane_fragments_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'cdl_new_acq_spotlight';
  $content->admin_title = 'New Acquisitions Blurb';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'New Acquisitions Blurb',
    'body' => '<p>Each year, Princeton University Library has the opportunity to add very special items to its holdings of print, digital, non-print and manuscript material either through acquisition or as gifts to the Library. We have chosen some of these titles added this year to highlight. They may also be found by searching the Library’s Online Catalog.</p><p><a href="/news/categories/acquisition-highlights">View Our Highlights</a></p><p><a href="https://graphicarts.princeton.edu/category/acquisitions/" target="_blank">New Acquisitions in Graphic Arts</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'New Acquisitions',
    'title_heading' => 'h2',
  );
  $export['cdl_new_acq_spotlight'] = $content;

  return $export;
}
