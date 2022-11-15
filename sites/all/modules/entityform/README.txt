CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended Modules
 * Installation
 * Configuration
 * Maintainers


INTRODUCTION
------------

The Entity module enables the user to create front-end forms (fieldable
entities), which contain fields that can be defined. These forms use the
standard Drupal fields. This means that out of the box, the user can use any
standard Drupal node field.

For more information on adding fields visit the Field UI documentation here:
http://drupal.org/documentation/modules/field-ui

 * For a full description of the module visit:
   https://www.drupal.org/project/entityform

 * To submit bug reports and feature suggestions, or to track changes visit:
   https://www.drupal.org/project/issues/entityform

 * For latest documentation visit: https://drupal.org/node/1432894


REQUIREMENTS
------------

This module requires the following:

 * Entity API - https://www.drupal.org/project/entity
 * Views - https://www.drupal.org/project/views
 * Rules (7.x-1.x only) - https://www.drupal.org/project/rules/


RECOMMENDED MODULES
-------------------

The Entityform module was written to specifically take advantage of Drupal's
Entity API. This feature results in out of the box integration with most other
entity aware modules. Here are some of the more notable modules with which
Entityform integrates:

 * Date - https://www.drupal.org/project/date
 * IMCE - https://www.drupal.org/project/imce
 * Token - https://www.drupal.org/project/token
 * Wysiswyg - https://www.drupal.org/project/wysiwyg
 * Views - https://www.drupal.org/project/views
 * Views Data Export: For downloading submissions -
   https://www.drupal.org/project/views_data_export
 * Features (Entityforms are exportable) -
   https://www.drupal.org/project/features
 * Rules: To react to Entityform submissions -
   https://www.drupal.org/project/rules
 * Entity Reference: For embedding Entityforms in nodes and other entities and
   allows the user to reference other Entities in field submissions -
   https://www.drupal.org/project/entityreference

For more projects that integrate with Entityform, visit:

 * Common Tasks in Entityform - https://www.drupal.org/node/1432932


INSTALLATION
------------

Install the Entityform module as you would normally install a contributed Drupal
module. Visit https://www.drupal.org/node/895232 for further information.


CONFIGURATION
--------------

    1. Navigate to Administration > Modules and enable the Entityform module and
       its dependencies.
    2. Navigate to entity the administration interface under Administration >
       Content > Entityform Types and "Add an Entityform Type".
    3. Fill out basic form information. Under Access Settings make sure at least
       one role can submit the form. Select "Save Entityform Type".
    4. Select manage fields and add fields the same fashion as a node content
       type.
    5. Once the user has added fields the user can view the form by selecting
       the Submit Link on Administration > Structure > Entity Form Types.


MAINTAINERS
-----------

 * Joël Pittet (joelpittet) - https://www.drupal.org/u/joelpittet
 * Ted Bowman (tedbow) - https://www.drupal.org/u/tedbow

Supporting Organizations:

 * Six Mile Tech - https://www.drupal.org/six-mile-tech
 * The University of British Columbia -
   https://www.drupal.org/the-university-of-british-columbia
