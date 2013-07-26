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
        'aliases' => array('ez-packs'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    
    $items['ezproxy-build-config'] = array(
        'description' => dt('Print out current Ezproxy Configuration File'),
        
        'examples' => array(
            'Standard' => 'drush ezproxy-build-config',
            
        ),
        'aliases' => array('ez-bsc'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    ); 
    $items['build-special-config'] = array(
        'description' => dt('Print out current Ezproxy Configuration File'),
        
        'examples' => array(
            'Standard' => 'drush ezproxy-build-config',
            
        ),
        'aliases' => array('ez-bsp'),
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

function drush_ezproxy_utils_ezproxy_build_config() {
    /* fill in when these are set up
    $db_package_query = new EntityFieldQuery();
    $db_packages = $db_package_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database_package') //use bundle type 
        ->propertyCondition('status', 1)
        ->propertyOrderBy('title')
        ->execute(); 
     * 
     */
    
    $db_query = new EntityFieldQuery();
    $databases = $db_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database') //use bundle type 
        ->propertyCondition('status', 1)
        ->fieldCondition('field_db_use_proxy', 'value', 1)
        ->fieldCondition('field_db_ezproxy_special', 'value', 0)
        //->fieldCondition('field_db_grp_member_of')
        ->propertyOrderBy('title')
        ->execute(); 
    drush_print("# Total Standard Databases" . count($databases['node']));
       
    //build the packages 
    
    foreach($databases['node'] as $database) {
        drush_print("#NID" . $database->nid);
        $database_fields = entity_metadata_wrapper('node', $database->nid);
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
        drush_print("#NID" . $database->nid);
        $database_fields = entity_metadata_wrapper('node', $database->nid);
        drush_print('Title ' . trim($database_fields->title->value()));
        drush_print(trim($database_fields->field_db_proxy_configuration->value()));
        drush_print("");
        
    }
}
