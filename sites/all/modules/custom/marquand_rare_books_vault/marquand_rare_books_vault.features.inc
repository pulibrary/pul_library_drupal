<?php
/**
 * @file
 * marquand_rare_books_vault.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function marquand_rare_books_vault_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function marquand_rare_books_vault_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function marquand_rare_books_vault_node_info() {
  $items = array(
    'marq_rare_book' => array(
      'name' => t('Marquand Rare Book'),
      'base' => 'node_content',
      'description' => t('Rare Book records for searching and browsing. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function marquand_rare_books_vault_default_search_api_index() {
  $items = array();
  $items['marquand_rare_books'] = entity_import('search_api_index', '{
    "name" : "Marquand Rare Books",
    "machine_name" : "marquand_rare_books",
    "description" : "Index of Marquand Rare Books",
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_rb_author_s" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_rb_author_s:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_rb_call_number_display" : { "type" : "text" },
        "field_rb_call_number_s" : { "type" : "text", "boost" : "0.3" },
        "field_rb_description_display" : { "type" : "text", "boost" : "0.3" },
        "field_rb_location_code_s" : { "type" : "text", "boost" : "0.3" },
        "field_rb_pub_created_display" : { "type" : "text", "boost" : "0.3" },
        "field_rb_pub_date_start_sort" : { "type" : "integer" },
        "field_rb_subject_facet" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_rb_subject_facet:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_rb_title_display" : { "type" : "text" },
        "field_rb_title_sort" : { "type" : "text" },
        "field_rb_uniform_title_display" : { "type" : "text" },
        "field_rb_voyager_id" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "title" : { "type" : "text" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "marq_rare_book" : "marq_rare_book" } }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_rb_call_number_display" : true,
              "field_rb_call_number_s" : true,
              "field_rb_location_code_s" : true,
              "field_rb_pub_created_display" : true,
              "field_rb_uniform_title_display" : true,
              "field_rb_title_display" : true,
              "field_rb_title_sort" : true,
              "field_rb_description_display" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rb_call_number_display" : true,
              "field_rb_call_number_s" : true,
              "field_rb_location_code_s" : true,
              "field_rb_pub_created_display" : true,
              "field_rb_uniform_title_display" : true,
              "field_rb_title_display" : true,
              "field_rb_title_sort" : true,
              "field_rb_description_display" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rb_call_number_display" : true,
              "field_rb_call_number_s" : true,
              "field_rb_location_code_s" : true,
              "field_rb_pub_created_display" : true,
              "field_rb_uniform_title_display" : true,
              "field_rb_title_display" : true,
              "field_rb_title_sort" : true,
              "field_rb_description_display" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rb_call_number_display" : true,
              "field_rb_call_number_s" : true,
              "field_rb_location_code_s" : true,
              "field_rb_pub_created_display" : true,
              "field_rb_uniform_title_display" : true,
              "field_rb_title_display" : true,
              "field_rb_title_sort" : true,
              "field_rb_description_display" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
