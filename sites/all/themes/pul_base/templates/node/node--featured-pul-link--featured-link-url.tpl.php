<?php

/* 
  Overridde template for Database Description View Mode 
  @file node--featured-pul-link--featured-link-url.tpl.php 

  Refer to node.tpl.php in omega theme for a list of all variables exposed
  to this template.
*/

?>
<div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    <!-- test -->
</div>