<?php

/**
 * @file
 * mendel_sheet_music.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mendel_sheet_music_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
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
function mendel_sheet_music_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mendel_sheet_music_node_info() {
  $items = array(
    'mendel_sheet_music' => array(
      'name' => t('Mendel Sheet Music Valva'),
      'base' => 'node_content',
      'description' => t('Sheet music from special collections at Mendel Music Library'),
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
function mendel_sheet_music_default_search_api_index() {
  $items = array();
  $items['mendel_valva_sheet_music'] = entity_import('search_api_index', '{
    "name" : "Mendel Valva Sheet Music",
    "machine_name" : "mendel_valva_sheet_music",
    "description" : null,
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "mendel_sheet_music" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_mus_arranger" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mus_arranger:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_mus_box_number" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mus_folder_number" : { "type" : "integer" },
        "field_mus_longnote" : { "type" : "text" },
        "field_mus_lyricist" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mus_lyricist:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "3.0" },
        "field_mus_plate_number" : { "type" : "list\\u003Ctext\\u003E" },
        "field_mus_publication_date" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mus_publisher" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mus_publisher:name" : { "type" : "text", "boost" : "3.0" },
        "field_mus_publisher_citystate" : { "type" : "list\\u003Ctext\\u003E" },
        "field_mus_sh_instrumentation" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mus_sh_instrumentation:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_mus_sheetmusic_composer" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mus_sheetmusic_composer:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_mus_subtitle" : { "type" : "text" },
        "field_mus_valva_scene_type" : { "type" : "text" },
        "search_api_aggregation_1" : { "type" : "text", "boost" : "5.0" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "title" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Title",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_mus_subtitle" : true,
              "field_mus_publisher_citystate" : true,
              "field_mus_plate_number" : true,
              "field_mus_valva_scene_type" : true,
              "field_mus_longnote" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_mus_subtitle" : true,
              "field_mus_publisher_citystate" : true,
              "field_mus_plate_number" : true,
              "field_mus_valva_scene_type" : true,
              "field_mus_longnote" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_mus_subtitle" : true,
              "field_mus_publisher_citystate" : true,
              "field_mus_plate_number" : true,
              "field_mus_valva_scene_type" : true,
              "field_mus_longnote" : true
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
              "field_mus_subtitle" : true,
              "field_mus_publisher_citystate" : true,
              "field_mus_plate_number" : true,
              "field_mus_valva_scene_type" : true,
              "field_mus_longnote" : true
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
