<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gsb_feature_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format image_text_equivalent'.
  $permissions['use text format image_text_equivalent'] = array(
    'name' => 'use text format image_text_equivalent',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format markdown_lite_minus_resources'.
  $permissions['use text format markdown_lite_minus_resources'] = array(
    'name' => 'use text format markdown_lite_minus_resources',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format markdown_plus_iframe'.
  $permissions['use text format markdown_plus_iframe'] = array(
    'name' => 'use text format markdown_plus_iframe',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format paragraphed_plain_text'.
  $permissions['use text format paragraphed_plain_text'] = array(
    'name' => 'use text format paragraphed_plain_text',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format sidebar'.
  $permissions['use text format sidebar'] = array(
    'name' => 'use text format sidebar',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
