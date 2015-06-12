HTTP Response Headers
=====================

This module provides a way to  set HTTP headers on pages by various visibility
settings. Currently the headers can be set by path, content type and user role.

Status:
-------

<img src="https://travis-ci.org/vijaycs85/http_response_headers.svg?branch=7.x-1.x" />
<img src="https://insight.sensiolabs.com/projects/79e25957-90ee-48e0-be96-3c5a5f62bbb2/mini.png" />

Installation:
-------------

1. Enable module.

2. Go to Config->HTTP response headers->Settings to configure the allowed
headers.

3. Go to Config->HTTP response headers and click 'Add a HTTP header rule' to
create new header rule.

4. Give a name to the rule, select header, provide header value and visibility
rules.

5. To manage header rules list, visit Config->HTTP response headers.


Features:
---------

1. Drush commands available for all operations that can be done via admin UI.

2. CTool export tool integration to export & import rules between different
drupal installation.
