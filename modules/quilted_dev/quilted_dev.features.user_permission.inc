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

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'administer maillog'.
  $permissions['administer maillog'] = array(
    'name' => 'administer maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'delete maillog'.
  $permissions['delete maillog'] = array(
    'name' => 'delete maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'view maillog'.
  $permissions['view maillog'] = array(
    'name' => 'view maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: 'view style guides'.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'styleguide',
  );

  return $permissions;
}
