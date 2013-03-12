(function ($) {
  $(document).ready(function() {
 	var query_url = $('#pulfa-search-results').attr('data-source');	
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var file_icon = 'icon-file';
	var refine_hint = 'Explore finding aids content.';
	var series_icon = 'icon-folder-closed';
	var subseries_icon = 'icon-folder-open';
	var collection_icon = 'icon-hdd';
	var default_icon = 'icon-tag';
	var breadcrumb_label = "<span class='breadcrumb-label'>Contained In:&nbsp;</span>";
        var refine_icon = '<i class="icon-circle-arrow-right"></i>&nbsp;';
	var refine_message = "See All Finding Aids";
	if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#pulfa-search-results');
	} else {
  		 $.ajax({
			url:query_url,
		 	async: true,
 			type: 'GET',
 			dataType: 'json',
 			success: function(data) {
			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
					if(index%2 == 0) {
                                                var row_class="odd";
                                        } else {
                                                var row_class="even"
                                        }

					var breadcrumbs = "";
					if(result['breadcrumb'].length > 0) {
						_.each(result['breadcrumb'], function(crumb) {
							if(crumb.level == 'collection') {
        							var formatted_crumb = "<div class='all-pulfa-breadcrumb'>"+
										breadcrumb_label+
										//'<i class="'+collection_icon+'"></i>&nbsp;'+
										'<a target="_blank" href="'+crumb.uri+'">'+
										crumb.text+
										"</a><div>";
										breadcrumbs += formatted_crumb;	
							}
    						});
					}
					var icon_type;
					if(result['type'] == 'file') {
						icon_type = file_icon;
					} else if(result['type'] == 'series') {
						icon_type = series_icon;
					} else if(result['type'] == 'collection') {
						icon_type = collection_icon;
					} else if(result['type'] == 'subseries') {
						icon_type = subseries_icon;
					} else {
						icon_type = default_icon;
					} 
    					items.push('<li class="'+row_class+'"><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>'+
						 '<div class="all-search-excerpt">'+result['kwic']+'</div>'+
						 '<div class="all-format-type"><i class="'+icon_type+'"></i>'+ 
						result['type']+ 
						'</div>'+breadcrumbs+'</li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#pulfa-search-results');
				$('<div class="refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#pulfa-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a target="_blank" title="'+refine_hint+' '+data.number+' total results." href="'+data.more+'">'+icon_hint+'See all Results in Finding Aids</a></div>"').appendTo('#pulfa-search-results');
				}
			} else {
				//$('<div class="no-results">No Finding Aids results.</div>"').appendTo('#pulfa-search-results');
				$('.pane-catalog-block-catalog-pulfa-results').hide();
			}
		},
		error: function(data) {
			 $('<div class="all-fail-to-load-results">Finding Aids results are not available at this time.</div>"').appendTo('#pulfa-search-results');
		}
	});
     }	
  });
}(jQuery));
