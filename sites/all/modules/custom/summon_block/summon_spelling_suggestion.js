(function ($) {
  $(document).ready(function() {
  	
	//var query = "firestone";
	//var request = Drupal.settings.sy_block.request;
	//console.log(document.location.href);
        var path = $(location).attr('pathname');
        var query = path.substr(10);
        //query = query.replace("/", "");

        var base_url = "/find/all/";
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-spelling-results');
	} else {
    $.getJSON('/searchit/articles/spelling?query='+query, function(data) {
  	var items = [];
		//var more_link = data.more;
		//	var num_results = data.number;
		//	var records = data.records;
  	//		$.each(records, function(index, result) {
    //				items.push('<li><a href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></li>');
		//	d});
  	//		$('<ul/>', {
    //				'class': 'summon-search-results-list',
    //				html: items.join('')
  	//		}).appendTo('#catalog-search-results');
		//	$('<div class="more-results"><a href="'+more_link+'">More Articles+ Results</a></div>"').appendTo('#summon-search-results');
      var spelling_suggestion = data[0];
      if(spelling_suggestion != undefined) {
        var suggested_search = base_url + spelling_suggestion; 
        $('<span class="summon-suggestion">Did you Mean? <a href="'+ suggested_search + '" class="summon-suggestion-string">' + spelling_suggestion + "</a></span>").appendTo('#summon-spelling-results');
      } else {
        $('span class="no-summon-suggestions"></span>').appendTo('#summon-spelling-results');
      }
    });
	}	
  });
}(jQuery));
