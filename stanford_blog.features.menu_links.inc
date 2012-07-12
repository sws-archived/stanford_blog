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
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blog Contributors');


  return $menu_links;
}