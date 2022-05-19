<?php

/**
 * @file
 * pul_dss_custom_content_panes.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function pul_dss_custom_content_panes_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'dss_data_catalog_form';
  $content->admin_title = 'DSS Catalog Search Box';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'DSS Catalog Search Box',
    'body' => '<form class="search-query-form clearfix navbar-form" role="search" action="https://dss.princeton.edu/catalog" accept-charset="UTF-8" method="get" _lpchecked="1"><input name="utf8" type="hidden" value="✓">
  
  <div class="input-group">

    <label for="q" class="sr-only">search for</label>
    <input type="text" name="q" id="q" placeholder="Search..." class="search_q q form-control" autofocus="autofocus" data-autocomplete-enabled="false" data-autocomplete-path="/suggest">

    <span class="input-group-btn">
      <button type="submit" class="btn btn-primary search-btn" id="search">
        <span class="submit-search-text">Search</span>
        <span class="glyphicon glyphicon-search"></span>
      </button>
    </span>
  </div>
</form>',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => 'DSS Catalog',
    'title_heading' => 'h2',
  );
  $export['dss_data_catalog_form'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'dss_make_appointment_block';
  $content->admin_title = 'DSS Make an Appointment';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'DSS Make an Appointment',
    'body' => '<div class="service-connect-btn"><a href="https://libcal.princeton.edu/appointments?lid=387&amp;g=8848" id="dss-make-appointment" rel="nofollow">Make an Appointment</a><div><p>Please limit to 1 appointment for the service per day.</p></div></div>',
    'format' => 'pul_editor_html',
    'substitute' => 1,
    'title' => 'Need help?',
    'title_heading' => 'h2',
  );
  $export['dss_make_appointment_block'] = $content;

  return $export;
}
