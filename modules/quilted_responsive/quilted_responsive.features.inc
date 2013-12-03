<?php
/**
 * @file
 * quilted_responsive.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quilted_responsive_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function quilted_responsive_image_default_styles() {
  $styles = array();

  // Exported image style: responsive_default.
  $styles['responsive_default'] = array(
    'name' => 'responsive_default',
    'label' => 'responsive_default',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 255,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Output at 100% width',
        'effect callback' => 'image_dimensions_set_width_effect',
        'dimensions callback' => 'image_dimensions_dimensions',
        'module' => 'image_dimensions',
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_default_2x.
  $styles['responsive_default_2x'] = array(
    'name' => 'responsive_default_2x',
    'label' => 'responsive_default_2x',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 680,
          'height' => 510,
        ),
        'weight' => 1,
      ),
      4 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
      5 => array(
        'label' => 'Output at 100% width',
        'effect callback' => 'image_dimensions_set_width_effect',
        'dimensions callback' => 'image_dimensions_dimensions',
        'module' => 'image_dimensions',
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: responsive_large__2x.
  $styles['responsive_large__2x'] = array(
    'name' => 'responsive_large__2x',
    'label' => 'responsive_large__2x',
    'effects' => array(
      37 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 490,
          'height' => 368,
        ),
        'weight' => 1,
      ),
      42 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_large__narrow.
  $styles['responsive_large__narrow'] = array(
    'name' => 'responsive_large__narrow',
    'label' => 'responsive_large__narrow',
    'effects' => array(
      36 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 555,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_large__narrow_2x.
  $styles['responsive_large__narrow_2x'] = array(
    'name' => 'responsive_large__narrow_2x',
    'label' => 'responsive_large__narrow_2x',
    'effects' => array(
      45 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1480,
          'height' => 1110,
        ),
        'weight' => 1,
      ),
      46 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_large__normal.
  $styles['responsive_large__normal'] = array(
    'name' => 'responsive_large__normal',
    'label' => 'responsive_large__normal',
    'effects' => array(
      38 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 735,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_large__normal_2x.
  $styles['responsive_large__normal_2x'] = array(
    'name' => 'responsive_large__normal_2x',
    'label' => 'responsive_large__normal_2x',
    'effects' => array(
      39 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1960,
          'height' => 1470,
        ),
        'weight' => 1,
      ),
      43 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_large__wide.
  $styles['responsive_large__wide'] = array(
    'name' => 'responsive_large__wide',
    'label' => 'responsive_large__wide',
    'effects' => array(
      40 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 915,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_large__wide_2x.
  $styles['responsive_large__wide_2x'] = array(
    'name' => 'responsive_large__wide_2x',
    'label' => 'responsive_large__wide_2x',
    'effects' => array(
      41 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2440,
          'height' => 1830,
        ),
        'weight' => 1,
      ),
      44 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_medium__narrow.
  $styles['responsive_medium__narrow'] = array(
    'name' => 'responsive_medium__narrow',
    'label' => 'responsive_medium__narrow',
    'effects' => array(
      27 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 278,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_medium__narrow_2x.
  $styles['responsive_medium__narrow_2x'] = array(
    'name' => 'responsive_medium__narrow_2x',
    'label' => 'responsive_medium__narrow_2x',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 556,
        ),
        'weight' => 1,
      ),
      33 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_medium__normal.
  $styles['responsive_medium__normal'] = array(
    'name' => 'responsive_medium__normal',
    'label' => 'responsive_medium__normal',
    'effects' => array(
      29 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 490,
          'height' => 368,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_medium__normal_2x.
  $styles['responsive_medium__normal_2x'] = array(
    'name' => 'responsive_medium__normal_2x',
    'label' => 'responsive_medium__normal_2x',
    'effects' => array(
      30 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 736,
        ),
        'weight' => 1,
      ),
      34 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_medium__wide.
  $styles['responsive_medium__wide'] = array(
    'name' => 'responsive_medium__wide',
    'label' => 'responsive_medium__wide',
    'effects' => array(
      31 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 458,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_medium__wide_2x.
  $styles['responsive_medium__wide_2x'] = array(
    'name' => 'responsive_medium__wide_2x',
    'label' => 'responsive_medium__wide_2x',
    'effects' => array(
      32 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 916,
        ),
        'weight' => 1,
      ),
      35 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_mini.
  $styles['responsive_mini'] = array(
    'name' => 'responsive_mini',
    'label' => 'responsive_mini',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 555,
        ),
        'weight' => 1,
      ),
      26 => array(
        'label' => 'Output at 100% width',
        'effect callback' => 'image_dimensions_set_width_effect',
        'dimensions callback' => 'image_dimensions_dimensions',
        'module' => 'image_dimensions',
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: responsive_mini_2x.
  $styles['responsive_mini_2x'] = array(
    'name' => 'responsive_mini_2x',
    'label' => 'responsive_mini_2x',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1480,
          'height' => 1110,
        ),
        'weight' => 1,
      ),
      9 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
      10 => array(
        'label' => 'Output at 100% width',
        'effect callback' => 'image_dimensions_set_width_effect',
        'dimensions callback' => 'image_dimensions_dimensions',
        'module' => 'image_dimensions',
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: responsive_small__narrow.
  $styles['responsive_small__narrow'] = array(
    'name' => 'responsive_small__narrow',
    'label' => 'responsive_small__narrow',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 246,
          'height' => 185,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_small__narrow_2x.
  $styles['responsive_small__narrow_2x'] = array(
    'name' => 'responsive_small__narrow_2x',
    'label' => 'responsive_small__narrow_2x',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 492,
          'height' => 370,
        ),
        'weight' => -10,
      ),
      23 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: responsive_small__normal.
  $styles['responsive_small__normal'] = array(
    'name' => 'responsive_small__normal',
    'label' => 'responsive_small__normal',
    'effects' => array(
      15 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 326,
          'height' => 245,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_small__normal_2x.
  $styles['responsive_small__normal_2x'] = array(
    'name' => 'responsive_small__normal_2x',
    'label' => 'responsive_small__normal_2x',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 652,
          'height' => 490,
        ),
        'weight' => -10,
      ),
      24 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: responsive_small__wide.
  $styles['responsive_small__wide'] = array(
    'name' => 'responsive_small__wide',
    'label' => 'responsive_small__wide',
    'effects' => array(
      19 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 406,
          'height' => 305,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_small__wide_2x.
  $styles['responsive_small__wide_2x'] = array(
    'name' => 'responsive_small__wide_2x',
    'label' => 'responsive_small__wide_2x',
    'effects' => array(
      21 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 812,
          'height' => 610,
        ),
        'weight' => 1,
      ),
      25 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
