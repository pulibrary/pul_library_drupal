(function($) {
    $(document).ready(function() {
        var query_url = $('#faq-search-results').attr('data-source');
        var file_icon = 'icon-file';
        var refine_hint = 'Explore frequently asked questions.';
        var series_icon = 'icon-folder-closed';
        var subseries_icon = 'icon-folder-open';
        var collection_icon = 'icon-collections';
        var default_icon = 'icon-item';
        var breadcrumb_label = "<span class='breadcrumb-label'>Contained In:&nbsp;</span>";
        var refine_icon = '';
        var refine_message = "See All FAQs";
        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('#faq-search-results');
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
                            items.push('<li class="' + row_class + '"><h3><a href="' + result['url'] +
                                '" target="_blank">' + result['question'] + '</a></h3>' + '</li>');
                        });
                        $('#faq-search-results-spinner').hide();
                        $('<ul/>', {
                            'class': 'all-search-results-list',
                            html: items.join('')
                        }).appendTo('#faq-search-results');
                        $('#catalog_block-catalog_faq_results h2').replaceWith(function() {
                            var url = $.trim($(this).text());
                            return '<h2><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '"><i class="icon-question"></i>Library FAQ Results</a></h2>';
                        });
                        if (data.number > 3) {
                            $('<div class="faq-search more-link"><a target="_blank" title="' + refine_hint + ' ' + data.number + ' total results." href="' + data.more + '">See all FAQ results</a></div>"').appendTo('#faq-search-results');
                        }
                        var section_heading = "FAQ"; // Should be in Drupal Settings
                        $('#catalog_block-catalog_faq_results h2 a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Top');
                            });
                        });

                        $('.faq-search.more-link a').each(function(index, value) {
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Refine Bottom');
                            });
                        });

                        $('#faq-search-results .all-search-results-list h3 a').each(function(index, value) {
                            //var section_heading = $(this).closest('h2.pane-title').text();
                            var result_position = parseInt(index, 10) + 1;
                            $(this).click(function() {
                                ga('send', 'event', 'All Search', section_heading, 'Position ' + result_position);
                            });

                        });
                    } else {
                        $('#faq-search-results-spinner').hide();
                        $('<div class="no-results">No library FAQ results found. Try searching for another topic.</div>"').appendTo('#faq-search-results');
                    }
                },
                error: function(data) {
                    $('#faq-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">FAQ results are not available at this time.</div>"').appendTo('#faq-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
