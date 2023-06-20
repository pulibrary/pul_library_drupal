# Library Site

https://library.princeton.edu/ is supported by this repo.

## Before deploying main Library Drupal to production

1. Check if end users have changed any settings. Follow https://github.com/pulibrary/pul_library_drupal/wiki/Sync-a-Feature(s)-from-Production

## Local development with Lando

1. `git clone git@github.com:pulibrary/pul_library_drupal.git`
2. `cd pul_library_drupal`
2. `cp sites/default/default.settings.php sites/default/settings.php`
3. In `sites/default/settings.php` include the following lando-style db config values:

    ```
    $databases = array (
      'default' =>
      array (
        'default' =>
        array (
          'database' => 'drupal7',
          'username' => 'drupal7',
          'password' => 'drupal7',
          'host' => 'database',
          'port' => '3306',
          'driver' => 'mysql',
          'prefix' => '',
        ),
      ),
    );
    # needed for CAS logins to work
    $base_url = "http://library-main.lndo.site";
    ```
4. Add the following useful local development configuration to the end of `sites/default/settings.php`
```
/* Overrides for the local environment */
$conf['securepages_enable'] = 0;
/* This should be set in your php.ini file */
ini_set('memory_limit', '1G');
/* Turn off all caching */
$conf['css_gzip_compression'] = FALSE;
$conf['js_gzip_compression'] = FALSE;
$conf['cache'] = 0;
$conf['block_cache'] = 0;
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
/* end cache settings */
/* Turn on theme debugging. Injects the path to every Template utilized in the HTML source. */
$conf['theme_debug'] = TRUE;

/* Makes sure jquery is loaded on every page */
/* set to false in production */
$conf['javascript_always_use_jquery'] = TRUE;
```
5. `mkdir .ssh` # excluded from version control
6. `cp $HOME/.ssh/id_ed25519 .ssh/.`
7. `cp $HOME/.ssh/id_ed25519.pub .ssh/.` // key should be registered in princeton_ansible deploy role
8. `lando start` Start up lando
9. `cp drush/librarymain-example.aliases.drushrc.php drush/librarymain.aliases.drushrc.php`
10. Adjust and uncomment the config values in the  `drush/librarymain.aliases.drushrc.php` file to match the current remote drupal environment
```
$aliases['prod'] = array (
   'uri' => 'https://library.princeton.edu',
   'root' => '/var/www/library_cap/current', // Path to directory on app server
   'remote-user' => 'deploy', // Add user
   'remote-host' => 'library-prod3.princeton.edu', // Add app server name, including .princeton.edu
   'ssh-options' => '-o PasswordAuthentication=no -i .ssh/id_ed25519',
   'path-aliases' => array(
     '%dump-dir' => '/tmp',
   ),
   'source-command-specific' => array (
     'sql-sync' => array (
       'no-cache' => TRUE,
       'structure-tables-key' => 'common',
     ),
   ),
   'command-specific' => array (
     'sql-sync' => array (
       'sanitize' => TRUE,
       'no-ordered-dump' => TRUE,
       'structure-tables' => array(
        // You can add more tables which contain data to be ignored by the database dump
         'common' => array('cache', 'cache_*', 'history', 'sessions', 'watchdog', 'cas_data_login', 'captcha_sessions'),
       ),
     ),
   ),
 );
```
11. Uncomment the alias block for the local lando site
```
$aliases['local'] = array(
  'root' => '/app',
  'uri'  => 'http://library-main.lndo.site',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%files' => 'sites/default/files',
  ),
);
```
12. `bundle exec cap production database_dump` // this will produce a datestamped dump file in the format "backup-YYYY-MM-DD-{environment}.sql.gz".
13. `lando db-import backup-YYYY-MM-DD-{environment}.sql.gz`
14. `lando drush rsync @librarymain.prod:%files @librarymain.local:%files`
15. `lando drush vset --exact file_temporary_path /tmp`
16. `lando drush uli your-username`

### Use NPM and Gulp to build styles for drupal theme layer

1. `cd sites/all/themes/pul_base`
2. `lando npm install`
3. `lando gulp deploy` (or any other gulp task)

### Index site content in Solr via Search API

1. In your browser, go to `{CURRENT_LANDO_HOST_BASE_URL}admin/config/search/search_api/server/search_api_library_staging/edit`
   1. Edit **Solr hostname** to have the value of `search`
   1. Edit **Solr path** to have a value of `/solr/libwww-dev`
1. Clear the search index in the browser on the view page (you should be there after the edit) `{CURRENT_LANDO_HOST_BASE_URL}admin/config/search/search_api/server/search_api_library_staging` and click `Delete all indexed data` button on the bottom left of the page
1. `lando drush search-api-index` will index all content to the local solr index
1. `lando drush cc all` will update the caches to show the data


### Test Redis Cache Backend
Redis can be used as a cache backend. To test this on a local dev instance do the following.

1. Comment out the following two lines from settngs.php
    ```
    $conf['cache'] = 0;
    $conf['block_cache'] = 0;
    ```
1. Adding the following to the end of settings.php
    ```
    $conf['redis_client_interface'] = 'Predis'; // Can be "Predis".
    $conf['redis_client_host']      = 'cache';  // Your Redis instance hostname.
    $conf['lock_inc']               = 'sites/all/modules/redis/redis.lock.inc';
    $conf['path_inc']               = 'sites/all/modules/redis/redis.path.inc';
    $conf['cache_backends'][]       = 'sites/all/modules/redis/redis.autoload.inc';
    $conf['cache_default_class']    = 'Redis_Cache';
    $conf['cache_class_cache'] = 'Redis_Cache';
    $conf['cache_class_cache_bootstrap'] = 'Redis_Cache';
    $conf['cache_class_cache_menu'] = 'Redis_Cache';
    $conf['cache_class_cache_block'] = 'Redis_Cache';
    $conf['cache_class_cache_content'] = 'Redis_Cache';
    $conf['cache_class_cache_filter'] = 'Redis_Cache';
    $conf['cache_class_cache_form'] = 'Redis_Cache';
    $conf['cache_class_cache_page'] = 'Redis_Cache';
    ```
1. Load a few pages. Test to confirm cache is working:
    ```
    lando drush redis-cli
    > keys "*cache_bootstrap*"
    ```
    You will output like:
      ```
      1) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:module_implements"
      2) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:system_list"
      3) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:bootstrap_modules"
      4) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:variables"
      5) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:hook_info"
      6) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:workbench_access_tree"
      7) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:lookup_cache"
      8) "74c6c62ca2afc9b801af0982f645d4a3:cache_bootstrap:_last_flush"
      ```


## Using discoveryutils Locally
In order to use a local instance of [discoveryutils](https://github.com/pulibrary/discoveryutils), you will need to have both the library site and discoveryutils running via lando.

1. In the root directory of your local instance of the library site run `lando start`
1. In the root directory of your local instance of discoveryutils run `lando start`
1. Comment out line 4 in `sites/all/modules/custom/catalog_block/catalog_block.module`
1. Uncomment line 6 in `sites/all/modules/custom/catalog_block/catalog_block.module`

## Deploy to server

We have capistrano set up to deploy our servers

1. `cap staging deploy` will deploy the master branch to staging
1. `BRANCH=other cap staging deploy` will deploy the other branch to staging

## Uploading and importing a SQL dump
capistrano can be used to upload and import a sql dump onto one of the servers. It will upload the dump file to the server, import the dump via drush, then clear and update the search index. You should create the sql dump and then run
```
SQL_DIR=<path_to_sql_dump_file> SQL_GZ=<dump_file_name> cap staging drupal:database:upload_and_import
```

For example if my sql dump file is in `/tmp/dump.sql` I would run:
```
SQL_DIR=/tmp/ SQL_GZ=dump.sql.gz cap staging drupal:database:upload_and_import
```

### Sync a feature(s) from production
See https://github.com/pulibrary/pul_library_drupal/wiki/Sync-a-Feature(s)-from-Production 
