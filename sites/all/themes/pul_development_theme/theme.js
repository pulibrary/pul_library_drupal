(function ($) {
  $(document).ready(function() {

	$( "a", ".field-name-field-db-access-url" ).button();
        $( "a", "#borrow-direct-connect" ).button();
        
        $('.main-menu-item-title').replaceWith('<a href="/libraries">Libraries and Collections</a>');
        $('.view-display-id-block_1 .item-list:eq(1) ul').append("<li class='last leaf more'><a href='/collections' title='See All Collections'>More Collections</a></li>");
	//FIXME hack should be repaced by a module that allows viewOnlineLink to be set a drupal conf variable
	$('.node-type-database .field-name-field-db-access-url a').each(function(index){
		var viewOnlineLink = $(this).attr('href');
                var resolvePrefix = "http://libwebprod.princeton.edu/resolve/lookup?url=";
		$(this).attr('href', resolvePrefix+viewOnlineLink);
	});

  });
}(jQuery));
