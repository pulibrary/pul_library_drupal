(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var display_query = decodeURI(query); //FIXE. This should highlighted
	var refine_tooltip = "Refine your search in Books+";
	query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
	} else {
        	$.getJSON('/searchit/find/any?query='+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a> <span class="format-type">' + result['format'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#catalog-search-results');
				$('<div class="more-link"><i class="icon-arrow-right"></i>&nbsp;<a title="'+refine_tooltip+'" href="'+data.more+'">See all '+data.number+ ' Books+ Results</a></div>"').appendTo('#catalog-search-results');
			} else {
				$('<div class="no-results">No matches in Books+ for '+display_query+'.</div>"').appendTo('#catalog-search-results');
			}
		});
	}	
  });
}(jQuery));
