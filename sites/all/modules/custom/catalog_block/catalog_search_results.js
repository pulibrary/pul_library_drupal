(function ($) {
  $(document).ready(function() {
  	
	var query_url = $('#catalog-search-results').attr('data-source');
	var refine_tooltip = "See all results or expand your search in Books+.";
	var refine_message = "See All Results in Books+";
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var request_hint = 'See Available Items at ';
	var availability_hint = "Check for Available Copies";
	var pul_resolver = 'http://libwebprod.princeton.edu/resolve/lookup?url=';
	var book_icon = 'icon-book';
	var video_icon = 'icon-video';
	var film_icon = 'icon-film';
	var audio_icon = 'icon-headphones';
	var refine_icon = '<i class="icon-circle-arrow-right"></i>&nbsp;';
    var max_display_results = 5;
	
	if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
	} else {
  		$.ajax({
			
			url: query_url,
			async: true,
            		type: 'GET',
            		dataType: 'json',
            		success: function(data) {
			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
                    var result_position = parseInt(index) + 1; //for GA tracking

					var online_avail = "";
					var holdings_show_list = "";
					if(index%2 == 0) {
	                                        var row_class="odd";
        	                        } else {
                	                        var row_class="even"
                        	        }

					if(result['fulltextavail'] == "Y") {
                        var online_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'All Search\', \'Online Access\', \'Position '+result_position+'\']);"';
						online_avail = "<div class='all-full-text'>"+
									icon_hint+
									'<a '+online_track_code+' target="_blank" class="all-search-link" href="'+pul_resolver+result['full_text_link']+
									'" title="Go to Resource">'+
									'Online Access'+
									"</a></div>";
					}
					if((result['holdings'].length == 1) && (result['fulltextavail'] == "Y")) {
				        	//return false;	

					} 
					else if(result['holdings'].length > 0) {
						// use underscore 
						var holdings_show = 0; 
						var holdings_list = "<div class='all-locations-list'><span class='locations-list-label'>Locations:&nbsp;</span>";
						_.each(result['holdings'], function(holding) {
							for (var key in holding) {
                                                                if(key !== "ONLINE") {
                                                                    var location_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'All Search\', \'Location Check\', \'Position '+result_position+'\']);"';
                                                                	var location = holding[key];
                                                                	holdings_list += "<span class='holdings-item'> "+
										'<a '+location_track_code+' target="_blank" href="'+location['request_link']+'" title="'+
										request_hint+location['library_label']+'">'+
                                                                                location['library_label']+
                                                                                "</a></span>&nbsp;";
									holdings_show = 1;
                                                                }
                                                        }

						});
						holdings_list += "</div>";
						if(holdings_show == 1) {
							holdings_show_list = holdings_list;
						} 
					}
					var creation_date = "";
					var icon_element = "";
					if(result['publisher']) {
						creation_date = "<div>"+result['publisher']+"</div>";
					}
					else if(result['creationdate']) {
						creation_date = "<div>"+result['creationdate']+"</div>";
					}
					if(result['format'] == 'book') {
						var icon_type = book_icon;
					} else if(result['format'] == 'video' || result['format'] == 'film') {
						var icon_type = film_icon;
					} else if(result['format'] == 'audio') {
						var icon_type = audio_icon;
					} else {
						var icon_type = null;
					}
					if(icon_type) {
						icon_element = "<i class='"+icon_type+"'></i>";
					}
					if(result['description']) {
						var desc = result['description'];
					} else if(result['toc']) {
						var desc = result['toc'];
					} else if(result['notes']) {
						var desc = result['notes'];
					} else {
						var desc = "No description available.";
					}
					if(result['creator']) {
						var creator = "<div><span>"+result['creator']+"</span></div>";
					} else {
						var creator = "";
					}

                    var ga_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'All Search\', \'Books+ Title\', \'Position '+result_position+'\']);"';
    					items.push('<li class="'+row_class+'"><h3><a href="' + 
						result['url'] + 
						'" title="'+desc+'" target="_blank" '+
                        ga_track_code +
                        '>' +
						result['title'] +
						'</a></h3> ' +
						creator +
						online_avail +
						'<div class="format-type">' +
						icon_element+ 
						result['format']+
						'</div>'+
						creation_date+
						holdings_show_list+
						 '</li>');
				});
				$('#catalog-search-results-spinner').hide();
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#catalog-search-results');
                var refine_link_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'Expand All Search\', \'Books+\', \'Top\']);"';
                $('<div class="refine-link">'+refine_icon+'<a '+refine_link_track_code+' target="_blank" title="'+refine_tooltip+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#catalog-search-results');
				if(data.number > max_display_results) {
                    more_link_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'Expand All Search\', \'Books+\', \'Bottom\']);"';
					$('<div class="more-link"><a '+more_link_track_code+ ' target="_blank" title="'+refine_tooltip+' '+data.number+' total results." href="'+data.more+'">'+icon_hint+'See all Books+ Results</a></div>"').appendTo('#catalog-search-results');
				}

			} else {
				$('#catalog-search-results-spinner').hide();
				$('<div class="no-results">No matches in Books+.</div>"').appendTo('#catalog-search-results');
			}
			},
			error: function(data){
				$('#catalog-search-results-spinner').hide();
              			$('<div class="all-fail-to-load-results">Books+ results are not available at this time.</div>"').appendTo('#catalog-search-results');
            },
      timeout: 5000
		});
	}	
  });
}(jQuery));
