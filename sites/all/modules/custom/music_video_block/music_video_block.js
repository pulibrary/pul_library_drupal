(function($) {
    $(document).ready(function() {
        $('.music-video-block-form input').focus(function() {
            if ($(this).val() == 'Search music in video format.') {
                $(this).val('');
            }
        });

        $('.music-video-block-form').submit(function() {
            //alert($(this).find("input:first").val());
            //console.log(Drupal.settings.music_video_block.music_video_search_hint);
            if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.music_video_block.music_video_search_hint) {
                //$("span").text("Not valid!").show();
                //this really only works with omega theme
                if ($('#books-plus-error').length == 0) {
                    $('.four_five_three_stacked-region--top').prepend("<div id='books-plus-error' class='alert--message'><h3 class='alert-title'><i class='icon-warning'></i> " + Drupal.settings.music_video_block.music_video_search_error + "</h3></div>");
                }
                return false;
            }

            return true;
        });
    });
}(jQuery));
