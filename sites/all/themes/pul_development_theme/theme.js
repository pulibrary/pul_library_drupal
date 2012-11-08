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
        //$("a", ".service-button-link").button();
        $('.main-menu-item-title').replaceWith('<a href="/libraries">Libraries and Collections</a>');
        $('.view-display-id-block_1 .item-list:eq(1) ul').append("<li class='last leaf more'><a href='/collections' title='See All Collections'>More Collections</a></li>");
//
//
	//$('.view-display-id-emergency_alert_block').dialog({height: 200, minWidth: 960, draggable: false, title: "Library Alert", dialogClass: "alert", resizable: false});
  });
}(jQuery));
