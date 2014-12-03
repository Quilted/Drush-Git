<?php
/**
 * @file
 * quilted_prod.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_destinations().
 */
function quilted_prod_exportables_backup_migrate_destinations() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'database_destination';
  $item->name = 'Database Destination';
  $item->subtype = 'file';
  $item->location = 'private://backup_migrate/database';
  $item->settings = array(
    'chmod' => '',
    'chgrp' => '',
  );
  $export['database_destination'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'public_files_destination';
  $item->name = 'Public Files Destination';
  $item->subtype = 'file';
  $item->location = 'private://backup_migrate/public_files';
  $item->settings = array(
    'chmod' => '',
    'chgrp' => '',
  );
  $export['public_files_destination'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function quilted_prod_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'production_settings';
  $item->name = 'Production Settings';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => '',
    'notify_failure_enable' => 0,
    'notify_failure_email' => '',
    'utils_site_offline' => 1,
    'utils_site_offline_message' => 'The site is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_libraries' => 'cache_libraries',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_token' => 'cache_token',
          'cache_update' => 'cache_update',
          'cache_variable' => 'cache_variable',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
        ),
        'utils_lock_tables' => 1,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
fontyourface
styles
css
js
ctools
less
xmlsitemap',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
sites/default/settings.php
../tmp_files',
      ),
    ),
  );
  $export['production_settings'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function quilted_prod_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'database_schedule';
  $item->name = 'Database Schedule';
  $item->source_id = 'db';
  $item->destination_id = 'database_destination';
  $item->copy_destination_id = '';
  $item->profile_id = 'production_settings';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['database_schedule'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'public_files_schedule';
  $item->name = 'Public Files Schedule';
  $item->source_id = 'files';
  $item->destination_id = 'public_files_destination';
  $item->copy_destination_id = '';
  $item->profile_id = 'production_settings';
  $item->keep = 8;
  $item->period = 604800;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['public_files_schedule'] = $item;

  return $export;
}
