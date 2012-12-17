<div class="panel-display omega-grid omega-12-twocol-9-3 omega-12-twocol-two-box" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-9">
    <div class="panel-panel grid-5 alpha">
    	<div class="inside"><?php print $content['left_top']; ?></div>
    </div>
    <div class="panel-panel grid-4">
        <div class="inside"><?php print $content['middle_top']; ?></div>
    </div>
    <div class="panel-panel grid-5 alpha">
        <div class="inside"><?php print $content['left_bottom']; ?></div>
    </div>
    <div class="panel-panel grid-4">
    	<div class="inside"><?php print $content['middle_bottom']; ?></div>
    </div>
    <div class="panel-panel grid-9 alpha omega">
        <div class="inside"><?php print $content['bottom']; ?></div>

    </div>
  </div>
  <div class="panel-panel grid-3">
    <div class="inside"><?php print $content['right_top']; ?></div>
  </div>
  
</div>
