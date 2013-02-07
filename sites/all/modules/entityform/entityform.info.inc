<?php

/**
 * @file
 * Provides Entity metadata integration.
 */

/**
 * Extend the defaults.
 */
class EntityformMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['user'] = array(
      'label' => t("User"),
      'type' => 'user',
      'description' => t("The user who submitted the form."),
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_setter_method',
      'setter permission' => 'administer entityform types',
      'required' => TRUE,
      'schema field' => 'uid',
    );

    $properties['created'] = array(
      'label' => t("Date submitted"),
      'type' => 'date',
      'description' => t("The date form was submitted."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer entityform types',
      'schema field' => 'created',
    );
    $properties['changed'] = array(
      'label' => t("Date changed"),
      'type' => 'date',
      'schema field' => 'changed',
      'description' => t("The date the form was most recently updated."),
    );
    $properties['type'] = array(
        'label' => t("Entityform Type"),
        'type' => 'entityform_type',
        'schema field' => 'type',
        'description' => t("The Entityform Type for the Entityform Submission."),
    );

    return $info;
  }
}
/**
 * Extend the defaults.
 */
class EntityformTypeMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];
    $properties['notification_text'] = array(
        'label' => t("Notification Text"),
        'description' => t("Custom text to display in notifications."),
        'getter callback' => 'entityformtype_metadata_get_properties',
        'type' => 'text',
        'computed' => TRUE,
    );
    $properties['notify_emails'] = array(
        'label' => t("Notification Emails"),
        'description' => t("Emails to notify"),
        'getter callback' => 'entityformtype_metadata_get_properties',
        'type' => 'text',
        'computed' => TRUE,
    );
    return $info;
  }
}
