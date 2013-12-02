<?php
/**
 * @file
 * quilted_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function quilted_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer shield'.
  $permissions['administer shield'] = array(
    'name' => 'administer shield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shield',
  );

  return $permissions;
}
