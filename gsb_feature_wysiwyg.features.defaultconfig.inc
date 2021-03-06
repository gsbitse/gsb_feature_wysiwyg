<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_wysiwyg_defaultconfig_features() {
  return array(
    'gsb_feature_wysiwyg' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function gsb_feature_wysiwyg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format gsb_html_text'.
  $permissions['use text format gsb_html_text'] = array(
    'name' => 'use text format gsb_html_text',
    'roles' => array(
      'Admission Events' => 'Admission Events',
      'administrator' => 'administrator',
      'cwo_admin' => 'cwo_admin',
      'editor' => 'editor',
      'events' => 'events',
      'marketing_admin' => 'marketing_admin',
      'section manager' => 'section manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format gsb_wysiwyg_text'.
  $permissions['use text format gsb_wysiwyg_text'] = array(
    'name' => 'use text format gsb_wysiwyg_text',
    'roles' => array(
      'Admission Events' => 'Admission Events',
      'Faculty' => 'Faculty',
      'aa' => 'aa',
      'administrator' => 'administrator',
      'cwo_admin' => 'cwo_admin',
      'editor' => 'editor',
      'events' => 'events',
      'fa' => 'fa',
      'marketing_admin' => 'marketing_admin',
      'section manager' => 'section manager',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
