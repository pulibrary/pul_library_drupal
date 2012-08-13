Sarnia allows a Drupal site to interact with and display external data from
Solr, mainly by building views of data from Solr. This is useful for large
external datasets that either aren't practical to store in Drupal or that are
already indexed in Solr.

Sarnia is also the name of a town in Ontario, Canada, home of the largest
photovoltaic power plant on the planet:

  http://en.wikipedia.org/wiki/Sarnia_Photovoltaic_Power_Plant

This module was developed by Palantir.net (http://palantir.net/), and sponsored
by the Field Museum of Natural History (http://fieldmuseum.org/).

-----------------
About this README
-----------------

This document refers to the Sarnia 1.x development AFTER the v1.0 release.

There is a live version of this documentation on Drupal.org:

  http://drupal.org/node/1379476

Some sections of this document refer to images, which are located in the
"README-images" directory in this repository.

------------
Installation
------------

Sarnia depends on Search API, Search API Solr, and Search API Views. The full
list of dependencies includes:

* Views - http://drupal.org/project/views
* CTools - http://drupal.org/project/ctools
* Entity API - http://drupal.org/project/entity
* Search API - http://drupal.org/project/search_api
* Search API Solr - http://drupal.org/project/search_api_solr
* Apache Solr PHP Client library - http://code.google.com/p/solr-php-client/downloads/list

The Apache Solr PHP Client library should be installed according to the
instructions included with the Search API Solr (search_api_solr) module--ie, it
should be unpacked and placed inside Drupal's sites/all/libraries directory.

Sarnia depends on the latest 1.x releases of Search API and Search API Solr.
The included drush makefile, "sarnia.make", may help with downloading all of the
dependencies.

After downloading the required modules, installing Sarnia will enable its
dependencies. Enabling the "Views UI" module (included with Views) is also
recommended.

----------------------------------
Generating a Solr core for testing
----------------------------------

In order to use Sarnia, you need a populated Solr core to work with. Sarnia does
not care what sort of data is in the core, as long as the Solr schema specifies
that some fields are stored as well as indexed. You may want to use a separate
Drupal site with the ApacheSolr module and content generated using Devel
Generate (a module that accompanies the Devel module,
http://drupal.org/project/devel) to populate a Solr core for basic testing. QA
testing against your own data will better reveal any issues that relate to
searching and displaying your particular data set.

For generating sample Solr data, ApacheSolr is preferred over Search API. When
indexing data, Solr can be configured to index data without storing it; Search
API makes the decision to index most data using Solr but to not store it (make
it retrievable from Solr), while ApacheSolr stores all of the data that it
indexes. In short, a Solr core generated using Search API will contain very
little retrievable data, while a core generated using ApacheSolr will allow you
to retrieve all properties from the core--the use case that Sarnia was built to
address.

----------------------
Configuring Search API
----------------------

To connect your Solr core to Drupal, create a Search API server configuration.

Visit the Search API configuration section:

  Admin > Configuration > Search and metadata > Search API
  (path: admin/config/search/search_api)

This page lists the configured Search API servers and indexes. Normally, servers
and indexes are independent, but Sarnia's purpose is to use a Search API server
as a data source. Instead of the normal process of creating an index and linking
it up to a server through configuration, we will create a server and then let
Sarnia create and manage the index. (image-1.png)

Search API servers correspond with Solr cores, not Solr servers. If you want to
use multiple Solr cores, you will create multiple "Search API servers", even
though you may have a single multi-core Solr server set up.

Add a Search API server by visiting the "Add server" link. Give the server a
name (image-2.png), then select the "Sarnia Solr service" service class and fill
out your Solr connection information (image-3.png).

Clicking "Create server" will finalize your configuration, and you will be taken
to an overview of your settings (image-4.png). At this point, if you were to
visit the Search API overview page again, you would see your new server listed
(image-5.png).

Instead of going back to the overview page, visit the "Sarnia" tab (highlighted
in image-4.png). This page allows you to create a new entity type based on your
server.

The "ID field" select box contains a list of all the Solr fields that may be
suitable for use as an entity id (image-6.png). You must choose a field with
unique values; however, Sarnia has no way to determine which fields have unique
values, so this choice requires some knowledge of your Solr core. This can not
be changed after creating the entity type. If you are only reading from the core
and not creating data or links based on Sarnia entities, it is not destructive
to delete and re-enable the Sarnia entity for a particular server. Clicking
"Enable" will save your configuration (image-7.png).

When you save your configuration, Sarnia will create a Search API index for you.
You can see this index when you visit the Search API overview page
(image-8.png).

At this point, your Drupal site is connected to Solr and can retrieve Solr data.

---------------------------
Creating Views of Solr data
---------------------------

Visit the Views UI:

  Admin > Structure > Views
  (path: admin/structure/views)

Create a new View using the "Add new view" link.

In the "Show" section, select the name of the index that Sarnia created; it will
be titled "Sarnia: [your server name]". The form will refresh (image-10.png),
and you can click "Continue & edit".

By default, the View's "Display format" will be "(unformatted list) of
(Entity)". You can change "Entity" to "Fields" in the wizard, or after clicking
"Continue & edit". The "Entity" display is provided by Entity API, but since
Sarnia knows very little about the meaning of the data in each entity, it can't
display the information intelligently. What you'll see is a direct printout of
all of the values available from Solr for each entity. You can also access this
display as an administrator at URLs like:

  http://yoursite.com/sarnia/%sarnia_entity_type/%entity_id

If you do end up with a View displaying entities, you'll want to change it to
display fields. Find the link in the first column that says "Show: Entity"
(image-10a.png). Change the selection from "Entity" to "Fields", and click
"Apply".

All of the Solr data is available through a single field, named "Sarnia: [your
server name]: Solr property". At the time that Sarnia was designed, the Views UI
lacked the ability to filter fields, and long lists of poorly labeled fields are
not usable. The Sarnia field bundles all Solr fields together into a single
field with a combobox select element.

Find the "Solr property" field by clicking "add" in the Fields section and
selecting "Sarnia: [your server name]: Solr property" (image-12.png).

Solr property Views fields have a "Formatter" option (image-13.png). This can be
used to provide basic formatting options for a property. Most text fields will
benefit from using the "Filtered text" formatter with the "Plain text" option
(image-14.png), which will translate plain text line breaks into HTML breaks and
URLs into links.

If you add filters, sorts, or advanced contextual filters (image-15.png)
(formerly known as an "argument"), you will again see "Sarnia: [your server
name]: Solr property" as an option. When you select it, you can choose the Solr
property to filter, sort, or use as context.

You may add multiple instances of the field, filter, sort, or contextual filter,
which will let you combine and arrange your data according to various Solr
properties.

------------------------------
Field Formatters for Solr Data
------------------------------

The "Solr property" field contains all of the data from Solr. Several of the
formatters use data from multiple Solr properties; for example, the "Image"
formatter uses one Solr property for the image source, and another for the alt
text.

There are two formatters that depend on external modules:

1. OpenLayers map -- depends on http://drupal.org/project/openlayers
   This formats two properties, a latitude and a longitude, as a point on an
   OpenLayers map. If these properties have multiple values, then each pair of
   values will be represented as a separate point marker.
2. Multimedia -- depends on http://drupal.org/project/mediaelement
   This formats a property containing a file name, path, or URL as a multimedia
   player. Images are embedded with the <img> tag, video and audio are embedded
   with the HTML5 <video> and <audio> tags and fallback flash players, and other
   files are represented as a file type icon and download link.

-------------
Advanced Solr
-------------

Often in Solr, the same piece of data will be indexed multiple times for
different purposes; some fields will not be suitable for search or display.
Sarnia provides some "Solr Schema" configuration to manage these behaviors.

Naming conventions for these behaviors are not standard across Solr schemas, and
fields aren't described in a way that is intelligible to Sarnia (ie, nothing in
the schema.xml explicitly declares the relationship between ss_* fields and
sort_* fields, even they are generally different indexes of the same data), so
Sarnia assumes certain conventions when applying schema rules. For example:

* Content is often aggregated into a single 'content' field for use in fulltext
  search, so the 'content' field is not available for display.
* Content is often aggregated and heavily tokenized in the 'spell' field for
  spelling suggestions or corrections, so the 'spell' field is not available for
  display.
* The dynamic base 'sort_*' is used for fields that are processed as a single
  token for sorting. There may be a duplicate version of this field for search,
  so 'sort_*' fields are not available for fulltext search.
* Solr fields containing more than one token are not suitable for sorting, since
  they are essentially multi-value. Sorting is disabled on 'content' and 'spell'
  fields.
* 'sort_*' fields that correspond with 'ss_*' fields are used instead of the
  'ss_*' when sorting; this allows click sorting on display fields in Views.

If you crafted your Solr schema yourself, you may want to check out the "Solr
Schema" tab on your Sarnia Search API server configuration; otherwise, you
probably want to stay far, far away :)

-----------------
Advanced Entities
-----------------

In the Search API server configuration for Sarnia servers/entities, you can
"manage fields" on Sarnia entities. It is possible to add fields here, but there
is no corresponding interface for editing field content; saving content has not
been tested, even programmatically. Sarnia's relationship with Solr is
read-only, so even if an editing interface were built out, it would not be
possible to edit data stored in Solr.
