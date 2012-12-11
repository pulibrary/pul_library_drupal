<?php
/**
 * @file
 * Admin file.
 */

/**
 * Settings form.
 */
function feedback_simple_system_settings($form) {
  $variables = _feedback_simple_variable_get();

  $form['feedback_simple'] = array(
    '#type' => 'container',
    '#title' => t('Feedback Simple'),
    '#description' => t('Configure the Feedback Simple tab.'),
  );
  $form['feedback_simple']['enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => $variables['enabled'],
  );
  $form['feedback_simple']['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link'),
    '#description' => t('Drupal path to visit when clicked.'),
    '#default_value' => $variables['link'],
  );
  $form['feedback_simple']['target'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#description' => t('Location to open the link.'),
    '#options' => array(
      '_self' => t('Current window'),
      '_blank' => t('New window'),
    ),
    '#default_value' => $variables['target'],
  );
  $form['feedback_simple']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('Class'),
    '#description' => t('CSS classes to apply, separated by spaces.'),
    '#default_value' => $variables['class'],
  );
  $form['feedback_simple']['align'] = array(
    '#type' => 'select',
    '#title' => t('Alignment'),
    '#description' => t('Side of the window to attach to.'),
    '#options' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    '#default_value' => $variables['align'],
  );
  $form['feedback_simple']['top'] = array(
    '#type' => 'select',
    '#title' => t('Top'),
    '#description' => t('Distance from the top.'),
    '#default_value' => $variables['top'],
  );
  for ($i = 0; $i <= 100; $i += 5) {
    $top["$i%"] = "$i%";
  }
  $form['feedback_simple']['top']['#options'] = $top;
  $form['feedback_simple']['image'] = array(
    '#type' => 'textfield',
    '#title' => t('Image'),
    '#description' => t('Path to the image.'),
    '#default_value' => $variables['image'],
  );
  $form['feedback_simple']['alt'] = array(
    '#type' => 'textfield',
    '#title' => t('Image alt'),
    '#description' => t('Alternative text.'),
    '#default_value' => $variables['alt'],
  );
  $form['feedback_simple']['form_denyallow_markup'] = array(
    '#markup' => t('<h3>Visibility rules</h3><p>By default, the Feedback tab
      shows on every page except on the <em>link</em> set above. Paths can explicity be
      set to hide or show below, by listing them with wild cards, one per line.</p>'),
  );
  $form['feedback_simple']['deny'] = array(
    "#type" => 'textarea',
    '#title' => t('Deny'),
    '#description' => t('Hide on these paths.'),
    '#default_value' => $variables['deny'],
  );
  $form['feedback_simple']['allow'] = array(
    "#type" => 'textarea',
    '#title' => t('Allow'),
    '#description' => t('Show on these paths.'),
    '#default_value' => $variables['allow'],
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('feedback_simple_system_settings_save'),
  );
  $form['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Restore Defaults'),
    '#submit' => array('feedback_simple_system_settings_reset'),
  );

  return $form;
}

/**
 * Settings save submit.
 */
function feedback_simple_system_settings_save($form, &$form_state) {
  foreach ($form_state['values'] as $key => $value) {
    if (!preg_match('/^form_|^op|^submit|^reset/', $key)) {
      $variables[$key] = $value;
    }
    if ($key == 'class') {
      $variables[$key] = explode(' ', $value);
    }
  }

  variable_set('feedback_simple', $variables);
  drupal_theme_rebuild();
}

/**
 * Settings reset submit.
 */
function feedback_simple_system_settings_reset($form, &$form_state) {
  module_load_install('feedback_simple');
  feedback_simple_install();
  drupal_theme_rebuild();
}
