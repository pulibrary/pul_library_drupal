; @copyright (c) Copyright 2011 Palantir.net

; This makefile specifies the current versions of and patches to Search API and
; Search API Solr required to make Sarnia work.

core = "7.x"
api = "2"

; Contrib modules
projects[] = views
projects[] = ctools
projects[] = entity

projects[search_api][version] = "1.x-dev"
projects[search_api][patch][] = "http://drupal.org/files/1197538-17-search_api-random_sort.patch"

projects[search_api_solr][version] = "1.x-dev"
projects[search_api_solr][patch][] = "http://drupal.org/files/1413504-solr-registry_0.patch"

; Apache Solr PHP Client library
libraries[SolrPhpClient][download][type] = "get"
libraries[SolrPhpClient][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip"
libraries[SolrPhpClient][download][sha1] = "5af88ba6f06763e297e67dc4544edffcb0a03918"
libraries[SolrPhpClient][destination] = "libraries"
