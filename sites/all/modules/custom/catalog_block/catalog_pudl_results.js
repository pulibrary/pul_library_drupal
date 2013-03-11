(function ($) {
  $(document).ready(function() {
 	var query_url = $('#pudl-search-results').attr('data-source');	
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var file_icon = 'icon-file';
	var refine_hint = 'Explore Princeton University Digital Library content.';
        var refine_icon = '<i class="icon-circle-arrow-right"></i>&nbsp;';
        var refine_message = "See All Digital Library Content";
	if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#pudl-search-results');
	} else {
  		 $.ajax({
			url:query_url,
		 	async: true,
 			type: 'GET',
 			dataType: 'json',
 			success: function(data) {
			var items = [];
			// add an icon map for format types
			var icon_type = "";
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
					if(index%2 == 0) {
                                                var row_class="odd";
                                        } else {
                                                var row_class="even"
                                        }

    					items.push('<li class="'+row_class+'"><h3><a target="_blank" href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>'+
						 '<div class="all-search-excerpt">Collection: '+result['collection']+'</div>'+
						 '<div class="all-format-type"><i class="'+icon_type+'"></i>'+ 
						result['type']+ 
						'</div></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#pudl-search-results');
				$('<div class="refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#pudl-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a target="_blank" title="'+refine_hint+' '+data.number+' total results." href="'+data.more+'">'+icon_hint+'See all Digital Library Results.</a></div>"').appendTo('#pudl-search-results');
				}
			} else {
				$('.pane-catalog-block-catalog-pudl-results').hide();
			}
		},
		error: function(data) {
			 $('<div class="all-fail-to-load-results">Princeton University Digital Library  results are not available at this time.</div>"').appendTo('#pudl-search-results');
		}
	});
     }	
  });
}(jQuery));
