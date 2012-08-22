(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
	var path = $(location).attr('pathname');
	var query = path.substr(path.lastIndexOf('/') + 1); //FIXME 
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-search-results');
	} else {
    $.getJSON('/searchit/articles/any/'+query, function(data) {
  	var items = [];
		var more_link = data.more;
			var num_results = data.number;
			var records = data.records;
  			$.each(records, function(index, result) {
    				items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></li>');
			});
  			$('<ul/>', {
    				'class': 'summon-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-search-results');
			$('<div class="more-results"><a href="'+more_link+'">'+data.number+' More Articles+ Results</a></div>"').appendTo('#summon-search-results');
		});
	}	
  });
}(jQuery));
