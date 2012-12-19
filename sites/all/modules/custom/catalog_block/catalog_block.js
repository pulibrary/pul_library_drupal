(function ($) {
  $(document).ready(function() {
    $('#catalog-block-form input').focus(function() {
    	//console.log($(this).val());
     	$(this).val('');
     	///console.log(Drupal.settings.catalog_block.catalog_search_hint);
     }); 
     
    $('#catalog-block-form').submit(function() {
    	//alert($(this).find("input:first").val());
    	//console.log(Drupal.settings.catalog_block.catalog_search_hint);
    	if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.catalog_block.catalog_search_hint) {
    		//$("span").text("Not valid!").show();
    		//this really only works with omega theme
		if($('#books-plus-error').length == 0) {
    		$("<div id='messages' class='grid-12'><div id='books-plus-error' class='messages error'><h2 class='element-invisible'>Error message</h2>Supply a Search Term</h2></div></div>").insertBefore('#region-content');
    		}
		return false;
    	}
    	
    	return true;
    });
  });
}(jQuery));
