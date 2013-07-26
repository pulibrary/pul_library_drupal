<?php

/**
 * @file
 * Settings forms for the Expire module.
 */

/**
 * Settings form for actions with cached pages.
 */
function expire_admin_settings_form() {

  drupal_set_title(t('Cache Expiration'));

  $form['tabs'] = array(
    '#type' => 'vertical_tabs',
  );

  // COMMON SETTINGS.
  $form['tabs']['status'] = array(
    '#type' => 'fieldset',
    '#title' => t('Module status'),
    '#group' => 'tabs',
    '#weight' => 0,
  );

  $form['tabs']['status']['common'] = array(
    '#type' => 'fieldset',
    '#title' => t('Common settings'),
  );

  $form['tabs']['status']['common']['expire_status'] = array(
    '#type' => 'radios',
    '#title' => t('Status of implementation'),
    '#options' => array(
      EXPIRE_STATUS_DISABLED => t('Disabled'),
      EXPIRE_STATUS_ENABLED_INTERNAL => t('Internal expiration'),
      EXPIRE_STATUS_ENABLED_EXTERNAL => t('External expiration'),
    ),
    '#description' => theme('item_list', array('items' => array(
      t('Disabled: Module will not take any effect.'),
      t('Internal expiration: Module will execute cache_clear_all() for expired urls.'),
      t('External expiration: Module will invoke hook_expire_cache() for expired urls.'),
    ))),
    '#default_value' => variable_get('expire_status', EXPIRE_STATUS_DISABLED),
  );

  $modules = array();
  foreach (module_implements('expire_cache') as $module) {
    $modules[] = $module;
  }

  $form['tabs']['status']['common']['external_implementations'] = array(
    '#type' => 'item',
    '#title' => t('External implementations'),
    '#description' => t('List of modules that implements hook_expire_cache().'),
    '#markup' => $modules ? theme('item_list', array('items' => $modules)) : t('There are no implementations.'),
  );

  $form['tabs']['status']['debug'] = array(
    '#type' => 'fieldset',
    '#title' => t('Debug'),
  );

  $form['tabs']['status']['debug']['expire_debug'] = array(
    '#type' => 'radios',
    '#title' => t('Debug level'),
    '#options' => array(
      EXPIRE_DEBUG_DISABLED => t('Disabled'),
      EXPIRE_DEBUG_WATCHDOG => t('Watchdog'),
      EXPIRE_DEBUG_FULL => t('Watchdog + site message'),
    ),
    '#default_value' => variable_get('expire_debug', EXPIRE_DEBUG_DISABLED),
  );

  // NODE SETTINGS.
  $form['tabs']['node'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node expiration'),
    '#group' => 'tabs',
    '#weight' => 1,
  );

  $form['tabs']['node']['actions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node actions'),
  );

  $form['tabs']['node']['actions']['expire_node_actions'] = array(
    '#type' => 'checkboxes',
    '#description' => t('Page cache for node will be expired after selected actions.'),
    '#options' => array(
      EXPIRE_NODE_INSERT => t('Node insert'),
      EXPIRE_NODE_UPDATE => t('Node update'),
      EXPIRE_NODE_DELETE => t('Node delete'),
    ),
    '#default_value' => variable_get('expire_node_actions', array()),
  );

  $form['tabs']['node']['expire'] = array(
    '#type' => 'fieldset',
    '#title' => t('What URLs should be expired when node action is triggered?'),
  );

  $form['tabs']['node']['expire']['expire_node_front_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Front page'),
    '#default_value' => variable_get('expire_node_front_page', EXPIRE_NODE_FRONT_PAGE),
  );

  $form['tabs']['node']['expire']['expire_node_node_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Node page'),
    '#default_value' => variable_get('expire_node_node_page', EXPIRE_NODE_NODE_PAGE),
  );

  if (module_exists('taxonomy')) {
    $form['tabs']['node']['expire']['expire_node_term_pages'] = array(
      '#type' => 'checkbox',
      '#title' => t('Node term pages'),
      '#default_value' => variable_get('expire_node_term_pages', EXPIRE_NODE_TERM_PAGES),
    );
  }

  if (module_exists('node_reference')) {
    $form['tabs']['node']['expire']['expire_node_reference_pages'] = array(
      '#type' => 'checkbox',
      '#title' => t('Node reference pages'),
      '#default_value' => variable_get('expire_node_reference_pages', EXPIRE_NODE_REFERENCE_PAGES),
    );
  }

  $form['tabs']['node']['expire']['expire_node_custom'] = array(
    '#type' => 'checkbox',
    '#title' => t('Custom pages'),
    '#default_value' => variable_get('expire_node_custom', EXPIRE_NODE_CUSTOM),
  );

  $form['tabs']['node']['expire']['expire_node_custom_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter custom urls'),
    '#description' => t('Enter every new url on a single line. Example: !example.', array('!example' => '<strong>node/[node:nid]</strong>')) . '<br/>'
      . t('If you want to use wildcard flush, add |wildcard to the end of the line. Example: !example', array('!example' => '<strong>node/[node:nid]|wildcard</strong>')) . '<br/>'
      . t('You may use tokens here.'),
    '#states' => array(
      'visible' => array(
        ':input[name="expire_node_custom"]' => array('checked' => TRUE),
      ),
    ),
    '#default_value' => variable_get('expire_node_custom_pages'),
  );


  // COMMENT SETTINGS.
  $form['tabs']['comment'] = array(
    '#type' => 'fieldset',
    '#title' => t('Comment expiration'),
    '#group' => 'tabs',
    '#weight' => 2,
  );

  $form['tabs']['comment']['actions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Comment actions'),
  );

  $form['tabs']['comment']['actions']['expire_comment_actions'] = array(
    '#type' => 'checkboxes',
    '#description' => t('Page cache for comment will be expired after selected actions.'),
    '#options' => array(
      EXPIRE_COMMENT_INSERT => t('Comment insert'),
      EXPIRE_COMMENT_UPDATE => t('Comment update'),
      EXPIRE_COMMENT_DELETE => t('Comment delete'),
      EXPIRE_COMMENT_PUBLISH => t('Comment publish'),
      EXPIRE_COMMENT_UNPUBLISH => t('Comment unpublish'),
    ),
    '#default_value' => variable_get('expire_comment_actions', array()),
  );

  $form['tabs']['comment']['expire'] = array(
    '#type' => 'fieldset',
    '#title' => t('What URLs should be expired when comment action is triggered?'),
  );

  $form['tabs']['comment']['expire']['expire_comment_front_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Front page'),
    '#default_value' => variable_get('expire_comment_front_page', EXPIRE_COMMENT_FRONT_PAGE),
  );

  $form['tabs']['comment']['expire']['expire_comment_comment_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Comment page'),
    '#default_value' => variable_get('expire_comment_comment_page', EXPIRE_COMMENT_COMMENT_PAGE),
  );

  $form['tabs']['comment']['expire']['expire_comment_node_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Comment\'s node page'),
    '#default_value' => variable_get('expire_comment_node_page', EXPIRE_COMMENT_NODE_PAGE),
  );

  if (module_exists('taxonomy')) {
    $form['tabs']['comment']['expire']['expire_comment_node_term_pages'] = array(
      '#type' => 'checkbox',
      '#title' => t('Comment\'s node term pages'),
      '#default_value' => variable_get('expire_comment_node_term_pages', EXPIRE_COMMENT_NODE_TERM_PAGES),
    );
  }

  if (module_exists('node_reference')) {
    $form['tabs']['comment']['expire']['expire_comment_node_reference_pages'] = array(
      '#type' => 'checkbox',
      '#title' => t('Comment\'s node reference pages'),
      '#default_value' => variable_get('expire_comment_node_reference_pages', EXPIRE_COMMENT_NODE_REFERENCE_PAGES),
    );
  }

  $form['tabs']['comment']['expire']['expire_comment_custom'] = array(
    '#type' => 'checkbox',
    '#title' => t('Custom pages'),
    '#default_value' => variable_get('expire_comment_custom', EXPIRE_COMMENT_CUSTOM),
  );

  $form['tabs']['comment']['expire']['expire_comment_custom_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter custom urls'),
    '#description' => t('Enter every new url on a single line. Example: !example.', array('!example' => '<strong>comment/[comment:cid]</strong>')) . '<br/>'
      . t('If you want to use wildcard flush, add |wildcard to the end of the line. Example: !example', array('!example' => '<strong>comment/[comment:cid]|wildcard</strong>')) . '<br/>'
      . t('You may use tokens here.'),
    '#states' => array(
      'visible' => array(
        ':input[name="expire_comment_custom"]' => array('checked' => TRUE),
      ),
    ),
    '#default_value' => variable_get('expire_comment_custom_pages'),
  );


  // USER SETTINGS.
  $form['tabs']['user'] = array(
    '#type' => 'fieldset',
    '#title' => t('User expiration'),
    '#group' => 'tabs',
    '#weight' => 3,
  );

  $form['tabs']['user']['actions'] = array(
    '#type' => 'fieldset',
    '#title' => t('User actions'),
  );

  $form['tabs']['user']['actions']['expire_user_actions'] = array(
    '#type' => 'checkboxes',
    '#description' => t('Page cache for user will be expired after selected actions.'),
    '#options' => array(
      EXPIRE_USER_INSERT => t('User insert'),
      EXPIRE_USER_UPDATE => t('User update'),
      EXPIRE_USER_DELETE => t('User delete'),
      EXPIRE_USER_CANCEL => t('User cancel'),
    ),
    '#default_value' => variable_get('expire_user_actions', array()),
  );

  $form['tabs']['user']['expire'] = array(
    '#type' => 'fieldset',
    '#title' => t('What URLs should be expired when user action is triggered?'),
  );

  $form['tabs']['user']['expire']['expire_user_front_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('Front page'),
    '#default_value' => variable_get('expire_user_front_page', EXPIRE_USER_FRONT_PAGE),
  );

  $form['tabs']['user']['expire']['expire_user_user_page'] = array(
    '#type' => 'checkbox',
    '#title' => t('User page'),
    '#default_value' => variable_get('expire_user_user_page', EXPIRE_USER_USER_PAGE),
  );

  $form['tabs']['user']['expire']['expire_user_custom'] = array(
    '#type' => 'checkbox',
    '#title' => t('Custom pages'),
    '#default_value' => variable_get('expire_user_custom', EXPIRE_USER_CUSTOM),
  );

  $form['tabs']['user']['expire']['expire_user_custom_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter custom urls'),
    '#description' => t('Enter every new url on a single line. Example: !example.', array('!example' => '<strong>user/[user:uid]</strong>')) . '<br/>'
      . t('If you want to use wildcard flush, add |wildcard to the end of the line. Example: !example', array('!example' => '<strong>user/[user:uid]|wildcard</strong>')) . '<br/>'
      . t('You may use tokens here.'),
    '#states' => array(
      'visible' => array(
        ':input[name="expire_user_custom"]' => array('checked' => TRUE),
      ),
    ),
    '#default_value' => variable_get('expire_user_custom_pages'),
  );


  // FILE SETTINGS.
  if (module_exists('file')) {
    $form['tabs']['file'] = array(
      '#type' => 'fieldset',
      '#title' => t('File expiration'),
      '#group' => 'tabs',
      '#weight' => 3,
    );

    $form['tabs']['file']['actions'] = array(
      '#type' => 'fieldset',
      '#title' => t('File actions'),
    );

    $form['tabs']['file']['actions']['expire_file_actions'] = array(
      '#type' => 'checkboxes',
      '#description' => t('Page cache for file will be expired after selected actions.'),
      '#options' => array(
        EXPIRE_FILE_UPDATE => t('File update'),
        EXPIRE_FILE_DELETE => t('File delete'),
      ),
      '#default_value' => variable_get('expire_file_actions', array()),
    );

    $form['tabs']['file']['expire'] = array(
      '#type' => 'fieldset',
      '#title' => t('What URLs should be expired when file action is triggered?'),
    );

    $form['tabs']['file']['expire']['expire_file_file'] = array(
      '#type' => 'checkbox',
      '#title' => t('File url'),
      '#default_value' => variable_get('expire_file_file', EXPIRE_FILE_FILE),
    );

    $form['tabs']['file']['expire']['expire_file_front_page'] = array(
      '#type' => 'checkbox',
      '#title' => t('Front page'),
      '#default_value' => variable_get('expire_file_front_page', EXPIRE_FILE_FRONT_PAGE),
    );

    $form['tabs']['file']['expire']['expire_file_custom'] = array(
      '#type' => 'checkbox',
      '#title' => t('Custom pages'),
      '#default_value' => variable_get('expire_file_custom', EXPIRE_FILE_CUSTOM),
    );

    $form['tabs']['file']['expire']['expire_file_custom_pages'] = array(
      '#type' => 'textarea',
      '#title' => t('Enter custom urls'),
      '#description' => t('Enter every new url on a single line. Example: !example.', array('!example' => '<strong>file/[file:fid]</strong>')) . '<br/>'
        . t('If you want to use wildcard flush, add |wildcard to the end of the line. Example: !example', array('!example' => '<strong>file/[file:fid]|wildcard</strong>')) . '<br/>'
        . t('You may use tokens here.'),
      '#states' => array(
        'visible' => array(
          ':input[name="expire_file_custom"]' => array('checked' => TRUE),
        ),
      ),
      '#default_value' => variable_get('expire_file_custom_pages'),
    );
  }


  // VOTINAPI SETTINGS.
  if (module_exists('votingapi')) {
    $form['tabs']['votingapi'] = array(
      '#type' => 'fieldset',
      '#title' => t('Votingapi expiration'),
      '#group' => 'tabs',
      '#weight' => 4,
    );

    $form['tabs']['votingapi']['actions'] = array(
      '#type' => 'fieldset',
      '#title' => t('Votingapi actions'),
    );

    $form['tabs']['votingapi']['actions']['expire_votingapi_actions'] = array(
      '#type' => 'checkboxes',
      '#description' => t('Page cache for votes will be expired after selected actions.'),
      '#options' => array(
        EXPIRE_VOTINGAPI_INSERT => t('Vote insert'),
        EXPIRE_VOTINGAPI_DELETE => t('Vote delete'),
      ),
      '#default_value' => variable_get('expire_votingapi_actions', array()),
    );

    $form['tabs']['votingapi']['expire'] = array(
      '#type' => 'fieldset',
      '#title' => t('What URLs should be expired when votingapi action is triggered?'),
    );

    $form['tabs']['votingapi']['expire']['expire_votingapi_entity_page'] = array(
      '#type' => 'checkbox',
      '#title' => t('Voted entity page'),
      '#default_value' => variable_get('expire_votingapi_entity_page', EXPIRE_VOTINGAPI_ENTITY_PAGE),
    );

    $form['tabs']['votingapi']['expire']['expire_votingapi_entity'] = array(
      '#type' => 'checkbox',
      '#title' => t('Voted entity'),
      '#description' => t('Note that will be executed expiration selected for voted entity type.'),
      '#default_value' => variable_get('expire_votingapi_entity', EXPIRE_VOTINGAPI_ENTITY),
    );

    $form['tabs']['votingapi']['expire']['expire_votingapi_custom'] = array(
      '#type' => 'checkbox',
      '#title' => t('Custom pages'),
      '#default_value' => variable_get('expire_votingapi_custom', EXPIRE_VOTINGAPI_CUSTOM),
    );

    $form['tabs']['votingapi']['expire']['expire_votingapi_custom_pages'] = array(
      '#type' => 'textarea',
      '#title' => t('Enter custom urls'),
      '#description' => t('Enter every new url on a single line. Example: !example.', array('!example' => '<strong>user/[user:uid]</strong>')) . '<br/>'
        . t('If you want to use wildcard flush, add |wildcard to the end of the line. Example: !example', array('!example' => '<strong>user/[user:uid]|wildcard</strong>')) . '<br/>'
        . t('You may use tokens here.'),
      '#states' => array(
        'visible' => array(
          ':input[name="expire_votingapi_custom"]' => array('checked' => TRUE),
        ),
      ),
      '#default_value' => variable_get('expire_votingapi_custom_pages'),
    );
  }


  // Add the token tree UI.
  if (module_exists('token')) {

    $form['tabs']['node']['expire']['expire_node_custom_pages']['#description'] .= ' ' .
      theme('token_tree_link', array('text' => t('View available tokens.'), 'token_types' => array('node')));

    $form['tabs']['comment']['expire']['expire_comment_custom_pages']['#description'] .= ' ' .
      theme('token_tree_link', array('text' => t('View available tokens.'), 'token_types' => array('comment')));

    $form['tabs']['user']['expire']['expire_user_custom_pages']['#description'] .= ' ' .
      theme('token_tree_link', array('text' => t('View available tokens.'), 'token_types' => array('user')));

    if (module_exists('file')) {
      $form['tabs']['file']['expire']['expire_file_custom_pages']['#description'] .= ' ' .
        theme('token_tree_link', array('text' => t('View available tokens.'), 'token_types' => array('file')));
    }

    if (module_exists('votingapi')) {
      $form['tabs']['votingapi']['expire']['expire_votingapi_custom_pages']['#description'] .= ' ' .
        theme('token_tree_link', array('text' => t('View available tokens.')));
    }
  }

  return system_settings_form($form);
}

/**
 * Settings form for a node type.
 */
function expire_node_settings_form(&$form) {

  if (empty($form['#node_type']->type)) {
    return;
  }

  $node_type = $form['#node_type']->type;

  $form['expire'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cache Expiration'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'additional_settings',
  );

  // NODE SETTINGS.
  $form['expire']['expire_node_override_defaults'] = array(
    '#type' => 'checkbox',
    '#title' => t('Override default settings for this node type'),
    '#default_value' => variable_get('expire_node_override_defaults_' . $node_type),
  );

  // Copy here settings from default settings form.
  $settings_form = expire_admin_settings_form();
  $form['expire']['node_actions'] = $settings_form['tabs']['node']['actions'];
  $form['expire']['node_expires'] = $settings_form['tabs']['node']['expire'];

  // Display fieldsets with settings only if they should be overriden.
  $form['expire']['node_actions']['#states'] = array(
    'visible' => array(':input[name="expire_node_override_defaults"]' => array('checked' => TRUE)),
  );
  $form['expire']['node_expires']['#states'] = array(
    'visible' => array(':input[name="expire_node_override_defaults"]' => array('checked' => TRUE)),
  );

  // Change tab title to more suitable here.
  $form['expire']['node_expires']['#title'] = t('What pages should be expired when node action is triggered?');

  // COMMENT SETTINGS.
  $form['expire']['expire_comment_override_defaults'] = array(
    '#type' => 'checkbox',
    '#title' => t('Override default settings for comments to this node type'),
    '#default_value' => variable_get('expire_comment_override_defaults_' . $node_type),
  );

  $form['expire']['comment_actions'] = $settings_form['tabs']['comment']['actions'];
  $form['expire']['comment_expires'] = $settings_form['tabs']['comment']['expire'];

  // Display fieldsets with settings only if they should be overriden.
  $form['expire']['comment_actions']['#states'] = array(
    'visible' => array(':input[name="expire_comment_override_defaults"]' => array('checked' => TRUE)),
  );
  $form['expire']['comment_expires']['#states'] = array(
    'visible' => array(':input[name="expire_comment_override_defaults"]' => array('checked' => TRUE)),
  );

  // Set default settings for this node type.
  $form['expire']['node_actions']['expire_node_actions']['#default_value'] =
    variable_get('expire_node_actions_' . $node_type, array());

  $form['expire']['node_expires']['expire_node_front_page']['#default_value'] =
    variable_get('expire_node_front_page_' . $node_type, EXPIRE_NODE_FRONT_PAGE);

  $form['expire']['node_expires']['expire_node_node_page']['#default_value'] =
    variable_get('expire_node_node_page_' . $node_type, EXPIRE_NODE_NODE_PAGE);

  if (module_exists('taxonomy')) {
    $form['expire']['node_expires']['expire_node_term_pages']['#default_value'] =
      variable_get('expire_node_term_pages_' . $node_type, EXPIRE_NODE_TERM_PAGES);
  }

  if (module_exists('node_reference')) {
    $form['expire']['node_expires']['expire_node_reference_pages']['#default_value'] =
      variable_get('expire_node_reference_pages_' . $node_type, EXPIRE_NODE_REFERENCE_PAGES);
  }

  $form['expire']['node_expires']['expire_node_custom']['#default_value'] =
    variable_get('expire_node_custom_' . $node_type, EXPIRE_NODE_CUSTOM);

  $form['expire']['node_expires']['expire_node_custom_pages']['#default_value'] =
    variable_get('expire_node_custom_pages_' . $node_type);

  // Set default values for comments to this node type.
  $form['expire']['comment_actions']['expire_comment_actions']['#default_value'] =
    variable_get('expire_comment_actions_' . $node_type, array());

  $form['expire']['comment_expires']['expire_comment_front_page']['#default_value'] =
    variable_get('expire_comment_front_page_' . $node_type, EXPIRE_COMMENT_FRONT_PAGE);

  $form['expire']['comment_expires']['expire_comment_comment_page']['#default_value'] =
    variable_get('expire_comment_comment_page_' . $node_type, EXPIRE_COMMENT_COMMENT_PAGE);

  $form['expire']['comment_expires']['expire_comment_node_page']['#default_value'] =
    variable_get('expire_comment_node_page_' . $node_type, EXPIRE_COMMENT_NODE_PAGE);

  if (module_exists('taxonomy')) {
    $form['expire']['comment_expires']['expire_comment_node_term_pages']['#default_value'] =
      variable_get('expire_comment_node_term_pages_' . $node_type, EXPIRE_COMMENT_NODE_TERM_PAGES);
  }

  if (module_exists('node_reference')) {
    $form['expire']['comment_expires']['expire_comment_node_reference_pages']['#default_value'] =
      variable_get('expire_comment_node_reference_pages_' . $node_type, EXPIRE_COMMENT_NODE_REFERENCE_PAGES);
  }

  $form['expire']['comment_expires']['expire_comment_custom']['#default_value'] =
    variable_get('expire_comment_custom_' . $node_type, EXPIRE_COMMENT_CUSTOM);

  $form['expire']['comment_expires']['expire_comment_custom_pages']['#default_value'] =
    variable_get('expire_comment_custom_pages_' . $node_type);

  // Attach js.
  $form['#attached']['js'][] = drupal_get_path('module', 'expire') . '/js/expire.admin.js';
}
