<?php
/**
 * @file
 * content_types_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_features_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cd_slideshow_element' => array(
      'name' => t('CD slideshow element'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'concert_program' => array(
      'name' => t('Concert program'),
      'base' => 'node_content',
      'description' => t('A concert program with an attached PDF file for download'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'concert_theme_element' => array(
      'name' => t('Concert theme element'),
      'base' => 'node_content',
      'description' => t('A presentation of a concert theme by means of an image, an image thumbnail for view pager and a short description with a link to a dedicated page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'favicon_element' => array(
      'name' => t('Favicon element'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery_photo' => array(
      'name' => t('Gallery Photo'),
      'base' => 'node_content',
      'description' => t('Gallery photo for different galleries. Includes two different image fields: Photo horizontal (1:1.33) and Photo vertical (1.33:1)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'musician_cv' => array(
      'name' => t('Musician CV'),
      'base' => 'node_content',
      'description' => t('A short CV with two photos and a thumbnail, including a description of the musician'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Short article with a defined structure for easy creation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'press_photo_collection' => array(
      'name' => t('Press photo collection'),
      'base' => 'node_content',
      'description' => t('press photos, vertical and horizontal'),
      'has_title' => '1',
      'title_label' => t('Photo collection title'),
      'help' => '',
    ),
    'press_text' => array(
      'name' => t('Press text'),
      'base' => 'node_content',
      'description' => t('A press text in WORD for download'),
      'has_title' => '1',
      'title_label' => t('Press text title'),
      'help' => '',
    ),
    'text_embedded_photo' => array(
      'name' => t('Text embedded photo'),
      'base' => 'node_content',
      'description' => t('A photo meant for embedding in text'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_page' => array(
      'name' => t('Video page'),
      'base' => 'node_content',
      'description' => t('A video page with a text field'),
      'has_title' => '1',
      'title_label' => t('Video title'),
      'help' => '',
    ),
  );
  return $items;
}
