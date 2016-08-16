(function($) {
    $(document).ready(function() {
        var query_url = $('#blacklight-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var text_icon = 'icon-text';
        var book_icon = 'icon-book';
        var music_icon = 'icon-musical-score';
        var image_icon = 'icon-visual-material';
        var map_icon = 'icon-map';
        var refine_hint = 'Books and More';
        var refine_icon = '';
        var refine_message = "Books and More Results";
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
                                //publisher = "<div class='publisher'>" + result['publisher'][0] + "</div>";
                                for(var i=0, len=result['publisher'].length; i < len; i++){
                                    publisher = publisher + "<div class='publisher'>" + result['publisher'][i] + "</div>";
                                }
                            }
                            var author = "";
                            if (result['author']) {
                                for(var i=0, len=result['author'].length; i < len; i++){
                                    author = author + "<div class='author'>" + result['author'][i] + "</div>";
                                }
                            }
                            var holdings = "";
                            if (result['holdings']) {
                                holding_locations = JSON && JSON.parse(result['holdings']) || $.parseJSON(result['holdings']);
                                holdings = holdings + "<div class='pulsearch-availability' data-record-id='" + id + "'>"
                                var mfhd_keys = Object.keys(holding_locations);
                                $.each(mfhd_keys, function(index, key) {
                                //for (var key in holding_locations) {
                                    if(index < 2) {
                                        if (holding_locations.hasOwnProperty(key)) {
                                            call_number = "";
                                            if(holding_locations[key]['call_number']) {
                                                call_number = holding_locations[key]['call_number'];
                                            }
                                            holdings = holdings + "<div class='holding' data-mfhd='" + key +"' data-loc='" + holding_locations[key]['location_code'] + "'>" + holding_locations[key]['location'] + " " + call_number + "</div>";
                                        }
                                    }
                                    if(index == 2) {
                                        view_all_msg = "View Record for Full Availability";
                                        see_more_badge = "<span class='badge-default'>" + view_all_msg + "</span>";
                                        holdings = holdings + "<div>" + see_more_badge + "</div>";
                                    }
                                //}
                                });
                                holdings = holdings + "</div>";
                            }
                            var online_access = "";
                            var online_span = '<span class="badge-notice availability-icon label label-primary" title="" data-toggle="tooltip" data-original-title="Electronic access" aria-describedby="tooltip552370">Online</span>';
                            if (result['online']) {
                                var online_links = JSON && JSON.parse(result['online']) || $.parseJSON(result['online']);
                                online_access = online_access + "<div class='pulsearch-online-access'>";
                                for (var key in online_links) {
                                    if(online_links.hasOwnProperty(key)) {
                                        online_access = online_access + online_span + " " + "<a href='" + key + "'>" + online_links[key] + "</a>";
                                    }
                                }
                                online_access = online_access + "</div>";
                            }
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
                        // $('<div class="puld-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_message+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#blacklight-search-results');
                        $('#catalog_block-catalog_blacklight_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-book"></i>Books and More Results</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="puld-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all Books and More results</a></div>"').appendTo('#blacklight-search-results');
                        }
                        var section_heading = "blacklight"; // Should be in Drupal Settings
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

                        $('#blacklight-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });

                    } else {
                        $('#blacklight-search-results-spinner').hide();
                        $('<div class="no-results">No Books and More Results Found. Try searching for another topic.</div>"').appendTo('#blacklight-search-results');
                    }
                },
                error: function(data) {
                    $('#blacklight-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Princeton Books and More results are not available at this time.</div>"').appendTo('#blacklight-search-results');
                },
                timeout: 5000
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
                if (ids.length > 0) {
                    var availability_base = 'https://bibdata.princeton.edu/availability?'
                    var query_string = "&ids%5B%5D=" + ids.join('&ids%5B%5D=');
                    var availability_url = availability_base + query_string;   
                }
                $.ajax({
                     url: availability_url,
                     async: true,
                     type: 'GET',
                     dataType: 'json',    
                     success: function(data) {
                        $.each(data, function(index, result) {
                            var mfhd_keys = Object.keys(result);
                            // at most there are two holdings
                            $.each(mfhd_keys, function(index, mfhd) {
                                var badge_label = result[mfhd].status
                                if (badge_label != 'Not Charged') {
                                    if (badge_label.indexOf('On-order') == -1) {
                                      var badge_class = 'success';     
                                    } else if (badge_label.indexOf('In Process') == -1) {
                                      var badge_class = 'success'; 
                                    } else if (badge_label != 'On-Site') {
                                        var badge_class = 'error';
                                    } else {
                                        var badge_class = 'success';
                                    }
                                } else {
                                    var badge_class = 'success';
                                    var badge_label = 'Available';
                                }
                            
                                var badge = "<span class='badge-" + badge_class + "'>" + badge_label + "</span>";
                                var holding_note = $("*[data-mfhd='" + mfhd + "']");
                           
                                if (badge_label != 'Online') {
                                    var note_text = $(holding_note).text();
                                    $(holding_note).html(badge + note_text);
                                } else {
                                    $(holding_note).html('');
                                }
                            });
                        });

                     },
                    error: function(data) {
                        console.log("Can't load availability data.");
                    },
                    timeout: 5000
                });
            });
        }
    });
}(jQuery));
