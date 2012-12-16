(function ($) {
  $(document).ready(function() {
  	
	var request = Drupal.settings.catalog_block.request;
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var display_query = "<span class='searchword'>"+decodeURI(query)+"</span>";
	var refine_tooltip = "Refine your search in Books+";
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
	} else {
        	$.getJSON('/searchit/find/any?query='+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3> <span class="format-type">' + result['format'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#catalog-search-results');
				$('<div class="more-link"><a title="'+refine_tooltip+'" href="'+data.more+'">'+icon_hint+'See all '+data.number+ ' Books+ Results</a></div>"').appendTo('#catalog-search-results');
			} else {
				$('<div class="no-results">No matches in Books+ for '+display_query+'.</div>"').appendTo('#catalog-search-results');
			}
		});
	}	
  });
}(jQuery));
