<?php
/**
 * @file
 * press_gallery_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_gallery_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press photo gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press photo gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_photo_horizontal' => 'field_photo_horizontal',
    'field_photo_vertical' => 'field_photo_vertical',
  );
  $handler->display->display_options['row_options']['separator'] = '<span id="field-separator"></span>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Photo horizontal */
  $handler->display->display_options['fields']['field_photo_horizontal']['id'] = 'field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['table'] = 'field_data_field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['field'] = 'field_photo_horizontal';
  $handler->display->display_options['fields']['field_photo_horizontal']['label'] = '';
  $handler->display->display_options['fields']['field_photo_horizontal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_horizontal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_horizontal']['type'] = 'lightbox2__lightbox__press_thumbnail_horizontal__original';
  $handler->display->display_options['fields']['field_photo_horizontal']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo_horizontal']['delta_offset'] = '0';
  /* Field: Content: Photo vertical */
  $handler->display->display_options['fields']['field_photo_vertical']['id'] = 'field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['table'] = 'field_data_field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['field'] = 'field_photo_vertical';
  $handler->display->display_options['fields']['field_photo_vertical']['label'] = '';
  $handler->display->display_options['fields']['field_photo_vertical']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_vertical']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_vertical']['type'] = 'lightbox2__lightbox__press_thumbnail_vertical__original';
  $handler->display->display_options['fields']['field_photo_vertical']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo_vertical']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photo_vertical']['separator'] = '&nbsp; ';
  /* Field: Content: Downloadable text */
  $handler->display->display_options['fields']['field_downloadable_text']['id'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['table'] = 'field_data_field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['field'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_downloadable_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_text']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_text']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_downloadable_text']['delta_offset'] = '0';
  /* Field: Content: Text image */
  $handler->display->display_options['fields']['field_text_image']['id'] = 'field_text_image';
  $handler->display->display_options['fields']['field_text_image']['table'] = 'field_data_field_text_image';
  $handler->display->display_options['fields']['field_text_image']['field'] = 'field_text_image';
  $handler->display->display_options['fields']['field_text_image']['label'] = '';
  $handler->display->display_options['fields']['field_text_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_text_image']['alter']['path'] = '[field_downloadable_text]';
  $handler->display->display_options['fields']['field_text_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_text_image']['settings'] = array(
    'image_style' => 'press_thumbnail_vertical',
    'image_link' => '',
  );
  /* Sort criterion: Content: Sort order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'press_photo_collection' => 'press_photo_collection',
    'press_text' => 'press_text',
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
    'press_photo_collection' => 'press_photo_collection',
    'press_text' => 'press_text',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );

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
    'press_photo_collection' => 'press_photo_collection',
    'press_text' => 'press_text',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );
  $handler->display->display_options['block_description'] = 'Press photo gallery block, Danish';
  $translatables['press_photo_gallery'] = array(
    t('Master'),
    t('Press photo gallery'),
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
    t('Block'),
    t('Block, Danish'),
    t('Press photo gallery block, Danish'),
  );
  $export['press_photo_gallery'] = $view;

  $view = new view();
  $view->name = 'press_text_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press text gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press text gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Read a press text';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="read-a-press-text">
<p>[title]</p>
</div>';
  /* Field: Content: Downloadable text */
  $handler->display->display_options['fields']['field_downloadable_text']['id'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['table'] = 'field_data_field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['field'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_downloadable_text']['alter']['text'] = '<div id="download-a-press-text">
<p>Download the press text in WORD format: [field_downloadable_text]</p>
</div>';
  $handler->display->display_options['fields']['field_downloadable_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_text']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_text']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_downloadable_text']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_downloadable_text']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'press_text' => 'press_text',
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
    'press_text' => 'press_text',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );

  /* Display: Block, Danish */
  $handler = $view->new_display('block', 'Block, Danish', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Læs en pressetekst';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="read-a-press-text">
<p>[title]</p>
</div>';
  /* Field: Content: Downloadable text */
  $handler->display->display_options['fields']['field_downloadable_text']['id'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['table'] = 'field_data_field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['field'] = 'field_downloadable_text';
  $handler->display->display_options['fields']['field_downloadable_text']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_downloadable_text']['alter']['text'] = '<div id="download-a-press-text">
<p>Hent en tekst i WORD format: [field_downloadable_text]</p>
</div>';
  $handler->display->display_options['fields']['field_downloadable_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_text']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_text']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_downloadable_text']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_downloadable_text']['delta_offset'] = '0';
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
    'press_text' => 'press_text',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );
  $handler->display->display_options['block_description'] = 'Press text gallery, Danish';
  $translatables['press_text_gallery'] = array(
    t('Master'),
    t('Press text gallery'),
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
    t('Read a press text'),
    t('<div id="read-a-press-text">
<p>[title]</p>
</div>'),
    t('<div id="download-a-press-text">
<p>Download the press text in WORD format: [field_downloadable_text]</p>
</div>'),
    t('Block'),
    t('Block, Danish'),
    t('Læs en pressetekst'),
    t('<div id="download-a-press-text">
<p>Hent en tekst i WORD format: [field_downloadable_text]</p>
</div>'),
    t('Press text gallery, Danish'),
  );
  $export['press_text_gallery'] = $view;

  return $export;
}
