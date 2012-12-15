(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
        //var query = path.substr(10);
	if(path.indexOf("/find/all") !== -1) {
                var query = path.substr(10);
        } else if (path.indexOf('find/databases') !== -1) {
                var query = path.substr(23);
        }

	console.log(path);
	display_query = decodeURI(query);
        //query = query.replace("/", "");
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "http://libguides.princeton.edu/";
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-guide-results');
	} else {
    $.getJSON('/searchit/articles/guide?query='+query, function(data) {
  	var items = [];
		if(data.number > 0) {
			
  			$.each(data.records, function(index, result) {
    				items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></li>');
				});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-guide-results');
				$('<div class="more-link"><i class="icon-arrow-right"></i><a title="'+tooltip+'" href="'+data.more+'">See All '+data.number+' Research Guides</a></div>"').appendTo('#summon-guide-results');
			} else {
				$('<div class="no-results">No guides match '+display_query+'. <a href="'+libguides_url+'">Browse guides</a> for available topics</div>"').appendTo('#summon-guide-results');
			}
		});
	}	
  });
}(jQuery));
