(function($) {
    $(document).ready(function() {
        var query_url = $('#libguides-search-results').attr('data-source')
        var tooltip = "Browse Related Library Guides";
        var libguides_url = "https://libguides.princeton.edu/";
        var refine_tooltip = "See All Library Guides Results";
        var refine_message = "See all library guides results &rarr;";


        if (query_url === "" || query_url == undefined) {
            $('<div class="message">Please supply search terms</div>').appendTo('.libguides-search-results');
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

                            if (index > 2) {
                                return false;
                            }

                            if (index % 2 == 0) {
                                    var row_class = "odd";
                            } else {
                                var row_class = "even"
                            }

                            items.push('<li class="'+ row_class +'"><h3><a title="' + result['name'] + '" href="' + result['url'] +'" target="_blank">' + result['name'] + '</a></h3><div class="libguide-description">' + result['description'] + '</div></li>');
                        
                        });
                        $('<ul/>', {
                                'class': 'all-search-results-list',
                                html: items.join('')
                            }).appendTo('.libguides-search-results');
                        $('#libguides-search-results-spinner').hide();

                        if (data.number > 3) {
                            var search_term = $('.libguides-search-results').attr('id');

                            $('.libguides-search-results').append('<div class="libguide more-link"><a title="" target="_blank" href="'+ data.more +'">See all Library Guides results</a></div>');
                            $('#libguides_block-libguides_search_results h2').replaceWith(function() {
                                var url = $.trim($(this).text());
                                return '<h2><a title="' + tooltip + '"  href="'+ data.more +'" target="_blank"><i class="icon-compass"></i>Library Guides</a></h2>';
                            });
                        }
                        //add hit count to preview
                        var preview = $("a[href='#libguides_block-libguides_search_results']");
                        if (data.number > 0) {
                            $(preview).append(" ("+data.number+")");
                        }
                    } else {
                        $('#libguides-search-results-spinner').hide();
                        $('<div class="no-results">No library guides found. <a href="' + libguides_url + '">Browse guides</a> for available topics</div>."').appendTo('.libguides-search-results');
                        var preview = $("a[href='#libguides_block-libguides_search_results']");
                        $(preview).parent().hide();  
                    }

                },
                error: function(data) {
                    $('#libguides-search-results-spinner').hide();
                    $('<div class="all-fail-to-load-results">Guide results are not available at this time.</div>"').appendTo('.libguides-search-results');
                },
                timeout: 5000
            });
        }
    });
}(jQuery));
