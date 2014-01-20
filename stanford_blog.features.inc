<?php
/**
 * @file
 * stanford_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function stanford_blog_image_default_styles() {
  $styles = array();

  // Exported image style: stanford_30x30.
  $styles['stanford_30x30'] = array(
    'name' => 'stanford_30x30',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'stanford_30x30',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function stanford_blog_node_info() {
  $items = array(
    'stanford_blogpost' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => t('Create a new blog post.  You can add images and tags to your posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
