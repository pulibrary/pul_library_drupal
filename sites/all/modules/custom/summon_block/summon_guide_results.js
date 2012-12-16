(function ($) {
  $(document).ready(function() {
	//grab variable from drupal config registry
	//var request = Drupal.settings.sy_block.request;

	var path = $(location).attr('pathname');
	if(path.indexOf("/find/all") !== -1) {
                var query = path.substr(10);
        } else if (path.indexOf('find/databases') !== -1) {
                var query = path.substr(23);
        }

	display_query = "<span class='searchword'>"+decodeURI(query)+"</span>";
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "http://libguides.princeton.edu/";
        var icon_hint = "<i class='icon-external-link'></i>&nbsp;";
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-guide-results');
	} else {
    $.getJSON('/searchit/articles/guide?query='+query, function(data) {
  	var items = [];
		if(data.number > 0) {
			
  			$.each(data.records, function(index, result) {
    				items.push('<li><h3><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3></li>');
				});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-guide-results');
			if(data.number > 3) {
				$('<div class="more-link"><a title="'+tooltip+'" href="'+data.more+'">'+icon_hint+'See All '+data.number+' Research Guides</a></div>"').appendTo('#summon-guide-results');
				}
			} else {
				$('<div class="no-results">No guides match '+display_query+'. <a href="'+libguides_url+'">Browse guides</a> for available topics</div>"').appendTo('#summon-guide-results');
			}
		});
	}	
  });
}(jQuery));
