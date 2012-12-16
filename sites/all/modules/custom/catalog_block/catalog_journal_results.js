(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var refine_tooltip = "Refine your journal search in Books+";
	var display_query = "<span class='searchword'>"+decodeURI(query)+"</span>";
	var icon_hint = '<i class="icon-external-link"></i>&nbsp';
	query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#journal-search-results');
	} else {
        	$.getJSON('/searchit/find/title?query='+query+'&limit=exact&format=journals', function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3> <span class="format-type">' + result['format'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#journal-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a title="'+refine_tooltip+'" href="'+data.more+'">'+icon_hint+'See all '+data.number+ ' Journal Results</a></div>"').appendTo('#journal-search-results');
				}
			} else {
				$('<div class="no-results">No Journal titles match '+display_query+'</div>"').appendTo('#journal-search-results');
			}
		});
	}	
  });
}(jQuery));
