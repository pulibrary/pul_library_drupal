(function ($) {
  $(document).ready(function() {
//    $('.view-display-id-block_1').hide();
//    $('#block-system-main-menu ul.menu li.leaf a').eq(1).click(function(event) {
//	event.preventDefault();
//	event.stopPropagation();
//	$('.view-display-id-block_1').show();
//    });
//    $('#block-system-main-menu ul.menu li.leaf').eq(1).mouseleave(function() {
//        $('.view-display-id-block_1').hide();
//    });

	$( "a", ".field-name-field-db-access-url" ).button();
        //$( "a", ".field-name-field-db-access-url" ).click(function() { return false; });
        $("a", ".service-button-link").button();
    
  });
}(jQuery));
