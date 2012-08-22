(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
	  var path = $(location).attr('pathname');
	  var query = path.substr(path.lastIndexOf('/') + 1); //FIXME 
	  if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-recommendation-results');
	  } else {
    	  	$.getJSON('/searchit/articles/recommendations/'+query, function(data) {
			if(data.recommendations) {
  	  		var items = [];
			$('<h3>Recommended Databases</h3>').appendTo('#summon-recommendation-results');
  	  		$.each(data.recommendations, function(index, result) {
        			items.push('<li><a href="' + result.link	 + '" target="_blank" title="' + result.description+'">' + result.title + '</a></li>');
	  		});
  	  		$('<ul/>', {
        			'class': 'summon-recommendation-results-list',
    	  			html: items.join('')
  	  		}).appendTo('#summon-recommendation-results');
   		}
		});
	  }	
  });
}(jQuery));
