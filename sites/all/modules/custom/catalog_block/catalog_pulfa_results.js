(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var file_icon = 'icon-file';
	var series_icon = 'icon-folder-closed';
	var subseries_icon = 'icon-folder-open';
	var collection_icon = 'icon-hdd';
	var default_icon = 'icon-tag';
	var breadcrumb_label = "<span class='breadcrumb-label'><i class='icon-arrow-right'></i>&nbsp;</span>";
	//query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#pulfa-search-results');
	} else {
  		 $.ajax({
			url:'/searchit/pulfa/any?query='+query,
		 	async: true,
 			type: 'GET',
 			dataType: 'json',
 			success: function(data) {
			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
					var breadcrumbs = "";
					if(result['breadcrumb'].length > 0) {
						_.each(result['breadcrumb'], function(crumb) {
							if(crumb.level == 'collection') {
        							var formatted_crumb = "<div class='all-pulfa-breadcrumb'>"+
										breadcrumb_label+
										//'<i class="'+collection_icon+'"></i>&nbsp;'+
										'<a href="'+crumb.uri+'">'+
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
    					items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>'+
						 '<div class="all-search-excerpt">'+result['kwic']+'</div>'+
						 '<div class="all-format-type"><i class="'+icon_type+'"></i>'+ 
						result['type']+ 
						'</div>'+breadcrumbs+'</li>');
				});
  				$('<ul/>', {
    					'class': 'all-search-results-list',
    					html: items.join('')
  				}).appendTo('#pulfa-search-results');
				if(data.number > 3) {
					$('<div class="more-link"><a href="'+data.more+'">'+icon_hint+'See all '+data.number+ ' Results from Finding Aids</a></div>"').appendTo('#pulfa-search-results');
				}
			} else {
				$('<div class="no-results">No Finding Aids results.</div>"').appendTo('#pulfa-search-results');
			}
		},
		error: function(data) {
			 $('<div class="all-fail-to-load-results">Finding Aids results are not available at this time.</div>"').appendTo('#pulfa-search-results');
		}
	});
     }	
  });
}(jQuery));
