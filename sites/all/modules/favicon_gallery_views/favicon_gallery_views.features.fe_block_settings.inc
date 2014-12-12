<?php
/**
 * @file
 * favicon_gallery_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function favicon_gallery_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-favicon_gallery-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'favicon_gallery-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'parlathe' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'parlathe',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
