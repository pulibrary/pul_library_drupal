<?php

/**
 * @file
 * pul_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pul_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_dmg_resource_update'] = entity_import('rules_config', '{ "rules_dmg_resource_update" : {
      "LABEL" : "DMG Resource Update",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : {
                "alternative_database_title" : "alternative_database_title",
                "database" : "database"
              }
            }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "A DMG resource has been updated. ",
            "message" : "A DMG [entity:content-type], [entity:title],  at [entity:url] has been updated by [site:current-user] created by [entity:author]"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_new_database_notification'] = entity_import('rules_config', '{ "rules_new_database_notification" : {
      "LABEL" : "New Database Notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "new_db_message_notification" : { "label" : "New Database Notification Message", "type" : "text" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "database" : "database" } }
          }
        },
        { "entity_is_new" : { "entity" : [ "entity" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "A new DMG Resource has been created. ",
            "message" : "A new primary DMG has been created at [entity:url] by [site:current-user]. It\\u0027s proxy value is \\ufeff\\ufeff\\ufeff[entity:field-db-use-proxy]. "
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_new_node_added'] = entity_import('rules_config', '{ "rules_new_node_added" : {
      "LABEL" : "New Node Added",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [ { "entity_is_new" : { "entity" : [ "entity" ] } } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3", "8" : "8", "4" : "4" } },
            "subject" : "New [entity:content-type] has been added",
            "message" : "A new [entity:content-type], \\u0022[entity:title]\\u0022 has been created at [entity:url] at [entity:created]. "
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_warn_of_term_edit'] = entity_import('rules_config', '{ "rules_warn_of_term_edit" : {
      "LABEL" : "Warn of Term Edit",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "taxonomy" ],
      "ON" : { "taxonomy_term_update" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "term" ], "type" : "taxonomy_term" } },
        { "entity_is_of_bundle" : {
            "entity" : [ "term:vocabulary" ],
            "type" : "taxonomy_vocabulary",
            "bundle" : { "value" : { "taxonomy_vocabulary" : "taxonomy_vocabulary" } }
          }
        },
        { "entity_is_of_type" : { "entity" : [ "term:vocabulary" ], "type" : "taxonomy_vocabulary" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3", "8" : "8", "4" : "4" } },
            "subject" : "[term:name] updated ",
            "message" : "A term was updated, [term:name] in [term:vocabulary]."
          }
        }
      ]
    }
  }');
  return $items;
}
