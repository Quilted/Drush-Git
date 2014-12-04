<?php
/**
 * @file
 * quilted_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function quilted_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access top level admin pages'.
  $permissions['access top level admin pages'] = array(
    'name' => 'access top level admin pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quilted_admin',
  );

  // Exported permission: 'edit custom website settings'.
  $permissions['edit custom website settings'] = array(
    'name' => 'edit custom website settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quilted_admin',
  );

  return $permissions;
}
