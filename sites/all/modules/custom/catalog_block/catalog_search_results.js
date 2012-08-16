(function ($) {
  $(document).ready(function() {
  	
	//	$('#catalog-search-results').replaceWith('<p>Crazy Time</p>')	
	var query = "firestone";
	console.log(query);
        $.getJSON('/searchit/find/any/'+query, function(data) {
  		var items = [];
		var more_link = data.more;
		var num_results = data.number;
		var records = data.records;
		console.log(records);
  		$.each(records, function(result) {
			console.log(records[0]);
    			items.push('<li><a href="' + result.url + '" target="_blank">' + result.title + '</a></li>');
  		});
                console.log(items);
  		$('<ul/>', {
    			'class': 'my-new-list',
    			html: items.join('')
  		}).appendTo('#catalog-search-results');
	});	
  });
}(jQuery));
