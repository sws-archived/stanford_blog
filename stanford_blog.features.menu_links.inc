<?php
/**
 * @file
 * stanford_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:blog-contributors
  $menu_links['main-menu:blog-contributors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog-contributors',
    'router_path' => 'blog-contributors',
    'link_title' => 'Blog Contributors',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/stanford-blogpost
  $menu_links['navigation:node/add/stanford-blogpost'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stanford-blogpost',
    'router_path' => 'node/add/stanford-blogpost',
    'link_title' => 'Blog post',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new blog post.  You can add images and tags to your posts.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blog Contributors');
  t('Blog post');


  return $menu_links;
}
