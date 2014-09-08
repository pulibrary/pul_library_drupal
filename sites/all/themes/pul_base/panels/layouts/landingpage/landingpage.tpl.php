<?php
/**
 * @file
 * Template for the Landing Page layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes ?>>
  <div<?php print drupal_attributes($region_attributes_array['first'])?>>
    <?php print $content['first']; ?>
  </div>
  <div<?php print drupal_attributes($region_attributes_array['second'])?>>
    <?php print $content['second']; ?>
  </div>
  <div<?php print drupal_attributes($region_attributes_array['third'])?>>
    <?php print $content['third']; ?>
  </div>
  <div<?php print drupal_attributes($region_attributes_array['fourth'])?>>
    <?php print $content['fourth']; ?>
  </div>
  <div<?php print drupal_attributes($region_attributes_array['fifth'])?>>
    <?php print $content['fifth']; ?>
  </div>
</div>