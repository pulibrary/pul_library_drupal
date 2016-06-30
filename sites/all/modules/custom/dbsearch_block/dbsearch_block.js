(function($) {
    $(document).ready(function() {
        $('#dbsearch-block-form input').focus(function() {
            if ($(this).val() == Drupal.settings.dbsearch_block.db_search_hint) {
                $(this).val('');
            }
        });


        $('#dbsearch-block-form').submit(function() {
            //alert($(this).find("input:first").val());
            //console.log(Drupal.settings.catalog_block.catalog_search_hint);
            if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.dbsearch_block.db_search_hint) {
                if ($('#dbsearch-error').length == 0) {
                    $('.four_five_three_stacked-region--top').prepend("<div id='dbsearch-error' class='alert--message'><h3 class='alert-title'><i class='icon-warning'></i> " + Drupal.settings.dbsearch_block.db_search_error + "</h3></div>");
                }
                return false;
            }

            return true;
        });
    });
}(jQuery));
