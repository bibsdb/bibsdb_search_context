<?php
/**
 * @file
 * bibsdb_search_context.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bibsdb_search_context_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bibsdb_internal_link'
  $field_bases['field_bibsdb_internal_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bibsdb_internal_link',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'ding_eresource' => 'ding_eresource',
          'ding_event' => 'ding_event',
          'ding_group' => 'ding_group',
          'ding_news' => 'ding_news',
          'ding_page' => 'ding_page',
          'new_materials' => 'new_materials',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
