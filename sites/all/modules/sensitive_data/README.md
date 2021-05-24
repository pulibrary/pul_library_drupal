# Overview

Sensitive Data leverages the Site Audit tool to examine a site's content for
data that is potentially sensitive, such as credit card numbers or ID numbers.

# Installation

Sensitive Data is not a module; do not install it in your site root.

Copy the entire Sensitive Data project to either your unified or personal
Drush folder in the commands subdirectory, like

```
~/.drush/commands
```

then clear Drush's cache:

```
drush cc drush
```

See https://github.com/drush-ops/drush#commands to learn more about
installing Drush commands.

# Reports

One report, SensitiveData, is included. It can be called using Drush:

```
drush sensitive-data
```

To view available options, use Drush's help command:

```
drush help sensitive-data
```

# Checks

Two checks are included:

- EntityField: Examines all fields attached to entities
- WebformComponent: Examines components in webforms

# Data Types

Two data types are included:

- CreditCardNumber: Searches for data that looks like a credit card number
- UsSocialSecurityCardNumber: Search for data that looks like a U.S. Social
  Security number

# Options

See the documentation for the Site Audit module for more information about
available options related to output formats and skipping reports or checks.
