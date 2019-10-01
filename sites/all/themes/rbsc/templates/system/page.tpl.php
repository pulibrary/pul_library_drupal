<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['branding']: Items for the branding region.
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see omega_preprocess_page()
 */
?>
<!-- No JS for Analytics -->
<noscript>
    <img src="http://www.google-analytics.com/collect?v=1&t=pageview&tid=UA-15870237-19&cid=1234&dl=nojs&dt=No%20Javascript">
</noscript>
<div class="l-page" id="l-page">
  <header class="l-header" role="banner">
    <a href="#main-content" class="skip2main"><?php print t('Skip to main content'); ?></a>
    <div class="wrapper wrapper--branding">
      <section class="l-region l-region--branding">
         <h2>
            <a href="https://library.princeton.edu" title="Princeton University Library - Home"  class="site-logo">
              <img src="/sites/all/themes/pul_base/assets/public/images/logo-txt.png" alt="Princeton University Library" />
              <span class="site-name">Princeton University Library</span>
            </a>
         </h2>
        <?php print render($page['branding']); ?>
      </section>
    </div>

    <?php print render($page['header']); ?>
    <div class="wrapper wrapper--highlighted">
      <div class="l-region l-region--highlighted">
        <div class="site-branding">
          <a href="<?php print $front_page; ?>" title="<?php print t('Special Collections - Home'); ?>"  class="rbsc-logo">
            <img class="bookmark" src="/sites/all/themes/rbsc/assets/public/images/rbsc_bookmark.png" alt="<?php print t('Home'); ?>" /></a>
            <a class="navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Special Collections - Home'); ?>">
              <div class="dept-name">
              <span>THE DEPARTMENT OF</span>
              <h2>SPECIAL COLLECTIONS</h2>
            </div>
          </a>
        </div>
        <div class="site-search">
          <?php print render($page['highlighted']); ?>
        </div>
      </div>
    </div>
    <div class="wrapper wrapper--navigation">
      <?php print render($page['navigation']); ?>
    </div>
    <script src="//api2.libanswers.com/1.0/widgets/850"></script>
  </header>

  <section class="l-region l-region--main" id="main-content">
    <div class="l-content" role="main">
      <?php if(isset($node)): ?>
        <?php print $breadcrumb; ?>
      <?php endif; ?>


      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1>
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </section>

  <footer class="l-footer" role="contentinfo">
    <div class="wrapper wrapper--footer">
      <?php print render($page['footer']); ?>
      <a href="#l-page" class="cd-top">Top</a>
    </div>
  </footer>
</div>
