<?php
/**
 * @file
 * gallery_i_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gallery_i_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery_i';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery I';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery I';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Photo horizontal */
  $handler->display->display_options['fields']['field_photo_horizontal']['id'] = 'field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['table'] = 'field_data_field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['field'] = 'field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['label'] = '';
  $handler->display->display_options['fields']['field_photo_horizontal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_horizontal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_horizontal']['type'] = 'lightbox2__lightbox__thumbnail_horizontal__original';
  $handler->display->display_options['fields']['field_photo_horizontal']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo_horizontal']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_photo_horizontal']['delta_offset'] = '0';
  /* Field: Content: Photo vertical */
  $handler->display->display_options['fields']['field_photo_vertical']['id'] = 'field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['table'] = 'field_data_field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['field'] = 'field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['label'] = '';
  $handler->display->display_options['fields']['field_photo_vertical']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_vertical']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_vertical']['type'] = 'lightbox2__lightbox__thumbnail_vertical__original';
  $handler->display->display_options['fields']['field_photo_vertical']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo_vertical']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_photo_vertical']['delta_offset'] = '0';
  /* Sort criterion: Content: Gallery order (field_gallery_order) */
  $handler->display->display_options['sorts']['field_gallery_order_value']['id'] = 'field_gallery_order_value';
  $handler->display->display_options['sorts']['field_gallery_order_value']['table'] = 'field_data_field_gallery_order';
  $handler->display->display_options['sorts']['field_gallery_order_value']['field'] = 'field_gallery_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery-i';

  /* Display: Block, English */
  $handler = $view->new_display('block', 'Block, English', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  /* Filter criterion: Content: Tag (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_tag_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Thumbnail gallery block, English';
  $translatables['gallery_i'] = array(
    t('Master'),
    t('Gallery I'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block, English'),
    t('Thumbnail gallery block, English'),
  );
  $export['gallery_i'] = $view;

  return $export;
}
