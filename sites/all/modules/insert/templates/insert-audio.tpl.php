<?php
/**
 * @file
 * Template file for audio files inserted via the Insert module.
 *
 * Available variables:
 * - $class: A set of classes assigned to the audio tag (if any).
 * - $item: The complete item being inserted.
 * - $mime: The mime type of the file.
 * - $name: The name of the file.
 * - $url: The URL to the file.
 *
 * Modules may provide placeholders that will be replaced by user-entered values
 * when the item is inserted into a textarea.
 *
 * Available placeholders:
 * - __description__: A description of the item.
 * - __filename__: The file name.
 * - __description_or_filename__: A description of the item if available,
 *   otherwise use the file name.
 */
?>
<audio controls contenteditable="false" <?php print $class ? ' class="' . $class . '"' : '' ?>>
  <source src="<?php print $url; ?>" type="<?php print $mime; ?>">
  <?php print t('Your browser does not support embedding audio.') ?>
</audio>
