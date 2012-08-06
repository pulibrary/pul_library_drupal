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
    		$("#content,#section-content").prepend("<div id='messages'><div class='messages error'><h2>Supply a Search Term</h2></div></div>");
    		return false;
    	}
    	
    	return true;
    });
  });
}(jQuery));