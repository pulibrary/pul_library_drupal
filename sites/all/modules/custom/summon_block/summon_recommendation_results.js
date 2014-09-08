(function ($) {
  $(document).ready(function() {
	var query_url = $('#summon-recommendation-results').attr('data-source');	
	  if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-recommendation-results');
	  } else {
    	  	$.ajax({
			url: query_url,
			async: true,
		        type: 'GET',
            		dataType: 'json',
            		success: function(data) {

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
			},
			error: function(data) {
				$('<div class="all-fail-to-load-results">Guide results are not available at this time.</div>"').appendTo('#summon-recommendation-results');	
			},
      timeout: 5000
		});
	}	
  });
}(jQuery));
