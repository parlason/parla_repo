<?php
/**
 * @file
 * concert_theme_slideshow_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function concert_theme_slideshow_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'concert_theme_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Concert theme slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Concert theme slide show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
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
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_theme_link' => 0,
    'field_theme_image_thumbnail' => 0,
    'field_theme_image' => 0,
    'field_presentation_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_theme_image_thumbnail' => 'field_theme_image_thumbnail',
    'title' => 0,
    'field_theme_link' => 0,
    'field_theme_image' => 0,
    'field_presentation_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '1800';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Theme link */
  $handler->display->display_options['fields']['field_theme_link']['id'] = 'field_theme_link';
  $handler->display->display_options['fields']['field_theme_link']['table'] = 'field_data_field_theme_link';
  $handler->display->display_options['fields']['field_theme_link']['field'] = 'field_theme_link';
  $handler->display->display_options['fields']['field_theme_link']['label'] = '';
  $handler->display->display_options['fields']['field_theme_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_theme_link']['type'] = 'link_url';
  /* Field: Content: Theme image thumbnail */
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['id'] = 'field_theme_image_thumbnail';
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['table'] = 'field_data_field_theme_image_thumbnail';
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['field'] = 'field_theme_image_thumbnail';
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_image_thumbnail']['settings'] = array(
    'image_style' => 'concert_theme_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Theme image */
  $handler->display->display_options['fields']['field_theme_image']['id'] = 'field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['table'] = 'field_data_field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['field'] = 'field_theme_image';
  $handler->display->display_options['fields']['field_theme_image']['label'] = '';
  $handler->display->display_options['fields']['field_theme_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_theme_image']['alter']['text'] = '<span class="theme-transparent-background-title"></span>
<span class="theme-transparent-background-text"></span>
<span class="concert-theme-image">
<span class="theme-link-text">[title] <br /></span>
[field_theme_image] 
</span>
';
  $handler->display->display_options['fields']['field_theme_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_theme_image']['alter']['path'] = '[field_theme_link]';
  $handler->display->display_options['fields']['field_theme_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_image']['settings'] = array(
    'image_style' => 'concert_theme_image',
    'image_link' => '',
  );
  /* Field: Content: Presentation text */
  $handler->display->display_options['fields']['field_presentation_text']['id'] = 'field_presentation_text';
  $handler->display->display_options['fields']['field_presentation_text']['table'] = 'field_data_field_presentation_text';
  $handler->display->display_options['fields']['field_presentation_text']['field'] = 'field_presentation_text';
  $handler->display->display_options['fields']['field_presentation_text']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_text']['alter']['text'] = ' <div class="theme-presentation-text">[field_presentation_text]</div>';
  $handler->display->display_options['fields']['field_presentation_text']['element_label_colon'] = FALSE;
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
    'concert_theme_element' => 'concert_theme_element',
  );

  /* Display: Concert theme slideshow, Danish */
  $handler = $view->new_display('block', 'Concert theme slideshow, Danish', 'block');
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
    'concert_theme_element' => 'concert_theme_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );

  /* Display: Concert theme slideshow, English */
  $handler = $view->new_display('block', 'Concert theme slideshow, English', 'block_1');
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
    'concert_theme_element' => 'concert_theme_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );

  /* Display: Concert theme slideshow, Spanish */
  $handler = $view->new_display('block', 'Concert theme slideshow, Spanish', 'block_2');
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
    'concert_theme_element' => 'concert_theme_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );
  $translatables['concert_theme_slide_show'] = array(
    t('Master'),
    t('Concert theme slide show'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<span class="theme-transparent-background-title"></span>
<span class="theme-transparent-background-text"></span>
<span class="concert-theme-image">
<span class="theme-link-text">[title] <br /></span>
[field_theme_image] 
</span>
'),
    t(' <div class="theme-presentation-text">[field_presentation_text]</div>'),
    t('Concert theme slideshow, Danish'),
    t('Concert theme slideshow, English'),
    t('Concert theme slideshow, Spanish'),
  );
  $export['concert_theme_slide_show'] = $view;

  return $export;
}
