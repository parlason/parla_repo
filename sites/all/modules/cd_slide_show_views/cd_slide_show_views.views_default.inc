<?php
/**
 * @file
 * cd_slide_show_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cd_slide_show_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cd_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CD slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CD slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
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
    'field_front_cover_thumbnail' => 'field_front_cover_thumbnail',
    'title' => 0,
    'field_front' => 0,
    'field_back_cover' => 0,
    'field_cd_title' => 0,
    'field_cd_text' => 0,
    'field_cd_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_front' => 0,
    'field_back_cover' => 0,
    'field_front_cover_thumbnail' => 0,
    'field_cd_title' => 0,
    'field_cd_text' => 0,
    'field_cd_link' => 0,
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
    'field_front' => 'field_front',
    'field_back_cover' => 'field_back_cover',
  );
  /* Field: Content: Front cover */
  $handler->display->display_options['fields']['field_front']['id'] = 'field_front';
  $handler->display->display_options['fields']['field_front']['table'] = 'field_data_field_front';
  $handler->display->display_options['fields']['field_front']['field'] = 'field_front';
  $handler->display->display_options['fields']['field_front']['label'] = '';
  $handler->display->display_options['fields']['field_front']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front']['settings'] = array(
    'image_style' => 'cd_cover',
    'image_link' => '',
  );
  /* Field: Content: Back cover */
  $handler->display->display_options['fields']['field_back_cover']['id'] = 'field_back_cover';
  $handler->display->display_options['fields']['field_back_cover']['table'] = 'field_data_field_back_cover';
  $handler->display->display_options['fields']['field_back_cover']['field'] = 'field_back_cover';
  $handler->display->display_options['fields']['field_back_cover']['label'] = '';
  $handler->display->display_options['fields']['field_back_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_back_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_back_cover']['settings'] = array(
    'image_style' => 'cd_cover',
    'image_link' => '',
  );
  /* Field: Content: Front cover thumbnail */
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['id'] = 'field_front_cover_thumbnail';
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['table'] = 'field_data_field_front_cover_thumbnail';
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['field'] = 'field_front_cover_thumbnail';
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_cover_thumbnail']['settings'] = array(
    'image_style' => 'cd_cover_thumbmnail',
    'image_link' => '',
  );
  /* Field: Content: CD title */
  $handler->display->display_options['fields']['field_cd_title']['id'] = 'field_cd_title';
  $handler->display->display_options['fields']['field_cd_title']['table'] = 'field_data_field_cd_title';
  $handler->display->display_options['fields']['field_cd_title']['field'] = 'field_cd_title';
  $handler->display->display_options['fields']['field_cd_title']['label'] = '';
  $handler->display->display_options['fields']['field_cd_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cd_title']['alter']['text'] = '<div class="cd-title-background-transparent"></div>
<div class="cd-title">[field_cd_title]</div>';
  $handler->display->display_options['fields']['field_cd_title']['element_label_colon'] = FALSE;
  /* Field: Content: CD text */
  $handler->display->display_options['fields']['field_cd_text']['id'] = 'field_cd_text';
  $handler->display->display_options['fields']['field_cd_text']['table'] = 'field_data_field_cd_text';
  $handler->display->display_options['fields']['field_cd_text']['field'] = 'field_cd_text';
  $handler->display->display_options['fields']['field_cd_text']['label'] = '';
  $handler->display->display_options['fields']['field_cd_text']['element_label_colon'] = FALSE;
  /* Field: Content: CD link */
  $handler->display->display_options['fields']['field_cd_link']['id'] = 'field_cd_link';
  $handler->display->display_options['fields']['field_cd_link']['table'] = 'field_data_field_cd_link';
  $handler->display->display_options['fields']['field_cd_link']['field'] = 'field_cd_link';
  $handler->display->display_options['fields']['field_cd_link']['label'] = '';
  $handler->display->display_options['fields']['field_cd_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cd_link']['alter']['text'] = '<p class="cd-link">[field_cd_link]</p>';
  $handler->display->display_options['fields']['field_cd_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_link']['click_sort_column'] = 'url';
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
    'cd_slideshow_element' => 'cd_slideshow_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'all' => 'all',
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
    'und' => 'und',
    'da' => 'da',
    'en' => 'en',
    'es' => 'es',
  );

  /* Display: Block, English */
  $handler = $view->new_display('block', 'Block, English', 'block');
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
    'cd_slideshow_element' => 'cd_slideshow_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['block_description'] = 'CD slide show block, English';

  /* Display: Block, Danish */
  $handler = $view->new_display('block', 'Block, Danish', 'block_1');
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
    'cd_slideshow_element' => 'cd_slideshow_element',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );
  $handler->display->display_options['block_description'] = 'CD slide show block, Danish';
  $translatables['cd_slideshow'] = array(
    t('Master'),
    t('CD slideshow'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="cd-title-background-transparent"></div>
<div class="cd-title">[field_cd_title]</div>'),
    t('<p class="cd-link">[field_cd_link]</p>'),
    t('Block, English'),
    t('more'),
    t('CD slide show block, English'),
    t('Block, Danish'),
    t('CD slide show block, Danish'),
  );
  $export['cd_slideshow'] = $view;

  return $export;
}
