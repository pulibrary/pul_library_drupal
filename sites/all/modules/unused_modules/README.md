# Unused Modules

Over time your website gets unwieldy so it needs cleaning up.

Though it's simple to find what modules are enabled/disabled, it's rather
difficult to find out if this is true for a project.

This is a helper / development module that lists unused modules / projects that
can be safely deleted.

This makes your repository cleaner and your website faster.

## Naming / nomenclature

* Project: a project that has its own namespace and can be downloaded from
Drupal.org. Say "Views".
* Module: a project can contain multiple modules. Say "views" and "views_ui".

## Examples

* Module "views_ui" is disabled and module "views" is enabled. The project
"views" is not safe to delete.
* Module "admin_menu" is disabled and module "admin_menu_toolbar" is also
disabled. The project "admin_menu" is safe to delete.

## Notes / caveats

* Core modules are not listed, never delete them!
* If a module occurs multiple times it is listed only once and always in the
most specific location. This is because the method to track modules is a Drupal
function that returns modules that can be enabled. That function favours
specific (/sites/your-site) over generic (/sites/all).
See https://www.drupal.org/node/176046 .
* Always make a full backup of your database and codebase before deleting modules!
* Always uninstall modules before deleting them.
* Double / triple check results!!!

## Usage

Install and go to: /admin/config/development/unused_modules

Sorry, it's a heavy page load.

## Site Audit integration

Site Audit is a Drupal static site analysis platform that generates reports with
actionable best practice recommendations. Unused Modules is compatible with
Site Audit and can be installed on an entire platform, eliminating the need for
module installation.

To use, put Unused Modules either in your codebase or in your Drush command
locations, then:

    # Clear Drush cache.
    drush cc drush
    # Audit extensions.
    drush audit-extensions

For more information on Site Audit, visit https://drupal.org/project/site_audit
