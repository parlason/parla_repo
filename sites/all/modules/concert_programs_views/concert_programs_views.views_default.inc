<?php
/**
 * @file
 * concert_programs_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function concert_programs_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'concert_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Concert programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Concert programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_concert_date' => 'field_concert_date',
    'field_concert_venue' => 'field_concert_venue',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Concert date */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['element_class'] = 'concert-date';
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Concert venue */
  $handler->display->display_options['fields']['field_concert_venue']['id'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['table'] = 'field_data_field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['field'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['label'] = '';
  $handler->display->display_options['fields']['field_concert_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_concert_venue']['alter']['text'] = '<div class="date-venue-concert-page">
<p id="date-venue-inline">[field_concert_date] en [field_concert_venue]</p>
</div>';
  $handler->display->display_options['fields']['field_concert_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['type'] = 'text_plain';
  /* Field: Content: Downloadable program */
  $handler->display->display_options['fields']['field_dowloadable_program']['id'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['table'] = 'field_data_field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['field'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['label'] = '';
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['text'] = '<div class="trans-back-concert-page"></div>
<div class="download-pdf-concert-page">
<p id="download-pdf">Baja un programa detallado: [field_dowloadable_program]</p>
</div>';
  $handler->display->display_options['fields']['field_dowloadable_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dowloadable_program']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_dowloadable_program']['click_sort_column'] = 'fid';
  /* Field: Content: Program element */
  $handler->display->display_options['fields']['field_program_element']['id'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['table'] = 'field_data_field_program_element';
  $handler->display->display_options['fields']['field_program_element']['field'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['label'] = '';
  $handler->display->display_options['fields']['field_program_element']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_program_element']['element_class'] = 'program-elements';
  $handler->display->display_options['fields']['field_program_element']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_element']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_program_element']['element_wrapper_class'] = 'background-program-elements';
  $handler->display->display_options['fields']['field_program_element']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_program_element']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program_element']['multi_type'] = 'ul';
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
    'concert_program' => 'concert_program',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );

  /* Display: Concert program block, English */
  $handler = $view->new_display('block', 'Concert program block, English', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Concert date */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Concert venue */
  $handler->display->display_options['fields']['field_concert_venue']['id'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['table'] = 'field_data_field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['field'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['label'] = '';
  $handler->display->display_options['fields']['field_concert_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_concert_venue']['alter']['text'] = '<div class="date-venue-concert-page">
<p id="date-venue-inline">
[field_concert_date] at [field_concert_venue]
</p>
</div>';
  $handler->display->display_options['fields']['field_concert_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['type'] = 'text_plain';
  /* Field: Content: Downloadable program */
  $handler->display->display_options['fields']['field_dowloadable_program']['id'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['table'] = 'field_data_field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['field'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['label'] = '';
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['text'] = '<span class="trans-back-concert-page">&nbsp;</span>
<div class="download-pdf-concert-page">
<p id="download-pdf">Download a detailed program: [field_dowloadable_program]</p>
</div>';
  $handler->display->display_options['fields']['field_dowloadable_program']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_dowloadable_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dowloadable_program']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dowloadable_program']['click_sort_column'] = 'fid';
  /* Field: Content: Program element */
  $handler->display->display_options['fields']['field_program_element']['id'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['table'] = 'field_data_field_program_element';
  $handler->display->display_options['fields']['field_program_element']['field'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['label'] = '';
  $handler->display->display_options['fields']['field_program_element']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_element']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_program_element']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program_element']['multi_type'] = 'ul';
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
    'concert_program' => 'concert_program',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );

  /* Display: Concert program block, Danish */
  $handler = $view->new_display('block', 'Concert program block, Danish', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dowloadable_program' => 'field_dowloadable_program',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Concert date */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Concert venue */
  $handler->display->display_options['fields']['field_concert_venue']['id'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['table'] = 'field_data_field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['field'] = 'field_concert_venue';
  $handler->display->display_options['fields']['field_concert_venue']['label'] = '';
  $handler->display->display_options['fields']['field_concert_venue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_concert_venue']['alter']['text'] = '<div class="date-venue-concert-page">
<p id="date-venue-inline">[field_concert_date] i [field_concert_venue]</p>
</div>';
  $handler->display->display_options['fields']['field_concert_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_concert_venue']['type'] = 'text_plain';
  /* Field: Content: Downloadable program */
  $handler->display->display_options['fields']['field_dowloadable_program']['id'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['table'] = 'field_data_field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['field'] = 'field_dowloadable_program';
  $handler->display->display_options['fields']['field_dowloadable_program']['label'] = '';
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dowloadable_program']['alter']['text'] = '<span class="trans-back-concert-page">&nbsp;</span>
<div class="download-pdf-concert-page">
<p id="download-pdf">Hent et detaljeret program: [field_dowloadable_program]</p>
</div>';
  $handler->display->display_options['fields']['field_dowloadable_program']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_dowloadable_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dowloadable_program']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dowloadable_program']['click_sort_column'] = 'fid';
  /* Field: Content: Program element */
  $handler->display->display_options['fields']['field_program_element']['id'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['table'] = 'field_data_field_program_element';
  $handler->display->display_options['fields']['field_program_element']['field'] = 'field_program_element';
  $handler->display->display_options['fields']['field_program_element']['label'] = '';
  $handler->display->display_options['fields']['field_program_element']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_element']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_program_element']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program_element']['multi_type'] = 'ul';
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
    'concert_program' => 'concert_program',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'da' => 'da',
  );
  $handler->display->display_options['block_description'] = 'Concert program block, Danish';

  /* Display: Concert program block, Spanish */
  $handler = $view->new_display('block', 'Concert program block, Spanish', 'block_2');
  $translatables['concert_programs'] = array(
    t('Master'),
    t('Concert programs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="date-venue-concert-page">
<p id="date-venue-inline">[field_concert_date] en [field_concert_venue]</p>
</div>'),
    t('<div class="trans-back-concert-page"></div>
<div class="download-pdf-concert-page">
<p id="download-pdf">Baja un programa detallado: [field_dowloadable_program]</p>
</div>'),
    t('Concert program block, English'),
    t('<div class="date-venue-concert-page">
<p id="date-venue-inline">
[field_concert_date] at [field_concert_venue]
</p>
</div>'),
    t('<span class="trans-back-concert-page">&nbsp;</span>
<div class="download-pdf-concert-page">
<p id="download-pdf">Download a detailed program: [field_dowloadable_program]</p>
</div>'),
    t('Concert program block, Danish'),
    t('<div class="date-venue-concert-page">
<p id="date-venue-inline">[field_concert_date] i [field_concert_venue]</p>
</div>'),
    t('<span class="trans-back-concert-page">&nbsp;</span>
<div class="download-pdf-concert-page">
<p id="download-pdf">Hent et detaljeret program: [field_dowloadable_program]</p>
</div>'),
    t('Concert program block, Spanish'),
  );
  $export['concert_programs'] = $view;

  return $export;
}
