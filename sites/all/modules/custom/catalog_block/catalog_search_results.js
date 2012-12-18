(function ($) {
  $(document).ready(function() {
  	
	var request = Drupal.settings.catalog_block.request;
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var display_query = "<span class='searchword'>"+decodeURI(query)+"</span>";
	var refine_tooltip = "Refine your search in Books+";
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var request_hint = 'See Available Items at ';
	var availability_hint = "Check Availability";
	query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
	} else {
        	$.getJSON('/searchit/find/any?query='+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
					var online_avail = "";
					var holdings_list = "";
					if(result['fulltextavail'] == "Y") {
						online_avail = "<div class='all-full-text'>"+
									"<i class='icon-external-link'></i>&nbsp;"+
									'Online Access'+
									"</div>";
					}
					if((result['holdings'].length == 1) && (result['fulltextavail'] == "Y")) {
				        	//return false;	
					} 
					else if(result['holdings'].length > 0) {
						// use underscore 
						holdings_list += "<div class='all-locations-list'><span class='locations-list-label'>Locations:&nbsp;</span>";
						_.each(result['holdings'], function(holding) {
							for (var key in holding) {
                                                                if(key !== "ONLINE") {
                                                                var location = holding[key];
                                                                holdings_list += "<span class='holdings-item "+
										location['location_code']+"'>"+
										'<a href="'+location['request_link']+'" title="'+
										request_hint+'">'+
                                                                                location['library_label']+
                                                                                "</a></span>&nbsp;";
                                                                }
                                                        }

						});
						holdings_list += "</div>";
					}
					var creation_date = "";
					if(result['creationdate']) {
						creation_date = "<div class='all-result-date'>"+result['creationdate']+"</div>";
					}
    					items.push('<li><h3><a href="' + 
						result['url'] + 
						'" target="_blank">' + 
						result['title'] + 
						'</a></h3> ' +
						online_avail +
						'<span class="format-type">' + 
						result['format'] +
						holdings_list +
						creation_date+
						 '</span></li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#catalog-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a title="'+refine_tooltip+'" href="'+data.more+'">'+icon_hint+'See all '+data.number+ ' Books+ Results</a></div>"').appendTo('#catalog-search-results');
				}
			} else {
				$('<div class="no-results">No matches in Books+ for '+display_query+'.</div>"').appendTo('#catalog-search-results');
			}
		});
	}	
  });
}(jQuery));
