(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
	} else {
        	$.getJSON('/searchit/find/any/'+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
    					items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a> <span class="format-type">' + result['format'] + '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'catalog-search-results-list',
    					html: items.join('')
  				}).appendTo('#catalog-search-results');
				$('<div class="more-results"><a href="'+data.more+'">See '+data.number+ ' More Books+ Results</a></div>"').appendTo('#catalog-search-results');
			} else {
				$('<div class="no-results">No Results from Books+</div>"').appendTo('#catalog-search-results');
			}
		});
	}	
  });
}(jQuery));
