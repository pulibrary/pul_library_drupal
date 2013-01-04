(function ($) {
  $(document).ready(function() {
        var query_url = $('#summon-guide-results').attr('data-source')
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "http://libguides.princeton.edu/";
        var icon_hint = "<i class='icon-external-link'></i>&nbsp;";
	if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-guide-results');
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
				$('<div class="no-results">No guides found. <a href="'+libguides_url+'">Browse guides</a> for available topics</div>."').appendTo('#summon-guide-results');
			}
		},
 	error: function(data){
              $('<div class="all-fail-to-load-results">Guide results are not available at this time.</div>"').appendTo('#summon-guide-results');
            }
		});
	}	
  });
}(jQuery));
