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

  // Exported field_instance: 'node-ding_search_context_link-field_bibsdb_external_link'
  $field_instances['node-ding_search_context_link-field_bibsdb_external_link'] = array(
    'bundle' => 'ding_search_context_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indsæt eksternt link. <br/> <b> Du skal enten udfylde internt link ELLER eksternt link. </b>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
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
    'field_name' => 'field_bibsdb_external_link',
    'label' => 'Eksternt link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ding_search_context_link-field_bibsdb_internal_link'
  $field_instances['node-ding_search_context_link-field_bibsdb_internal_link'] = array(
    'bundle' => 'ding_search_context_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tast en del af titlen og vælg på listen. <br/> <b> Du skal enten udfylde internt link ELLER eksternt link. </b>',
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
    'label' => 'Internt link',
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
        'size' => 100,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ding_search_context_link-field_bibsdb_sclink_lead'
  $field_instances['node-ding_search_context_link-field_bibsdb_sclink_lead'] = array(
    'bundle' => 'ding_search_context_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
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
    'field_name' => 'field_bibsdb_sclink_lead',
    'label' => 'Lead',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eksternt link');
  t('Indsæt eksternt link. <br/> <b> Du skal enten udfylde internt link ELLER eksternt link. </b>');
  t('Internt link');
  t('Lead');
  t('Tast en del af titlen og vælg på listen. <br/> <b> Du skal enten udfylde internt link ELLER eksternt link. </b>');

  return $field_instances;
}
