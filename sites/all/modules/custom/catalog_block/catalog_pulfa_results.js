(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var display_query = "<span class='searchword'>"+decodeURI(query)+"</span>"; 
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	//query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#pulfa-search-results');
	} else {
        	$.getJSON('/searchit/pulfa/any?query='+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3> <span class="format-type">' + result['type'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#pulfa-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a href="'+data.more+'">'+icon_hint+'See all '+data.number+ ' Results from Finding Aids</a></div>"').appendTo('#pulfa-search-results');
				}
			} else {
				$('<div class="no-results">No results match '+display_query+'.</div>"').appendTo('#pulfa-search-results');
			}
		});
	}	
  });
}(jQuery));
