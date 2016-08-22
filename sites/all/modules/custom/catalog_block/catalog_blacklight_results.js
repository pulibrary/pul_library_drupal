(function($) {
    $(document).ready(function() {
        var query_url = $('#blacklight-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var text_icon = 'icon-text';
        var book_icon = 'icon-book';
        var music_icon = 'icon-musical-score';
        var image_icon = 'icon-visual-material';
        var map_icon = 'icon-map';
        var refine_hint = 'New Catalog';
        var refine_icon = '';
        var refine_message = "Expand your search to explore all New Catalog results.";
        var pul_resolver = 'http://library.princeton.edu/resolve/lookup?url=';
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
                            var online_process = false;
                            if (result['holdings']) {
                                holding_locations = JSON && JSON.parse(result['holdings']) || $.parseJSON(result['holdings']);
                                holdings = holdings + "<div class='pulsearch-availability' data-record-id='" + id + "'>"
                                var mfhd_keys = Object.keys(holding_locations);
                                $.each(mfhd_keys, function(index, key) {
                                    // only display online if there is an online holding library
                                    if (holding_locations[key]['library'] == 'Online') {
                                            online_process = true;
                                    }
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
                            if(online_process == true) { 
                                if (result['online']) {
                                    var online_links = JSON && JSON.parse(result['online']) || $.parseJSON(result['online']);
                                    online_access = online_access + "<div class='pulsearch-online-access'>";
                                    for (var key in online_links) {
                                        if(online_links.hasOwnProperty(key)) {
                                            if (online_links[key][1]) {
                                                var link_label = online_links[key][1] + ": ";
                                            } else {
                                                var link_label = "";
                                            }
                                            online_access = online_access + online_span + " " + link_label + "<a href='" + pul_resolver + key + "'>" + online_links[key][0] + "</a>";
                                        }
                                    }
                                    online_access = online_access + "</div>";
                                }
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
                        $('#catalog_block-catalog_blacklight_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-book"></i>New Catalog</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="puld-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all New Catalog results</a></div>"').appendTo('#blacklight-search-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#catalog_block-catalog_blacklight_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        } else {
                            $(preview).parent().hide();
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
                        $('<div class="no-results">No New Catalog results found. Try searching for another topic.</div>"').appendTo('#blacklight-search-results');
                    }
                },
                error: function(data) {
                    $('#blacklight-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">New Catalog results are not available at this time.</div>"').appendTo('#blacklight-search-results');
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
                            // at most there are two holdings in the availabilibility response per mfhd
                            $.each(mfhd_keys, function(index, mfhd) {
                                var badge_label = result[mfhd].status
                                // begin availability from orangelight availability.js
                                function title_case(str) {
                                    return str[0].toUpperCase() + str.slice(1, (str.length - 1 + 1) || 9e9).toLowerCase();
                                };
                                var status = title_case(badge_label);
                                var on_site_status = 'On-site'
                                var on_site_unavailable = 'On-site - '
                                var circ_desk = 'Check with front desk'
                                var available_statuses = ['Not charged', 'On shelf']
                                var returned_statuses = ['Discharged']
                                var in_process_statuses = ['In process']
                                var checked_out_statuses = ['Charged', 'Renewed', 'Overdue', 'On hold',
                                'In transit', 'In transit on hold', 'At bindery',
                                'Remote storage request', 'Hold request', 'Recall request']
                                var missing_statuses = ['Missing', 'Lost--library applied',
                                'Lost--system applied', 'Claims returned', 'Withdrawn']
                                var available_labels = ['Available', 'Returned', 'In process', 'Requestable',
                                    'On shelf', 'All items available']
                                var open_location_labels = ['Available', 'All items available']
                                var unavailable_labels = ['Checked out', 'Missing']
                                var __indexOf = Array.prototype.indexOf || function(item) {
                                  for (var i = 0, l = this.length; i < l; i++) {
                                    if (this[i] === item) return i;
                                  }
                                  return -1;
                                };
                                var label;
                                label = (function() {
                                  switch (false) {
                                    case __indexOf.call(available_statuses, status) < 0:
                                      return 'Available';
                                    case __indexOf.call(returned_statuses, status) < 0:
                                      return 'Returned';
                                    case status !== 'In transit discharged':
                                      return 'In transit';
                                    case __indexOf.call(in_process_statuses, status) < 0:
                                      return 'In process';
                                    case __indexOf.call(checked_out_statuses, status) < 0:
                                      return 'Checked out';
                                    case __indexOf.call(missing_statuses, status) < 0:
                                      return 'Missing';
                                    case !status.match(on_site_unavailable):
                                      return circ_desk;
                                    case !status.match(on_site_status):
                                      return 'On-site access';
                                    case !status.match('Order received'):
                                      return 'Order received';
                                    case !status.match('Pending order'):
                                      return 'Pending order';
                                    case !status.match('On-order'):
                                      return 'On-order';
                                    default:
                                      return status;
                                  }
                                })();
                                var label_class;
                                if (__indexOf.call(unavailable_labels, label) >= 0) {
                                  label_class = "error";
                                } else if (__indexOf.call(available_labels, label) >= 0) {
                                  label_class = "success";
                                } else if (label === 'On-site access') {
                                  label_class = "alert";
                                } else if (label === circ_desk) {
                                  label_class = "alert";
                                } else if (label === 'Online') {
                                  label_class = "notice";
                                } else {
                                  label_class = "default";
                                }
                                // End Availability Block from Orangelight
                                var badge = "<span class='badge-" + label_class + "'>" + label + "</span>";
                                var holding_note = $("*[data-mfhd='" + mfhd + "']");
                           
                                if (badge_label != 'Online') {
                                    var note_text = $(holding_note).text();
                                    $(holding_note).html(badge + " " + note_text);
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
