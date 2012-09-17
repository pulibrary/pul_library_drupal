(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#journal-search-results');
	} else {
        	$.getJSON('/searchit/find/title/'+query+'?limit=exact&format=journals', function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a> <span class="format-type">' + result['format'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#journal-search-results');
				$('<div class="more-results"><i class="icon-external-link"></i>&nbsp;<a href="'+data.more+'">See all '+data.number+ ' Journal Results</a></div>"').appendTo('#journal-search-results');
			} else {
				$('<div class="no-results">No Journal titles match '+query+'</div>"').appendTo('#journal-search-results');
			}
		});
	}	
  });
}(jQuery));
