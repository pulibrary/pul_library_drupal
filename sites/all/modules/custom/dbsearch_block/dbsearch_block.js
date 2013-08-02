(function ($) {
  $(document).ready(function() {
    $('#dbsearch-block-form input').focus(function() {
     	if ($(this).val() == Drupal.settings.dbsearch_block.db_search_hint) { 
				$(this).val('');
     	}
     }); 
     
     
     $('#dbsearch-block-form').submit(function() {
    	//alert($(this).find("input:first").val());
    	//console.log(Drupal.settings.catalog_block.catalog_search_hint);
    	if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.dbsearch_block.db_search_hint) {
				if($('#dbsearch-error').length == 0) {
		 			$("<div id='messages' class='grid-12'><div id='dbsearch-error' class='messages error'><h2 class='element-invisible'>Error message</h2>"+Drupal.settings.dbsearch_block.db_search_error+"</h2></div></div>").insertBefore('#region-content');
    		}
				return false;
    	}
    	
    	return true;
    });
  });
}(jQuery));
