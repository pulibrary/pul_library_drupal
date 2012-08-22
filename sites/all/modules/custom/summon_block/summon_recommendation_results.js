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
  	  var items = [];
		  //var records = data.records;
  	  $.each(data, function(index, result) {
				console.log(data[index]);
        items.push('<li><a href="' + data[index]['link']	 + '" target="_blank" title="' + data[index].description+'">' + data[index].title + '</a></li>');
		  });
		  console.log(items);
  	  $('<ul/>', {
        'class': 'summon-recommendation-results-list',
    	  html: items.join('')
  	  }).appendTo('#summon-recommendation-results');
		});
	  }	
  });
}(jQuery));
