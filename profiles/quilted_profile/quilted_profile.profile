<?php
/**
 * Implements hook_profile_tasks().
 */
function quilted_profile_install_tasks(&$install_state) {
  $tasks = array(
    'quilted_profile_final_site_setup' => array(),
    'quilted_profile_setup_contexts' => array(),
  );
  return $tasks;
}

/**
 * Implements hook_entity_info_alter().
 */
function quilted_profile_entity_info_alter(&$entity_info) {
  $entity_info['file']['view modes']['responsive_small'] = array(
    'label' => t('Responsive Small'),
    'custom settings' => TRUE,
  );

  $entity_info['file']['view modes']['responsive_medium'] = array(
    'label' => t('Responsive Medium'),
    'custom settings' => TRUE,
  );

  $entity_info['file']['view modes']['responsive_large'] = array(
    'label' => t('Responsive Large'),
    'custom settings' => TRUE,
  );
}

/**
 * Function runs after site is first installed.
 *
 * Returns nothing in order to not interrupt the installation process.
 * https://api.drupal.org/api/drupal/modules!system!system.api.php/function/hook_install_tasks/7
 */
function quilted_profile_final_site_setup() {
  // Set default input format to Filtered HTML.
  variable_set('filter_default_format', '1');

  // Pathauto default path.
  variable_set('pathauto_node_pattern', '[node:title]');

  // Disable automatic update emails by default.
  variable_del('update_notify_emails');

  // Set jquery_update version to 1.8.
  // Fixes fitvids compatibility problems.
  variable_set('jquery_update_jquery_version', '1.8');
}

/**
 * Set up initial contexts.
 */
function quilted_profile_setup_contexts() {
  // Internal context.
  $context = new stdClass();
  $context->disabled = FALSE;
  $context->api_version = 3;
  $context->name = 'internal';
  $context->description = 'Internal pages (excludes admin pages and homepage)';
  $context->tag = '';
  $context->conditions = array(
    'is_admin_page' => array(
      'values' => array(
        'not admin' => 'not admin',
      ),
    ),
    'path' => array(
      'values' => array(
        '*' => '*',
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  context_save($context);

  // Sitewide context.
  $context = new stdClass();
  $context->disabled = FALSE;
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide (excludes admin pages)';
  $context->tag = '';
  $context->conditions = array(
    'error' => array(
      'values' => array(
        403 => 403,
        404 => 404,
      ),
    ),
    'is_admin_page' => array(
      'values' => array(
        'not admin' => 'not admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-site-name' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-name',
          'region' => 'header',
          'weight' => '-10',
        ),
        'delta_blocks-site-slogan' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-slogan',
          'region' => 'header',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  context_save($context);
}
