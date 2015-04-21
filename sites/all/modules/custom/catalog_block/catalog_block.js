(function($) {
    $(document).ready(function() {
        $('#catalog-block-form input').focus(function() {
            if ($(this).val() == Drupal.settings.catalog_block.catalog_search_hint) {
                $(this).val('');
            }
        });

        $('#catalog-block-form').submit(function() {
            //alert($(this).find("input:first").val());
            //console.log(Drupal.settings.catalog_block.catalog_search_hint);
            if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.catalog_block.catalog_search_hint) {
                //$("span").text("Not valid!").show();
                //this really only works with omega theme
                if ($('#books-plus-error').length == 0) {
                    $('.four_five_three_stacked-region--top').prepend("<div id='books-plus-error' class='alert--message'><h3 class='alert-title'><i class='icon-alert'></i> " + Drupal.settings.catalog_block.catalog_search_error + "</h3></div>");
                }
                return false;
            }

            return true;
        });
    });
}(jQuery));
