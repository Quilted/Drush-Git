<?php
/**
 * Implementation of hook_profile_tasks().
 */
function quilted_profile_tasks(&$task, $url) {
 
  // Set default input format to Filtered HTML
  variable_set('filter_default_format', '1');
 
  // Pathauto default path
  variable_set('pathauto_node_pattern', '[title-raw]');
 
}
?>