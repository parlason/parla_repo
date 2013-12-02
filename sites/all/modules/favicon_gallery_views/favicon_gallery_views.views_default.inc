<?php
/**
 * @file
 * favicon_gallery_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function favicon_gallery_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'favicon_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Favicon gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Favicon gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_favicon_image' => 'field_favicon_image',
  );
  /* Field: Content: Favicon link */
  $handler->display->display_options['fields']['field_favicon_link']['id'] = 'field_favicon_link';
  $handler->display->display_options['fields']['field_favicon_link']['table'] = 'field_data_field_favicon_link';
  $handler->display->display_options['fields']['field_favicon_link']['field'] = 'field_favicon_link';
  $handler->display->display_options['fields']['field_favicon_link']['label'] = '';
  $handler->display->display_options['fields']['field_favicon_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_favicon_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_favicon_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_favicon_link']['type'] = 'link_url';
  /* Field: Content: Favicon image */
  $handler->display->display_options['fields']['field_favicon_image']['id'] = 'field_favicon_image';
  $handler->display->display_options['fields']['field_favicon_image']['table'] = 'field_data_field_favicon_image';
  $handler->display->display_options['fields']['field_favicon_image']['field'] = 'field_favicon_image';
  $handler->display->display_options['fields']['field_favicon_image']['label'] = '';
  $handler->display->display_options['fields']['field_favicon_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_favicon_image']['alter']['path'] = '[field_favicon_link]';
  $handler->display->display_options['fields']['field_favicon_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_favicon_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_favicon_image']['settings'] = array(
    'image_style' => 'favicon_image',
    'image_link' => '',
  );
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'favicon_element' => 'favicon_element',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Favicon block';
  $translatables['favicon_gallery'] = array(
    t('Master'),
    t('Favicon gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Favicon block'),
  );
  $export['favicon_gallery'] = $view;

  return $export;
}
