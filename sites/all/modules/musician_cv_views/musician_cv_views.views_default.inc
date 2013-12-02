<?php
/**
 * @file
 * musician_cv_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function musician_cv_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'musician_cv';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Musician CV';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Musician CV';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_cv_photo_thumbnail' => 'field_cv_photo_thumbnail',
    'field_cv_photo_first' => 0,
    'field_cv_photo_second' => 0,
    'title' => 0,
    'field_cv_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_cv_photo_first' => 0,
    'field_cv_photo_second' => 0,
    'title' => 0,
    'field_cv_text' => 0,
    'field_cv_photo_thumbnail' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_cv_photo_first' => 'field_cv_photo_first',
    'field_cv_photo_second' => 'field_cv_photo_second',
  );
  /* Field: Content: CV photo first */
  $handler->display->display_options['fields']['field_cv_photo_first']['id'] = 'field_cv_photo_first';
  $handler->display->display_options['fields']['field_cv_photo_first']['table'] = 'field_data_field_cv_photo_first';
  $handler->display->display_options['fields']['field_cv_photo_first']['field'] = 'field_cv_photo_first';
  $handler->display->display_options['fields']['field_cv_photo_first']['label'] = '';
  $handler->display->display_options['fields']['field_cv_photo_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cv_photo_first']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cv_photo_first']['type'] = 'lightbox2__lightbox__cv_photo__original';
  $handler->display->display_options['fields']['field_cv_photo_first']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: CV photo second */
  $handler->display->display_options['fields']['field_cv_photo_second']['id'] = 'field_cv_photo_second';
  $handler->display->display_options['fields']['field_cv_photo_second']['table'] = 'field_data_field_cv_photo_second';
  $handler->display->display_options['fields']['field_cv_photo_second']['field'] = 'field_cv_photo_second';
  $handler->display->display_options['fields']['field_cv_photo_second']['label'] = '';
  $handler->display->display_options['fields']['field_cv_photo_second']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cv_photo_second']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cv_photo_second']['type'] = 'lightbox2__lightbox__cv_photo__original';
  $handler->display->display_options['fields']['field_cv_photo_second']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="cv-title-transparent">&nbsp;</span>
<span class="cv-title">[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: CV text */
  $handler->display->display_options['fields']['field_cv_text']['id'] = 'field_cv_text';
  $handler->display->display_options['fields']['field_cv_text']['table'] = 'field_data_field_cv_text';
  $handler->display->display_options['fields']['field_cv_text']['field'] = 'field_cv_text';
  $handler->display->display_options['fields']['field_cv_text']['label'] = '';
  $handler->display->display_options['fields']['field_cv_text']['element_label_colon'] = FALSE;
  /* Field: Content: CV photo thumbnail */
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['id'] = 'field_cv_photo_thumbnail';
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['table'] = 'field_data_field_cv_photo_thumbnail';
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['field'] = 'field_cv_photo_thumbnail';
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cv_photo_thumbnail']['settings'] = array(
    'image_style' => 'cv_photo_thumbnail',
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
    'musician_cv' => 'musician_cv',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'musician_cv' => 'musician_cv',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['block_description'] = 'CV musician block';

  /* Display: Musician CV block, Danish */
  $handler = $view->new_display('block', 'Musician CV block, Danish', 'block_1');
  $translatables['musician_cv'] = array(
    t('Master'),
    t('Musician CV'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span class="cv-title-transparent">&nbsp;</span>
<span class="cv-title">[title]</span>'),
    t('Block'),
    t('CV musician block'),
    t('Musician CV block, Danish'),
  );
  $export['musician_cv'] = $view;

  return $export;
}
