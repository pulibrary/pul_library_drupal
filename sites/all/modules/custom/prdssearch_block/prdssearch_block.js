(function($) {
    $(document).ready(function() {
        $('#prdssearch-block-form input').focus(function() {
            if ($(this).val() == Drupal.settings.prdssearch_block.prds_search_hint) {
                $(this).val('');
            }
        });


        $('#prdssearch-block-form').submit(function() {
            //alert($(this).find("input:first").val());
            //console.log(Drupal.settings.catalog_block.catalog_search_hint);
            if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.prdssearch_block.prds_search_hint) {
                if ($('#prdssearch-error').length == 0) {
                    $('.four_five_three_stacked-region--top').prepend("<div id='prdssearch-error' class='alert--message'><h3 class='alert-title'><i class='icon-warning'></i> " + Drupal.settings.prdssearch_block.prds_search_error + "</h3></div>");
                }
                return false;
            }

            return true;
        });
    });
}(jQuery));
