<?php
/**
 * @file
 * stanford_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'system',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'SUNet User',
      1 => 'Stanford Faculty',
      2 => 'Stanford Staff',
      3 => 'Stanford Student',
      4 => 'administrator',
      5 => 'anonymous user',
      6 => 'authenticated user',
      7 => 'blog administrator',
      8 => 'blog contributor',
    ),
    'module' => 'user',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer css injection.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create stanford_blogpost content.
  $permissions['create stanford_blogpost content'] = array(
    'name' => 'create stanford_blogpost content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_blogpost content.
  $permissions['delete any stanford_blogpost content'] = array(
    'name' => 'delete any stanford_blogpost content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_blogpost content.
  $permissions['delete own stanford_blogpost content'] = array(
    'name' => 'delete own stanford_blogpost content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any stanford_blogpost content.
  $permissions['edit any stanford_blogpost content'] = array(
    'name' => 'edit any stanford_blogpost content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'blog administrator',
      3 => 'blog contributor',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own stanford_blogpost content.
  $permissions['edit own stanford_blogpost content'] = array(
    'name' => 'edit own stanford_blogpost content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blog administrator',
      4 => 'blog contributor',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'blog administrator',
      3 => 'blog contributor',
    ),
    'module' => 'search',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'SUNet User',
      1 => 'administrator',
      2 => 'blog administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
      2 => 'blog contributor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
