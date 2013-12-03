<?php
/**
 * @file
 * quilted_responsive.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function quilted_responsive_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'module.quilted_responsive.default';
  $breakpoint->name = 'Default';
  $breakpoint->breakpoint = '(min-width: 0)';
  $breakpoint->source = 'quilted_responsive';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['module.quilted_responsive.default'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'module.quilted_responsive.mini';
  $breakpoint->name = 'Mini';
  $breakpoint->breakpoint = '(min-width: 340px)';
  $breakpoint->source = 'quilted_responsive';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['module.quilted_responsive.mini'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'module.quilted_responsive.narrow';
  $breakpoint->name = 'Narrow';
  $breakpoint->breakpoint = '(min-width: 740px)';
  $breakpoint->source = 'quilted_responsive';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['module.quilted_responsive.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'module.quilted_responsive.normal';
  $breakpoint->name = 'Normal';
  $breakpoint->breakpoint = '(min-width: 980px)';
  $breakpoint->source = 'quilted_responsive';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['module.quilted_responsive.normal'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'module.quilted_responsive.wide';
  $breakpoint->name = 'Wide';
  $breakpoint->breakpoint = '(min-width: 1220px)';
  $breakpoint->source = 'quilted_responsive';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['module.quilted_responsive.wide'] = $breakpoint;

  return $export;
}
