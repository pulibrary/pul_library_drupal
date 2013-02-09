(function ($) {
  $(document).ready(function() {

	$( "a", ".field-name-field-db-access-url" ).button();
        $( "a", ".service-connect-btn" ).button();
        
        $('.main-menu-item-title').replaceWith('<a href="/libraries">Libraries and Collections</a>');
        $('.view-display-id-block_1 .item-list:eq(1) ul').append("<li class='last leaf more'><a href='/collections' title='See All Collections'>More Collections</a></li>");
	//FIXME hack should be repaced by a module that allows viewOnlineLink to be set a drupal conf variable
	$('.node-type-database .field-name-field-db-access-url a').each(function(index){
		var viewOnlineLink = $(this).attr('href');
		undecodeViewOnline = viewOnlineLink.replace( /\&amp%3B|&amp;/g, '&' );
		console.log(undecodeViewOnline);
                var resolvePrefix = "http://libwebprod.princeton.edu/resolve/lookup?url=";
		$(this).attr('href', resolvePrefix+undecodeViewOnline);
		$(this).attr('target', '_blank');
	});
	

	/* toggle events for A to Z list */
        $(".find-databases-show-desc").each(function(index) {
		var id = $(this).attr('data-desc-id');
		$('#open'+id).click( function () {
			$('#desc'+id).toggle( function() {
				//$('#close'+id).show();
				//$('#close'+id).click(function () {
			        $('#open'+id+' i').replaceWith('<i class="icon-minus-sign"></i>');		
				//$('#open'+id).hide();
			});
		});
	});
	// empty descriptions
	//$(".page-find-databases .databases-find-description ").each(function(index) {
		
	//});
	$(".page-find-databases .resource-title a, .subject-landing-page .resource-title a").each(function(index) {
		var data_access = $(this).find('span').attr('data-ezproxy-access');
		var access_url = $(this).find('span').attr('data-access-url');
		if(data_access === "0" || data_access == "No") {
			$(this).attr('href', access_url);
			$(this).attr('target', '_blank');
		}
		//var data_override_access = $(this).find('span').attr('data-override-proxy-access');
                //var override_access_url = $(this).find('span').attr('data-override-access-url');
                //if(data_override_access == "No") {
                //        $(this).attr('href', override_access_url);
                //        $(this).attr('target', '_blank');
                //}

	});
//	
//	 $(".find-databases-close-desc").each(function(index) {
//		var id = $(this).attr('data-desc-id');
//		 $('close'+id).click( function () {
//                        $('#open'+id).show();
//			$('#desc'+id).hide();
//			$(this).hide();
//                });
//	});
  });
}(jQuery));
