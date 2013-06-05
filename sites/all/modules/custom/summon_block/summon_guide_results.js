(function ($) {
  $(document).ready(function() {
        var query_url = $('#summon-guide-results').attr('data-source')
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "http://libguides.princeton.edu/";
        var icon_hint = "<i class='icon-external-link'></i>&nbsp;";
        var refine_icon = '<i class="icon-circle-arrow-right"></i>&nbsp;';
	var refine_tooltip = "See All Library Guides";
	var refine_message = "See All Library Guides";
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
				if(index%2 == 0) {
                                        var row_class="odd";
                                } else {
                                        var row_class="even"
                                }
				if(result['abstract']) {
                                        var abstract = result['abstract'];
                                } else {
                                        var abstract = "Abstract not available.";
                                }
				if(result['author']) {
                                        var author = '<div><span>Author(s): '+result['author']+'</span></div>';
                                } else {
                                        var author = "";
                                }
                result_position = parseInt(index) + 1;
                ga_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'All Search\', \'Library Guide Title\', \'Position '+result_position+'\']);"';
    			items.push('<li class="'+row_class+'"><h3><a title="'+abstract+'" href="' + result['url'] + '" target="_blank"'+ga_track_code+'>' + result['title'] + '</a></h3>'+author+'</li>');
				});
  			$('<ul/>', {
    				'class': 'all-search-results-list',
    				html: items.join('')
  			}).appendTo('#summon-guide-results');
            refine_link_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'Expand All Search\', \'Library Guides\', \'Top\']);"'
			$('<div class="refine-link">'+refine_icon+'<a '+refine_link_track_code+' target="_blank" title="'+refine_tooltip+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#summon-guide-results');
			if(data.number > 3) {
                more_link_track_code = 'onclick="_gaq.push([\'_trackEvent\', \'Expand All Search\', \'Library Guides\', \'Bottom\']);"'
				$('<div class="more-link"><a '+more_link_track_code+' title="'+tooltip+'" target="_blank" href="'+data.more+'">'+icon_hint+'See All '+data.number+' Research Guides</a></div>"').appendTo('#summon-guide-results');
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
