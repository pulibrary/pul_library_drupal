(function($) {
    $(document).ready(function() {
        var query_url = $('#pulfalight-search-results').attr('data-source');
        var file_icon = 'icon-data-file';
        var refine_hint = 'Explore finding aids content.';
        var collection_icon = 'icon-collections';
        var default_icon = 'icon-mixed-material';
        var refine_icon = '';
        var refine_message = "See all Finding Aids content.";
        var pul_resolver = 'https://library.princeton.edu/resolve/lookup?url=';
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#pulfalight-search-results');
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
                          if (index % 2 == 0) {
                              var row_class = "odd";
                          } else {
                              var row_class = "even"
                          }
                      });

                          $.each(data.records, function(index, result) {
                            var icon_type;
                            if (result['type'] == 'file') {
                                icon_type = file_icon;
                            } else if (result['type'] == 'collection') {
                                icon_type = collection_icon;
                            } else {
                                icon_type = default_icon;
                            }

                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }

                            var id = result['id'];

                            var repository = "";
                            if (result['repository']) {
                                for(var i=0, len=result['repository'].length; i < len; i++){
                                    author = author + "<div class='author'>" + result['repository'][i] + "</div>";
                                }
                            }

                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a target="_blank" href="' + result['url'] + '" target="_blank">' + result['title'] + '</a></h3>' +
                                '<div class="all-format-type"><i class="' + icon_type + '"></i>' +
                                result['type'] +
                                '</div>' + repository + '</li>');
                        });
                        $('#blacklight-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#blacklight-search-results');
                        $('#catalog_block-catalog_pulfalight_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-book"></i>Catalog</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="blacklight-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Finding Aids results</a></div>"').appendTo('#blacklight-search-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#catalog_block-catalog_pulfalight_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        } else {
                            $(preview).parent().hide();
                        }
                        var section_heading = "Library Archives"; // Should be in Drupal Settings
                        $(preview).click(function() {
                            ga('send', 'event', 'All Search', 'Skip to Section',section_heading);
                        });

                        $('#catalog_block-catalog_pulfalight_results h2 a').each(function(index, value) {
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

                        $('#blacklight-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });

                    } else {
                        $('#blacklight-search-results-spinner').hide();
                        $('<div class="no-results">No Finding Aids results found. Try searching for another topic.</div>"').appendTo('#blacklight-search-results');
                    }
                },
                error: function(data) {
                    $('#blacklight-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Finding Aids results are not available at this time.</div>"').appendTo('#blacklight-search-results');
                },
                timeout: 15000
            })

        }
    });
}(jQuery));
