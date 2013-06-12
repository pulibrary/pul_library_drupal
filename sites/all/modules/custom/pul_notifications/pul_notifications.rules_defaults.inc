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
  $items['rules_new_database_notification'] = entity_import('rules_config', '{ "rules_new_database_notification" : {
      "LABEL" : "New Database Notification",
      "PLUGIN" : "rule",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules", "variable_email" ],
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
        { "variable_email_mail" : {
            "to" : "kr2@princeton.edu",
            "variable" : "entityform_notify_admin_[mail_part]",
            "language" : "en"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_warn_of_term_edit'] = entity_import('rules_config', '{ "rules_warn_of_term_edit" : {
      "LABEL" : "Warn of Term Edit",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "taxonomy" ],
      "ON" : [ "taxonomy_term_update" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "term" ], "type" : "taxonomy_term" } },
        { "entity_is_of_bundle" : {
            "entity" : [ "term:vocabulary" ],
            "type" : "taxonomy_vocabulary",
            "bundle" : { "value" : { "taxonomy_vocabulary" : "taxonomy_vocabulary" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "[term:name] updated",
            "message" : "A term was updated, [term:name]."
          }
        }
      ]
    }
  }');
  return $items;
}
