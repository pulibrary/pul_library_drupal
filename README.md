# Local Development Set-up  

## Prerequisites: 

1. Install current versions of PHP, Apache, MySQL and NPM/Node.js
2. Create an empty local database in mysql
3. Obtain a copy of the drupal permissions script https://gist.github.com/kevinreiss/9e8f4a63500516c4454c.
4. Make sure you a domain for the site to run at like `library-local` is in your /etc/hosts file.
5. Define a vhost configuration for your `library-local` domain. 
6. Set up your drush alias file with an alias for your local site and obtain the credentials for the library-stage and library-prod environments. Drush alias typicall lives at ~/.drush/aliases.drushrc.php```.
7. Set-up https://github.com/pulibrary/discoveryutils. Make sure to define an alias to this application in your vhost configuration. It needs to run at the path ```/utils```.

## Site Setup

1. Clone the codebase to the directory your `library-local` domain uses as site root.
2. Run the drupal permissions script pointed at that directory. On OSX the group user for the apache web user is usually ```_www```.  
3. Sync the local database with production using drush ```drush sql-sync @libraryprod @mylocalalias```
4. Sync the local file system with production using drush ```drush rsync @libraryprod:%files/ @mylocalalias:%files```
5. cd to `cd $DRUPAL_ROOT/sites/all/themes/pul_base/` and run `npm install`
6. run `gulp deploy` in `sites/all/themes/pul_base/`
7. Create or Copy a settings.php file from stage or production and add the settings suggested in the next section to it.

## Settings.php 
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
