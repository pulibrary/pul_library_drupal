# Local Development With Lando
# Rare Books and Special Collections

## Local development with Lando



1. `git clone git@github.com:pulibrary/pul_library_drupal.git`
2. Create a local `sites/default/settings.php` file including the following:

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
    $base_url = "http://http://library-main.lndo.site";
    ```
3. `lando start`
4. `cp drush/librarymain-example.aliases.drushrc.php drush/librarymain.aliases.drushrc.php`
5. Adjust the config values in the  `drush/librarymain.aliases.drushrc.php` file
6. `drush @librarymain.prod sql-dump > dump.sql` # no lando to leverage host box ssh config
7. `lando db-import dump.sql`
8. `drush rsync @librarymain.prod:%files @librarymain.local:%files` # no lando to leverage host box ssh config
9. `lando drush uli your-username`

### Solr / Search API

1. In your browser, go to `/admin/config/search/search_api/server/`
2. Edit **Solr host** to have the value of `search`
3. Reindex to view search results in the lando dev/local site.

### NPM and Gulp - build styles for drupal theme layer

1. `cd sites/all/themes/pul_base`
2. `lando npm install`
3. `lando gulp deploy` (or any other gulp task)


## Prerequisites:

### Needs Work ###
1. Set-up https://github.com/pulibrary/discoveryutils. Make sure to define an alias to this application in your vhost configuration. It currently needs to run at the path ```/utils```.

### Configure settings.php
Here are some helpful things to add to your settings.php for local development:
```
/* Overrides for the local environment */
$conf['securepages_enable'] = 0;
/* This should be set in your php.ini file */
ini_set('memory_limit', '1G');
/* Turn off Caching */
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

## If you manually dump a drupal database make sure to dump only the tables you need
```drush @librarymain.prod sql-dump --structure-tables-list=watchdog,session,cas_data_login,history,captcha_sessions,cache,cache_* > dumpfile.sql```
