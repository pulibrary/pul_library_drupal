<?php
/**
 * @file
 * pul_core_search_indexes.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function pul_core_search_indexes_default_search_api_index() {
  $items = array();
  $items['best_database_bet'] = entity_import('search_api_index', '{
    "name" : "Best Database Bet",
    "machine_name" : "best_database_bet",
    "description" : "Best Database Bets. Indexes titles, keywords and subjects with tier one resources. ",
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "database" : "database" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['database_keyword_index'] = entity_import('search_api_index', '{
    "name" : "Database Keyword Index",
    "machine_name" : "database_keyword_index",
    "description" : "Keyword index for Articles and Databases Features",
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "21.0" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "field_db_restricted_access" : { "type" : "boolean" },
        "field_db_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_db_suppressed" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "body:summary" : { "type" : "text" },
        "field_db_access_url:url" : { "type" : "text", "boost" : "3.0" },
        "field_db_keywords:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_db_keywords:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_db_keywords:field_subs_tier_one_resources" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_db_keywords:field_subs_tier_two_resources" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_db_keywords:field_rsrc_tier_one_resources" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_db_keywords:field_rsrc_tier_two_resources" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_dboverride_database:title" : { "type" : "text", "boost" : "2.0" },
        "field_dboverride_database:field_db_use_proxy" : { "type" : "boolean" },
        "field_schemaorg_description:value" : { "type" : "text" },
        "field_schemaorg_description:summary" : { "type" : "text" },
        "field_schemaorg_description:format" : { "type" : "string" },
        "field_dboverride_database:field_db_access_url:url" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "alternative_database_title" : "alternative_database_title",
              "database" : "database"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_db_access_note" : true,
              "field_db_location_access_note" : true,
              "body:value" : true,
              "field_db_access_url:url" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_db_access_note" : true,
              "field_db_location_access_note" : true,
              "body:value" : true,
              "field_db_access_url:url" : true
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
              "field_db_access_note" : true,
              "field_db_location_access_note" : true,
              "body:value" : true,
              "field_db_access_url:url" : true
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
              "field_db_access_note" : true,
              "field_db_location_access_note" : true,
              "body:value" : true,
              "field_db_access_url:url" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['database_subject_index'] = entity_import('search_api_index', '{
    "name" : "Database Subject Index",
    "machine_name" : "database_subject_index",
    "description" : "Indexes database subjects and pull in references to their \\u0022tier one\\u0022 resources to try and weight the results more precisely. ",
    "server" : "search_api_library_staging",
    "item_type" : "taxonomy_term",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "tid" : { "type" : "integer" },
        "name" : { "type" : "text", "boost" : "5.0" },
        "description" : { "type" : "text" },
        "parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_rsrc_tier_one_resources" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "field_subs_tier_one_resources:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_subs_tier_one_resources:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_subs_tier_one_resources:url" : { "type" : "list\\u003Curi\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "database_subjects" : "database_subjects" }
          }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "parent:parent" : "parent:parent" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "description" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "description" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['databases_uri'] = entity_import('search_api_index', '{
    "name" : "Databases URI",
    "machine_name" : "databases_uri",
    "description" : null,
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_db_access_url:url" : { "type" : "text", "boost" : "2.0" },
        "field_db_alternative_urls:url" : { "type" : "list\\u003Ctext\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "database" : "database" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_db_access_url:url" : true,
              "field_db_alternative_urls:url" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_db_access_url:url" : true,
              "field_db_alternative_urls:url" : true
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
              "field_db_access_url:url" : true,
              "field_db_alternative_urls:url" : true
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
              "field_db_access_url:url" : true,
              "field_db_alternative_urls:url" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "page" : "page",
              "book" : "book",
              "frequently_asked_question" : "frequently_asked_question",
              "job_description" : "job_description",
              "pul_landing_page" : "pul_landing_page",
              "library_committee" : "library_committee",
              "library_committee_with_terms" : "library_committee_with_terms",
              "library_meeting_space_locations" : "library_meeting_space_locations",
              "library_news_item" : "library_news_item",
              "panel" : "panel",
              "study_room" : "study_room",
              "webform" : "webform",
              "work_group" : "work_group"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
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
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "field_schemaorg_description:summary" : { "type" : "text" },
        "field_schemaorg_description:value" : { "type" : "text" },
        "field_study_room_library" : { "type" : "integer", "entity_type" : "node" },
        "field_study_room_numbers" : { "type" : "list\\u003Ctext\\u003E" },
        "field_study_room_related_subject" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_study_room_related_subject:name" : { "type" : "text" },
        "field_study_room_related_subject:tid" : { "type" : "integer" },
        "field_study_room_staff_contact" : { "type" : "integer", "entity_type" : "user" },
        "field_study_room_staff_contact:field_puluser_lname" : { "type" : "text" },
        "field_study_room_staff_contact:field_puluser_nick_name" : { "type" : "text" },
        "field_study_room_staff_contact:mail" : { "type" : "text" },
        "field_study_room_staff_contact:name" : { "type" : "text" },
        "field_study_room_staff_contact:uid" : { "type" : "integer" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['dmg_administrative_index'] = entity_import('search_api_index', '{
    "name" : "Database Administrative Index",
    "machine_name" : "dmg_administrative_index",
    "description" : "DMG Administrative Index",
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:format" : { "type" : "string" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "field_db_is_trial" : { "type" : "boolean" },
        "field_db_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_db_keywords:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_db_keywords:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_db_mobile_support" : { "type" : "boolean" },
        "field_db_use_proxy" : { "type" : "boolean" },
        "field_dboverride_database:nid" : { "type" : "integer" },
        "field_dboverride_database:title" : { "type" : "text" },
        "field_dboverride_database:url" : { "type" : "uri" },
        "is_new" : { "type" : "boolean" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "title" : { "type" : "text", "boost" : "21.0" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 1, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "alternative_database_title" : "alternative_database_title",
              "database" : "database",
              "database_issue" : "database_issue",
              "database_package" : "database_package"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_dboverride_database:title" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_dboverride_database:title" : true
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
              "body:value" : true,
              "body:summary" : true,
              "field_dboverride_database:title" : true
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
              "body:value" : true,
              "body:summary" : true,
              "field_dboverride_database:title" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['libraries_and_collections'] = entity_import('search_api_index', '{
    "name" : "Libraries and Collections",
    "machine_name" : "libraries_and_collections",
    "description" : null,
    "server" : "search_api_library_staging",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_building:title" : { "type" : "text" },
        "field_campus_building_loc_id" : { "type" : "integer" },
        "field_collection_url:url" : { "type" : "uri" },
        "field_digital_project_url:title" : { "type" : "text" },
        "field_digital_project_url:url" : { "type" : "uri" },
        "field_e_mail_address" : { "type" : "text" },
        "field_fax" : { "type" : "text" },
        "field_full_library_name" : { "type" : "text" },
        "field_lib_main_menu_link" : { "type" : "text" },
        "field_library_homepage:url" : { "type" : "uri" },
        "field_long_description:value" : { "type" : "text" },
        "field_phone" : { "type" : "text" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "collection" : "collection",
              "digital_project" : "digital_project",
              "libraries" : "libraries"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_e_mail_address" : true,
              "field_fax" : true,
              "field_phone" : true,
              "field_lib_main_menu_link" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_e_mail_address" : true,
              "field_fax" : true,
              "field_phone" : true,
              "field_lib_main_menu_link" : true
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
              "field_e_mail_address" : true,
              "field_fax" : true,
              "field_phone" : true,
              "field_lib_main_menu_link" : true
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
              "field_e_mail_address" : true,
              "field_fax" : true,
              "field_phone" : true,
              "field_lib_main_menu_link" : true
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
  $items['staff_users'] = entity_import('search_api_index', '{
    "name" : "Staff User Index",
    "machine_name" : "staff_users",
    "description" : "General Index for User Accounts",
    "server" : "search_api_library_staging",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_pul_user_staff_sort" : { "type" : "integer" },
        "field_puluser_department" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_puluser_department:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.5" },
        "field_puluser_department_sort" : { "type" : "integer" },
        "field_puluser_division" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_puluser_division:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.5" },
        "field_puluser_fname" : { "type" : "text" },
        "field_puluser_formalname" : { "type" : "string" },
        "field_puluser_lname" : { "type" : "text" },
        "field_puluser_nick_name" : { "type" : "text", "boost" : "2.0" },
        "field_puluser_officialtitle" : { "type" : "text", "boost" : "2.0" },
        "field_puluser_phone_number" : { "type" : "text" },
        "field_puluser_section" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_puluser_section:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.5" },
        "field_puluser_unit" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_puluser_unit:name" : { "type" : "text", "boost" : "0.3" },
        "field_puluser_unit_sort" : { "type" : "integer" },
        "mail" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "First and Last Name",
                "type" : "fulltext",
                "fields" : [ "field_puluser_fname", "field_puluser_lname" ],
                "description" : "A Fulltext aggregation of the following fields: First Name, Last Name."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "mail" : true, "field_puluser_phone_number" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "mail" : true, "field_puluser_phone_number" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "mail" : true, "field_puluser_phone_number" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "mail" : true, "field_puluser_phone_number" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
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
