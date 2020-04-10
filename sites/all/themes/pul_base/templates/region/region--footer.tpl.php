<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. For example, the page_top region would have a region-page-top
 *     class.
 * - $region: The name of the region variable as defined in the theme's .info
 *   file.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 */
?>
<?php if ($content): ?>
  <div<?php print $attributes; ?>>
    <?php print $content; ?>
  </div>
<?php endif; ?>

<div class="pu--footer">
  <div class="l-region--pu-footer">
    <div class="pu--accessibility"><a href="https://accessibility.princeton.edu/" target="_blank">Accessibility</a></div>
    <div class="pu--copyright">&copy; <?php echo date("Y"); ?> The Trustees of Princeton University</div>
    <div class="pu--logo"><a href="https://www.princeton.edu" title="Princeton University" class="pu-logo"><img src="/sites/all/themes/pul_base/assets/public/images/logo-white.svg" alt="Princeton University" width="428" height="121" class="university-logo"></a></div>
  </div>
</div>
