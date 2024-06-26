(function($) {
    $(document).ready(function() {
        var query_url = $('#blacklight-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var text_icon = 'icon-text';
        var book_icon = 'icon-book';
        var music_icon = 'icon-musical-score';
        var image_icon = 'icon-visual-material';
        var map_icon = 'icon-map';
        var refine_hint = 'Catalog';
        var refine_icon = '';
        var refine_message = "Expand your search to explore all Catalog results.";
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#blacklight-search-results');
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
                            } else if (result['type'] == 'Book' || result['type'] == 'Mixed material (manuscript)' || result['type'] == 'Cartographic (manuscript)') {
                                var icon_type = book_icon;
                            } else if (result['type'] == 'Notated music') {
                                var icon_type = music_icon;
                            }
                            else {
                                var icon_type = null;
                            }
                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }
                            var id = result['id'];
                            var publisher = "";
                            if (result['publisher']) {
                                publisher = "<div class='publisher'>" + result['publisher'] + "</div>";
                            }
                            var author = "";
                            if (result['creator']) {
                                author = "<div class='author'>" + result['creator'] + "</div>";
                            }
                            var holdings = "";
                            var online_process = false;
                            if (result['other_fields']['first_library']) {
                                holdings = holdings + "<ul class='pulsearch-availability' data-record-id='" + id + "'>"
                                holdings = holdings + `<li class="holding"><span class="results_location">${result['other_fields']['first_library']}</span> » <span class="call-number">${result['other_fields']['first_call_number'] || ''}</span></li>`
                                if (result['other_fields']['second_library']) {
                                    holdings = holdings + `<li class="holding"><span class="results_location">${result['other_fields']['second_library']}</span> » <span class="call-number">${result['other_fields']['second_call_number'] || ''}</span></li>`
                                }
                                holdings = holdings + "</ul>";
                            }
                            var online_access = "";
                            var online_span = '<span class="badge-notice availability-icon label label-primary" title="" data-toggle="tooltip" data-original-title="Electronic access" aria-describedby="tooltip552370">Online</span>';
                            // displays online link
                            // if(online_process == true) {
                                if (result['other_fields']['resource_url']) {
                                    var online_links =result['other_fields']['resource_url'];
                                    online_access = online_access + "<div class='pulsearch-online-access'>";
                                    if (online_links) {
                                        var link_label = result['other_fields']['resource_url_label'] || "Eresource";
                                        online_access = online_access + online_span + " " + "<a href='" + online_links + "'>" + link_label + "</a>";
                                    }
                                    online_access = online_access + "</div>";
                                }
                            // }
                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a target="_blank" href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>' +
                                '<div class="all-format-type"><i class="' + icon_type + '"></i>' +
                                result['type'] +
                                '</div>' + author + publisher + online_access + '<div class="holdings" data-ol-id="' +id+ '"">' + holdings + '</div></li>');
                        });
                        $('#blacklight-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#blacklight-search-results');
                        $('#catalog_block-catalog_blacklight_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-book"></i>Catalog</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="blacklight-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Catalog results</a></div>"').appendTo('#blacklight-search-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#catalog_block-catalog_blacklight_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        } else {
                            $(preview).parent().hide();
                        }
                        var section_heading = "Catalog"; // Should be in Drupal Settings
                        $(preview).click(function() {
                            ga('send', 'event', 'All Search', 'Skip to Section',section_heading);
                        });

                        $('#catalog_block-catalog_blacklight_results h2 a').each(function(index, value) {
                            //$(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.blacklight-search.more-link a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#blacklight-search-results .all-search-results-list .pulsearch-online-access a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Online Item');
                            });
                        });

                        $('#blacklight-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });

                    } else {
                        $('#blacklight-search-results-spinner').hide();
                        $('<div class="no-results">No Catalog results found. Try searching for another topic.</div>"').appendTo('#blacklight-search-results');
                    }
                },
                error: function(data) {
                    $('#blacklight-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Catalog results are not available at this time.</div>"').appendTo('#blacklight-search-results');
                },
                timeout: 15000
            }).done(function() {
                var ids = [];
                $('#blacklight-search-results .holdings').each(function() {
                    var pos = $(this).position();
                    var id = $(this).data('ol-id');
                    if (!isNaN(id))
                    {
                        ids.push(id);
                    }
                });
            });
        }
    });
}(jQuery));
