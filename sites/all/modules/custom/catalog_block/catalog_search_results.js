(function ($) {
  $(document).ready(function() {
  	
	//	$('#catalog-search-results').replaceWith('<p>Crazy Time</p>')	
	var query = "cats";
	console.log(query);
        $.getJSON('/searchit/find/any/cats', function(data) {
  		var items = [];

  		$.each(data, function(key, val) {
    			items.push('<li id="' + key + '">' + val + '</li>');
  		});
                console.log(items);
  		$('<ul/>', {
    			'class': 'my-new-list',
    			html: items.join('')
  		}).appendTo('#catalog-search-results');
	});	
  });
}(jQuery));
