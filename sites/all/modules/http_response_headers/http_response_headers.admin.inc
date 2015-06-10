<?php

/**
 * @file
 * Admin page callbacks for the HTTP response headers module.
 */

/**
 * Callback for configuration form.
 */
function http_response_headers_settings_form($form, &$from_state) {

  $form['http_response_headers']['label'] = array(
    '#type' => 'markup',
    '#markup' => theme('item_list', array(
      'items' => variable_get('http_response_headers_allowed_headers', array()),
      'title' => t('Currently enabled headers:'),
    )),
  );
  $form['http_response_headers']['http_response_headers_allowed_headers'] = array(
    '#type' => 'select',
    '#title' => t('Allowed headers'),
    '#default_value' => variable_get('http_response_headers_allowed_headers', array()),
    '#options' => http_response_headers_get_all_headers(),
    '#multiple' => TRUE,
    '#size' => 10,
    '#description' => t('Allowed headers to set via admin UI on <a href="!header_rule_url"> HTTP response headers page</a> page.', array('!header_rule_url' => url('admin/config/system/http-response-headers'))),
  );

  $form['http_response_headers']['http_response_headers_exclude_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Exclude header rule pages'),
    '#rows' => '5',
    '#default_value' => variable_get('http_response_headers_exclude_pages'),
    '#description' => t('Excludes header rule check on this pages.'),
  );

  return system_settings_form($form);
}


/**
 * Provides response headers.
 *
 * @return array
 *   An array of response headers.
 */
function http_response_headers_get_all_headers() {

  // Standard response headers.
  $headers['Standard response headers'] = array(
    'Access-Control-Allow-Origin',
    'Accept-Ranges',
    'Age',
    'Allow',
    'Cache-Control',
    'Connection',
    'Content-Encoding',
    'Content-Language',
    'Content-Length',
    'Content-Location',
    'Content-MD5',
    'Content-Disposition',
    'Content-Range',
    'Content-Type',
    'Date',
    'ETag',
    'Expires',
    'Last-Modified',
    'Link',
    'Location',
    'P3P',
    'Pragma',
    'Proxy-Authenticate',
    'Refresh',
    'Retry-After',
    'Server',
    'Set-Cookie',
    'Status',
    'Strict-Transport-Security',
    'Trailer',
    'Transfer-Encoding',
    'Vary',
    'Via',
    'Warning',
    'WWW-Authenticate',
  );

  // Non-standard response headers.
  $headers['Common non-standard response headers'] = array(
    'X-Frame-Options',
    'X-XSS-Protection',
    'Content-Security-Policy',
    'X-Content-Security-Policy',
    'X-WebKit-CSP',
    'X-Content-Type-Options',
    'X-Powered-By',
    'X-UA-Compatible',
    'X-Permitted-Cross-Domain-Policies',
  );

  // Map key.
  foreach ($headers as $title => $header_set) {
    $return_list[$title] = array_combine($header_set, $header_set);
  }

  return $return_list;
}
