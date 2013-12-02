<?php
/**
 * @file
 * quilted_responsive.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function quilted_responsive_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'responsive_large';
  $ds_view_mode->label = 'Responsive Large';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['responsive_large'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'responsive_medium';
  $ds_view_mode->label = 'Responsive Medium';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['responsive_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'responsive_small';
  $ds_view_mode->label = 'Responsive Small';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['responsive_small'] = $ds_view_mode;

  return $export;
}
