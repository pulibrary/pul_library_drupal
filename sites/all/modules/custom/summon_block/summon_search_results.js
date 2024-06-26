(function($) {
    $(document).ready(function() {

        var query_url = $('#summon-search-results').attr('data-source')
        var refine_message = "See All Scholarly Materials in Articles+";
        var refine_tooltip = "Expand your search to see all scholarly materials in Articles+.";
        var summon_url = "https://princeton.summon.serialssolutions.com";
        var max_display_results = 5;
        if (query_url == "/find/all" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#summon-search-results');
        } else {
            $.ajax({
                url: query_url,
                async: true,
                type: 'GET',
                dataType: 'json',
                success: function(data) {
                    if (data.number > 0) {
                        var items = [];
                        var more_link = data.more;
                        var num_results = data.number;
                        var records = data.records;
                        $.each(records, function(index, result) {
                            if (index % 2 == 0) {
                                var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }
                            if (result['other_fields']['fulltext_available'] === 'Full-text available') {
                                var holdings_statement = "<span class='all-full-text'><i class='icon-text'></i>" + result['type'] + " - Full-Text Available</span>";
                            } else {
                                var holdings_statement = "<i class='icon-text'></i>" + result['format'];
                            }
                            if (result['other_fields']['publication_title']) {
                                var pub_title = '<div><em>' + result['other_fields']['publication_title'] + '</em></div>';
                            } else {
                                var pub_title = '';
                            }
                            if (result['other_fields']['publication_year']) {
                                let chronology = [];
                                if (result['other_fields']['volume']) {
                                    chronology.push(`Vol. ${result['other_fields']['publication_year']}`);
                                }
                                if (result['other_fields']['issue']) {
                                    chronology.push(`No. ${result['other_fields']['issue']}`);
                                }
                                chronology.push(result['other_fields']['publication_year']);
                                if (result['other_fields']['start_page'] && result['other_fields']['end_page']) {
                                    chronology.push(`pp. ${result['other_fields']['start_page']}-${result['other_fields']['end_page']}`);
                                }
                                var pub_date = '<div><span>' + chronology.join(', ') + '</div>';
                            } else {
                                var pub_date = "";
                            }
                            if (result['other_fields']['abstract']) {
                                abstract = result['other_fields']['abstract'];
                            } else {
                                abstract = "Abstract not available.";
                            }
                            if (result['creator']) {
                                var author = '<div><span>' + result['creator'] + '</span></div>';
                            } else {
                                var author = "";
                            }
                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a title="' +
                                abstract.replaceAll('"', "&quot;") +
                                '" href="' +
                                result['url'] +
                                '" target="_blank">' +
                                result['title'] +
                                '</a></h3>' +
                                author + '<div class="summon-format-type">' +
                                holdings_statement +
                                "</div>" +
                                pub_title +
                                pub_date + '</li>');
                        });
                        $('#summon-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#summon-search-results');
                        // $('<div class="summon-search refine-link">'+refine_icon+'<a target="_blank" title="'+refine_tooltip+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#summon-search-results');
                        $('#summon_block-summon_search_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + refine_tooltip + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-text"></i>Articles+</a></h2>';
                        });
                        if (data.number > max_display_results) {
                            $('<div class="summon-search more-link"><a target="_blank" title="' + refine_tooltip + ' ' + data.number + ' total results." href="' + more_link + '">See all Articles+ Results</a></div>"').appendTo('#summon-search-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#summon_block-summon_search_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        } else {
                            $(preview).parent().hide();
                        }

                        // GA Tracking
                        var section_heading = "Articles+"; // Should be in Drupal Settings
                        $('#summon_block-summon_search_results h2 a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.summon-search.more-link a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#summon-search-results .all-search-results-list h3 a').each(function(index, value) {
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });
                    } else {
                        $('#summon-search-results-spinner').hide();
                        $('<div class="no-results">No matches in Articles+.</div>"').appendTo('#summon-search-results');
                    }
                },
                error: function(data) {
                    $('#summon-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Articles+ results are not available at this time.</div>"').appendTo('#summon-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
