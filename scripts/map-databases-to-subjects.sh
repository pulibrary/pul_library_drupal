<?php

//First get all available subjects

$subject_mappings = array();
$database_mappings = array();
$alternative_title_mappings = array();

$taxonomyQuery = new EntityFieldQuery();
$taxonomyTerms = $taxonomyQuery->entityCondition('entity_type', 'taxonomy_term')
  ->propertyCondition('vid', 12) //change 2 to any vocabulary ID
  ->propertyOrderBy('weight')
  ->addMetaData('account', user_load(1))
  ->execute(); 
foreach($taxonomyTerms['taxonomy_term'] as $term) {
  //$name = get_taxonomy_tag_name($term->tid);
  //echo $term->tid . " = " . $name . "\n";
  //print_r($term);
  $term_data = taxonomy_term_load($term->tid);
  //echo $term->tid . " = " . $term_data->name . "  Import ID: " . $term_data->field_subs_import_id['und'][0]['safe_value'] . "\n";
  $subject_import_id = $term_data->field_subs_import_id['und'][0]['safe_value'];
  $subject_mappings[$subject_import_id] = $term->term->id;
  //print_r($term_data);
}

$nodeQuery = new EntityFieldQuery();
$nodetypeMembers = $nodeQuery->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'database') //use bundle type 
    ->propertyOrderBy('title')
    ->execute();

foreach($nodetypeMembers['node'] as $node) {
    //$relevantNodes[] = $node->nid;
    //$name = get_taxonomy_tag_name($term->tid);
    //echo $term->tid . " = " . $name . "\n";
    $node = node_load($node->nid);
    //print_r($node);
    //echo $node->nid . " = ";
    //echo $node->field_db_access_url['und'][0]['url'];
    $db_import_id = $node->field_db_importid['und'][0]['safe_value'];
    $db_title_id = $node->field_db_title_import_id['und'][0]['safe_value'];
    $database_mappings[$db_title_id] = $node->nid;
}


$altTitleQuery = new EntityFieldQuery();
$altTitleMembers = $altTitleQuery->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'alternative_database_title')
    ->propertyOrderBy('title')
    ->execute();

foreach($altTitleMembers['node'] as $node) {
    $altTitle = node_load($node->nid);
    $attached_db_import_id = $altTitle->field_dboverride_dbmport_id['und'][0]['safe_value'];
    $alternative_title_mappings[$attached_db_import_id] = $node->nid;
}

//print_r($subject_mappings);
//print_r($database_mappings);
//print_r($alternative_title_mappings);

/*
 * Parse Join data 
 *
 */ 



// Map Titles to Subjects
/*
 * 1. Make sure every title is filed as a tier one or two under a subject
 * 2. Check to so if key is present in either database or alt title mappings
 *
 */



// Deal with Overridden Descriptions
// Deal with tools 
