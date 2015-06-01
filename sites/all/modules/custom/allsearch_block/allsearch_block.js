(function ($) {
  $(document).ready(function() {
    $('#allsearch-block-form input').focus(function() {
        if ($(this).val() == Drupal.settings.allsearch_block.all_search_hint) { 
                $(this).val('');
        }
     });
     
     $('#allsearch-block-form').submit(function() {
        if ($(this).find("input:first").val() == "" || $(this).find("input:first").val() == Drupal.settings.allsearch_block.all_search_hint) {
                if($('#allsearch-error').length == 0) {
                  $('.four_five_three_stacked-region--top').prepend("<div id='allsearch-error' class='alert--message'><h2 class='element-invisible'>Error message</h2><h3><i class='icon-alert'></i> "+Drupal.settings.allsearch_block.all_search_error+"</h3></div>");
            }
            
                return false;
        }
        
        return true;
    }); 
  });
}(jQuery));