<?php
/**
 * @file
 * stanford_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_fullname|user|user|default';
  $field_group->group_name = 'group_user_fullname';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full Name',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $export['group_user_fullname|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile_wrapper|user|user|default';
  $field_group->group_name = 'group_user_profile_wrapper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Profile Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_user_contact',
      1 => 'field_s_user_position',
      2 => 'field_s_user_short_bio',
      3 => 'field_s_user_profile_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Profile Wrapper',
      'instance_settings' => array(
        'classes' => 'clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_profile_wrapper|user|user|default'] = $field_group;

  return $export;
}
