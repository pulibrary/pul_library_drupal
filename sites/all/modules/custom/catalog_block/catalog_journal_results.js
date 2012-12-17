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
					var online_avail = "";
                                        var holdings_list = "";
                                        if(result['fulltextavail'] == "Y") {
                                                online_avail = "<span class='all-full-text'>"+
                                                                        "<i class='icon-link'></i>&nbsp;"+
                                                                        'Online Access'+
                                                                        "</span><br/>";
                                        }
                                        if(result['holdings'].length > 0) {
                                                _.each(result['holdings'], function(holding) {
                                                        for (var key in holding) {
                                                                if(key !== "ONLINE") {
                                                                var location = holding[key];
                                                                location['library_label'];
                                                                location['location_code'];
                                                                holdings_list += "<br/><span class='holdings-item'>"+
                                                                                location['library_label']+
                                                                                "</span>&nbsp;";
                                                                }
                                                        }
                                                });
                                        }

    					items.push('<li><h3><a href="'+ 
							result['url'] + 
							'" target="_blank">' + 
							result['title'] + 
							'</a></h3>'+
							online_avail+
							' <span class="format-type">' + 
							result['format'] + 
							'</span>'+
							holdings_list+
							'</li>');
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
