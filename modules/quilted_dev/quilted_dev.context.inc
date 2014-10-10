<?php
/**
 * @file
 * quilted_dev.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function quilted_dev_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'debug';
  $context->description = 'Debug (excludes admin pages and homepage)';
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
        'devel-execute_php' => array(
          'module' => 'devel',
          'delta' => 'execute_php',
          'region' => 'content',
          'weight' => '30',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Debug (excludes admin pages and homepage)');
  $export['debug'] = $context;

  return $export;
}
