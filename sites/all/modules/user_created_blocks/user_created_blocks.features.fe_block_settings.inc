<?php
/**
 * @file
 * user_created_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function user_created_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-other_links_danish'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'da',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'other_links_danish',
    'module' => 'block',
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
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-other_links_english'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'other_links_english',
    'module' => 'block',
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
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-subscription_block_danish'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'da',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'subscription_block_danish',
    'module' => 'block',
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
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-subscription_block_english'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'subscription_block_english',
    'module' => 'block',
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
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-transparent_background_2_sidebar'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'transparent_background_2_sidebar',
    'module' => 'block',
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
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-via_artis_links_danish'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'da',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'via_artis_links_danish',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'post/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'parlathe' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'parlathe',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-via_artis_links_english'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'via_artis_links_english',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'post/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'parlathe' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'parlathe',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-widget_promote_videos_danish'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'da',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'widget_promote_videos_danish',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'video/*',
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
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-widget_promote_videos_english'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'machine_name' => 'widget_promote_videos_english',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'video/*',
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
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
