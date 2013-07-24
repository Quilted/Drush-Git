<?php
/**
 * Implementation of hook_profile_tasks().
 */
function quilted_profile_install_tasks(&$install_state) {
  $tasks = array(
    'quilted_profile_final_site_setup' => array(),
  );
  return $tasks;
}

/**
 * Function runs after site is first installed
 *
 * Returns nothing in order to not interrupt the installation process
 * https://api.drupal.org/api/drupal/modules!system!system.api.php/function/hook_install_tasks/7
 */
function quilted_profile_final_site_setup() {
  // Set default input format to Filtered HTML
  variable_set('filter_default_format', '1');

  // Pathauto default path
  variable_set('pathauto_node_pattern', '[node:title]');
}
?>