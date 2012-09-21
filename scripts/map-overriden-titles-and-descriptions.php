<?php

/*
 * Map overridenn titles and descriptions to the host database
 * 
 * Insert references for overrides where appropriate
 *
 */
 
 //Load all nodes = databases
 //Load all nodes = databases
 
 
$db_query = new EntityFieldQuery(); //does this function like a db handle
$databases = $db_query->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'database') //use bundle type 
    ->propertyOrderBy('title')
    ->execute(); 

$alt_db_query = new EntityFieldQuery();
$alternative_databases = $alt_db_query->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'alternative_database_title') //use bundle type 
    ->propertyOrderBy('title')
    ->execute(); 

$database_db_import_id_map = array();

foreach($databases['node'] as $database) {
  $node = node_load($database->nid);
  
  $db_import_id = $node->field_db_importid['und'][0]['safe_value'];
  if(array_key_exists($db_import_id, $database_db_import_id_map)) {
      drush_print("key" . $db_title_id . "Already Exists tield to" . $database_db_import_id_map[$db_import_id] . " trying on " . $node->nid);
  } else {
    $database_db_import_id_map[$db_import_id] = $node->nid;
  }
}
    
    
drush_print(count($databases['node']) . " Databases");
drush_print(count($alternative_databases['node']) . " Alternative Databases");
$missed_mappings = 0;

foreach($alternative_databases['node'] as $alt_db) {
  $node = node_load($alt_db->nid);
  //print_r($node);
  $db_import_id = $node->field_dboverride_dbmport_id['und'][0]['safe_value']; //bad type there 
  if(array_key_exists($db_import_id, $database_db_import_id_map)) {  
    $db_to_ref = $database_db_import_id_map[$db_import_id];
    $node->field_dboverride_database['und'][0]['target_id'] = $db_to_ref;
    field_attach_presave('node', $node);
    field_attach_update('node', $node);
    //drush_print($node->nid . " Assingned noderef " . $db_to_ref);
  } else {
    drush_print("NID: " . $node->nid . " has a reference to reference to missing db_import id of " . $db_import_id);
    $missed_mappings++;
  }
  
}

drush_print($missed_mappings . " total missed mappings");
