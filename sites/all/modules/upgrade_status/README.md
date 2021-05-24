# Upgrade Status Documentation

## Summary

Upgrade Status module was designed to provide an easy way tell when your website is ready to be upgraded to the next Drupal version. The module will compile a list of your projects along with a status, which can be one of the following:

* Available: A stable release of this project is available.
* In development: A development release of this project is available, which can be installed for testing purposes.
* Not ported yet: There are no releases available for this project.

Clicking on any of the modules' boxes will expand the area and show you a link to download the new version of the project, as well as read its release notes.

If one or more of your installed modules are not yet ported to a new Drupal
major version, you should

1. Search the modules' issue queue for already existing issues that might contain a patch, and test that patch yourself.  See [Applying patches](https://drupal.org/patch/apply) for further information.
1. Go ahead and install the [Coder module](https://drupal.org/project/coder), use its code review rules for migrating a module to the new Drupal version, create a patch, and file a new issue against that project with your patch attached.  See [Making a Drupal patch with Git](https://drupal.org/patch) for further information.

If you've checked your projects out from Git, you will need the [Git Deploy](http://drupal.org/project/git_deploy) module in order for this module to be
able to read versions.

For a full description visit [the project page](https://drupal.org/project/upgrade_status).

For bug reports, feature suggestions and latest developments, see the [issue queue](https://drupal.org/project/issues/upgrade_status).

## Installation

Install as usual. See [the Drupal 6 instructions](https://drupal.org/node/70151) or [the Drupal 7 instructions](https://www.drupal.org/docs/7/extend/installing-modules) for further information.

## Usage

Go to Administer >> Reports >> Available updates >> Upgrade status and check the status of your installed modules.

## Contact

Current maintainers:

* Daniel F. Kudwien (sun) - dev@unleashedmind.com

This project has been sponsored by:

* [UNLEASHED MIND](http://www.unleashedmind.com): Specialized in consulting and planning of Drupal powered sites, UNLEASHED MIND offers installation, development, theming, customization, and hosting to get you started. Visit them for more information.

