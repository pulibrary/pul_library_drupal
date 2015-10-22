<div<?php print $attributes; ?> id="menu--secondary">
    <a href="#section-main" class="skip2main">Skip to Main Content</a>
    <label class="show-section-menu" for="show-section-menu">Section Menu</label>
    <input id="show-section-menu" type="checkbox">
    <br>

      <?php if ($admin_links): ?>
        <?php print $admin_links; ?>
      <?php endif; ?>

      <?php print render($content); ?>
</div>