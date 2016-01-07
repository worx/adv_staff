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
  'title' => t('Staff: Member list type'),
  'description' => t('Control access by adv staff list type.'),
  'callback' => 'ca_adv_staff_m_list_template_access_check',
  'settings form' => 'ca_adv_staff_m_list_template_access_settings',
  'settings form submit' => 'ca_adv_staff_m_list_template_access_settings_submit',
  'summary' => 'ca_adv_staff_m_list_template_access_summary',
);

/**
 * Settings form for the 'by adv staff list type' access plugin.
 */
function ca_adv_staff_m_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_adv_staff_m_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Adv Staff\'s Member list template'),
    '#options' => array(
      'ca_adv_staff_m_list_template_one' => t('Grid'),
      'ca_adv_staff_m_list_template_one_flex' => t('Grid Flex'),
      'ca_adv_staff_m_list_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_adv_staff_m_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_adv_staff_m_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_adv_staff_m_list_template_access_check($conf, $context) {
  return $conf['ca_adv_staff_m_list_template'] == variable_get('ca_adv_staff_m_list_template', 'ca_adv_staff_m_list_template_one');
}

/**
 * Provide a summary description based upon the checked adv staff list type.
 */
function ca_adv_staff_m_list_template_access_summary($conf, $context) {
  switch ($conf['ca_adv_staff_m_list_template']) {
    case 'ca_adv_staff_m_list_template_one':
      $template = t('Template one');
      break;
    case 'ca_adv_staff_m_list_template_one_flex':
      $template = t('Template one Flex');
      break;
    case 'ca_adv_staff_m_list_template_two':
      $template = t('Template two');
      break;
    
  }

  return t('Display template is set to: ' . $template);
}
