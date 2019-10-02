<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="events-group">
<?php if (!empty($title)): ?>
  <div class="events-group--date"><span><?php print $title; ?></span></div>
  <div class="events-group--events">
<?php endif; ?>
  
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]): ?> class="<?php print $classes_array[$id]; ?>"<?php endif; ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
  <?php if (!empty($title)): ?>
    </div>
  <?php endif; ?>
</div>
