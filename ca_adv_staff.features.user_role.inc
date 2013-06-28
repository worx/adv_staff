<?php
/**
 * @file
 * ca_adv_staff.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_adv_staff_user_default_roles() {
  $roles = array();

  // Exported role: adv staff.
  $roles['adv staff'] = array(
    'name' => 'adv staff',
    'weight' => 6,
    'machine_name' => 'adv_staff',
  );

  return $roles;
}
