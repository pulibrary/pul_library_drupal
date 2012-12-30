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
	var tooltip = "Refine Your Search in Articles+";
	var summon_url = "http://princeton.summon.serialssolutions.com";
	var refine_icon = '<i class="icon-circle-arrow-right"></i>&nbsp;';
	if(query === "" || query == undefined) {
		$('<div class="message">Please supply search terms</div>').appendTo('#summon-search-results');
	} else {
        //$.getJSON('/searchit/articles/any?query='+query, function(data) {
         $.ajax({
	    url: '/searchit/articles/any?query='+query,
            async: true,
            type: 'GET',
            dataType: 'json',
            success: function(data) {
	if(data.number > 0) 
	{
  		var items = [];
		var more_link = data.more;
			var num_results = data.number;
			var records = data.records;
  			$.each(records, function(index, result) {
				if(index%2 == 0) {
					var row_class="odd";
				} else {
					var row_class="even"
				}
				if(result['fulltextavail']) {
					var holdings_statement= "<span class='all-full-text'><i class='icon-file'></i>&nbsp;Full-Text Available</span>";
				} else {
					var holdings_statement = "";
				}
				if(result['publication_title']) {
					var pub_title = '<div><em>'+result['publication_title']+'</em></div>';
				} else {
					var pub_title = '';
				}
				if(result['publication_year']) {
					var pub_date = '<div><span>Year: '+result['publication_year']+'</div>';
				} else {
					var pub_date = "";
				}
    				items.push('<li class="'+row_class+'"><h3><a title="'+
					result['abstract'] + 
					'" href="' + 
					result['url'] + 
					'" target="_blank">' + 
					result['title'] + 
					'</a></h3><div class="summon-format-type">' + 
					result['format']+
					holdings_statement+
					"</div>"+
					pub_title+
					pub_date+'</li>');
			});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-search-results');
			$('<div class="refine-link">'+refine_icon+'<a title="refine_tooltip" href="'+data.more+'">Refine</a><div>').insertBefore('#summon-search-results');
			if(data.number > 3) {
				$('<div class="more-link"><a title="'+tooltip+'" href="'+more_link+'"><i class="icon-external-link"></i>&nbsp;See all '+data.number+' Articles+ Results</a></div>"').appendTo('#summon-search-results');
			}
	} else {	
        	$('<div class="no-results">No matches in Articles+.</div>"').appendTo('#summon-search-results');
        	}
	},
	 error: function(data){
              $('<div class="all-fail-to-load-results">Articles+ results are not available at this time.</div>"').appendTo('#pulfa-search-results');
            }
		});
	}	
  });
}(jQuery));
