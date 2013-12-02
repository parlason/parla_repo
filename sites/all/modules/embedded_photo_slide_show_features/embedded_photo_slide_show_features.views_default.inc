<?php
/**
 * @file
 * embedded_photo_slide_show_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function embedded_photo_slide_show_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'embedded_photo_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Embedded photo slide show ert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Embedded photo slide show, English';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_embed_photo' => 0,
    'field_photo_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_embed_photo' => 0,
    'field_photo_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '1500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '18000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Embed photo */
  $handler->display->display_options['fields']['field_embed_photo']['id'] = 'field_embed_photo';
  $handler->display->display_options['fields']['field_embed_photo']['table'] = 'field_data_field_embed_photo';
  $handler->display->display_options['fields']['field_embed_photo']['field'] = 'field_embed_photo';
  $handler->display->display_options['fields']['field_embed_photo']['label'] = '';
  $handler->display->display_options['fields']['field_embed_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_embed_photo']['alter']['text'] = '<div class="embedded-photo-text-background">&nbsp;</div>
<div class="embedded-photo">[field_embed_photo]</div>';
  $handler->display->display_options['fields']['field_embed_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embed_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_embed_photo']['settings'] = array(
    'image_style' => 'text_embedded_photo',
    'image_link' => '',
  );
  /* Field: Content: Photo text */
  $handler->display->display_options['fields']['field_photo_text']['id'] = 'field_photo_text';
  $handler->display->display_options['fields']['field_photo_text']['table'] = 'field_data_field_photo_text';
  $handler->display->display_options['fields']['field_photo_text']['field'] = 'field_photo_text';
  $handler->display->display_options['fields']['field_photo_text']['label'] = '';
  $handler->display->display_options['fields']['field_photo_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo_text']['alter']['text'] = '<span class="embedded-photo-text">[field_photo_text]</span>';
  $handler->display->display_options['fields']['field_photo_text']['element_label_colon'] = FALSE;
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
    'text_embedded_photo' => 'text_embedded_photo',
  );

  /* Display: English */
  $handler = $view->new_display('block', 'English', 'block');
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
    'text_embedded_photo' => 'text_embedded_photo',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['block_description'] = 'Embedded photo block, English';

  /* Display: Danish */
  $handler = $view->new_display('block', 'Danish', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Embedded photo slide show, Danish';
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
    'text_embedded_photo' => 'text_embedded_photo',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );
  $handler->display->display_options['block_description'] = 'Embedded photo block, Danish';
  $translatables['embedded_photo_slide_show'] = array(
    t('Master'),
    t('Embedded photo slide show, English'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="embedded-photo-text-background">&nbsp;</div>
<div class="embedded-photo">[field_embed_photo]</div>'),
    t('<span class="embedded-photo-text">[field_photo_text]</span>'),
    t('English'),
    t('Embedded photo block, English'),
    t('Danish'),
    t('Embedded photo slide show, Danish'),
    t('Embedded photo block, Danish'),
  );
  $export['embedded_photo_slide_show'] = $view;

  return $export;
}
