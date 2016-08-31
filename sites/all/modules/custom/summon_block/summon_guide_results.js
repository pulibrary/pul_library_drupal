(function($) {
    $(document).ready(function() {
        var query_url = $('#summon-guide-results').attr('data-source')
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "http://libguides.princeton.edu/";
        var refine_tooltip = "See All Library Guides Results";
        var refine_message = "See all library guides results &rarr;";



        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#summon-guide-results');
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
                            if (result['abstract']) {
                                var abstract = result['abstract'];
                            } else {
                                var abstract = "Abstract not available.";
                            }
                            if (result['author']) {
                                var author = '<div><span>Author(s): ' + result['author'] + '</span></div>';
                            } else {
                                var author = "";
                            }
                            var result_position = parseInt(index) + 1;
                            items.push('<li class="' + row_class + '"><h3><a title="' + abstract + '" href="' +
                                result['url'] + '" target="_blank">' +
                                result['title'] + '</a></h3>' + author + '</li>');
                        });
                        $('#guide-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#summon-guide-results');
                        // $('<div class="summon-guide refine-link">'+refine_icon+'<a target="_blank" title="'+refine_tooltip+'" href="'+data.more+'">'+refine_message+'</a><div>').insertBefore('#summon-guide-results');
                        $('#summon_block-summon_guide_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a title="' + tooltip + '" href="' + data.more + '"><i class="icon-links"></i>Library Guides</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="summon-guide more-link"><a title="' + tooltip + '" target="_blank" href="' + data.more + '">See all ' + data.number + ' Library Guides result</a></div>"').appendTo('#summon-guide-results');
                        }
                        // update preview button with hit count
                        var preview = $("a[href='#libguides_block-libguides_search_results']");
                        console.log(preview);
                        if (data.more > 0) {
                            $(preview).append(" ("+data.more+")");
                        } else {
                            $(preview).hide();
                        }
                        var section_heading = "Summon Guide"; // Should be in Drupal Settings
                        $('#summon_block-summon_guide_results h2 a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.summon-guide.more-link a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#summon-guide-results .all-search-results-list h3 a').each(function(index, value) {
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });
                    } else {
                        $('#guide-search-results-spinner').hide();
                        $('<div class="no-results">No library guides results found. <a href="' + libguides_url + '">Browse guides</a> for available topics</div>."').appendTo('#summon-guide-results');
                    }

                },
                error: function(data) {
                    $('#guide-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Guide results are not available at this time.</div>"').appendTo('#summon-guide-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
