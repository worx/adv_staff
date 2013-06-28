<?php
/**
 * @file
 * ca_adv_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_adv_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_adv_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_adv_staff_node_info() {
  $items = array(
    'adv_staff_categories' => array(
      'name' => t('Adv Staff Categories'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'adv_staff_member' => array(
      'name' => t('Adv Staff Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_adv_staff_weight_features_default_settings() {
  $settings = array();

  $settings['adv_staff_categories'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['adv_staff_member'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
