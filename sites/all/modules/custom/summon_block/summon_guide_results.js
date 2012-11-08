(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
        var query = path.substr(10);
        query = query.replace("/", "");

        var libguides_url = "http://libguides.princeton.edu/";
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-guide-results');
	} else {
    $.getJSON('/searchit/articles/guide/'+query, function(data) {
  	var items = [];
		if(data.number > 0) {
			
  			$.each(data.records, function(index, result) {
    				items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></li>');
				});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-guide-results');
				$('<div class="more-results"><i class="icon-arrow-right"></i>See all <a href="'+data.more+'"> Research Guides</a></div>"').appendTo('#summon-guide-results');
			} else {
				$('<div class="no-results"><a href="'+libguides_url+'">Browse Library Research Guides</a></div>"').appendTo('#summon-guide-results');
			}
		});
	}	
  });
}(jQuery));
