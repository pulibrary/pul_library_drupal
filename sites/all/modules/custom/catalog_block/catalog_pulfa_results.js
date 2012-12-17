(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	var request = Drupal.settings.catalog_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(10);
	var display_query = "<span class='searchword'>"+decodeURI(query)+"</span>"; 
	var icon_hint = '<i class="icon-external-link"></i>&nbsp;';
	var breadcrumb_label = "<em>Included In</em>:&nbsp;";
	//query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#pulfa-search-results');
	} else {
        	$.getJSON('/searchit/pulfa/any?query='+query, function(data) {
  			var items = [];
			if(data.number > 0) {
  				$.each(data.records, function(index, result) {
					var breadcrumbs = "";
					if(result['breadcrumb'].length > 0) {
						// iterate over javascript array
						_.each(result['breadcrumb'], function(crumb) {
        						var formatted_crumb = "<br/><span class='crumb'>"+
										breadcrumb_label +
										crumb.text +
										" - " + crumb.level	
										"<span>";
							breadcrumbs += formatted_crumb;	
    						});
					}
    					items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3> <span class="format-type">' + result['type'] + '</span>'+breadcrumbs+'</li>');
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
