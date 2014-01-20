<?php
/**
 * @file
 * stanford_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function stanford_blog_user_default_roles() {
  $roles = array();

  // Exported role: blog administrator.
  $roles['blog administrator'] = array(
    'name' => 'blog administrator',
    'weight' => 4,
  );

  // Exported role: blog contributor.
  $roles['blog contributor'] = array(
    'name' => 'blog contributor',
    'weight' => 3,
  );

  return $roles;
}
