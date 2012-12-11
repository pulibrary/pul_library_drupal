<div class="panel-display omega-grid omega-12-threecol-5-4-3" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-5">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel grid-3">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-9">
    <div class="inside"><?php print $content['left_below']; ?></div>
  </div>
  <div class="panel-panel grid-3">
    <div class="inside"><?php print $content['right_below']; ?></div>
  </div>
</div>
