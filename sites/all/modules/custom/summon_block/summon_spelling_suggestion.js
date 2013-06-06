(function ($) {
  $(document).ready(function() {

    var query_url = $('#summon-spelling-results').attr('data-source')
    var base_url = "/find/all/";

	if(query_url === "" || query_url == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-spelling-results');
	} else {
        	$.ajax({
             		url: query_url, 
             		async: true,
             		type: 'GET',
             		dataType: 'json',
             		success: function(data) {

  				var items = [];
      				var spelling_suggestion = data[0];
      				if(spelling_suggestion != undefined) {
        				var suggested_search = base_url + spelling_suggestion;
                        var ga_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'All Search\', \'Did You Mean\', \'Position 1\']);"';
        				$('<span class="summon-suggestion">Did you mean? <a '+ga_track_code+'href="'+ suggested_search + '" class="summon-suggestion-string">' + spelling_suggestion + "</a></span>").appendTo('#summon-spelling-results');
      				} else {
        				$('span class="no-summon-suggestions"></span>').appendTo('#summon-spelling-results');
      				}
			},
 			error: function(data){
                            //fail silently for now
                            console.log("Summon Failed to Respond to Spellcheck");
              				//$('<span class="summon-spelling-failure">Search suggestions are not available at this time.</span>"').appendTo('#summon-spelling-results');
            			}
                	});
	}
  		});
}(jQuery));

