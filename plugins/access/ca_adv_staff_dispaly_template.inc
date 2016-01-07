<?php

/**
 * @file
 * Plugin to provide access control based upon ca_adv_staff admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Adv Staff: Display'),
  'description' => t('Adv Staff Display.'),
  'callback' => 'ca_adv_staff_display_access_check',
  'settings form' => 'ca_adv_staff_display_access_settings',
  'settings form submit' => 'ca_adv_staff_display_access_settings_submit',
  'summary' => 'ca_adv_staff_display_access_summary',
);

/**
 * Settings form for the 'by adv staff list type' access plugin.
 */
function ca_adv_staff_display_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_adv_staff_display'] = array(
    '#type' => 'select',
    '#title' => t('Adv Staff\'s Display'),
    '#options' => array(
      'ca_adv_staff_display_square' => t('Dispaly Square'),
      'ca_adv_staff_display_portrait' => t('Dispaly Portrait'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_adv_staff_display'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_adv_staff_display_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_adv_staff_display_access_check($conf, $context) {
  return $conf['ca_adv_staff_display'] == variable_get('ca_adv_staff_display', 'ca_adv_staff_display_square');
}

/**
 * Provide a summary description based upon the checked adv staff list type.
 */
function ca_adv_staff_display_access_summary($conf, $context) {
  switch ($conf['ca_adv_staff_display']) {
    case 'ca_adv_staff_display_square':
      $template = t('Dispaly Square');
      break;
    case 'ca_adv_staff_display_portrait':
      $template = t('Dispaly Portrait');
      break;
    
  }

  return t('Display template is set to: ' . $template);
}
