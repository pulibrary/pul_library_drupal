(function ($) {
  $(document).ready(function() {
    $('#summon-block-form input').focus(function() {
     	$(this).val('');
    }); 
     
    $('#summon-block-form').submit(function() {
    	
    	if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.summon_block.summon_search_hint) {
    		
				if($('#summon-error').length == 0) {
		 			$("<div id='messages' class='grid-12'><div id='summon-error' class='messages error'><h2 class='element-invisible'>Error message</h2>"+Drupal.settings.summon_block.summon_search_error+"</h2></div></div>").insertBefore('#region-content');
    		}
				
				return false;
    	}
    	
    	return true;
    });
  });
}(jQuery));
