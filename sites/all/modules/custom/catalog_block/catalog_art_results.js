(function($) {
    $(document).ready(function() {
        var query_url = $('#art-search-results').attr('data-source');
        var refine_hint = 'Explore Art Museum Collections.';
        var default_icon = 'icon-mixed-material';
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#art-search-results');
        } else {
            $.ajax({
                url: query_url,
                async: true,
                type: 'GET',
                dataType: 'json',
                success: function(data) {
                    var items = [];

                    if (data.number > 0) {
                        $.each(data.records, function(index, result) {
                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }

                            icon_type = default_icon;

                            var result_position = parseInt(index) + 1;
                            var creator = result['creator'] || result['other_fields']['date'];
                            var object_number = result['other_fields']['object_number'];
                            items.push('<li class="' + row_class + '"><h3><a href="' + result['url'] +
                                '" target="_blank">' + result['title'] + '</a></h3>' + 
                                '<div class="all-search-excerpt">' + creator + ', ' + object_number + '</div>' +
                                '</li>');
                        });
                        $('#art-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#art-search-results');
                        $('#catalog_block-catalog_arts_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-visual-material"></i>Art Museum Collections</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="art-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Art Museum Collections results</a></div>"').appendTo('#art-search-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#catalog_block-catalog_arts_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        }
                        var section_heading = "Art Museum Collections"; // Should be in Drupal Settings
                        $(preview).click(function() {
                            ga('send', 'event', 'All Search', 'Skip to Section',section_heading);
                        });

                        $('#catalog_block-catalog_arts_results h2 a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.art-search.more-link a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#art-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });
                    } else {
                        $('#art-search-results-spinner').hide();
                        $('<div class="no-results">No Art Museum Collections found. Try searching for another topic.</div>"').appendTo('#art-search-results');
                        var preview = $("a[href='#catalog_block-catalog_art_results']");
                        $(preview).parent().hide();
                    }
                },
                error: function(data) {
                    $('#art-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Art Museum Collection results are not available at this time.</div>"').appendTo('#art-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
