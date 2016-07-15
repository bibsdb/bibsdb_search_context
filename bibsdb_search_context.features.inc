<?php
/**
 * @file
 * bibsdb_search_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_search_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
