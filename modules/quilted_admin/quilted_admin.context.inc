<?php
/**
 * @file
 * quilted_admin.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function quilted_admin_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'people';
  $context->description = 'Replaces /admin/people';
  $context->tag = 'admin';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/people' => 'admin/people',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-people-block' => array(
          'module' => 'views',
          'delta' => '-exp-people-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-people-block' => array(
          'module' => 'views',
          'delta' => 'people-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Replaces /admin/people');
  t('admin');
  $export['people'] = $context;

  return $export;
}
