<div class="panel-display omega-grid pul-development-theme-12-twocol-9-3-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="top-region panel-panel grid-12">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="left-region panel-panel grid-9 alpha">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="right-region panel-panel grid-3 omega">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="bottom-region panel-panel grid-12">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
