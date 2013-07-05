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
        'aliases' => array('showdbs'),
        'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
                
    );
    $items['ezproxy-build-config'] = array(
        
    ); 
    return $items;
    
}

function drush_ezproxy_utils_total_databases($inactive = false) {
    $db_query = new EntityFieldQuery();
    $databases = $db_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database') //use bundle type 
        ->propertyOrderBy('title')
        ->execute(); 
    
    drush_print(count($databases['node']) . " Total Databases");

}

function drush_ezproxy_utils_build_config() {
    $db_package_query = new EntityFieldQuery();
    $db_packages = $db_package_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database_package') //use bundle type 
        ->propertyOrderBy('title')
        ->execute(); 
    
    $db_query = new EntityFieldQuery();
    $databases = $db_query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'database') //use bundle type 
        ->propertyOrderBy('title')
        ->execute(); 
    
    //build the packages 
    
    
}
