(function ($) {
  $(document).ready(function() {
        //$( "#summon-progressbar" ).progressbar({
	//		value: 37
	//	});	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
        var path = $(location).attr('pathname');
        var query = path.substr(10);
        query = query.replace("/", "");
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-search-results');
	} else {
    $.getJSON('/searchit/articles/any/'+query, function(data) {
  	var items = [];
		var more_link = data.more;
			var num_results = data.number;
			var records = data.records;
  			$.each(records, function(index, result) {
    				items.push('<li><a title="'+result['abstract'] + '" href="' + result['url'] + '" target="_blank">' + result['title'] + '</a> <span class="summon-format-type">' + result['format'] + '</span></li>');
			});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-search-results');
			$('<div class="more-results"><i class="icon-external-link"></i>&nbsp;<a href="'+more_link+'">See all '+data.number+' Articles+ Results</a></div>"').appendTo('#summon-search-results');
		});
	}	
  });
}(jQuery));
