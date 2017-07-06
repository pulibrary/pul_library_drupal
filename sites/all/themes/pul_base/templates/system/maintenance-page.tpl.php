<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?>
<!DOCTYPE html>
<?php if (omega_extension_enabled('compatibility') && omega_theme_get_setting('omega_conditional_classes_html', TRUE)): ?><!--[if IEMobile 7]><html class="ie iem7" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
<!--[if lte IE 6]><html class="ie lt-ie9 lt-ie8 lt-ie7" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="ie lt-ie9 lt-ie8" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
<!--[if IE 8]><html class="ie lt-ie9" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><html class="ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
<![if !IE]>
<html dir="<?php print $language->dir; ?>" lang="<?php print $language->language; ?>">
<![endif]><?php else: ?><?php endif; ?>
<head>
  <title><?php print $head_title; ?></title><?php print $head; ?><?php print $styles; ?><?php print $scripts; ?>
</head>
<body>
  <div class="l-page">
    <header class="l-header" role="banner">
      <ul id="jump-links">
        <li><a href="#edit-query" class="jump-link"><?php print t('Skip to search box'); ?></a></li>
        <li><a href="#main-content" class="jump-link"><?php print t('Skip to main content'); ?></a></li>
      </ul>
      <div class="wrapper wrapper--branding">
        <section class="l-region l-region--branding">
          <h2><a class="site-logo" href="/" title="Princeton University Library - Home"><img alt="Home" src="/sites/all/themes/pul_base/assets/public/images/logo.png"><span class="site-name">Princeton University Library</span></a></h2>
          <div class="block block--allsearch-block block--allsearch-block-allsearch-search" id="block-allsearch-block-allsearch-search">
            <div class="block__content block__content">
              <form accept-charset="UTF-8" action="https://library.princeton.edu/searchit/search/coreall" class="allsearch-block-form" id="allsearch-block-form" method="get" name="allsearch-block-form">
                <div>
                  <div class="form-item form-type-textfield form-item-query">
                    <label for="edit-query">All Search Box <span class="form-required" title="This field is required.">*</span></label> <input class="form-text required" id="edit-query" maxlength="128" name="query" placeholder="Search for library materials and website content" size="80" type="text">
                  </div><input class="form-submit" id="edit-submit" name="op" type="submit" value="Search"> <input name="form_id" type="hidden" value="allsearch_block_form"> <button class="form-submit" id="allsearch-submit-btn" name="op" type="submit"><span class="icon-search"><span class="hide">Search</span></span></button>
                </div>
              </form>
            </div>
          </div>
        </section>
      </div>
      <div class="wrapper wrapper--navigation">
        <div class="l-region l-region--navigation">
          <a class="centered-navigation-menu-button" href="#">MENU</a>
          <nav class="block block--system block--menu block--system-main-menu centered-navigation-menu pul-processed" id="block-system-main-menu" role="navigation">
            <ul class="menu">
              <li class="first expanded">
                <a href="/research" title="Find library materials">Research Tools</a>
                <ul class="menu">
                  <li class="first leaf">
                    <a href="http://dss.princeton.edu">Data and Statistics</a>
                  </li>
                  <li class="leaf">
                    <a href="/research/databases">Databases</a>
                  </li>
                  <li class="leaf">
                    <a href="http://findingaids.princeton.edu/">Finding Aids</a>
                  </li>
                  <li class="leaf">
                    <a href="http://catalog.princeton.edu">Main Catalog</a>
                  </li>
                  <li class="leaf">
                    <a href="http://libguides.princeton.edu/newspapers">Newspapers</a>
                  </li>
                  <li class="leaf">
                    <a href="https://pulsearch.princeton.edu/">New Catalog</a>
                  </li>
                  <li class="leaf">
                    <a href="/resource/4165">Worldcat</a>
                  </li>
                  <li class="last leaf menu-more-link">
                    <a href="/research" title="View more research tools">More</a>
                  </li>
                </ul>
              </li>
              <li class="expanded">
                <a href="/libraries" title="View a list of our Libraries and Collections">Libraries and Collections</a>
                <ul class="menu">
                  <li class="first leaf">
                    <a href="/collections">Collections</a>
                  </li>
                  <li class="leaf">
                    <a href="/libraries">Libraries</a>
                  </li>
                  <li class="leaf">
                    <a href="/help/recommend-purchase">Recommend a Purchase</a>
                  </li>
                  <li class="leaf">
                    <a href="/collections-and-collection-development">Collections and Collecting</a>
                  </li>
                  <li class="last leaf menu-more-link">
                    <a href="/libraries" title="View more libraries and collections">More</a>
                  </li>
                </ul>
              </li>
              <li class="expanded">
                <a href="/services" title="View a list of our Library Services">Library Services</a>
                <ul class="menu">
                  <li class="first leaf">
                    <a href="/services/article-express">Article Express</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/borrowdirect">Borrow Direct</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/access/circulation-policies">Circulation</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/reserves">Course Reserves</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/interlibrary-services">Interlibrary Loan (ILL)</a>
                  </li>
                  <li class="leaf">
                    <a href="/help">Research Help</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/technology">Technology</a>
                  </li>
                  <li class="leaf">
                    <a href="/accounts">Your Accounts</a>
                  </li>
                  <li class="last leaf menu-more-link">
                    <a href="/services" title="View more library services">More</a>
                  </li>
                </ul>
              </li>
              <li class="expanded">
                <a href="/about" title="About the library">About the Library</a>
                <ul class="menu">
                  <li class="first leaf">
                    <a href="http://rbsc.princeton.edu/exhibitions">Exhibitions</a>
                  </li>
                  <li class="leaf">
                    <a href="/alumni">For Alumni</a>
                  </li>
                  <li class="leaf">
                    <a href="/services/access">Policies and Guidelines</a>
                  </li>
                  <li class="leaf">
                    <a href="/staff/directory">Staff Directory</a>
                  </li>
                  <li class="leaf">
                    <a href="/visitors">Visitors</a>
                  </li>
                  <li class="last leaf menu-more-link">
                    <a href="/about" title="View more about the library">More</a>
                  </li>
                </ul>
              </li>
              <li class="last leaf">
                <a href="/help/contact-us" title="Contact the Library">Contact Us</a>
              </li>
            </ul>
          </nav>
        </div>
      </div>
    </header>
    <section class="l-region l-region--main" id="main-content">
      <div class="l-content" role="main">
        <?php if ($title): ?>
        <h1><?php print $title; ?></h1><?php endif; ?><?php print $messages; ?><?php print $content; ?>
      </div><?php print render($page['sidebar_first']); ?><?php print render($page['sidebar_second']); ?>
    </section>
    <footer class="l-footer" role="contentinfo">
      <div class="l-region l-region--footer pul-processed">
        <nav aria-label="Research Tools" class="block block--menu block--menu-menu-find" id="block-menu-menu-find" role="navigation">
          <h2 class="block__title block__title"><a class="footer-link" href="/research">Research Tools</a></h2>
          <ul class="menu">
            <li class="first leaf">
              <a class="footer-link" href="http://dss.princeton.edu">Data and Statistics</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/research/databases" title="Browse Research Databases by Title or Subject">Databases</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="http://getit.princeton.edu/" title="Browse Electronic Journal Titles">E-journals</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/library-guides" title="Library Research Guides">Research Guides</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="http://catalog.princeton.edu" title="Access the library's main catalog">Main Catalog</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="https://pulsearch.princeton.edu/">New Catalog</a>
            </li>
            <li class="last leaf">
              <a class="footer-link" href="/databases/subject/special-collections" title="Finding Aids for the Princeton University Archives and Special Collections">Special Collections</a>
            </li>
          </ul>
        </nav>
        <nav aria-label="Library Services" class="block block--menu block--menu-menu-information-for" id="block-menu-menu-information-for" role="navigation">
          <h2 class="block__title block__title"><a class="footer-link" href="/services">Library Services</a></h2>
          <ul class="menu">
            <li class="first leaf">
              <a class="footer-link" href="/services/article-express" title="Use our Interlibrary Loan and Article Express Services">Article Express</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/borrowdirect">Borrow Direct</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/access/circulation-policies">Circulation</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/reserves">Course Reserves</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/interlibrary-services" title="Interlibrary Loan Services, Article Express">Interlibrary Loan (ILL)</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/access">Library Access</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/services/study-spaces">Study Spaces and Lockers</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/help/trace-materials">Trace a Book</a>
            </li>
            <li class="last leaf">
              <a class="footer-link" href="/accounts">Your Accounts</a>
            </li>
          </ul>
        </nav>
        <nav aria-label="About the Library" class="block block--menu block--menu-menu-about" id="block-menu-menu-about" role="navigation">
          <h2 class="block__title block__title"><a class="footer-link" href="/about">About the Library</a></h2>
          <ul class="menu">
            <li class="first leaf">
              <a class="footer-link" href="/collections-and-collection-development">Collections and Collecting</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="http://rbsc.princeton.edu/exhibitions">Exhibitions</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/about/locations">Library Locations</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/alumni">For Alumni</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/staff">For Library Staff</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/staff/directory">Staff Directory</a>
            </li>
            <li class="leaf">
              <a class="footer-link" href="/about/friends">Friends of the Library</a>
            </li>
            <li class="last leaf">
              <a class="footer-link" href="/services/technology/off-campus-access">Using the Library Off-Campus</a>
            </li>
          </ul>
        </nav>
        <div class="block block--block block--block-1" id="block-block-1">
          <div class="block__content block__content">
            <h2>Princeton University Library</h2>
            <div class="footer--icons">
              <a class="facebook-logo" href="http://www.facebook.com/PULibrary" title="Friend us on Facebook"><img alt="Facebook" border="0" src="/sites/all/themes/pul_base/assets/public/images/facebook.png"></a> <a class="twitter-logo" href="http://twitter.com/PULibrary" title="Follow us on Twitter"><img alt="Twitter" border="0" src="/sites/all/themes/pul_base/assets/public/images/twitter.png"></a> <a class="govdocs-logo" href="http://libguides.princeton.edu/govdocs" title="Government Documents Depository"><img alt="Government Documents Depository" border="0" src="/sites/all/themes/pul_base/assets/public/images/depository.png"></a> <a class="friends-logo" href="http://fpul.princeton.edu/" title="Friends of the Library"><img alt="Friends of the Library" src="/sites/all/themes/pul_base/assets/public/images/friends.png"></a>
            </div>
            <address>
              One Washington Road<br>
              Princeton, NJ 08544-2098 USA<br>
              (609) 258-1470 Phone
            </address>
            <div class="pu">
              <a class="pu-logo" href="http://www.princeton.edu"><img alt="Princeton University" class="university-logo" src="/sites/default/files/images/pu_logo_trans.png"></a>
            </div>
            <p class="footer--copyright">© 2016 The Trustees of Princeton University. All rights reserved.</p>
          </div>
        </div>
      </div>
    </footer>
  </div>
</body>
</html>
