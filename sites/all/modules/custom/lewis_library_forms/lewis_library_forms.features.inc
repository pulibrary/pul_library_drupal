<?php
/**
 * @file
 * lewis_library_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lewis_library_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function lewis_library_forms_default_entityform_type() {
  $items = array();
  $items['lewis_library_locker_request'] = entity_import('entityform_type', '{
    "type" : "lewis_library_locker_request",
    "label" : "Lewis Library Locker Request",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : { "rules_email_entityform_admin" : "rules_email_entityform_admin" },
      "notification_text" : "",
      "notify_emails" : "abarrera@princeton.edu, lewislib@princeton.edu",
      "validation_rules" : [],
      "submit_button_text" : "Request",
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your request, we will be contacting you shortly.\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
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
        "17" : 0
      },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/lewis-library-locker-request",
        "alias" : "libraries\\/scilib\\/lockers",
        "language" : "und"
      }
    }
  }');
  $items['lewis_library_room_reservations'] = entity_import('entityform_type', '{
    "type" : "lewis_library_room_reservations",
    "label" : "Lewis Library Room Reservations",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : {
        "rules_email_entityform_submitter" : "rules_email_entityform_submitter",
        "rules_email_entityform_admin" : "rules_email_entityform_admin"
      },
      "notification_text" : "",
      "notify_emails" : "abarrera@princeton.edu, lewislib@princeton.edu",
      "validation_rules" : [],
      "submit_button_text" : "Request",
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for your request, we will be contacting you shortly.\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "entityforms",
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
        "17" : 0
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
        "source" : "eform\\/submit\\/lewis-library-room-reservations",
        "alias" : "libraries\\/scilib\\/rooms",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/lewis-library-room-reservations\\/confirm",
        "alias" : "libraries\\/scilib\\/rooms\\/confirm",
        "language" : "und"
      }
    }
  }');
  return $items;
}
