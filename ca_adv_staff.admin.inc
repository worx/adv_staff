<?php

/** 
 * @file
 * CA_Adv_Staff admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the 
 * actual feature.
 */

/**
 * Defines the menu for overriding adv staff feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_adv_staff_settings_form() {
  $form = array();

  $form['ca_adv_staff_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => variable_get('ca_adv_staff_panel_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_adv_staff_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_adv_staff_menu_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_adv_staff_cat_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Categories per page'),
    '#default_value' => variable_get('ca_adv_staff_cat_list_count', 12),
    '#required' => TRUE,
    '#description' => t('How many categories would you like displayed per page? Suggested in groups for 3.'),
  );
  $form['ca_adv_staff_staff_grid_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Staffers per grid page'),
    '#default_value' => variable_get('ca_adv_staff_staff_grid_count', 12),
    '#required' => TRUE,
    '#description' => t('How many staffers would you like displayed per grid page? Suggested in groups for 3. (Template one & Template two)'),
  );
  $form['ca_adv_staff_staff_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Staffers per list page'),
    '#default_value' => variable_get('ca_adv_staff_staff_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many staffers would you like displayed per list page? (Template three & Template four)'),
  );
  $form['ca_adv_staff_c_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s Category list template'),
    '#options' => array(
      'ca_adv_staff_c_list_template_one' => t('Template one'),
      'ca_adv_staff_c_list_template_two' => t('Template two'),
      'ca_adv_staff_c_list_template_three' => t('Template three'),
      'ca_adv_staff_c_list_template_four' => t('Template four'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_adv_staff_c_list_template', 'ca_adv_staff_c_list_template_one'),
  );
  $form['ca_adv_staff_m_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s Member list template'),
    '#options' => array(
      'ca_adv_staff_m_list_template_one' => t('Template one'),
      'ca_adv_staff_m_list_template_two' => t('Template two'),
      'ca_adv_staff_m_list_template_three' => t('Template three'),
      'ca_adv_staff_m_list_template_four' => t('Template four'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_adv_staff_m_list_template', 'ca_adv_staff_m_list_template_one'),
  );
  $form['ca_adv_staff_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Staff\'s Node template'),
    '#options' => array(
      'ca_adv_staff_node_template_one' => t('Template one'),
      'ca_adv_staff_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_adv_staff_node_template', 'ca_adv_staff_node_template_one'),
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // We are adding the system_settings_form_submit manually instead of
  // returning system_settings_form($form) in our return statement.
  // This allows for us to add our submit handler after the
  // system_settings_form_submit. hook_form_alter could not handle this for us.
  $form['#submit'][] = 'system_settings_form_submit';
  $form['#submit'][] = 'ca_adv_staff_settings_form_submit';

  return $form;
}

/**
 * Handles form submission data from 'ca_adv_staff_settings_form'.
 *
 * Determines if we should rebuild the menu router based on form data.
 */
function ca_adv_staff_settings_form_submit($form, &$form_state) {
  $old_title = $form['ca_adv_staff_menu_title']['#default_value'];
  $new_title = $form_state['values']['ca_adv_staff_menu_title'];
  if ($old_title != $new_title) {
    menu_rebuild();
  }
}
