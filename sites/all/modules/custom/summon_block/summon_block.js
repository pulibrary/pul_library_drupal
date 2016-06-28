(function($) {
    $(document).ready(function() {
        $('#summon-block-form input').focus(function() {
            if ($(this).val() == Drupal.settings.summon_block.summon_search_hint) {
                $(this).val('');
            }
        });

        $('#summon-block-form').submit(function() {

            if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.summon_block.summon_search_hint) {

                if ($('#summon-error').length == 0) {
                    $('.four_five_three_stacked-region--top').prepend("<div id='summon-error' class='alert--message'><h3 class='alert-title'><i class='icon-warning'></i> " + Drupal.settings.summon_block.summon_search_error + "</h3></div>");
                }

                return false;
            }

            return true;
        });
    });
}(jQuery));
