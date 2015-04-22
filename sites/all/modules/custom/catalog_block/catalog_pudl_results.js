(function($) {
    $(document).ready(function() {
        var query_url = $('#pudl-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var text_icon = 'icon-text';
        var book_icon = 'icon-book';
        var music_icon = 'icon-text';
        var image_icon = 'icon-image';
        var map_icon = 'icon-book';
        var refine_hint = 'Explore Princeton University Digital Library content.';
        var refine_icon = '';
        var refine_message = "See All Digital Library Content";
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#pudl-search-results');
        } else {
            $.ajax({
                url: query_url,
                async: true,
                type: 'GET',
                dataType: 'json',
                //contentType: "application/json; charset=utf-8",
                success: function(data) {
                    var items = [];
                    // add an icon map for format types
                    var icon_type;
                    if (data.number > 0) {
                        $.each(data.records, function(index, result) {
                            if (result['type'] == 'Still image' || result['type'] == 'Prints (visual works)') {
                                var icon_type = image_icon;
                            } else if (result['type'] == 'video' || result['type'] == 'film') {
                                var icon_type = film_icon;
                            } else if (result['type'] == 'Text') {
                                var icon_type = text_icon;
                            } else if (result['type'] == 'Text (manuscript)' || result['type'] == 'Mixed material (manuscript)' || result['type'] == 'Cartographic (manuscript)') {
                                var icon_type = book_icon;
                            } else if (result['type'] == 'Notated music') {
                                var icon_type = music_icon;    var icon_type = map_icon;
                            }
                            else {
                                var icon_type = null;
                            }
                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }
                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a target="_blank" href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>' +
                                '<div class="all-search-excerpt">Collection: ' + result['collection'] + '</div>' +
                                '<div class="all-format-type"><i class="' + icon_type + '"></i>' +
                                result['type'] +
                                '</div></li>');
                        });
                        $('#pudl-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#pudl-search-results');
                        // $('<div class="puld-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#pudl-search-results');
                        $('#catalog_block-catalog_pudl_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-digital"></i>Digital Library Results</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="puld-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Digital Library results</a></div>"').appendTo('#pudl-search-results');
                        }
                        var section_heading = "PUDL"; // Should be in Drupal Settings
                        $('#catalog_block-catalog_pudl_results h2 a').each(function(index, value) {
                            //console.log('processing header');
                            //$(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.pudl-search.more-link a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#pudl-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });

                    } else {
                        $('#pudl-search-results-spinner').hide();
                        $('<div class="no-results">No digital library results found. Try searching for another topic.</div>"').appendTo('#pudl-search-results');
                    }
                },
                error: function(data) {
                    $('#pudl-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Princeton University Digital Library  results are not available at this time.</div>"').appendTo('#pudl-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
