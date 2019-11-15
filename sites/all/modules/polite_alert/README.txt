CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Installation
 * Configuration



INTRODUCTION
------------

Polite Alert allows the site admins to configure a site-wide alert banner.
Site visitors may dismiss the banner and it will not reappear during the current browser session.
There are several Drupal alert modules. Each has it's purpose. Polite Alert was created to fill a need for an alert
that users could dismiss without having it reappear again throughout the session.


INSTALLATION
------------

Install the module using the standard method described here.
https://www.drupal.org/docs/7/extending-drupal-7/installing-drupal-7-contributed-modules


CONFIGURATION
-------------
 * Visit the permissions page at /admin/people/permissions to grant "Administer polite alert"
   permission to desired roles. All roles can view the alert.
 * Create an alert via the polite alert settings page at /admin/config/polite-alert/settings.
   Be sure to check the "Display the alert" checkbox to make the alert active.
 * Place the polite alert block in the desired region via the blocks page found at /admin/structure/block.
