(function($) {
    $(document).ready(function() {
        var query_url = $('#pulfa-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var refine_hint = 'Explore finding aids content.';
        var series_icon = 'icon-folder-closed';
        var subseries_icon = 'icon-folder-open';
        var collection_icon = 'icon-collections';
        var default_icon = 'icon-item';
        var breadcrumb_label = "<span class='breadcrumb-label'>Contained In:&nbsp;</span>";
        var refine_icon = '';
        var refine_message = "See All Finding Aids";
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#pulfa-search-results');
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

                            var breadcrumbs = "";
                            if (result['breadcrumb'].length > 0) {
                                _.each(result['breadcrumb'], function(crumb) {
                                    if (crumb.level == 'collection') {
                                        var formatted_crumb = "<div class='all-pulfa-breadcrumb'>" +
                                            breadcrumb_label +
                                            //'<i class="'+collection_icon+'"></i>&nbsp;'+
                                            '<a target="_blank" href="' + crumb.uri + '">' +
                                            crumb.text +
                                            "</a><div>";
                                        breadcrumbs += formatted_crumb;
                                    }
                                });
                            }
                            var icon_type;
                            if (result['type'] == 'file') {
                                icon_type = file_icon;
                            } else if (result['type'] == 'series') {
                                icon_type = series_icon;
                            } else if (result['type'] == 'collection') {
                                icon_type = collection_icon;
                            } else if (result['type'] == 'subseries') {
                                icon_type = subseries_icon;
                            } else {
                                icon_type = default_icon;
                            }
                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a href="' + result['url'] +
                                '" target="_blank">' + result['title'] + '</a></h3>' +
                                '<div class="all-search-excerpt">' + result['kwic'] + '</div>' +
                                '<div class="all-format-type"><i class="' + icon_type + '"></i>' +
                                result['type'] +
                                '</div>' + breadcrumbs + '</li>');
                        });
                        $('#pulfa-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#pulfa-search-results');
                        // $('<div class="pulfa-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#pulfa-search-results');
                        $('#catalog_block-catalog_pulfa_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-archives"></i>Library Archives Results</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="pulfa-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Finding Aids results</a></div>"').appendTo('#pulfa-search-results');
                        }
                        var section_heading = "PULFA"; // Should be in Drupal Settings
                        $('#catalog_block-catalog_pulfa_results h2 a').each(function(index, value) {
                            //console.log('processing header');
                            //$(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.pulfa-search.more-link a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#pulfa-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });
                    } else {
                        $('#pulfa-search-results-spinner').hide();
                        //$('<div class="no-results">No Finding Aids results.</div>"').appendTo('#pulfa-search-results');
                        $('<div class="no-results">No library archives results found. Try searching for another topic.</div>"').appendTo('#pulfa-search-results');
                    }
                },
                error: function(data) {
                    $('#pulfa-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Finding Aids results are not available at this time.</div>"').appendTo('#pulfa-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
