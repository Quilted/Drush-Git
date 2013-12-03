<?php
/**
 * @file
 * quilted_responsive.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function quilted_responsive_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'responsive_large';
  $picture_mapping->breakpoint_group = 'responsive_large';
  $picture_mapping->mapping = array(
    'module.quilted_responsive.default' => array(
      '1x' => 'responsive_default',
      '2x' => 'responsive_default_2x',
    ),
    'module.quilted_responsive.mini' => array(
      '1x' => 'responsive_mini',
      '2x' => 'responsive_mini_2x',
    ),
    'module.quilted_responsive.narrow' => array(
      '1x' => 'responsive_large__narrow',
      '2x' => 'responsive_large__narrow_2x',
    ),
    'module.quilted_responsive.normal' => array(
      '1x' => 'responsive_large__normal',
      '2x' => 'responsive_large__normal_2x',
    ),
    'module.quilted_responsive.wide' => array(
      '1x' => 'responsive_large__wide',
      '2x' => 'responsive_large__wide_2x',
    ),
  );
  $export['responsive_large'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'responsive_medium';
  $picture_mapping->breakpoint_group = 'responsive_medium';
  $picture_mapping->mapping = array(
    'module.quilted_responsive.default' => array(
      '1x' => 'responsive_default',
      '2x' => 'responsive_default_2x',
    ),
    'module.quilted_responsive.mini' => array(
      '1x' => 'responsive_mini',
      '2x' => 'responsive_mini_2x',
    ),
    'module.quilted_responsive.narrow' => array(
      '1x' => 'responsive_medium__narrow',
      '2x' => 'responsive_medium__narrow_2x',
    ),
    'module.quilted_responsive.normal' => array(
      '1x' => 'responsive_medium__normal',
      '2x' => 'responsive_medium__normal_2x',
    ),
    'module.quilted_responsive.wide' => array(
      '1x' => 'responsive_medium__wide',
      '2x' => 'responsive_medium__wide_2x',
    ),
  );
  $export['responsive_medium'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'responsive_small';
  $picture_mapping->breakpoint_group = 'responsive_small';
  $picture_mapping->mapping = array(
    'module.quilted_responsive.default' => array(
      '1x' => 'responsive_default',
      '2x' => 'responsive_default_2x',
    ),
    'module.quilted_responsive.mini' => array(
      '1x' => 'responsive_mini',
      '2x' => 'responsive_mini_2x',
    ),
    'module.quilted_responsive.narrow' => array(
      '1x' => 'responsive_small__narrow',
      '2x' => 'responsive_small__narrow_2x',
    ),
    'module.quilted_responsive.normal' => array(
      '1x' => 'responsive_small__normal',
      '2x' => 'responsive_small__normal_2x',
    ),
    'module.quilted_responsive.wide' => array(
      '1x' => 'responsive_small__wide',
      '2x' => 'responsive_small__wide_2x',
    ),
  );
  $export['responsive_small'] = $picture_mapping;

  return $export;
}
