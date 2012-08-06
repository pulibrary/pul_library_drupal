(function ($) {
  $(document).ready(function() {
    $('#summon-block-form input').focus(function() {
     	$(this).val('');
    }); 
     
    $('#summon-block-form').submit(function() {
    	//alert($(this).find("input:first").val());
    	console.log(Drupal.settings.catalog_block.catalog_search_hint);
    	if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.summon_block.summon_search_hint) {
    		$("#content,#section-content").prepend("<div id='messages'><div class='messages error'><h2>Supply a Search Term</h2></div></div>");
    		return false;
    	}
    	
    	return true;
    });
  });
}(jQuery));