// JavaScript Document
jQuery( document ).ready(function() {
	jQuery(".togglehours").click(function (e) {
		e.preventDefault();
    	jQuery(".hours-secondary").toggle("slow");
		jQuery(".togglehours").toggle();
	});
});