(function ($) {
  $(document).ready(function() {
    $('#allsearch-block-form input').focus(function() {
        if ($(this).val() == Drupal.settings.allsearch_block.all_search_hint)
     	{ 
		$(this).val('');
     	}
     }); 
  });
}(jQuery));
