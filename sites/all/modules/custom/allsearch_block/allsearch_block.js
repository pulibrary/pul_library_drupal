(function ($) {
  $(document).ready(function() {
    $('#allsearch-block-form input, #allsearch-block-form--2 input').focus(function() {
    	if ($(this).val() == Drupal.settings.allsearch_block.all_search_hint) { 
				$(this).val('');
     	}
     });
     
     $('#allsearch-block-form, #allsearch-block-form--2').submit(function() {
    	if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.allsearch_block.all_search_hint) {
				if($('#allsearch-error').length == 0) {
		 			$("<div id='messages' class='grid-12'><div id='allsearch-error' class='messages error'><h2 class='element-invisible'>Error message</h2>"+Drupal.settings.allsearch_block.all_search_error+"</div></div>").insertBefore('.l-content');
    		}
    		
				return false;
    	}
    	
    	return true;
    }); 
  });
}(jQuery));
