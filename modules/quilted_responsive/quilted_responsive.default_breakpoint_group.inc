<?php
/**
 * @file
 * quilted_responsive.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function quilted_responsive_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'module.quilted_responsive.default';
  $breakpoints[] = 'module.quilted_responsive.mini';
  $breakpoints[] = 'module.quilted_responsive.narrow';
  $breakpoints[] = 'module.quilted_responsive.normal';
  $breakpoints[] = 'module.quilted_responsive.wide';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'responsive_large';
  $breakpoint_group->name = 'Responsive Large';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['responsive_large'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'module.quilted_responsive.default';
  $breakpoints[] = 'module.quilted_responsive.mini';
  $breakpoints[] = 'module.quilted_responsive.narrow';
  $breakpoints[] = 'module.quilted_responsive.normal';
  $breakpoints[] = 'module.quilted_responsive.wide';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'responsive_medium';
  $breakpoint_group->name = 'Responsive Medium';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['responsive_medium'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'module.quilted_responsive.default';
  $breakpoints[] = 'module.quilted_responsive.mini';
  $breakpoints[] = 'module.quilted_responsive.narrow';
  $breakpoints[] = 'module.quilted_responsive.normal';
  $breakpoints[] = 'module.quilted_responsive.wide';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'responsive_small';
  $breakpoint_group->name = 'Responsive Small';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['responsive_small'] = $breakpoint_group;

  return $export;
}
