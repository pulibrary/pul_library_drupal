<?php

/**
 * Local alias
 * Set the root and site_path values to point to your local site
 */
// $aliases['local'] = array(
//   'root' => '/app', // Path to project on local machine
//   'uri'  => 'http://library-main.lndo.site',
//   'path-aliases' => array(
//     '%dump-dir' => '/tmp',
//     '%files' => 'sites/default/files',
//   ),
// );

/**
 * Production alias
 * Set each option to match your configuration
 */
// $aliases['prod'] = array (
//   'uri' => 'https://library.princeton.edu',
//   'root' => '/var/www/library_cap/current', // Path to directory on app server
//   'remote-user' => 'deploy', // Add user
//   'remote-host' => 'app-server-name.princeton.edu', // Add app server name, including .princeton.edu
//   'ssh-options' => '-o PasswordAuthentication=no -i .ssh/id_rsa',
//   'path-aliases' => array(
//     '%dump-dir' => '/tmp',
//   ),
//   'source-command-specific' => array (
//     'sql-sync' => array (
//       'no-cache' => TRUE,
//       'structure-tables-key' => 'common',
//     ),
//   ),
//   'command-specific' => array (
//     'sql-sync' => array (
//       'sanitize' => TRUE,
//       'no-ordered-dump' => TRUE,
//       'structure-tables' => array(
//        // You can add more tables which contain data to be ignored by the database dump
//         'common' => array('cache', 'cache_*', 'history', 'sessions', 'watchdog', 'cas_data_login', 'captcha_sessions'),
//       ),
//     ),
//   ),
// );
?>
