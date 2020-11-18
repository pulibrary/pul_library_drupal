## Contents of this file

* [Introduction](#intro)
* [Requirements](#requirements)
* [Recommended modules](#recommended)
* [Installation](#install)
* [Configuration](#config)
* [Troubleshooting](#trouble)
* [Known glitches](#glitches)
* [Maintainer](#maintainers)


## Introduction<a id="intro"></a>

This module is a whitelisting tool for site managers that want to
allow untrusted users to insert images and iframed content (usually
videos) in a site they manage.

It is a companion whitelist filter for **WYSIWYG Filter** module. It
was made specifically to address the following two issues:

* [Please document how to exclude externally linked images][A]
* [Allow for iframes from a whitelisted list of domains][B]

## Requirements<a id="requirements"></a>

This project requires the following modules:

* [**Advanced help hint**][1]  
  To display a hint about using **Advanced Help** in the standard help text.
* [**WYSIWYG Filter**][2]  
  Whitelist filter for elements and attributes


## Recommended modules<a id="recommended"></a>

* [**Advanced Help**][3]:  
  When this module is enabled, display of the project's `README.md`
  will be rendered when you visit
  `help/srcwithelist/README.md`.
* [**Markdown filter**][4]:  
  When this module is enabled, display of the project's `README.md`
  will be rendered with the markdown filter.


## Installation<a id="install"></a>

Install as you would normally install a contributed Drupal
module. See: [Installing modules][5] for further information.

## Configuration<a id="config"></a>

To have access to the filter configuration, the role needs the
permission to “Administer filters”.

When you enable *Src whitelist* filter module, you may allow iframes,
even if you do not enable and configure the filter.  **This is
dangerous** and you should not to it.  Always make sure that you
configure the filter and place it in the filter stack for all
text formats that also use the **WYSIWYG Filter**.

When you enable the *Src whitelist* filter for a text format, you'll
see four checkboxes and two text areas under “Filter settings”.  Here
is how to configure these settings:

* The checkbox **Replace disallowed media assets with text**  
  If you uncheck this, media assets (i.e. images and videos)
  disallowed by the filter will simply not appear.  If you check this,
  in place of the disallowed asset there will be a brief text,
  explaining why the asset is not shown.

* The checkbox **Allow images to link to external URLs**  
  Unless you check this, the filter will replace remotely linked
  images with an advisory text when output.  Allowing external images
  to be rendered is not secure.

* The checkbox **Allow iframes**  
  Unless you check this, the filter will replace iframes with an
  advisory text when output.  Allowing iframes to be rendered is not
  secure, but the risk can be mitigated by whitelisting.

* The text area **Whitelisted trusted content iframe domains**.  
  In this text area, you can enter a comma-separated list of domains
  that shall be whitelisted.

* The checkbox **Enforce compatibility with Twitter Bootstrap video classes**  
  If you use *Twitter Bootstrap*, and prefer its
  `embed-responsive`-classes for video, you can enforce this
  preference by checking this box. The filter will replace any iframes
  that has the `frameborder` attribute set with an advisory text when
  output.

* The text area **Whitelisted trusted video iframe domains**.  
  In this text area, you can enter a comma-separated list of domains
  that shall be whitelisted. The setting of the checkbox to enforce
  compatibility with Twitter Bootstrap video classes will be applied.

If you use the filter to “correct faulty and chopped off HTML”, make
sure that it is run after the “Src whitelist”-filter.

The HTML `iframe` element can be used to inject all sort of malware in
your site, and should always be considered a security risk.  This
module let you mitigate the risk by letting you whitelist domains
*you* consider trustworthy.

Note that when you whitelist a domain all subdomains will also be
included. Example: “example.com” will match “example.com”,
“www.example.com”, etc.

## Troubleshooting<a id="trouble"></a>

* `Warning : DOMDocument::loadHTML():`  
  Your site's DOM is invalid.  This is a potential GIGO-situation and
  may result in the filter not working as intended. To fix, make sure
  your site's DOM is valid. DOM corruption is usually caused by a bug
  in a module installed on the site.

* Contents after iframes are removed.  
  Your site's DOM is invalid, *and* the filter to “correct faulty and
  chopped off HTML” is run before the “Src whitelist” filter.

## Known glitches<a id="glitches"></a>

The **WYSIWYG Filter**, which this project depends on, is somewhat
paranoid about iframes. If you checkbox “Allow iframes” and then try
to add one, **WYSIWYG Filter** will not let you submit the form.  You
need to do this in two steps.  First check the box to “Allow iframes”,
then press “Save configuration”. When the form reload, you should be
able to add `iframe[src]` to the “HTML elements and attributes”
whitelist.  You must press “Save configuration” again to make the
setting stick.

## Maintainers<a id="maintainers"></a>

The module was written by [gisle][6] (Gisle Hannemyr).

Any help with development (patches, reviews, comments) are welcome.

Development has been sponsored by [Hannemyr Nye Medier AS][7].

If the maintainer of the **WYSIWYG Filter** project wants to
incorporate the filters provided by this module, I'll be happy to
submit a patch and obsolete this module.

[1]: https://www.drupal.org/project/advanced_help_hint
[2]: https://www.drupal.org/project/wysiwyg_filter
[3]: https://www.drupal.org/project/advanced_help
[4]: https://www.drupal.org/project/markdown
[5]: https://drupal.org/documentation/install/modules-themes/modules-7
[6]: https://www.drupal.org/u/gisle
[7]: http://hannemyr.com/hnm/
[A]: https://www.drupal.org/node/2915949
[B]: https://www.drupal.org/node/2663486