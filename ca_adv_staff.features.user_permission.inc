<?php
/**
 * @file
 * ca_adv_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_adv_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: create adv_staff_categories content.
  $permissions['create adv_staff_categories content'] = array(
    'name' => 'create adv_staff_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create adv_staff_member content.
  $permissions['create adv_staff_member content'] = array(
    'name' => 'create adv_staff_member content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any adv_staff_categories content.
  $permissions['delete any adv_staff_categories content'] = array(
    'name' => 'delete any adv_staff_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any adv_staff_member content.
  $permissions['delete any adv_staff_member content'] = array(
    'name' => 'delete any adv_staff_member content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own adv_staff_categories content.
  $permissions['delete own adv_staff_categories content'] = array(
    'name' => 'delete own adv_staff_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own adv_staff_member content.
  $permissions['delete own adv_staff_member content'] = array(
    'name' => 'delete own adv_staff_member content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any adv_staff_categories content.
  $permissions['edit any adv_staff_categories content'] = array(
    'name' => 'edit any adv_staff_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any adv_staff_member content.
  $permissions['edit any adv_staff_member content'] = array(
    'name' => 'edit any adv_staff_member content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own adv_staff_categories content.
  $permissions['edit own adv_staff_categories content'] = array(
    'name' => 'edit own adv_staff_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own adv_staff_member content.
  $permissions['edit own adv_staff_member content'] = array(
    'name' => 'edit own adv_staff_member content',
    'roles' => array(
      'administrator' => 'administrator',
      'adv staff' => 'adv staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
