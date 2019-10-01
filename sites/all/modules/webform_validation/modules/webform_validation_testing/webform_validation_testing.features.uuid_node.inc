<?php

/**
 * @file
 * webform_validation_testing.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function webform_validation_testing_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'title' => 'webform_validation uuid_features test',
    'log' => '',
    'status' => 1,
    'comment' => 0,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'webform',
    'language' => 'und',
    'created' => 1504429473,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '4ca52408-9bbd-49fa-baae-698c37dc5f42',
    'webform' => array(
      'nid' => 1,
      'next_serial' => 1,
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'confidential' => 0,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'progressbar_bar' => 1,
      'progressbar_page_number' => 0,
      'progressbar_percent' => 0,
      'progressbar_pagebreak_labels' => 1,
      'progressbar_include_confirmation' => 1,
      'progressbar_label_first' => 'Start',
      'progressbar_label_confirmation' => 'Complete',
      'preview' => 0,
      'preview_next_button_label' => '',
      'preview_prev_button_label' => '',
      'preview_title' => '',
      'preview_message' => '',
      'preview_message_format' => NULL,
      'preview_excluded_components' => array(),
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        1 => array(
          'nid' => 1,
          'cid' => 1,
          'pid' => 0,
          'form_key' => 'answer',
          'name' => 'What’s the answer to the ultimate question?',
          'type' => 'number',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => '',
            'css_classes' => '',
            'integer' => 1,
            'type' => 'textfield',
            'field_prefix' => '',
            'field_suffix' => '',
            'disabled' => 0,
            'unique' => 0,
            'description' => '',
            'attributes' => array(),
            'analysis' => FALSE,
            'min' => '',
            'max' => '',
            'step' => '',
            'decimals' => '',
            'point' => '.',
            'separator' => ',',
            'excludezero' => 0,
          ),
          'required' => 1,
          'weight' => 0,
          'page_num' => 1,
        ),
      ),
      'conditionals' => array(),
      'validation' => array(
        'answer_42' => array(
          'rulename' => 'answer_42',
          'validator' => 'specific_value',
          'data' => 42,
          'error_message' => 'That’s the wrong answer.',
          'negate' => FALSE,
          'weight' => 0,
          'components' => array(
            1 => 1,
          ),
        ),
      ),
    ),
    'date' => '2017-09-03 09:04:33 +0000',
    'user_uuid' => '155c7ec5-8f9d-4934-888d-6951b7ac0728',
  );
  return $nodes;
}
