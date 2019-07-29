# Local Development With Lando
# Rare Books and Special Collections

## Local development with Lando



1. `git clone git@github.com:pulibrary/pul_library_drupal.git`
2. `cp sites/default/default.settings.php sites/default/settings.php`
3. In `sites/default/settings.php` includd the following lando-style db config values:

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
3. Add the following useful local development configuration to the end of `sites/default/settings.php`
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
3. `mkdir .ssh` # excluded from version control
4. `cp $HOME/.ssh/id_rsa .ssh/.`
5. `cp $HOME/.ssh/id_rsa.pub .ssh/.` // key should be registered in princeton_ansible deploy role
3. `lando start` Start up lando
4. `cp drush/librarymain-example.aliases.drushrc.php drush/librarymain.aliases.drushrc.php`
5. Adjust the config values in the  `drush/librarymain.aliases.drushrc.php` file to match the current remote drupal environment
```
$aliases['prod'] = array (
   'uri' => 'https://library.princeton.edu',
   'root' => '', // Add root
   'remote-user' => 'deploy', // Add user
   'remote-host' => 'app-server-name', // Add app server host name
   'ssh-options' => '-o PasswordAuthentication=no -i .ssh/id_rsa',
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
6. Uncomment the alias block for the local lando site
```
$aliases['local'] = array(
  'root' => '/app', // Path to project on local machine
  'uri'  => 'http://library-main.lndo.site',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%files' => 'sites/default/files',
  ),
);
```
7. `lando drush @librarymain.prod sql-dump --structure-tables-list='watchdog,sessions,cas_data_login,history,captcha_sessions,cache,cache_*' > dump.sql`
8. `lando db-import dump.sql`
9. `lando drush rsync @librarymain.prod:%files @librarymain.local:%files`
10. `lando drush uli your-username`

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

## Prerequisites:

### Needs Work ###
1. Set-up https://github.com/pulibrary/discoveryutils. Make sure to define an alias to this application in your vhost configuration. It currently needs to run at the path `/utils`.

## If you manually dump a drupal database make sure to dump only the tables you need
```
drush @librarymain.prod sql-dump --structure-tables-list='watchdog,sessions,cas_data_login,history,captcha_sessions,cache,cache_*' > dumpfile.sql
```
