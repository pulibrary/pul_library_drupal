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
		 			$('.four_five_three_stacked-region--top').prepend("<div id='allsearch-error' class='alert--message'><h3 class='alert-title'><i class='icon-warning-sign'></i> "+Drupal.settings.allsearch_form.all_search_form_error+"</h3></div>");
    		}
    		
				return false;
    	}
    	
    	return true;
    }); 
  });
}(jQuery));
