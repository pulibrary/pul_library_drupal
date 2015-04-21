(function($) {
    $(document).ready(function() {

        var query_url = $('#journal-search-results').attr('data-source');
        var refine_tooltip = "Refine your journal search in Books+";
        var icon_hint = '<i class="icon-newtab"></i>&nbsp';
        var request_hint = 'Check Journal Locations and Availability';
        var pul_resolver = 'http://libwebprod.princeton.edu/resolve/lookup?url='; //FIXME move these to Drupal config settings
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#journal-search-results');
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
                            var online_avail = "";
                            var holdings_list = "";
                            if (result['fulltextavail'] == "Y") {

                                online_avail = "<div class='all-full-text'>" +
                                    icon_hint +
                                    '<a class="all-search-link" href="' + pul_resolver + result['full_text_link'] +
                                    '" title="Go to Resource">' +
                                    'Online Access' +
                                    "</a></div>";
                            }
                            if ((result['holdings'].length == 1) && (result['fulltextavail'] == "Y")) {
                                //return false; 
                            } else if (result['holdings'].length > 0) {
                                // use underscore 
                                holdings_list += "<div class='all-locations-list'><span class='locations-list-label'>Locations:&nbsp;</span>";
                                _.each(result['holdings'], function(holding) {
                                    for (var key in holding) {
                                        if (key !== "ONLINE") {
                                            var location = holding[key];
                                            holdings_list += "<span class='holdings-item " +
                                                location['location_code'] + "'>" +
                                                '<a href="' + location['request_link'] + '" title="' +
                                                request_hint + '">' +
                                                location['library_label'] +
                                                "</a></span>&nbsp;";
                                        }
                                    }

                                });
                                holdings_list += "</div>";
                            }
                            var creation_date = "";
                            if (result['creationdate']) {
                                creation_date = "<div class='all-result-date'>" + result['creationdate'] + "</div>";
                            }
                            items.push('<li><h3><a href="' +
                                result['url'] +
                                '" target="_blank">' +
                                result['title'] +
                                '</a></h3> ' +
                                online_avail +
                                '<span class="format-type">' +
                                //result['format'] +
                                holdings_list +
                                creation_date +
                                '</span></li>');
                        });
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#journal-search-results');
                        if (data.number > 3) {
                            $('<div class="more-link"><a title="' + refine_tooltip + '" href="' + data.more + '">' + icon_hint + 'See all ' + data.number + ' Journal Results</a></div>"').appendTo('#journal-search-results');
                        }
                    } else {
                        $('<div class="no-results">No matching journal titles.</div>"').appendTo('#journal-search-results');
                    }
                },
                error: function(data) {
                    $('<div class="all-fail-to-load-results">Journal results are not available at this time.</div>"').appendTo('#pulfa-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
