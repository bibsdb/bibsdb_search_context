<?php

/**
 * Implements hook_drush_command().
 */
function bibsdb_search_context_drush_command() {

	$items['bibsdb_unpublish_stale_links'] = array(
		'description' => 'Unpublish search context links that links to unpublished nodes.',
		'aliases' => array('bibsdb_usl'),
		);

	return $items;
}

/**
 * Callback for the drush bibsdb_unpublish_stale_links command
 */
function drush_bibsdb_search_context_bibsdb_unpublish_stale_links() {

	// Find all unpublished nodes
	$query = new EntityFieldQuery;
	$query->entityCondition('entity_type', 'node')
	->propertyCondition('status', NODE_UNPUBLISHED);
	$result = $query->execute();
	if (!empty($result['node'])) {
		$nids = array_keys($result['node']);
		foreach ($nids as $nid) {

			//Find Search Context Links that links to unpublished nodes
			$linkquery = new EntityFieldQuery;
			$linkquery->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'ding_search_context_link')
			->fieldCondition('field_bibsdb_internal_link', 'target_id', $nid, '=');
			$linkresult = $linkquery->execute();
			if (!empty($linkresult['node'])) {
				$linknids = array_keys($linkresult['node']);
				foreach ($linknids as $linknid) {
					$linknode = node_load($linknid, NULL, TRUE);
					$linknode->status = NODE_UNPUBLISHED;
					node_save($linknode);
				}
			}
		}
	}
}