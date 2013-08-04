<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function ezproxy_utils_drush_help($command) {
    switch($commnd) {
        case 'drush:total-databases':
            return dt('Show total databases');
    }
}

function ezproxy_utils_drush_command() {
    $items = array();
    $items['total-databases'] = array(
        'description' => dt('Show total number of databases. Default shows active nodes only'),
        'arguments' => array(
            'inactive' => dt('Show only inactive databases'),
            ),
        'options' => array(
          'no-proxy' => array(
              'description' => 'show databases that are NOT flagged for proxy use',
          ),
          'proxy' => array(
              'description' => 'show only databases that are flagged for proxy use',
          ),
        ),
        'examples' => array(
            'Standard' => 'drush total-databases',
            'Inactive' => 'drush total-databases inactive',
            'Proxy Only' => 'drush total-databases --proxy',
            'No Proxy Only' => 'drush total-databases --no-proxy',
        ),
        'aliases' => array('db-show'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    $items['total-overrides'] = array(
        'description' => dt('Show total number of exiting overrides. Default shows active nodes only'),
        'arguments' => array(
            'inactive' => dt('Show only inactive overrides'),
            ),
        
        'examples' => array(
            'Standard' => 'drush total-overrides',
            'Inactive' => 'drush total-overrides inactive',
            
        ),
        'aliases' => array('db-overrides'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    
    $items['ezproxy-count'] = array(
        'description' => dt('Show total number of ezproxy eligible resources. Default shows active nodes only'),
        
        'examples' => array(
            'Standard' => 'drush ezproxy-count',
            
        ),
        'aliases' => array('ez-c'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    $items['ezproxy-packages'] = array(
        'description' => dt('Show total number of ezproxy package groups. Default shows active nodes only'),
        
        'examples' => array(
            'Standard' => 'drush ezproxy-packages',
            
        ),
        'aliases' => array('ez-pack-count'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    
    $items['build-standard-config'] = array(
        'description' => dt('Print out current Ezproxy Configuration File'),
        
        'examples' => array(
            'Standard' => 'drush build-standard-config',
            
        ),
        'aliases' => array('ez-bsc'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    $items['build-special-config'] = array(
        'description' => dt('Print out current Ezproxy Configuration File'),
        
        'examples' => array(
            'Standard' => 'drush build-special-config',
            
        ),
        'aliases' => array('ez-bsp'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    $items['build-package-config'] = array(
        'description' => dt('Print out current Ezproxy Configuration File'),
        
        'examples' => array(
            'Standard' => 'drush build-package-config',
            
        ),
        'aliases' => array('ez-bpc'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    $items['databases-to-csv'] = array(
        'description' => dt('Dump Current Databases to CSV Format'),
        'arguments' => array(
            'filename' => dt('name of CSV file to write including path'),
            'inactive' => dt('Show only inactive overrides'),
            ),
        
        'examples' => array(
            'Standard' => 'drush databases-to-csv',
            
        ),
        'aliases' => array('db-csv'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    $items['databases-to-json'] = array(
        'description' => dt('Dump Current Databases to JSON Format'),
        'arguments' => array(
            'filename' => dt('name of CSV file to write including path'),
            'inactive' => dt('Show only inactive overrides'),
            ),
        
        'examples' => array(
            'Standard' => 'drush databases-to-json',
            
        ),
        'aliases' => array('db-json'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    return $items;
    
}

function drush_ezproxy_utils_total_overrides($inactive = false) {
    $db_query = new EntityFieldQuery();
    if($inactive) {
        $override_databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'alternative_database_title') //use bundle type 
            ->propertyCondition('status', 0)
            ->propertyOrderBy('title')
            ->execute();
    } else {
        $override_databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'alternative_database_title') //use bundle type 
            ->propertyOrderBy('title')
            ->execute();
    }
    
    drush_print(count($override_databases['node']) . " Total Overrides");
}

function drush_ezproxy_utils_total_databases($inactive = false) {
    $db_query = new EntityFieldQuery();
    if($inactive) {
      $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyCondition('status', 0)
            ->propertyOrderBy('title')
            ->execute();  
    } else {
        $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyOrderBy('title')
            ->execute(); 
    }
    drush_print(count($databases['node']) . " Total Databases");

}

function drush_ezproxy_utils_ezproxy_count() {
    $ezproxy_query = new EntityFieldQuery();
    $ezproxy_resources = $ezproxy_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyCondition('status', 1)
            ->fieldCondition('field_db_use_proxy', 'value', 1)
            ->propertyOrderBy('title')
            ->execute();  
    drush_print(count($ezproxy_resources['node']) . " Ezproxy-Eligible Databases");
    
}

function drush_ezproxy_utils_ezproxy_packages() {
    $db_package_query = new EntityFieldQuery();
    $db_packages = $db_package_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database_package') //use bundle type 
        ->propertyCondition('status', 1)
        ->propertyOrderBy('title')
        ->execute(); 
    drush_print(count($db_packages['node']));
    
}

function drush_ezproxy_utils_build_standard_config() {
    
    $db_query = new EntityFieldQuery();
    $databases = $db_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database') //use bundle type 
        ->propertyCondition('status', 1)
        ->fieldCondition('field_db_use_proxy', 'value', 1)
        ->fieldCondition('field_db_ezproxy_special', 'value', 0)
        //->fieldCondition('field_db_grp_member_of') //FIXME implement when group configs are set
        ->propertyOrderBy('title')
        ->execute(); 
    drush_print("# Total Standard Databases" . count($databases['node']));
       
    //build the packages 
    
    foreach($databases['node'] as $database) {
        $database_fields = entity_metadata_wrapper('node', $database->nid);
        $changed = format_date($database_fields->changed->value());
        drush_print("#NID" . $database->nid . " - " . $changed);
        drush_print('Title ' . trim($database_fields->title->value()));
        $access_url = $database_fields->field_db_access_url->value();
        drush_print('URL ' . trim($access_url['url']));
        $domain = ezproxy_utils_get_domain($access_url['url']);
        drush_print('Domain ' . $domain);
        drush_print("");
        
    }
    
    
}

function drush_ezproxy_utils_build_special_config() {
    $db_query = new EntityFieldQuery();
    $databases = $db_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database') //use bundle type 
        ->propertyCondition('status', 1)
        ->fieldCondition('field_db_use_proxy', 'value', 1)
        ->fieldCondition('field_db_ezproxy_special', 'value', 1)
        //->fieldCondition('field_db_grp_member_of')
        ->propertyOrderBy('title')
        ->execute(); 
    drush_print("# Total Special Databases" . count($databases['node']));
       
    //build the packages 
    
    foreach($databases['node'] as $database) {
        $database_fields = entity_metadata_wrapper('node', $database->nid);
        $changed = format_date($database_fields->changed->value());
        drush_print("#NID" . $database->nid . " - " . $changed);
        drush_print('#Title ' . trim($database_fields->title->value()));
        drush_print(trim($database_fields->field_db_proxy_configuration->value()));
        drush_print("");
        
    }
}

function drush_ezproxy_utils_build_package_config() {
    
    $db_package_query = new EntityFieldQuery();
    $db_packages = $db_package_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database_package') //use bundle type 
        ->propertyCondition('status', 1)
        ->propertyOrderBy('title')
        ->execute(); 
    
    drush_print("#Total Package Configs " . count($db_packages['node']));
    foreach($db_packages['node'] as $db_package) {
        $package_fields = entity_metadata_wrapper('node', $db_package->nid);
        $changed = format_date($package_fields->changed->value());
        drush_print("#ID " . $db_package->nid . " - " . $changed);
        drush_print("#Title " . $package_fields->title->value());
        drush_print(trim($package_fields->field_dbgrp_proxy_configuration->value()));
    }
    drush_print("");
     
}

function drush_ezproxy_utils_databases_to_csv($filename = false, $inactive = false) {
    $db_query = new EntityFieldQuery();
    
    if($inactive) {
      $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyCondition('status', 0)
            ->propertyOrderBy('title')
            ->execute();  
    } else {
        $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyOrderBy('title')
            ->execute(); 
    }
    drush_print(count($databases['node']) . " Total Databases");
    /*
     * Use this function
     * http://php.net/manual/en/function.fputcsv.php
     */
    $csv_data = array();
    $fp = fopen($filename, 'w');




    foreach($databases['node'] as $database) {
        $base_url = "http://library.princeton.edu/resource/";
        $databases_csv_data = array();
        $database_fields = entity_metadata_wrapper('node', $database->nid);
        $changed = format_date($database_fields->changed->value());
        //drush_print("#NID" . $database->nid . " - " . $changed);
        $databases_csv_data[0] = $base_url . $database->nid;
        $databases_csv_data[1] = trim($database_fields->title->value());
        
        #drush_print('#Title ' . trim($database_fields->title->value()));
        #drush_print(trim($database_fields->field_db_proxy_configuration->value()));
        $url_info = $database_fields->field_db_access_url->value();
        $databases_csv_data[2] = trim($url_info['url']);
        $description = $database_fields->body->value();
        $databases_csv_data[3] = trim($description['safe_value']);
        array_push($csv_data, $databases_csv_data);
        fputcsv($fp, $databases_csv_data);
    }

    fclose($fp);
    drush_print($filename . " created.");
}

function drush_ezproxy_utils_databases_to_json($filename = false, $inactive = false) {
    $db_query = new EntityFieldQuery();
    
    if($inactive) {
      $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyCondition('status', 0)
            ->propertyOrderBy('title')
            ->execute();  
    } else {
        $databases = $db_query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'database') //use bundle type 
            ->propertyOrderBy('title')
            ->execute(); 
    }
    drush_print(count($databases['node']) . " Total Databases");
    /*
     * Use this function
     * http://php.net/manual/en/function.fputcsv.php
     */
    $csv_data = array();


    foreach($databases['node'] as $database) {
        $base_url = "http://library.princeton.edu/resource/";
        $databases_csv_data = array();
        $database_fields = entity_metadata_wrapper('node', $database->nid);
        $changed = format_date($database_fields->changed->value());
        //drush_print("#NID" . $database->nid . " - " . $changed);
        $databases_csv_data[0] = $base_url . $database->nid;
        $databases_csv_data[1] = trim($database_fields->title->value());
        
        #drush_print('#Title ' . trim($database_fields->title->value()));
        #drush_print(trim($database_fields->field_db_proxy_configuration->value()));
        $url_info = $database_fields->field_db_access_url->value();
        $databases_csv_data[2] = trim($url_info['url']);
        $description = $database_fields->body->value();
        $databases_csv_data[3] = trim($description['safe_value']);
        array_push($csv_data, $databases_csv_data);
    }
    ;
    file_put_contents($filename, json_encode($csv_data));

    drush_print($filename . " created.");
}


