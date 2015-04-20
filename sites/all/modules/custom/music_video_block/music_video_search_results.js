(function($) {
    $(document).ready(function() {

        var query_url = $('#catalog-search-results').attr('data-source');
        var refine_tooltip = "See all results or expand your search in Books+.";
        var refine_message = "See all Books+ results &rarr;";
        var request_hint = 'See Available Items at ';
        var availability_hint = "Check for Available Copies";
        var pul_resolver = 'http://library.princeton.edu/resolve/lookup?url=';
        var icon_hint = 'icon-newtab';
        var book_icon = 'icon-book';
        var journal_icon = 'icon-text';
        var video_icon = 'icon-video';
        var film_icon = 'icon-film';
        var audio_icon = 'icon-audio';
        var refine_icon = '';
        var max_display_results = 5;

        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#catalog-search-results');
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
                            var result_position = parseInt(index) + 1; //for GA tracking

                            var online_avail = "";
                            var holdings_show_list = "";
                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }

                            if (result['fulltextavail'] == "Y") {
                                if (~result['full_text_link'].indexOf(pul_resolver)) {
                                    pul_resolver = "";
                                }
                                online_avail = "<div class='all-full-text'>" +
                                    icon_hint +
                                    '<a target="_blank" class="all-search-link full-text-link" href="' + pul_resolver + result['full_text_link'] +
                                    '" title="Go to Resource">' +
                                    'Online Access' +
                                    "</a></div>";
                            }
                            if ((result['holdings'].length == 1) && (result['fulltextavail'] == "Y")) {
                                //return false;	

                            } else if (result['holdings'].length > 0) {
                                // use underscore 
                                var holdings_show = 0;
                                var holdings_list = "<div class='all-locations-list'><span class='locations-list-label'>Locations:&nbsp;</span>";
                                _.each(result['holdings'], function(holding) {
                                    for (var key in holding) {
                                        if (key !== "ONLINE") {
                                            var location = holding[key];
                                            holdings_list += "<span class='holdings-item'> " +
                                                '<a class="all-holdings-link" target="_blank" href="' + location['request_link'] + '" title="' +
                                                request_hint + location['library_label'] + '">' +
                                                location['library_label'] +
                                                "</a></span>&nbsp;";
                                            holdings_show = 1;
                                        }
                                    }
                                });
                                holdings_list += "</div>";
                                if (holdings_show == 1) {
                                    holdings_show_list = holdings_list;
                                }
                            }
                            var creation_date = "";
                            var icon_element = "";
                            if (result['publisher']) {
                                creation_date = "<div>" + result['publisher'] + "</div>";
                            } else if (result['creationdate']) {
                                creation_date = "<div>" + result['creationdate'] + "</div>";
                            }
                            if (result['format'] == 'book') {
                                var icon_type = book_icon;
                            } else if (result['format'] == 'video' || result['format'] == 'film') {
                                var icon_type = film_icon;
                            } else if (result['format'] == 'audio') {
                                var icon_type = audio_icon;
                            } else if (result['format'] == 'journal') {
                                var icon_type = journal_icon;
                            } else {
                                var icon_type = null;
                            }
                            if (icon_type) {
                                icon_element = "<i class='" + icon_type + "'></i>";
                            }
                            if (result['description']) {
                                var desc = result['description'];
                            } else if (result['toc']) {
                                var desc = result['toc'];
                            } else if (result['notes']) {
                                var desc = result['notes'];
                            } else {
                                var desc = "No description available.";
                            }
                            if (result['creator']) {
                                var creator = "<div><span>" + result['creator'] + "</span></div>";
                            } else {
                                var creator = "";
                            }

                            items.push('<li class="' + row_class + '"><h3><a href="' +
                                result['url'] +
                                '" title="' + desc + '" target="_blank" ' + '>' +
                                result['title'] +
                                '</a></h3> ' +
                                creator +
                                online_avail +
                                '<div class="format-type">' +
                                icon_element +
                                result['format'] +
                                '</div>' +
                                creation_date +
                                holdings_show_list +
                                '</li>');
                        });
                        $('#catalog-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#catalog-search-results');

                        // $('<div class="books-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_tooltip+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#catalog-search-results');
                        $('#music_video_block-music_video_search_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a href="' + data.more + '"><i class="icon-books"></i> Books+ Search Results</a></h2>';
                        });
                        if (data.number > max_display_results) {
                            $('<div class="books-search more-link"><a target="_blank" title="' + refine_tooltip + ' ' + data.number + ' total results." href="' + data.more + '">See all ' + data.number + ' Books+ results</a></div>"').appendTo('#catalog-search-results');
                        }

                        var section_heading = "Books+"; // Should be in Drupal Settings
                        $('#music_video_block-music_video_search_results h2 a').each(function(index, value) {

                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.books-search.more-link a').each(function(index, value) {

                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#catalog-search-results .all-search-results-list h3 a').each(function(index, value) {

                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });
                        });
                        //online links
                        $('#catalog-search-results .all-search-results-list .all-full-text .full-text-link').each(function(index, value) {

                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Online Holding Position ' + result_position);
                            });
                        });

                        // print holdings
                        $('#catalog-search-results .all-search-results-list .all-locations-list .all-holdings-link').each(function(index, value) {

                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Print Holding Position ' + result_position);
                            });
                        });



                    } else {
                        $('#catalog-search-results-spinner').hide();
                        $('<div class="no-results">No matches in Books+.</div>"').appendTo('#catalog-search-results');
                    }
                },
                error: function(data) {
                    $('#catalog-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Books+ results are not available at this time.</div>"').appendTo('#catalog-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
