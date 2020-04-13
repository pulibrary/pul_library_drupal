<?php

/**
 * @file
 * Omega's implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($block->subject): ?>
    <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
    </div>

  <div class="footer--icons"><a href="https://www.facebook.com/PULibrary" title="Like us on Facebook" class="facebook-logo"><img src="/sites/all/themes/pul_base/assets/public/images/logo-facebook-white.svg" alt="Facebook" border="0"></a> <a href="https://www.instagram.com/PULibrary" title="Follow us on Instagram" class="instagram-logo"><img src="/sites/all/themes/pul_base/assets/public/images/logo-instagram.svg" alt="Instagram" border="0"></a> <a href="https://twitter.com/PULibrary" title="Follow us on Twitter" class="twitter-logo"><img src="/sites/all/themes/pul_base/assets/public/images/logo-twitter-bird-white.svg" alt="Twitter" border="0"></a> <a href="/services/access/visitors/depository-visitors" title="Government Documents Depository" class="govdocs-logo"><img src="/sites/all/themes/pul_base/assets/public/images/depository.png" alt="Government Documents Depository" border="0"></a> <a href="https://fpul.princeton.edu/" title="Friends of the Library" class="friends-logo"><img src="/sites/all/themes/pul_base/assets/public/images/friends.svg" alt="Friends of the Library"></a></div>

  <!-- Begin Mailchimp Signup Form -->
  <!-- <link href="//cdn-images.mailchimp.com/embedcode/horizontal-slim-10_7.css" rel="stylesheet" type="text/css"> -->
  <div id="mc_embed_signup" class="newsletter-container">
    <h2>Subscribe to our newsletter</h2>
    <!-- <span><a href="/newsletter">More options</a></span> -->
  <form action="https://princeton.us4.list-manage.com/subscribe/post?u=f1159e2c2a8bc35d62147f282&amp;id=6c19fe9a37" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
      <div id="mc_embed_signup_scroll" class="newsletter-signup">
  
  <input type="email" value="" name="EMAIL" class="email" id="mce-EMAIL" placeholder="Enter your email address" required>
      <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
      <div style="position: absolute; left: -5000px;" aria-hidden="true"><input type="text" name="b_f1159e2c2a8bc35d62147f282_6c19fe9a37" tabindex="-1" value=""></div>
      <div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
      </div>
  </form>
  </div>
  
  <!--End mc_embed_signup-->
</div>
