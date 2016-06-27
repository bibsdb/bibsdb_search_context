<?php
/**
 * @file
 * bibsdb_search_context.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bibsdb_search_context_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ding_search_context_link-field_bibsdb_internal_link'
  $field_instances['node-ding_search_context_link-field_bibsdb_internal_link'] = array(
    'bundle' => 'ding_search_context_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bibsdb_internal_link',
    'label' => 'Internal link',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal link');

  return $field_instances;
}
