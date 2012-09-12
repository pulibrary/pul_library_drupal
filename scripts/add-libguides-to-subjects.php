<?php



$alt_title_example = node_load(1891);

//print_r($alt_title_example);

//$alt_title_example->field_dboverride_database['und'][0]['target_id'] = 1508;
//$alt_title_example->field_dboverride_database['und'][1]['target_id'] = 1509;
//field_attach_presave('node', 1891);

//field_attach_update('node', 1891);
//node_save(1891);
//$alt_title_example2 = node_load(1891);
//print_r($alt_title_example);


//node_save($alt_title_example);


$database_sort_example = taxonomy_term_load(1648);
print_r($database_sort_example);

$subject_mappings = array();
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


$subject_guide_mappings = json_decode(file_get_contents('scripts/library-archive-subject-guide-links.json'), TRUE);
//print_r($subject_guide_mappings);
$test_guide_id = 9;
$no_match = 0;
$missing_guides = array();
foreach ($subject_guide_mappings as $guide_mapping) {
  if(array_key_exists($guide_mapping['subjectID'], $subject_mappings)) {
    $term_data = taxonomy_term_load($subject_mappings[$guide_mapping['subjectID']]);
    $term_data->field_subs_primary_library_guide['und'][0]['url'] = $guide_mapping['subjectGuideLink'];
    field_attach_presave('taxonomy_term', $term_data);
    field_attach_update('taxonomy_term', $term_data);
    
  } else {
    array_push($missing_guides, $guide_mapping['subjectID']);
    $no_match++;
  }
}

print_r($missing_guides);
echo $no_match . " missing guides out of " . count($subject_guide_mappings) . "\n";
//print_r($subject_mappings);
