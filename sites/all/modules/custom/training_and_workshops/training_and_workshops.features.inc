<?php
/**
 * @file
 * training_and_workshops.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function training_and_workshops_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
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
function training_and_workshops_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function training_and_workshops_default_entityform_type() {
  $items = array();
  $items['zotero_workshop_registration'] = entity_import('entityform_type', '{
    "type" : "zotero_workshop_registration",
    "label" : "Zotero Workshop Registration",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : { "rules_email_entityform_admin" : "rules_email_entityform_admin" },
      "notification_text" : "",
      "notify_emails" : "abarrera@princeton.edu, abw@princeton.edu",
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "Registration for Zotero Workshop",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThanks, we have received your registration request.\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "1" : 0,
        "3" : 0,
        "8" : 0,
        "7" : 0,
        "5" : 0,
        "4" : 0,
        "6" : 0,
        "9" : 0,
        "10" : 0,
        "11" : 0,
        "12" : 0,
        "13" : 0,
        "14" : 0,
        "15" : 0,
        "16" : 0,
        "17" : 0,
        "18" : 0,
        "19" : 0
      },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/zotero-workshop-registration",
        "alias" : "training\\/series\\/registrations\\/zotero",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/zotero-workshop-registration\\/confirm",
        "alias" : "training\\/series\\/registrations\\/zotero\\/confirm",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function training_and_workshops_node_info() {
  $items = array(
    'training_series' => array(
      'name' => t('Training Series'),
      'base' => 'node_content',
      'description' => t('Creates a training series or course - defines the title and description only.  Individual Training Sessions can be created, separately and the series would then be added to the session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_session' => array(
      'name' => t('Training Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
