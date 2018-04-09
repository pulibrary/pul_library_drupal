<?php

/**
 * @file
 * Template to display a list of rows.
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $delta => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?>
