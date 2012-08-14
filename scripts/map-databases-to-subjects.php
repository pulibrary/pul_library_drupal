<?php

/*Some helper methods
 */
 
function is_null_or_empty($value) {
  $is_null_or_empty = FALSE;
  if ($value == 'NULL') {
    $is_null_or_empty = TRUE;
  } elseif($value == "") {
    $is_null_or_empty = TRUE;
  } 

  return $is_null_or_empty;
}


function is_tier_one($rank) {
  $is_tier_one = TRUE;
  if($rank != 1) {
    $is_tier_one = FALSE;
  }
  return $is_tier_one;
}

function sort_mapping_by_dbID($a, $b) {
  return strcmp($a['dbID'], $b['dbID']);
}

$subject_db_title_mappings = json_decode(file_get_contents('scripts/subjectDBtitleMappings.json'), TRUE);
$subject_specs_dbs = json_decode(file_get_contents('scripts/subjectSpecsDBsmappings.json'), TRUE);  

usort($subject_db_title_mappings, "sort_mapping_by_dbID");

//First get all available subjects

$subject_mappings = array();
$database_mappings = array();
$alternative_title_mappings = array();
$subject_librarian_mappings = array();


$userQuery = new EntityFieldQuery();
$subjectLibrarians = $userQuery->entityCondition('entity_type', 'user')
  ->propertyOrderBy('name')
  ->addMetaData('account', user_load(1))
  ->execute();
foreach($subjectLibrarians['user'] as $user) {
  $user_data = user_load($user->uid);
  if($user_data->field_puluser_sublibrarian['und'][0]['value']) {
    $dmg_import_id =  $user_data->field_puluser_dmgimport_id['und'][0]['safe_value'];
    $subject_librarian_mappings[$dmg_import_id] = $user->uid;
  }
}

$taxonomyQuery = new EntityFieldQuery();
$taxonomyTerms = $taxonomyQuery->entityCondition('entity_type', 'taxonomy_term')
  ->propertyCondition('vid', 12) //change 2 to any vocabulary ID
  ->propertyOrderBy('weight')
  ->addMetaData('account', user_load(1))
  ->execute(); 
foreach($taxonomyTerms['taxonomy_term'] as $term) {

  $term_data = taxonomy_term_load($term->tid);
  //echo $term->tid . " = " . $term_data->name . "\n";
  //echo $term->tid . " = " . $term_data->name . "  Import ID: " . $term_data->field_subs_import_id['und'][0] . "\n";
  $subject_import_id = $term_data->field_subs_import_id['und'][0]['safe_value'];
  if(array_key_exists($subject_import_id, $subject_mappings)) {
    "Duplication subject key {$subject_import_id} on term id {$term->tid}";
  } else {
    $subject_mappings[$subject_import_id] = $term->tid;
  }
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
    if(array_key_exists($db_title_id, $database_mappings)) {
      echo "key {$db_title_id} Already Exists tield to {$database_mappings[$db_title_id]}, trying on {$node->nid}\n";
    } else {
      $database_mappings[$db_title_id] = $node->nid;
    }
}


$altTitleQuery = new EntityFieldQuery();
$altTitleMembers = $altTitleQuery->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'alternative_database_title')
    ->propertyOrderBy('title')
    ->execute();

foreach($altTitleMembers['node'] as $node) {
    $altTitle = node_load($node->nid);
    $attached_db_import_id = $altTitle->field_dboverride_dbmport_id['und'][0]['safe_value'];
    $alternative_title_import_id = $altTitle->field_dboverride_title_import_id['und'][0]['safe_value'];
    if(array_key_exists($alternative_title_import_id, $database_mappings)) {
      echo "alt title key {$alternative_title_import_id} Already Exists\n";
    } else {
      $alternative_title_mappings[$attached_db_import_id] = $node->nid;
    }
    
}

//print_r($subject_mappings);
//print_r($database_mappings);
//print_r($alternative_title_mappings);
//print_r($subject_librarian_mappings);
/*
 * Parse Join data 
 *
 */ 

//print_r($subject_db_title_mappings);


// Map Titles to Subjects
/*
 * 1. Make sure every title is filed as a tier one or two under a subject
 * 2. Check to so if key is present in either database or alt title mappings
 *
 */
drush_print(count($subject_db_title_mappings) . " Total Mappings");
$missing_mappings = array();
foreach($subject_db_title_mappings as $mapping) {
  //find the matching node
  //echo $mapping['titleID'];
  $node_to_map;
  $term_to_attach_field_to = NULL;
  if(array_key_exists($mapping['subjectID'], $subject_mappings)) {
      $term_to_attach_field_to = $subject_mappings[$mapping['subjectID']];
  }
  
  if(!is_null($term_to_attach_field_to)) {
    if(array_key_exists($mapping['titleID'], $database_mappings)) {
      echo "Standard Database Entry\n";
      $node_to_map = $database_mappings[$mapping['titleID']];
    }
    elseif(array_key_exists($mapping['titleID'], $alternative_title_mappings)) {
      echo "Alt Database Title\n";
      $node_to_map = $alternative_title_mappings[$mapping['titleID']];
    } else { // the orphans 
      //echo "No Mappings for this id {$mapping['titleID']}\n";
      //print_r($mapping);
      array_push($missing_mappings, $mapping);
    }
    //now find all subjects that contain a reference to this resource
    //$mapping['subjectID'];
  
    // load the term 
    $term_data = taxonomy_term_load($term_to_attach_field_to);
    $target_id_to_store = array('target_id' => $node_to_map);
    //print_r($term_data);
    
    //field_subs_specialist
    //field_subs_tier_one_resources
    //field_subs_tier_two_resources
    //print_r($term_data);
    if(!is_null($node_to_map)) {
    if(is_tier_one($mapping['rank'])) {
      if(isset($term_data->field_subs_tier_one_resources['und'])) {
        //print_r($term_data->field_subs_tier_one_resources);
        drush_print("adding tier one resource {$node_to_map} to term id {$term_to_attach_field_to}");
        //array_push($target_id_to_store, $term_data->field_subs_tier_one_resources['und']);
        drush_print(count($term_data->field_subs_tier_one_resources['und']) . " num of attached items");
        $num_matches = count($term_data->field_subs_tier_one_resources['und']);
        $term_data->field_subs_tier_one_resources['und'][$num_matches]['target_id'] = $node_to_map;
        //$term_data->field_subs_tier_one_resources['und'] = $target_id_to_store;
        //print_r($term_data->field_subs_tier_one_resources);
        //field_sql_storage_field_storage_write('database_subjects', $term_to_attach_field_to, 'update', $term_data->field_subs_tier_one_resources);
      } else {
        $term_data->field_subs_tier_one_resources = array('und' => array('target_id' => $node_to_map));
        //echo $node_to_map;
      }
      //create a tier one resource
      //echo "tier one\n";
      //print_r($mapping);  
      //field_attach_update('taxonomy_term', $term_to_attach_field_to);
    } else {
      if(isset($term_data->field_subs_tier_two_resources['und'])) {
        //print_r($term_data);
        $num_matches = count($term_data->field_subs_tier_two_resources['und']);
        $term_data->field_subs_tier_two_resources['und'][$num_matches]['target_id'] = $node_to_map;
        drush_print("adding tier two resource {$node_to_map} to term id {$term_to_attach_field_to}");
        drush_print( count($term_data->field_subs_tier_two_resources['und']) . " num of attached items");
        //array_push($target_id_to_store, $term_data->field_subs_tier_two_resources['und']);
        //print_r($term_data->field_subs_tier_two_resources);
      } else {
        $term_data->field_subs_tier_two_resources['und'][0]['target_id'] = $node_to_map;
        //echo $node_to_map;
      }
      //create a tier two resource
      //echo "tier two\n";
      //print_r($mapping);
      //special case
       
      if(!is_null_or_empty($mapping['descriptionSpecial'])) {
        //load this resource into the alternative description nid present
        // overridden description 
        //body
        //$alt_db_node = node_load($node_to_map);
        //$alt_db_node->body = $mapping['descriptionSpecial'];
        //node_save($alt_db_node);
        
      }
    }
    }
    //print_r($term_data);
    //save field that has just been term
    field_attach_presave('taxonomy_term', $term_data);
    field_attach_update('taxonomy_term', $term_data);
    //print_r($term_data);
    //taxonomy_term_save($term_data);


  }
}
//  
drush_print(count($missing_mappings) . "missing mappings");
//print_r($subject_mappings);
// Deal with Overridden Descriptions
// Deal with tools 

// Map Subject Librarians with Subjects
//$user_id = $subject_librarian_mappings[162];
//print_r(user_load($user_id));


//print_r($subject_specs_dbs);

foreach($subject_specs_dbs as $mapping) {
  //print_r($mapping);
}

