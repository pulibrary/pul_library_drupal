<?php


$alt_title_example = node_load(1891);

//print_r($alt_title_example);

$alt_title_example->field_dboverride_database['und'][0]['target_id'] = 1508;
$alt_title_example->field_dboverride_database['und'][1]['target_id'] = 1509;
//field_attach_presave('node', 1891);

//field_attach_update('node', 1891);
//node_save(1891);
//$alt_title_example2 = node_load(1891);
print_r($alt_title_example);


node_save($alt_title_example);
