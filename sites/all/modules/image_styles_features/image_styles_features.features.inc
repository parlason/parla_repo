<?php
/**
 * @file
 * image_styles_features.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_features_image_default_styles() {
  $styles = array();

  // Exported image style: cd_cover.
  $styles['cd_cover'] = array(
    'name' => 'cd_cover',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 250,
          'height' => 227,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cd_cover',
  );

  // Exported image style: cd_cover_thumbmnail.
  $styles['cd_cover_thumbmnail'] = array(
    'name' => 'cd_cover_thumbmnail',
    'effects' => array(
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 90,
          'height' => 81,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cd_cover_thumbmnail',
  );

  // Exported image style: cv_photo.
  $styles['cv_photo'] = array(
    'name' => 'cv_photo',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 250,
          'height' => 227,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cv_photo',
  );

  // Exported image style: cv_photo_thumbnail.
  $styles['cv_photo_thumbnail'] = array(
    'name' => 'cv_photo_thumbnail',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 90,
          'height' => 81,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cv_photo_thumbnail',
  );

  // Exported image style: favicon_image.
  $styles['favicon_image'] = array(
    'name' => 'favicon_image',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 55,
          'height' => 55,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'favicon_image',
  );

  // Exported image style: press_thumbnail_horizontal.
  $styles['press_thumbnail_horizontal'] = array(
    'name' => 'press_thumbnail_horizontal',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 199,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'press_thumbnail_horizontal',
  );

  // Exported image style: press_thumbnail_vertical.
  $styles['press_thumbnail_vertical'] = array(
    'name' => 'press_thumbnail_vertical',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 113,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'press_thumbnail_vertical',
  );

  // Exported image style: thumbnail_horizontal.
  $styles['thumbnail_horizontal'] = array(
    'name' => 'thumbnail_horizontal',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 199.5,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thumbnail_horizontal',
  );

  // Exported image style: thumbnail_vertical.
  $styles['thumbnail_vertical'] = array(
    'name' => 'thumbnail_vertical',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 113,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thumbnail_vertical',
  );

  // Exported image style: video_index_thumbnail.
  $styles['video_index_thumbnail'] = array(
    'name' => 'video_index_thumbnail',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 193,
          'height' => 145,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'video_index_thumbnail',
  );

  return $styles;
}
